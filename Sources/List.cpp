#include "../Headers/List.h"
using namespace std;

/*
 * Este metodo crea un nuevo nodo en para la lista
*/
void List::addNode(Node* nd, int data) {
    if (nd->next == NULL) {//validacion
        nd->next = new Node(data);       //agrega el nodo a la lista [deberia ser el metodo sobrecargado en vez de new]
    } else
        this->addNode(nd->next, data);
}

/*
 *
*/
void List::deleteNode(Node* nd, int data) {

    if (nd == nullptr) return;

    if (nd->data == data && nd == this->head) {
        Node* temp = this->head;
        if (this->head->next != nullptr){
            this->head = this->head->next;
            delete temp;
        } else
            this->head = nullptr;
        return;
    }

    if (nd->next != nullptr && nd->next->data == data) {
        Node* temp = nd->next;
        if (nd->next != nullptr) {
            nd->next = nd->next->next;
        }
        delete temp;
    } else
        this->deleteNode(nd->next, data);
}

/*
 * Este metodo imprime los "nodos de la lista"
*/
void List::printList(Node* nd) {
    if (nd != nullptr) {
        cout<<"--> "<<nd->data<<endl;
        this->printList(nd->next);
    }
}

/*
 * Este metodo agrega el valor dado a un al nodo
*/
void List::addData(int data) {
    if (this->head == nullptr) {            //validacion
        this->head = new Node(data);       //agrega el valor dado al nodo
    } else
        this->addNode(this->head, data);
}

/*
 *
*/
void List::deleteData(int data) {
    this->deleteNode(this->head, data);
}

/*
 * Este metodo imprime los nodos de la lista
*/
void List::printData() {
    cout<<"Imprimiendo: "<<endl;
    this->printList(this->head);
}
