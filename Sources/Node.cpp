#include "../Headers/Node.h"
#include <iostream>

using namespace std;

/**
 * @brief Constructor que asigna el valor de data y que el siguiente sea nulo.
 * @param data
 */
Node::Node(int data) {
    this->data = data;
    this->next = nullptr;
}
/**
 * @brief Metodo 'getData()'.
 * @return data
 */
int Node::getData() const {return data;}

/**
 * @brief Metodo 'setData()', este asigna el valor data.
 * @param data
 */
void Node::setData(int data) {Node::data = data;}

/**
 * @brief Metodo 'getNext()', este obtiene el siguiente y retorna el siguiente.
 * @return next
 */
Node *Node::getNext() const {return next;}

/**
 * @brief Metodo 'setNext()', este asigna el siguiente.
 * @param next
 */
void Node::setNext(Node* next) {Node::next = next;}

/**
 * @brief Metodo que sobrecarga el metodo 'new()'.
 * @param size
 * @return temp
 */
void *Node::operator new(size_t size) {

    /* En este se realiza una validacion en la cual se da la comunicacion con la clase Collector, donde
     * se pregunta si existe un espacio de memoria disponible para ser utilizado. */
    if (Collector::getInstance()->Empty()) {
        return::new Node(size);
    }
    static_cast<Node*>(Collector::getInstance()->getFirst())->setData(size);
    Node* temp = static_cast<Node*>(Collector::getInstance()->getFirst());

    Collector::getInstance()->setFirst(temp->getNext());

    temp->setNext(nullptr);
    return temp;
}

/**
 * @brief Metodo que sobrecarga el metodo 'delete()'.
 * @param oldNode
 */
void Node::operator delete(void* oldNode) {

    /* Se da un caomunicacion con la clase Collector, para eliminar
     * y reciclar el espacio de memoria del nodo. */
    static_cast<Node*>(oldNode)->setNext(static_cast<Node*>(Collector::getInstance()->getFirst()));
    Collector::getInstance()->setFirst(oldNode);

    cout << "En collector se a almacenado: " << oldNode << endl;
}
