#ifndef BLUESKY_H
#define BLUESKY_H

#include "Sensor.h"
#include "Date.h"
#include <vector>
using std::vector;

class BlueSky{
    public:
        BlueSky(){n_sensors=0;}
        double meanCO2Zone(int, int, int, int, Date, Date);
        void addMeasurement(int, Date, double);
        void addSensor(int, int);

    private:
        int n_sensors;
        vector<Sensor> sensors;

};



#endif