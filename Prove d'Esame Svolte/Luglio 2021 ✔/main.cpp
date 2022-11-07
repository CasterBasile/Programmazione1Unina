#include "BlueSky.h"
#include "Date.h"
#include <iostream>
using std::cout;
using std::endl;

int main(){
    BlueSky myBlueSky;
    myBlueSky.addSensor(5,5);
    myBlueSky.addSensor(5,6);
    myBlueSky.addSensor(6,6);
    myBlueSky.addSensor(7,5);
    myBlueSky.addSensor(7,7);

    myBlueSky.addMeasurement(0, Date(1,1,2021), 0.5);

    myBlueSky.addMeasurement(1, Date(2,1,2021), 0.7);
    myBlueSky.addMeasurement(1, Date(3,1,2021), 0.8);

    myBlueSky.addMeasurement(2, Date(4,1,2021), 0.2);
    myBlueSky.addMeasurement(2, Date(5,1,2021), 0.3);

    cout<<"La media di C02 e' nella zona da te scelta e' "<<myBlueSky.meanCO2Zone(4,4,6,6,Date(1,1,2021), Date(4,1,2021))<<endl;




}