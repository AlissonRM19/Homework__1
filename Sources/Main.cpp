#include "../Headers/List.h"
using namespace std;

/*
 *
*/
int main(){

    List* lst = new List();

    lst->addData(0);
    lst->addData(1);
    lst->addData(2);
    lst->addData(3);
    lst->addData(4);
    lst->addData(5);
    lst->addData(6);
    lst->addData(7);
    lst->addData(8);
    lst->addData(9);

    lst->printData();

    lst->deleteData(0);

    lst->printData();

    return 0;
}