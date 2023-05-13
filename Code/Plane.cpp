#include "Plane.h"

Plane::Plane(int arrival) : arrivalTime(arrival) {}

int Plane::getArrivalTime() const {
    return arrivalTime;
}
