#include "../Headers/List.h"
using namespace std;

/*
 * Este metodo crea un nuevo nodo en para la lista
*/
void List::addNode(Node* n, int data) {
    if (n->next == NULL) {              //validacion
        n->next = new Node(data);       //agrega el nodo a la lista [deberia ser el metodo sobrecargado en vez de new]
    } else
        this->addNode(n->next, data);
}

/*
 * Este metodo imprime los "nodos de la lista"
*/
void List::printList(Node* n) {
    if (n != NULL) {
        cout<<"--> "<<n->data<<endl;
        this->printList(n->next);
    }
}

/*
 * Este metodo agrega el valor dado a un al nodo
*/
void List::addData(int data) {
    if (this->head == NULL) {              //validacion
        this->head = new Node(data);       //agrega el valor dado al nodo
    } else
        this->addNode(this->head, data);
}

/*
 * Este metodo imprime los nodos de la lista
*/
void List::printData() {
    cout<<"Imprimiendo: "<<endl;
    this->printList(this->head);
}

//Agregar metodo para eliminar nodos
