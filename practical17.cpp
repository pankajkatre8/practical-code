#include <iostream>

// Node structure for the deque
struct Node {
  int data;
  Node* next;
};

// Deque class definition
class Deque {
private:
  Node* front; // Front of the deque
  Node* rear;  // Rear of the deque

public:
  // Constructor to initialize an empty deque
  Deque() : front(nullptr), rear(nullptr) {}

  // Add element to the front of the deque
  void pushFront(int data) {
    Node* newNode = new Node;
    newNode->data = data;
    newNode->next = front;
    front = newNode;

    // If rear is null, update it to point to the new node
    if (rear == nullptr) {
      rear = newNode;
    }
  }

  // Add element to the rear of the deque
  void pushRear(int data) {
    Node* newNode = new Node;
    newNode->data = data;
    newNode->next = nullptr;

    if (front == nullptr) {
      front = newNode;
    } else {
      rear->next = newNode;
    }

    rear = newNode;
  }

  // Remove element from the front of the deque
  int popFront() {
    if (front == nullptr) {
      std::cout << "Deque is empty." << std::endl;
      return -1; // Return a sentinel value to indicate an error
    }

    int data = front->data;
    Node* temp = front;
    front = front->next;

    delete temp;

    // If front becomes null, update rear to null
    if (front == nullptr) {
      rear = nullptr;
    }

    return data;
  }

  // Remove element from the rear of the deque
  int popRear() {
    if (rear == nullptr) {
      std::cout << "Deque is empty." << std::endl;
      return -1; // Return a sentinel value to indicate an error
    }

    int data = rear->data;

    // If there is only one element, update both front and rear
    if (front == rear) {
      delete rear;
      front = rear = nullptr;
      return data;
    }

    // Traverse the deque to find the node before the rear
    Node* temp = front;
    while (temp != nullptr && temp->next != rear) {
      temp = temp->next;
    }

    rear = temp;
    delete temp->next;

    return data;
  }

  // Check if the deque is empty
  bool isEmpty() const {
    return front == nullptr;
  }

  // Display the elements of the deque
  void display() {
    if (front == nullptr) {
      std::cout << "Deque is empty." << std::endl;
      return;
    }

    std::cout << "Deque: ";
    Node* current = front;
    while (current != nullptr) {
      std::cout << current->data << " ";
      current = current->next;
    }
    std::cout << std::endl;
  }
};

int main() {
  Deque deque;

  // Add elements to the deque
  deque.pushFront(1);
  deque.pushFront(2);
  deque.pushRear(3);
  deque.pushRear(4);

  // Display the deque
  deque.display();

  // Remove elements from the deque
  int element = deque.popFront();
  std::cout << "Element popped from front: " << element << std::endl;

  // Display the deque
  deque.display();

  element = deque.popRear();
  std::cout << "Element popped from rear: " << element << std::endl;

  // Display the deque
  deque.display();

  return 0;
}
