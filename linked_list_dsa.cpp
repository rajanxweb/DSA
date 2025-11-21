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
        head = tail = NULL;
    }

    void push_front(int val){
        Node* newNode = new Node(val);
        if(head == NULL){
            head = newNode;
            tail = newNode;
            return;

        }
        else{
            newNode->next = head;
            head = newNode;
        }
    }
    void push_back(int val){
        Node* newNode = new Node(val);
        if(head == NULL){
            head = tail = newNode;
        }
        else{
            tail->next = newNode;
            tail = newNode;
        }
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
    void insert(int value,int pos){
        if(pos<0){
            return;
        }
        if(pos==0){
            push_front(value);
        }
        Node* newNode = new Node(value);
        Node* temp = head;
        for(int i=0; i<pos-1; i++){
            temp = temp->next;
        }
        newNode->next = temp->next;
        temp->next = newNode;
    }
    void searchLL(int key){
        Node* temp = head;
        int count = 0;
        while(temp != NULL){
            if(temp->data == key){
                cout << "Found key at position "<< count <<endl;
            }
            count++;
            temp = temp->next;
        }
    }


    void printLL(){
        Node* temp = head;
        while(temp != NULL){
            cout << temp->data << "-> ";
            temp = temp->next;
        }
        cout << "NULL"<<endl;
    }

};
int main(){
    List ll;
    ll.push_front(1);
    ll.push_front(2);
    ll.push_front(3);
    ll.printLL();

    ll.push_back(4);
    ll.push_back(5);
    ll.printLL();
    ll.pop_front();
    ll.printLL();
    ll.pop_back();
    ll.printLL();
    ll.insert(100, 3);
    ll.printLL();
    ll.searchLL(100);


}