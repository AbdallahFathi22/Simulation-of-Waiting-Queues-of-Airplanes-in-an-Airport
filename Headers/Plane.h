

#ifndef _PLANE_H
#define _PLANE_H

class Plane {
public: 

Plane();
    
int getId();
    
void setId(int id);
    
int getArrivalTime();
    
void setArrivalTime(int arrivalTime);
    
int getWaitTime();
    
void setWaitTime(int waitTime);
    
int getServiceTime();
    
void setServiceTime(int serviceTime);
private: 
    int id;
    int arrivalTime;
    int waitTime;
    int seviceTime;
};

#endif //_PLANE_H
