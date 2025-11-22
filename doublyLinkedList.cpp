#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* prev;
    Node* next;

     Node(int value) {
        data = value;
        prev = nullptr;
        next = nullptr;
    }
};

class DoublyLinkedList {
private:
    Node* head;

public:
    DoublyLinkedList() {
        head = nullptr;
    }

     void insertFront(int value) {
        Node* newNode = new Node(value);
        if (head != nullptr) {
            newNode->next = head;
            head->prev = newNode;
        }
        head = newNode;
    }

    void insertEnd(int value) {
        Node* newNode = new Node(value);
        if (head == nullptr) {
            head = newNode;
            return;
        }
         Node* temp = head;
        while (temp->next != nullptr)
            temp = temp->next;
        temp->next = newNode;
        newNode->prev = temp;
    }

    void deleteNode(int value)  
    {
        Node* temp = head;
        while (temp != nullptr && temp->data != value)
            temp = temp->next;

        if (temp == nullptr) 
         {
            cout << "Value not found!\n";
            return;
        }

        if (temp->prev != nullptr)
            temp->prev->next = temp->next;
        else
            head = temp->next;

        if (temp->next != nullptr)
            temp->next->prev = temp->prev;

        delete temp;
        cout << "Node deleted.\n";
    }

    void displayForward() {
        Node* temp = head;
        cout << "Forward: ";
        while (temp != nullptr) {
            cout << temp->data << " ";
            temp = temp->next;
        }
        cout << endl;
    }

    void displayBackward() {
        Node* temp = head;
        if (temp == nullptr) return;
        while (temp->next != nullptr)
            temp = temp->next;

        cout << "Backward: ";
        while (temp != nullptr) {
            cout << temp->data << "  ";
            temp = temp->prev;
        }
        cout << endl;
    }
};

int main() {
    DoublyLinkedList list;

    list.insertFront(10);
    list.insertFront(5);
    list.insertEnd(20);
    list.insertEnd(30);

    list.displayForward();
    list.displayBackward();

    list.deleteNode(20);
    list.displayForward();

    return 0;
}
