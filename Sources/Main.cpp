#include "../Headers/List.h"
using namespace std;

/*
 *
*/
int main(){

    List* l = new List();

    l->addData(1000);
    l->addData(2000);
    l->addData(3333);

    l->printData();

    return 0;
}