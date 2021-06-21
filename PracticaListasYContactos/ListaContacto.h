#ifndef LISTACONTACTO_H
#define LISTACONTACTO_H
#include "NodoContacto.h"

class ListaContacto {
public:
    ListaContacto();

    //void agregarAlInicio(Contacto* pcontacto);
    void agregarOrdenado(Contacto* pcontacto);
    void esVacia();
    void buscar(string pcorreo);
    void eliminar();
    void eliminarEspecifico(int posicion);
    void longitud();

    void agregarContacto(Contacto* pcont);
    void mostrarContactos();
    NodoContacto* getCabeza();
    void setCabeza(NodoContacto* pcabeza);

private:
    NodoContacto* cabeza;
    int size;
};



#endif 