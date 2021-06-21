#include <iostream>
#include "lista.h"
#include "nodo.h"
#include "Contacto.h"
using namespace std;


Lista::Lista() {
    cabeza = nullptr;
}

Nodo* Lista::getCabeza() {
    return cabeza;
}

void Lista::setCabeza(Nodo* pcabeza) {
    cabeza = pcabeza;
}

/*ENTEROS*/
void Lista::agregar(int tNum) {
    //size++;
    Nodo* temp = new Nodo();
    temp->setInfo(tNum);

    if (cabeza == nullptr) {
        cabeza = temp;
    }
    else {
        temp->setNodo(cabeza);
        cabeza = temp;
    }
}

void Lista::mostrar() {
    Nodo* aux = cabeza;
    while (aux != nullptr) {
        cout << aux->getInfo() << endl;
        aux = aux->getNodo();
    }
}

void Lista::agregarAlInicio(int entero) {
    Nodo* temp = new Nodo();
    temp->setInfo(entero);

    if (cabeza == nullptr)
    {
        cabeza = temp;
    }
    else
    {
        temp->setNodo(cabeza);
        cabeza = temp;
    }

    size = size + 1;
}

void Lista::esVacia() {
    if (cabeza == nullptr)
    {
        cout << "Lista vacia" << endl;
    }
    else {
        cout << "La lista no esta vacia" << endl;
    }
    
}

void Lista::agregarOrdenado(int data) {
    Nodo* temp = new Nodo();
    temp->setInfo(data);
    if (cabeza == nullptr || temp->getInfo() < cabeza->getInfo())
    {
        temp->setNodo(cabeza);
        cabeza = temp;
    }
    else
    {
        Nodo* aux = cabeza;
        while (aux->getNodo() != nullptr && aux->getNodo()->getInfo() < temp->getInfo())
        {
            aux = aux->getNodo();

        }
        if (aux->getNodo() != nullptr)
        {
            temp->setNodo(aux->getNodo());
        }

        aux->setNodo(temp);
    }

    size = size + 1;
}

void Lista::buscar(int entero) {
    Nodo* temp = cabeza;
    int cont = 1;
    int cont2 = 0;

    while (temp)
    {
        if (temp->getInfo() == entero) {
            cout << "El numero esta en la posicion: " << cont << endl;

            cont2++;
        }
        temp = temp->getNodo();

        cont++;
    }

    if (cont2 == 0)
    {
        cout << "No existe" << endl;

    }

}

/*
void Lista::buscar(int pElem) {
    //retorna la posición de pElem en la lista ó -1 si no lo encuentra
    Nodo* aux;
    int pos;
    for (aux = cabeza, pos = 1; aux != NULL; aux = aux->getNodo(), pos++) {
        if (aux->getInfo() == pElem) {
            cout << "La posicion del numero es: " << pos << endl;
        }
    }
    if (aux == 0) { // pElem no está en la lista
        cout << aux->getInfo() << endl;
    }
}*/

/*
void Lista::eliminar() {
    cabeza->eliminarTodo();
}
*/

void Lista::eliminar() {
    Nodo* a = cabeza;
    while (a != NULL) {
        Nodo* temp = a->getNodo();
        delete a;
        a = temp;
    }
}


void Lista::eliminarEspecifico(int pElem) {
    //retorna true si pudo eliminar a pElem o false si no.
    Nodo* ant, *aux;
    int i, pos = pElem;
    if (pos < 1 || pos > size) {
        cout << "No se puede eliminar" << endl;
    }
    else {
        for (i = 1, ant = 0, aux = cabeza; i < pos; i++) {
            ant = aux;
            aux = aux->getNodo();
        }
        if (ant != 0) {
            ant->setNodo(aux->getNodo());
        }
        else {
            cabeza = aux->getNodo();
        }
        delete aux;
        size--;
        cout << "Eliminado exitosamente" << endl;
    }
}

void Lista::longitud() {
    cout << "Tamaño de la lista: " << size << endl;
}


