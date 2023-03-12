#include "../Headers/Node.h"
/*
 * Este archivo ".cpp" contiene el codigo fuente de los metodos de modificacion y consulta de la clase 'Node'...
*/
int Node::getData() const {return data;}

void Node::setData(int data) {Node::data = data;}

Node *Node::getNext() const {return next;}

void Node::setNext(Node* next) {Node::next = next;}

void *Node::operator new(size_t size, int data) {
    if (Collector::getinstance()->Empty()){
        return :: new Node (data);

    }
    static_cast<Node *>(Collector::getinstance()->getfirst())->setData(data);
    Node * temp = static_cast<Node *>(Collector::getinstance()->getfirst());
    Collector:: getinstance()->setFirst(temp->getNext());
    temp->setNext(NULL);
    return temp;
}

void Node::operator delete(void *viejoNodo) {
    static_cast<Node *>(viejoNodo)->setNext(static_cast<Node *>(Collector::getinstance()->getfirst()));
    Collector::getinstance()->setFirst(viejoNodo);

}