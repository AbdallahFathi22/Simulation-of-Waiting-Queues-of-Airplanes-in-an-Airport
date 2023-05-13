#include <iostream>
#include <cstdlib>
#include <ctime>
#include "AirportSimulation.h"
#include "Plane.h"


AirportSimulation::AirportSimulation(int max, int landing, int delta)
    : Tmax(max), Tlanding(landing), DeltaT(delta), currentTime(0), jobCount(1),
      totalWaitTime(0.0), totalJobs(0) {
    srand(static_cast<unsigned>(time(0)));
}

// Function to generate a random integer between min and max
int AirportSimulation::randomInt(int min, int max) {
    return min + rand() % (max - min + 1);
}

void AirportSimulation::runSimulation() {
    while (currentTime < Tmax) {
        int arrivalTime = randomInt(1, DeltaT);
        currentTime += arrivalTime;

        if (currentTime <= Tmax) {
            Plane* newPlane = new Plane(currentTime);
            landingQueue.addRear(newPlane);
            std::cout << "Arrival# " << jobCount << " at: " << currentTime << std::endl;
            jobCount++;
        }

        if (!landingQueue.isEmpty()) {
            Plane* plane = landingQueue.viewFront();
            int landing = plane->getArrivalTime();
            int serviceStartedTime = std::max(landing, currentTime);
            totalJobs++;

            landingQueue.removeFront();

            int serviceEndTime = serviceStartedTime + Tlanding;
            int waitTime = serviceEndTime - serviceStartedTime;
            std::cout << "Job# " << jobCount - 1 << " Service Started at: " << serviceStartedTime << " wait = " << waitTime << std::endl;

            totalWaitTime += waitTime;
            currentTime = serviceEndTime;

            delete plane;
        }
    }

    double averageWaitTime = totalWaitTime / totalJobs;
    std::cout << std::endl << "Average wait Time is " << averageWaitTime << std::endl;
}
