#ifndef HOMEWORK__1_COLLECTOR_H
#define HOMEWORK__1_COLLECTOR_H


#include "Node.h"
#include "List.h"

class Collector : public List {

public:
    void addNode(Node* nd, int data) override;
    void deleteNode(Node* nd, int data) override;
};


#endif //HOMEWORK__1_COLLECTOR_H
