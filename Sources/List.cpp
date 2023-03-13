#include "../Headers/List.h"

using namespace std;

/**
 * @brief Metodo 'addNode()', este valida el siguiente sea nulo, de ser asi crea un nodo nuevo,
 *        sino se llama a si mismo de forma recursiva.
 * @param nd
 * @param data
 */
void List::addNode(Node* nd, int data) {

    if (nd->next == nullptr) {
        nd->next = new Node(data);
    } else
        this->addNode(nd->next, data); // Se realiza una llamada recursiva al mismo metodo.
}

/**
 * @brief Metodo 'deleteNode()', este realiza tres validacion para determinar la eliminacion de
 *        los elementos de la lista.
 * @param nd
 * @param data
 */
void List::deleteNode(Node* nd, int data) {

    /* Valida si el elemento es nulo. */
    if (nd == nullptr) return;

    /* Valida si el dato en el elemento es igual al que se quiere eliminar
     * y si el elemento es igual a la posicion de head. */
    if (nd->data == data && nd == this->head) {
        Node* temp = this->head;

        /* Valida si el siguiente de head es distinto de nulo, de ser asi
         * asigna este como el nuevo head y elimina el temporal. */
        if (this->head->next != nullptr) {
            this->head = this->head->next;
            delete temp;
        } else
            this->head = nullptr;
        return;
    }

    /* Valida si el siguiente al elemento es diferente de nulo
     * y el dato del siguiente al elemento es igual al que se esta buscando. */
    if (nd->next != nullptr && nd->next->data == data) {
        Node* temp = nd->next;

        /* Valida que el siguiente al elemento sea diferente de nulo, de ser asi
         * se asigna que el siguiente al elemento sea el siguiente al siguiente del elemento*/
        if (nd->next != nullptr) {
            nd->next = nd->next->next;
        }
        delete temp;                            // Se elimina el temporal.
    } else
        this->deleteNode(nd->next, data);   // Se realiza una llamada recursiva al mismo metodo.
}


/**
 * @brief Metodo 'addData()', este valida que head sea nulo, de ser asi crea un nodo nuevo,
 *        sino entonces referencia el metodo 'addNode()'.
 * @param data
 */
void List::addData(int data) {
    if (this->head == nullptr) {
        this->head = new Node(data);
    } else
        this->addNode(this->head, data);
}

/**
 * @brief Metodo 'deleteData()', este hace referencia al metodo 'deleteNode()'.
 * @param data
 */
void List::deleteData(int data) {
    this->deleteNode(this->head, data);
}


/**
 * @brief Metodo 'printList()', este metodo imprime los elementos de la lista validando que estos sean distintos
 *        de nulo.
 * @param nd
 */
void List::printList(Node* nd) {
    if (nd != nullptr) {
        cout << "--> " << nd->data << endl;
        this->printList(nd->next);
    }
}

/**
 * @brief Metodo 'printData()', este hace referencia al metodo 'printList()'.
 */
void List::printData() {
    this->printList(this->head);
}
