#include <iostream>
using namespace std;

class Node{
public: 
    int data;
    Node* next;
    Node* previous;
    Node(int value){
        data = value;
        next = NULL;
        previous = NULL;
    }
};

class DoublyList{
    Node* head;
    Node* tail;
public:
    DoublyList(){
        head = tail = NULL;
    }

    void push_front(int value){
        Node* newNode = new Node(value);
        if(head == NULL){
            head = newNode;
            tail = newNode;
        }else{
            newNode->next = head;
            head->previous = newNode;
            head = newNode;
        }
    }
    void printDLL(){
        Node* temp = head;
        while(temp != NULL){
            cout << temp->data << "<=> ";
            temp = temp->next;
        }
        cout << "NULL" << endl;
    }
};

int main(){
    DoublyList dll;
    dll.push_front(1);
    dll.push_front(2);
    dll.push_front(3);
    dll.push_front(4);
    dll.printDLL();

    

}