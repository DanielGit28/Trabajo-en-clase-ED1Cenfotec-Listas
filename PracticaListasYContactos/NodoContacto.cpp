#include "NodoContacto.h"
#include <iostream>

NodoContacto::NodoContacto() {
    siguiente = nullptr;
}


Contacto* NodoContacto::getInfoContacto() { return cont; }

void NodoContacto::setInfoContacto(Contacto* pContacto) { cont = pContacto; }

NodoContacto* NodoContacto::getSiguiente() { return siguiente; }

void NodoContacto::setSiguiente(NodoContacto* sig) { siguiente = sig; }