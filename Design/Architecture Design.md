# Class Architecture Design

# UML Explanation
The UML diagram consists of three classes: Plane, DEQ, and AirportSimulation.

Plane class represents the planes that arrive at the airport.
  It will have the following attributes:
  id: A unique identifier for each plane.
  arrival_time: The time at which the plane arrives at the airport.
  wait_time: The time the plane has spent waiting in the queue.
  service_time: The time taken by the plane to land and clear the runway.
  
DEQ class represents the Double-ended Queue (DEQ) data structure.
  It will have the following member functions:
  Constructor: To create an empty DEQ.
  Destructor: To destroy the DEQ.
  isEmpty: To test if the DEQ is empty.
  addFront: To add an element at the front.
  addRear: To add an element at the rear.
  removeFront: To remove the element at the front.
  removeRear: To remove the element at the rear.
  viewFront: To retrieve the front element without removal.
  viewRear: To retrieve the rear element without removal.
  length: To get the number of elements in the DEQ.
  
AirportSimulation class simulates the airport queue operations.
  It will have the following attributes:
  planes_queue: A DEQ object to store the waiting planes.
  clock: The current time in the simulation.
  Tmax: The maximum time for the simulation.
  Tlanding: The time taken by a plane to land and clear the runway.
  DeltaT: The average inter-arrival time between planes.

  It will also have the following member functions:
  start_simulation: To start the simulation.
  add_plane_to_queue: To add a new plane to the waiting queue.
  remove_plane_from_queue: To remove a plane from the waiting queue.
  update_waiting_planes: To update the wait time of all the planes in the queue.
  print_log: To print the log of events for each run.


Relationships between the classes:

Plane class and AirportSimulation class: The Plane class is a component of the AirportSimulation class, meaning that the AirportSimulation class uses the Plane class to represent the planes that arrive at the airport. This is an association and aggregation relationship.

DEQ class and AirportSimulation class: The DEQ class is a component of the AirportSimulation class, meaning that the AirportSimulation class uses the DEQ class to represent the waiting queue of planes at the airport. This is a composition relationship.

DEQ class and Plane class: The DEQ class contains instances of the Plane class, meaning that the DEQ class uses the Plane class to store planes in the waiting queue. They don't have a direct relationship. The DEG class is used to make a storage container for the planes.









