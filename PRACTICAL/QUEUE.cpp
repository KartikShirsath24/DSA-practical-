 #include <iostream>
using namespace std;

class Jobqueue {
private:
    int queue[10];
    int front, rear;

public:

    Jobqueue() {
        front = -1;
        rear = -1;
    }

    // Add job
    void add(int job) {
        if (rear == 9) {
            cout << "Queue is full\n";
            return;
        }

        if (front == -1) {
            front = 0;
        }

        rear++;
        queue[rear] = job;

        cout << "Job added successfully\n";
    }

    // Delete job
    void remove() {
        if (front == -1 || front > rear) {
            cout << "Queue is empty\n";
            front = -1;
            rear = -1;
            return;
        }

        cout << "Removed job: " << queue[front] << endl;
        front++;

        if (front > rear) {
            front = -1;
            rear = -1;
        }
    }

    // Display queue
    void display() {
        if (front == -1 || front > rear) {
            cout << "Queue is empty\n";
            return;
        }

        cout << "Jobs in queue: ";

        for (int i = front; i <= rear; i++) {
            cout << queue[i] << " ";
        }

        cout << endl;
    }
};

int main() {
    Jobqueue j;
    int ch, job;

    do{
        cout << "\n1. Add job";
        cout << "\n2. Delete job";
        cout << "\n3. Display";
        cout << "\n4. Exit";

        cout << "\nEnter the choice: ";
        cin >> ch;

        switch (ch) {

            case 1:
                cout << "Enter the job: ";
                cin >> job;
                j.add(job);
                break;

            case 2:
                j.remove();
                break;

            case 3:
                j.display();
                break;

            case 4:
                cout << "Exiting...";
                break;

            default:
                cout << "Invalid choice\n";
        }

    } 
while(ch!=4);
    return 0;
}