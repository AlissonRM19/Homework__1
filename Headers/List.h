#ifndef HOMEWORK__1_LIST_H
#define HOMEWORK__1_LIST_H

#include<iostream>
#include "Node.h"

/**
 * @class List
 * @authors: Alisson Redondo Moya y Byron Mata Fuentes.
 *
 * @brief Clase que contiene las declaraciones de los metodos de la clase List, ademas de un atributo tipo 'Node*'
 *
 */
class List {

    /**
     * Declaracion de un atributos y metodos de la clase List
     */
    public:

        Node* head;

        void addData(int data);
        void deleteData(int data);
        void printData();

    /**
     * Declaracion de metodos de la clase List
     */
    private:

        void addNode(Node* nd, int data);
        void deleteNode(Node* nd, int data);
        void printList(Node* nd);

};

#endif //HOMEWORK__1_LIST_H
