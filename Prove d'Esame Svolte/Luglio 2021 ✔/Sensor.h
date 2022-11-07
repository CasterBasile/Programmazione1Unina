#ifndef SENSOR_H
#define SENSOR_H
#include <list>
#include "Date.h"
using std::list;

class Sensor{
    public:
        //Le misure sono coppie di data e PPM
        class Measurement{
            public:
                Measurement(Date date, double mes) :d{date}, ppm{mes}{}

            friend class Sensor;
            
            private:
                Date d;
                double ppm;
        };

        Sensor(int, int, int);
        void insertMeasurement(Date d, double mes);
        double meanPPMInterval(Date d1, Date d2);
        int getX(){return coord_x;}
        int getY(){return coord_y;}

    private:
        int id_sensor;
        int coord_x;
        int coord_y;
        list<Measurement> measures;

};

#endif