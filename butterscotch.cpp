#include <iostream>

// Node structure for the linked list
struct Node {
    int data;
    Node* next;
};

// Function to insert an element into a linked list
void insert(Node*& head, int data) {
    Node* newNode = new Node;
    newNode->data = data;
    newNode->next = head;
    head = newNode;
}

// Function to display the elements of a linked list
void display(Node* head) {
    Node* current = head;
    while (current != nullptr) {
        std::cout << current->data << " ";
        current = current->next;
    }
    std::cout << std::endl;
}

// Function to compute and display the set of students who like both vanilla and butterscotch
void intersection(Node* setA, Node* setB) {
    std::cout << "Students who like both vanilla and butterscotch: ";
    while (setA != nullptr) {
        Node* tempB = setB;
        while (tempB != nullptr) {
            if (setA->data == tempB->data) {
                std::cout << setA->data << " ";
                break;
            }
            tempB = tempB->next;
        }
        setA = setA->next;
    }
    std::cout << std::endl;
}

// Function to compute and display the set of students who like either vanilla or butterscotch or not both
void unionNotBoth(Node* setA, Node* setB) {
    std::cout << "Students who like either vanilla or butterscotch or not both: ";
    while (setA != nullptr) {
        Node* tempB = setB;
        bool found = false;
        while (tempB != nullptr) {
            if (setA->data == tempB->data) {
                found = true;
                break;
            }
            tempB = tempB->next;
        }
        if (!found) {
            std::cout << setA->data << " ";
        }
        setA = setA->next;
    }

    // Check for elements in setB that are not in setA
    while (setB != nullptr) {
        Node* tempA = setA;
        bool found = false;
        while (tempA != nullptr) {
            if (setB->data == tempA->data) {
                found = true;
                break;
            }
            tempA = tempA->next;
        }
        if (!found) {
            std::cout << setB->data << " ";
        }
        setB = setB->next;
    }

    std::cout << std::endl;
}

// Function to compute and display the number of students who like neither vanilla nor butterscotch
void neitherSet(Node* setA, Node* setB) {
    std::cout << "Number of students who like neither vanilla nor butterscotch: ";
    int count = 0;

    // Check for elements in setA that are not in setB
    while (setA != nullptr) {
        Node* tempB = setB;
        bool found = false;
        while (tempB != nullptr) {
            if (setA->data == tempB->data) {
                found = true;
                break;
            }
            tempB = tempB->next;
        }
        if (!found) {
            count++;
        }
        setA = setA->next;
    }

    // Check for elements in setB that are not in setA
    while (setB != nullptr) {
        Node* tempA = setA;
        bool found = false;
        while (tempA != nullptr) {
            if (setB->data == tempA->data) {
                found = true;
                break;
            }
            tempA = tempA->next;
        }
        if (!found) {
            count++;
        }
        setB = setB->next;
    }

    std::cout << count << std::endl;
}

int main() {
    // Initialize linked lists for set A and set B
    Node* setA = nullptr;
    Node* setB = nullptr;

    // Add elements to set A and set B
    insert(setA, 1);
    insert(setA, 2);
    insert(setA, 3);

    insert(setB, 2);
    insert(setB, 3);
    insert(setB, 4);

    // Display set A and set B
    std::cout << "Set A: ";
    display(setA);
    std::cout << "Set B: ";
    display(setB);

    // Compute and display the intersection of set A and set B
    intersection(setA, setB);

    // Compute and display the union of set A and set B (elements that are in either set A or set B, but not both)
    unionNotBoth(setA, setB);

    // Compute and display the number of students who like neither vanilla nor butterscotch
    neitherSet(setA, setB);

    // Clean up memory (delete linked lists)
    while (setA != nullptr) {
        Node* temp = setA;
        setA = setA->next;
        delete temp;
    }

    while (setB != nullptr) {
        Node* temp = setB;
        setB = setB->next;
        delete temp;
    }

    return 0;
}
