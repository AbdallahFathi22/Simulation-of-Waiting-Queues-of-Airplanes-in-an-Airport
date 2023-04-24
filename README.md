# Simulation-of-AirPlanes




# Development Workflow

Create the Plane class:
a. Define the class with its attributes: id, arrival_time, wait_time, and service_time.
b. Implement the constructor, which takes the id, arrival_time, and service_time as arguments and initializes the wait_time to 0.
c. Implement the getters and setters for each attribute.

Create the DEQ class:
a. Define the class with its member functions: Constructor, Destructor, isEmpty, addFront, addRear, removeFront, removeRear, viewFront, viewRear, and length.
b. Implement each member function with its respective functionality.

Create the AirportSimulation class:
a. Define the class with its attributes: planes_queue, clock, Tmax, Tlanding, and DeltaT.
b. Implement the constructor, which takes Tmax, Tlanding, and DeltaT as arguments and initializes the planes_queue as an empty DEQ object, and the clock to 0.
c. Implement the add_plane_to_queue and remove_plane_from_queue member functions, which add and remove planes from the planes_queue, respectively.
d. Implement the update_waiting_planes member function, which updates the wait_time of all the planes in the planes_queue by incrementing it with DeltaT.
e. Implement the start_simulation member function, which simulates the airport queue operations by adding planes to the planes_queue based on their arrival time and processing them one by one by removing them from the planes_queue and updating the wait_time and clock.
f. Implement the print_log member function, which prints the log of events for each run.

Test the implementation:
a. Create an instance of the AirportSimulation class and call the start_simulation function.
b. Verify that the simulation runs correctly by checking the log of events and the final state of the planes_queue.

Refine the implementation:
a. Analyze the performance of the implementation and identify areas for improvement.
b. Refactor the code to optimize performance and readability.
c. Test the implementation again to ensure that the changes have not introduced any errors.
