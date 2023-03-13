#ifndef HOMEWORK__1_NODE_H
#define HOMEWORK__1_NODE_H

#include<iostream>
#include "Collector.h"

/**
 * @class Node
 * @authors: Alisson Redondo Moya y Byron Mata Fuentes.
 *
 * @brief Clase que contiene un valor de tipo 'int' y un puntero al siguiente, asi como los metodos para consultar y
 *        modificar estos datos [Getter y Setter]. Ademas de la sobrecarga de los metodos 'new()' y 'delete()'.
 */
class Node {

    /**
     * Declaracion del valor tipo 'int', puntero y los metodos de la clase Node
     */
    public:

    int data;       // Valor tipo 'int'
    Node* next;     // Puntero al siguiente

    Node(int data);
    void* operator new (size_t size);
    void operator delete (void* oldNode);


    int getData() const;
    void setData(int data);
    Node* getNext() const;
    void setNext(Node* next);

};

#endif //HOMEWORK__1_NODE_H
