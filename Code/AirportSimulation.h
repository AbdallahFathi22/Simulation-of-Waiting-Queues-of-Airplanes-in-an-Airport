#ifndef AIRPORTSIMULATION_H
#define AIRPORTSIMULATION_H

#include "DEQ.h"
#include "Plane.h"


class AirportSimulation {
private:
    const int Tmax; // Simulation period in minutes (6 hours)
    const int Tlanding; // Service time for landing in minutes
    const int DeltaT; // Average inter-arrival time in minutes

    int currentTime;
    int jobCount;
    DEQ<Plane*> landingQueue;
    double totalWaitTime;
    int totalJobs;

public:
    AirportSimulation(int max, int landing, int delta);

    int randomInt(int min, int max);

    void runSimulation();
};

#endif // AIRPORTSIMULATION_H
