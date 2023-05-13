#ifndef DEQ_H
#define DEQ_H

template <class T>
struct Node {
    T data;
    Node<T>* next;

    Node(const T& value) : data(value), next(nullptr) {}
};

template <class T>
class DEQ {
private:
    Node<T>* front;
    Node<T>* rear;
    int length;

public:
      DEQ() : front(nullptr), rear(nullptr), length(0) {}
    ~DEQ() {
        while (!isEmpty()) {
            removeFront();
        }
    }

    bool isEmpty() const {
        return length == 0;
    }

    void addFront(const T& value) {
        Node<T>* newNode = new Node<T>(value);
        if (isEmpty()) {
            front = rear = newNode;
        } else {
            newNode->next = front;
            front = newNode;
        }
        length++;
    }

    void addRear(const T& value) {
        Node<T>* newNode = new Node<T>(value);
        if (isEmpty()) {
            front = rear = newNode;
        } else {
            rear->next = newNode;
            rear = newNode;
        }
        length++;
    }

    void removeFront() {
        if (!isEmpty()) {
            Node<T>* temp = front;
            front = front->next;
            if (front == nullptr) {
                rear = nullptr;
            }
            delete temp;
            length--;
        }
    }

    void removeRear() {
        if (!isEmpty()) {
            if (front == rear) {
                delete front;
                front = rear = nullptr;
            } else {
                Node<T>* temp = front;
                while (temp->next != rear) {
                    temp = temp->next;
                }
                delete rear;
                rear = temp;
                rear->next = nullptr;
            }
            length--;
        }
    }

    T viewFront() const {
        if (!isEmpty()) {
            return front->data;
        }
        throw std::runtime_error("DEQ is empty");
    }

    T viewRear() const {
        if (!isEmpty()) {
            return rear->data;
        }
        throw std::runtime_error("DEQ is empty");
    }

    int getLength() const {
        return length;
    }
};

#endif //DEQ_H