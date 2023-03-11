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
    void printData();

private: // Metodos con los que el usuario NO interactua, ya que estos corren por debajo
    void addNode(Node* n, int data);
    void printList(Node* n);

};

#endif //HOMEWORK__1_LIST_H
