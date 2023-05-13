#ifndef PLANE_H
#define PLANE_H

class Plane {
private:
    int arrivalTime;

public:
    Plane(int arrival);

    int getArrivalTime() const;
};

#endif // PLANE_H

