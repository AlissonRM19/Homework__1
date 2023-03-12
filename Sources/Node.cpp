#include "../Headers/Node.h"

/*
 * Este archivo ".cpp" contiene el codigo fuente de los metodos de modificacion y consulta de la clase 'Node'...
*/
int Node::getData() const {return data;}

void Node::setData(int data) {Node::data = data;}

Node *Node::getNext() const {return next;}

void Node::setNext(Node* next) {Node::next = next;}

