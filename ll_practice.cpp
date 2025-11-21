#include <iostream>
using namespace std;

class Node{
public:
    int data;
    Node* next;

    Node(int val){
        data = val;
        next = NULL;
    }
};
class List{
    Node* head;
    Node* tail;
public:
    List(){
        head = NULL;
        tail = NULL;
    }
    void push_front(int value){

        Node* newNode = new Node(value);

        if(head == NULL){
            head = tail = newNode;
            return;
        }
        newNode->next = head;
        head = newNode;
    }
    void printLL(){
        Node* temp = head;
        while(temp != NULL){
            cout << temp->data <<"-> ";
            temp = temp->next;
        }
        cout << "NULL"<< endl;
    }
    void push_back(int value){
        Node* newNode = new Node(value);
        if(head == NULL){
            head = tail = NULL;
        }
        newNode->next = NULL;
        tail->next = newNode;
        tail = newNode;
    }
    void pop_front(){
        if(head == NULL){
            return;
        }
        Node* temp = head;
        head = head->next;
        temp->next = NULL;
        delete temp;
    }
    void pop_back(){
        if(head == NULL){
            return;
        }
        Node* temp = head;
        while(temp->next->next != NULL){
            temp = temp->next;
        }
        temp->next = NULL;
        delete tail;
        tail = temp;

    }


};

int main(){
    List ll;
    ll.push_front(5);
    ll.printLL();
    ll.push_back(3);
    ll.printLL();
    ll.pop_front();
    ll.printLL();
    ll.pop_back();
    ll.printLL();

}