#include "../Headers/Collector.h"

Collector * Collector::instance = nullptr;


Collector *Collector::getinstance() {
    if(instance == nullptr) instance = new Collector();
    return instance;
}

bool Collector::Empty() {
    return first == nullptr;
}

void *Collector::getfirst() {
    return first;
}

void Collector::setFirst(void *first) {
    Collector::first = first;
}

