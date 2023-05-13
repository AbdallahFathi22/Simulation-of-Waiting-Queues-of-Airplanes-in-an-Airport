#include <iostream>
#include <cstdlib>
#include <ctime>
#include "AirportSimulation.h"

int main() {
    const int Tmax = 360; // Simulation period in minutes (6 hours)
    const int Tlanding = 10; // Service time for landing in minutes
    const int DeltaT = 6; // Average inter-arrival time in minutes

    AirportSimulation airportSim(Tmax, Tlanding, DeltaT);
    airportSim.runSimulation();

    return 0;
}
