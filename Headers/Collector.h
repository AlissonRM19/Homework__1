#ifndef HOMEWORK__1_COLLECTOR_H
#define HOMEWORK__1_COLLECTOR_H

/**
 * @class Collector
 * @authors: Alisson Redondo Moya y Byron Mata Fuentes.
 *
 * @brief Clase que contiene la declaracion de atributos, metodos y un constructor.
 *
 */
class Collector{

    /**
     * Declaracion de atributos y constructores
     */
    private:

        void* first;

        static Collector* instance;
        Collector();

    /**
     * Declaracion de metodos de la clase Collector
     */
    public:
        static Collector * getInstance();
        bool Empty();
        void * getFirst();
        void setFirst(void *first);

};

#endif //HOMEWORK__1_COLLECTOR_H
