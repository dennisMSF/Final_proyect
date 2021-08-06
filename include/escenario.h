#ifndef ESCENARIO_H
#define ESCENARIO_H

class mapa{
private:
    int **matriz;
public:
    mapa();
    ~mapa();
    void generarmatriz();
    void pintarmatriz();
    void pintarmatrizsolido();
};
#endif // ESCENARIO_H
