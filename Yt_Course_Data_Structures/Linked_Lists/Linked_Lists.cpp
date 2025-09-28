#include <iostream>

using namespace std;


//Los linked lists tienen elementos llamads nodos
//estos nodos tienen 2 cosas el valor que van a guardar
// y la direccion del siguiente nodo
//los nodos los tienes que definir como una clase
//Y tambien tienes que hacer los atributos publicos
//Porque son privados por default

class Node {
public:
    int Value;
    Node* Next;

};

//Solamente tiene que recibir el primer elemento el head
//Ya que este tiene la direccion del segundo y ese del tercero 
// y asi te vas
void printList(Node* n){
    while(n != NULL){
        cout << n->Value << endl;
        n = n->Next;
    }
}

//Como estan mandando una direccion ocupamos un pointer a un pointer
void insertAtTheFront(Node**head, int new_value){
    //1. Prepare a newNode
    Node* newNode = new Node();
    newNode ->Value = new_value;
    //2. Put it in front front of current head
    newNode ->Next = *head;
    //3. Move head of the list to point to the newNode
    *head = newNode;

}

void insertAtTheEnd(Node**head, int new_value){
    //1. Prepare a newNode
    Node* newNode = new Node();
    newNode ->Value = new_value;
    newNode ->Next = NULL;
    //2. If linked list is empty,newNode will be a head node
    if(*head == NULL){
        *head = newNode;
        return;
    }

    //3. Find the last node
    Node* last = *head;
    while(last->Next != NULL){
        last = last->Next;
    }
    //4. Insert newNode after last node (at the end)
    last->Next = newNode;
    

}

void insertAfter(Node*previous, int new_value){
    //1. Check if previus node is NULL
    if(previous == NULL){
        cout << "Previous can not be NULL";
        return;
    }
    //2. Prepare a newNode
    Node* newNode = new Node();
    newNode ->Value = new_value;
    //3. Insert newNode after previous
    newNode ->Next = previous ->Next;
    previous ->Next = newNode;


}
int main(){

    // Node* Esto significa puntero a node 
    //El nombre es lo que esta en blanco, el nombre de la variable
    // Node* head es una variable ue puede guardar la direccion de un objeto tipo
    //Node
    // new Node () esto crea un nuevo Nodo en la memorua, siemore
    //Que quiera crear nuevo node tiene que estar new Node() despues del =
    //Para que en la memoria se cree un nuevo nodo
    Node* head = new Node ();
    Node* second = new Node();
    Node* third = new Node();

    //Aqui como estamos usando pointers usamos -> para acceder a 
    //Los atributos de la clase;
    head ->Value = 1;
    second ->Value = 2;
    third ->Value = 3;

    //Aqui ahora accedemos al atributo Next que es el que guarda la direccion del 
    //Siguiente Node
    head ->Next = second;
    second ->Next = third;
    third ->Next = NULL;

    //insertAtTheFront(&head, 0); //Aqui le pasas la direccion del primer elemento de la linked list y el valor que va a ser la cabeza
    //nsertAtTheEnd(&head, 4); //Aqui le pasas la direccion del primer elemento de la linked list para que busque al ultimo y el valor que va a ser la cola
    insertAfter(head, -1);

    printList(head);

    return 0;
}