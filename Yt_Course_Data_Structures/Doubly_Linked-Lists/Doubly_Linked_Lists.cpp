#include <iostream>
using namespace std;


class Node{
public:
    int value;
    Node* next;
    Node* prev;
};

void printForward(Node* head){
    Node* traverser = head;

    while(traverser != nullptr){
        cout << traverser ->value << endl;
        traverser = traverser->next;
    }
}

void printBackward(Node* tail){
    Node* traverser = tail;

    while(traverser != nullptr){
        cout << traverser ->value << endl;
        traverser = traverser->prev;
    }
}

int main(){


    Node* head;
    Node* tail;

    //add 1st node
    Node* node = new Node();
    node -> value = 4;
    node -> next = nullptr;
    node -> prev = nullptr;
    head = node;
    tail = node;

    //add 2nd node
    node = new Node();
    node -> value = 5;
    node -> next = nullptr;
    node -> prev = tail;
    tail-> next = node;
    tail = node;

    //3rd node
    node = new Node(); //creo un nuevo nodo
    node -> value = 6; // le doy un valor
    node -> next = nullptr; // le decimos que no apunta a nada porque es el ultimo
    node -> prev = tail; // va a apuntar al que era tail
    tail-> next = node; // aqui hacemos que el que antes era tail apunte ahora a este nuevo nodo y no a nullptr
    tail = node; // aqui decimos que el nuevo pointer va a ser el nuevo tail
    
    //4th node
    node = new Node();
    node -> value = 7;
    node -> next = nullptr;
    node -> prev = tail;
    tail-> next = node;
    tail = node;

    printForward(head);
    printBackward(tail);

    cin.get();
}