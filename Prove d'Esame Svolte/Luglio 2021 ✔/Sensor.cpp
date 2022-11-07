#include "Sensor.h"

Sensor::Sensor(int id, int x, int y){
    id_sensor=id;
    coord_x=x;
    coord_y=y;
}

//Questa funzione è particolarmente ricorrente
void Sensor::insertMeasurement(Date d, double mes){
    Measurement m(d,mes);
    measures.push_back(m);
    auto cursor = measures.begin(); //Il tipo di cursor è definito in maniera automatica
    auto end = measures.end();
    while(cursor != end){
        Measurement tmp = *cursor;
        if(d < tmp.d) break;
        cursor++;
    }
    //Quando il while sarà terminato, cursor mi darà la posizione in cui inserire l'oggetto
    measures.insert(cursor, m);
}

double Sensor::meanPPMInterval(Date d1, Date d2){
    double sum=0.0;
    int count=0;
    for(auto cur=measures.begin(); cur != measures.end(); ++cur){
        Measurement m = *cur;
        if(d1 < m.d && m.d<d2){
            sum +=m.ppm;
            count++;
        }
        if(d2<m.d) break;
    }
    if(count > 0) return sum/count;
    else return 0.0; 
}

