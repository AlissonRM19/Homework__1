#ifndef HOMEWORK__1_COLLECTOR_H
#define HOMEWORK__1_COLLECTOR_H



class Collector{

private:
    void * first;
    static Collector * instance;
    Collector() = default;

public:
    static Collector * getinstance();
    bool Empty();
    void * getfirst();

    void setFirst(void *first);

};


#endif //HOMEWORK__1_COLLECTOR_H
