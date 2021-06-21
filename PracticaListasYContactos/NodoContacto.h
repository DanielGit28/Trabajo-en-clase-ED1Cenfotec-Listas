#ifndef NODOCONTACTO_H
#define NODOCONTACTO_H
#include "Contacto.h"

class NodoContacto {
public:
    NodoContacto();

    Contacto* getInfoContacto();
    void setInfoContacto(Contacto* pContacto);

    NodoContacto* getSiguiente();
    void setSiguiente(NodoContacto* n);

private:
    Contacto* cont;
    NodoContacto* siguiente;
};

#endif
