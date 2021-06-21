#include <iostream>
#include <boost/algorithm/string.hpp>
#include "ListaContacto.h"
#include "NodoContacto.h"
#include "Contacto.h"
using namespace std;


ListaContacto::ListaContacto() {
    cabeza = nullptr;
}

NodoContacto* ListaContacto::getCabeza() {
    return cabeza;
}

void ListaContacto::setCabeza(NodoContacto* pcabeza) {
    cabeza = pcabeza;
}


/*Contactos*/
void ListaContacto::agregarContacto(Contacto* cont) {
    //size++;
    NodoContacto* temp = new NodoContacto();
    temp->setInfoContacto(cont);

    if (cabeza == nullptr) {
        cabeza = temp;
    }
    else {
        temp->setSiguiente(cabeza);
        cabeza = temp;
    }
    size++;
}

void ListaContacto::mostrarContactos() {
    NodoContacto* aux = cabeza;
    while (aux != nullptr) {
        cout << "Contacto: " << endl;
        cout << "Nombre: " << aux->getInfoContacto()->getNombre() << endl;
        cout << "Apellido: " << aux->getInfoContacto()->getApellido() << endl;
        cout << "Pais: " << aux->getInfoContacto()->getPais() << endl;
        cout << "Correo: " << aux->getInfoContacto()->getCorreo() << endl;
        aux = aux->getSiguiente();
    }
}


void ListaContacto::esVacia() {
    if (cabeza == nullptr)
    {
        cout << "Lista vacia" << endl;
    }
    else {
        cout << "La lista no esta vacia" << endl;
    }

}

void ListaContacto::agregarOrdenado(Contacto* pContacto) {
    NodoContacto* temp = new NodoContacto();
    temp->setInfoContacto(pContacto);

    if (cabeza == nullptr || temp->getInfoContacto()->getNombre() < cabeza->getInfoContacto()->getNombre())
    {
        temp->setSiguiente(cabeza);
        cabeza = temp;
    }
    else
    {
        NodoContacto* aux = cabeza;

        while (aux->getSiguiente() != nullptr && aux->getInfoContacto()->getNombre() < temp->getInfoContacto()->getNombre())
        {
            aux = aux->getSiguiente();

        }
        if (aux->getSiguiente() != nullptr)
        {
            temp->setSiguiente(aux->getSiguiente());
        }

        aux->setSiguiente(temp);
    }

    size = size + 1;
}

void ListaContacto::buscar(string pcorreo) {
    NodoContacto* temp = cabeza;
    int cont = 1;
    int cont2 = 0;

    while (temp)
    {
        if (temp->getInfoContacto()->getCorreo() == pcorreo) {
            cout << "El contacto esta en la posicion: " << cont << endl;

            cont2++;
        }
        temp = temp->getSiguiente();

        cont++;
    }

    if (cont2 == 0)
    {
        cout << "No existe" << endl;

    }

}


void ListaContacto::eliminar() {
    NodoContacto* a = cabeza;
    while (a != NULL) {
        NodoContacto* temp = a->getSiguiente();
        delete a;
        a = temp;
    }
}


void ListaContacto::eliminarEspecifico(int pElem) {
    
    NodoContacto* ant, * aux;
    int i, pos = pElem;
    if (pos < 1 || pos > size) {
        cout << "No se puede eliminar" << endl;
    }
    else {
        for (i = 1, ant = 0, aux = cabeza; i < pos; i++) {
            ant = aux;
            aux = aux->getSiguiente();
        }
        if (ant != 0) {
            ant->setSiguiente(aux->getSiguiente());
        }
        else {
            cabeza = aux->getSiguiente();
        }
        delete aux;
        size--;
        cout << "Eliminado exitosamente" << endl;
    }
}

void ListaContacto::longitud() {
    cout << "Tamaño de la lista: " << size << endl;
}
