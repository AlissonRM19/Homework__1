#include "../Headers/Collector.h"
#include <iostream>

using namespace std;

/**
 * @brief Constructor de la clase Collector.
 */
Collector::Collector() = default;

/**
 * @brief Constructor que crea una instancia nula.
 */
Collector* Collector::instance = nullptr;

/**
 * @brief Metodo 'getInstance()', este se comunica con la clase Node y realiza una validacion.
 * @return instance
 */
Collector* Collector::getInstance() {
    if(instance == nullptr) instance = new Collector();
    return instance;
}

/**
 * @brief Metodo 'Empty()', este determinar que first sea nulo
 * @return first
 */
bool Collector::Empty() {
    return first == nullptr;
}

/**
 * @brief Metodo 'getFirst()', este obtiene a first.
 * @return first
 */
void* Collector::getFirst() {
    return first;
}

/**
 * @brief Metodo 'setFirst()', este asigna first
 * @param first
 */
void Collector::setFirst(void *first) {
    Collector::first = first;
}
