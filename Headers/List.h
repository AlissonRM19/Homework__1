#ifndef HOMEWORK__1_LIST_H
#define HOMEWORK__1_LIST_H


#include<iostream>
#include "Node.h"

/*
 * Este header contiene la clase List y declara los metodos que se construiran en el ".cpp" correspondiente...
*/
class List{ //Clase

public: //Metodos con los que el usuario interactua

    Node* head;

    void addData(int data);
    void deleteData(int data);
    void printData();

private:
    void addNode(Node* nd, int data);
    void deleteNode(Node* nd, int data);
    void printList(Node* nd);

};


#endif //HOMEWORK__1_LIST_H
