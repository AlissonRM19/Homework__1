#ifndef HOMEWORK__1_NODE_H
#define HOMEWORK__1_NODE_H

#include<iostream>

/*
 * Este header contiene la clase Node, el constructor de la misma, ademas declara los metodos de
 * modificacion y consulta que se construiran en el ".cpp" correspondiente...
*/
class Node { //Clase

public:

    int data;
    Node* next;

    Node(int data){ //Constructor
        this->data = data;
        this->next = nullptr; //nullpointer
    }

    //Metodos de "get" y "set" de la clase
    int getData() const;
    void setData(int data);
    Node *getNext() const;
    void setNext(Node* next);

};

#endif //HOMEWORK__1_NODE_H