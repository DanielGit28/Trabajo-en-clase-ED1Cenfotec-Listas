#ifndef NODO_H
#define NODO_H

class Nodo {
public:
    Nodo();

    int getInfo();
    void setInfo(int pinfo);

    Nodo* getNodo();
    void setNodo(Nodo* n);

    void eliminarTodo();

private:
    int info;
    Nodo* nodo;
};

#endif
