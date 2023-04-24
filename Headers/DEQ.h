

#ifndef _DEQ_H
#define _DEQ_H

template <class T>
struct Node {

    T data;
    Node* next;

};

template <class T>
class DEQ {
public: 
    
DEQ();
    
~DEQ();
    
bool isEmpty() const;
    
void addFront(const T& value); 
    
void addRear(const T& value); 
    
void removeFront(); 
  
void removeRear(); 
    
T& viewFront() const; 
    
T& viewRear() const; 
    
int length(); 
  
private: 
    Node<T>* front;
    Node<T>* rear;
    int size;
};

#endif //_DEQ_H

