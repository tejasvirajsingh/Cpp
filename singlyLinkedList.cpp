#include <iostream>
using namespace std;

struct Node{
    int data;
    Node* next;

};

class LinkedList {
    private: 
    Node* head;

    public: 

    LinkedList(){
        head = nullptr;
    }
    void insertAtEnd(int value){
        Node* newNode = new Node();
        newNode->data = value;
        newNode->next = nullptr;

        if(head == nullptr){
            head = newNode;

        } else {
            Node* temp = head;
            while (temp->next != nullptr){
                temp = temp->next;
            }
            temp->next = newNode;
        }
        cout << "Inserted " << value << " at the end.\n";

    }
    void insertAtBeginning(int value){
        Node* newNode = new Node();
        newNode->data = value;
        newNode->next = head;
        head = newNode;
        cout << "Inserted " << value << " at the beginning.\n";

    }
    void deleteNode(int value){
        if(head == nullptr){
            cout << "List is Empty.\n";
            return;

        }

        Node* temp= head;
        Node*prev = nullptr;

        if(temp != nullptr && temp->data == value){
            head = temp->next;
            delete temp;
            cout << "Deleted node with Value " << value << "\n.";
            return;

        }
        while (temp != nullptr && temp->data != value){
            prev = temp;
            temp = temp->next;

        }
        if(temp == nullptr){
            cout << "Value not Found.\n";
            return;
        }
        prev->next = temp->next;
        delete temp;
        cout << "Deleted node with value " << value << ".\n";

    }
    void search(int value){
        Node* temp = head;
        int pos = 1;
        while(temp != nullptr){
            if(temp->data == value){
                cout << "Value " << value << " Found at Position " << pos << ".\n";
                return;
            }
            temp = temp->next;
            pos++;
        }
        cout << "Value " << value << " Not Found in the list.\n";

    }
    void display(){
        if(head == nullptr){
            cout << "List is Empty.\n";
            return;

        }
        Node* temp = head;
        cout << "Linked Lists: ";
        while (temp != nullptr){
            cout << temp->data << " -> ";
            temp = temp->next;

        }
        cout << "NULL\n";

    }
};

int main(){
    LinkedList list;
    int choice , value;
    do {
        cout << "\n--- Singly Linked List Menu ----\n";
        cout << "1. Insert at Beginning\n";
        cout << "2. Insert at End\n";
        cout << "3. Delete a Node\n";
        cout << "4. Search for a Node\n";
        cout << "5. Display List\n";
        cout << "6. Exist\n";
        cout << "Enter Your Choice: ";
        cin >> choice;

        switch(choice){
            case 1:

            cout << "Enter Value: ";
            cin >> value;
            list.insertAtBeginning(value);
            break;


            case 2:
            cout << "Enter Value: ";
            cin >> value;
            list.insertAtEnd(value);
            break;

            case 3:

            cout << "Enter value to delete: ";
            cin >> value;
            list.deleteNode(value);
            break;

            case 4:
            
            cout << "Enter value to Search: ";
            cin >> value;
            list.search(value);
            break;

            case 5:

            list.display();
            break;

            case 6:

            cout << "Exiting...\n";
            break;

            default:
            cout << "Invalid Choice! Try Again.\n";



        }

    } while (choice != 6);

    return 0;
}