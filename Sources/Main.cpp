#include "../Headers/List.h"

using namespace std;

/**
 * Instituto Tecnologico de Costa Rica.
 * Area Ingenieria en Computadores.
 *
 * @authors: Alisson Redondo Moya y Byron Mata Fuentes.
 *
 * Lenguaje: C++.
 * @version: 1.0.
 * @date: 12.03.2023.
 *
 * @brief 'int main()' es la funcion principal donde se ejecuta el programa.
*/
int main(){

    List* lst = new List();

    // Adicion de los datos para la creacion de la lista.
    lst->addData(0);
    lst->addData(1);
    lst->addData(2);
    lst->addData(3);
    lst->addData(4);

    // Impresion de la lista incial.
    cout << "\nLista enlazada simple: " << endl;
    lst->printData();
    cout << endl;

    // Eliminacion de elementos de la lista.
    lst->deleteData(0);
    lst->deleteData(2);

    // Impresion de la lista actualizada.
    cout << "\nLista enlazada simple actualizada: " << endl;
    lst->printData();

    return 0;

}
