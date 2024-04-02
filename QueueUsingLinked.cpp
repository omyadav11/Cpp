
#include <iostream>
using namespace std;


 struct Node {
     int element;
     Node* next;
 };


class Queue
{
private:
    Node* front;
    
    Node* rear;
    
public:
    
    Queue() : front(NULL), rear(NULL) {}

    bool isEmpty();
    
    int peek();
    
    void enqueue(int element);
    
    int dequeue();
    
    void display(string msg);
};

bool Queue::isEmpty() {
    if (front == NULL) {
        cout << "Queue is Empty" << endl;
        return true;
    }
    return false;
}

int Queue::peek() {
    if (isEmpty()) {
        return -1;
    }
    return front->element;
}

void Queue::enqueue(int element) {        
    Node* node = new Node();
    if (node == NULL) {
        cout << "System out of memory" << endl;
        return;
    }
    node->element = element;
    node->next = NULL;
    
    if (rear == NULL) {
        front = node;
    } else {
        rear->next = node;
    }
    
    rear = node;
}

int Queue::dequeue() {
    if (front == NULL) {
        return -1;
    }
    
    int element = front->element;
    
    Node* tmp = front;
    
    if (front->next == NULL) {
        front = rear = NULL;
    } else {
        front = front->next;
    }
    

    delete tmp;
    
    return element;
}


void Queue::display(string msg) {
    cout << msg << endl;
    if (isEmpty()) {
        return;
    }
    
    if (front == rear) {
        cout << front->element << " <-- front, rear" << endl;
        return;
    }
    
    cout << front->element << " <-- front" << endl;
    for (Node* node=front->next; node != rear; node = node->next) {
        cout << node->element << endl;
    }
    cout << rear->element << " <-- rear" << endl;
}

int main()
{

    Queue queue;
    

    queue.enqueue(10);
    queue.enqueue(20);
    queue.enqueue(30);
    queue.enqueue(40);
    queue.display("Queue after inserting 10 20 30 and 40");
    queue.enqueue(50);
    queue.display("Queue after inserting 50");
    
 
    int element = queue.peek();
    cout << "Peek element returned " << element << endl;
    
  
    element = queue.dequeue();
    cout << "Dequeue element returned " << element << endl;
    element = queue.dequeue();
    cout << "Dequeue element returned " << element << endl;
    queue.display("Queue after removing two elements");
}
