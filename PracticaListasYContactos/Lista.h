#ifndef LISTA_H
#define LISTA_H
#include "nodo.h"


class Lista {
public:
    Lista();

    void agregarAlInicio(int pentero);
    void agregarOrdenado(int pentero);
    void esVacia();
    void buscar(int pentero);
    void eliminar();
    void eliminarEspecifico(int elemento);
    void longitud();

    void agregar(int t);
    void mostrar();
    Nodo* getCabeza();
    void setCabeza(Nodo* pcabeza);

private:
    Nodo* cabeza;
    int size;
};



#endif 

