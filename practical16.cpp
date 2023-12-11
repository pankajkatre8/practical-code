#include <iostream>

// Define a structure for a job node
struct Job {
    int jobId;
    Job* next;
};

// Define a class for the job queue
class JobQueue {
private:
    Job* front; // Front of the queue
    Job* rear;  // Rear of the queue

public:
    // Constructor to initialize an empty queue
    JobQueue() : front(nullptr), rear(nullptr) {}

    // Function to add a job to the queue
    void addJob(int jobId) {
        // Create a new job node
        Job* newJob = new Job;
        newJob->jobId = jobId;
        newJob->next = nullptr;

        // If the queue is empty, set both front and rear to the new job
        if (front == nullptr) {

            front = rear = newJob;
        } 
        else 
        {
            // Otherwise, add the new job to the rear of the queue
            rear->next = newJob;
            rear = newJob;
        }

        std::cout << "Job " << jobId << " added to the queue.\n";
    }

    // Function to delete a job from the queue
    void deleteJob() {
        // If the queue is empty, display an error message
        if (front == nullptr) {
            std::cout << "Queue is empty. No job to delete.\n";
        } else {
            // Remove the front job from the queue
            Job* temp = front;
            front = front->next;
            delete temp;

            std::cout << "Job deleted from the queue.\n";

            // If the queue becomes empty after deletion, update rear to nullptr
            if (front == nullptr) {
                rear = nullptr;
            }
        }
    }

    // Function to display the jobs in the queue
    void displayQueue() {
        // If the queue is empty, display a message
        if (front == nullptr) {
            std::cout << "Queue is empty.\n";
        } else {
            // Display the jobs in the queue
            std::cout << "Jobs in the queue: ";
            Job* current = front;
            while (current != nullptr) {
                std::cout << current->jobId << " ";
                current = current->next;
            }
            std::cout << "\n";
        }
    }
};

int main() {
    // Create a job queue
    JobQueue jobQueue;

    // Add jobs to the queue
    jobQueue.addJob(1);
    jobQueue.addJob(2);
    jobQueue.addJob(3);

    // Display the initial queue
    jobQueue.displayQueue();

    // Delete a job from the queue
    jobQueue.deleteJob();

    // Display the updated queue
    jobQueue.displayQueue();

    return 0;
}
