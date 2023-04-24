



#ifndef _AIRPORTSIMULATION_H
#define _AIRPORTSIMULATION_H

#include "Plane.h"
#include "DEQ.h"


class AirportSimulation {
public: 
    
AirportSimulation();
    
void startSimulation();
    
void addPlane();
    
void removePlane();
    
void UpdateWaitingPlanes();
    
void printLog();
    
void procesArrival();
    
void processDeparture();
    
int generateArrivalTime();
    
int generateServiceTime();
    
private: 
    DEQ planesQueue;
    int clock;
    int Tmax;
    int Tlanding;
    int DeltaT;
};

#endif //_AIRPORTSIMULATION_H
