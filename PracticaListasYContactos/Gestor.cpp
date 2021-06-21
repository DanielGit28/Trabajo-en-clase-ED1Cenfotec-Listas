#include <iostream>
//#include <vector>
#include "Lista.h"
#include "Nodo.h"
#include "ListaContacto.h"
#include "NodoContacto.h"
using namespace std;

class Gestor
{
public:
    //vector<int> array;
    Lista* listaEnteros = new Lista();
    ListaContacto* listaContactos = new ListaContacto();

    /**/
    void menu()
    {
        int opcion = 0;
        do
        {
            infoMenuInicial();
            cin >> opcion;
            switch (opcion)
            {
            case 1:
                menuListas(1);
                break;
            case 2:
                menuListas(2);
                break;
            case 3:
                break;
            }
        } while (opcion != 3);
    }

    void infoMenuInicial()
    {
        cout << "\n Ingrese una opcion para continuar: ";
        cout << "\n1. Funciones lista de enteros";
        cout << "\n2. Funciones lista de contactos";
        cout << "\n3. Salir\n";
    }

    void agregarEntero()
    {
        int entero;
        cout << "\nIngrese un numero entero para la lista: ";
        cin >> entero;
        listaEnteros->agregarAlInicio(entero);
        
        listaEnteros->mostrar();
    }

    void agregarContacto()
    {
        string nombre, apellido, pais, correo;
        cout << "\nIngrese el nombre del contacto: ";
        cin >> nombre;
        cout << "\nIngrese el apellido del contacto: ";
        cin >> apellido;
        cout << "\nIngrese el pais del contacto: ";
        cin >> pais;
        cout << "\nIngrese el correo del contacto: ";
        cin >> correo;

        Contacto* contacto = new Contacto(nombre, apellido, pais, correo);
        listaContactos->agregarContacto(contacto);

        listaContactos->mostrarContactos();
    }

    void agregarEnteroOrdenado()
    {
        int entero, posicion;
        cout << "\nIngrese un numero entero para la lista: ";
        cin >> entero;
        listaEnteros->agregarOrdenado(entero);

        listaEnteros->mostrar();
    }

    void agregarContactoOrdenado()
    {
        string nombre, apellido, pais, correo;
        int posicion;
        cout << "\nIngrese el nombre del contacto: ";
        cin >> nombre;
        cout << "\nIngrese el apellido del contacto: ";
        cin >> apellido;
        cout << "\nIngrese el pais del contacto: ";
        cin >> pais;
        cout << "\nIngrese el correo del contacto: ";
        cin >> correo;
        
        Contacto* contacto = new Contacto(nombre, apellido, pais, correo);
        listaContactos->agregarOrdenado(contacto);

        listaContactos->mostrarContactos();
    }

    void buscarEntero()
    {
        int entero;
        cout << "\nIngrese el numero entero que desea buscar: ";
        cin >> entero;
        listaEnteros->buscar(entero);
        //listaEnteros->mostrar();
    }
    void eliminarEnteroEspecifico()
    {
        int entero;
        cout << "\nIngrese el numero entero que desea eliminar: ";
        cin >> entero;
        listaEnteros->eliminarEspecifico(entero);
        //listaEnteros->mostrar();
    }

    void buscarContacto()
    {
        string correo;
        cout << "\nIngrese el correo del contacto que desea eliminar: ";
        cin >> correo;
        listaContactos->buscar(correo);
        //listaEnteros->mostrar();
    }
    void eliminarContactoEspecifico()
    {
        int entero;
        cout << "\nIngrese la posicion del contacto que desea eliminar: ";
        cin >> entero;
        listaContactos->eliminarEspecifico(entero);
        //listaEnteros->mostrar();
    }

    /*FUNCIONES DE LISTA*/
    void menuListas(int opc)
    {
        int opcion = 0;
        do
        {
            infoMenu();
            cin >> opcion;
            switch (opcion)
            {
            case 1:
                if (opc == 1) {
                    agregarEntero();
                } else {
                    agregarContacto();
                }
                
                break;
            case 2:
                if (opc == 1) {
                    agregarEnteroOrdenado();
                }
                else {
                    agregarContactoOrdenado();
                }
                break;
            case 3:
                if (opc == 1) {
                    listaEnteros->esVacia();
                }
                else {
                    listaContactos->esVacia();
                }
                break;
            case 4:
                if (opc == 1) {
                    buscarEntero();
                }
                else {
                    buscarContacto();
                }
                break;
            case 5:
                if (opc == 1) {
                    listaEnteros->eliminar();
                }
                else {
                    listaContactos->eliminar();
                }
                break;
            case 6:
                if (opc == 1) {
                    listaEnteros->mostrar();
                }
                else {
                    listaContactos->mostrarContactos();
                }
                break;
            case 7:
                if (opc == 1) {
                    eliminarEnteroEspecifico();
                }
                else {
                    eliminarContactoEspecifico();
                }
                break;
            case 8:
                if (opc == 1) {
                    listaEnteros->longitud();
                }
                else {
                    listaContactos->longitud();
                }
                break;
            case 9:
                break;
            
            }
        } while (opcion != 9);
    }
    void infoMenu()
    {
        cout << "\n Ingrese una opcion para continuar: ";
        cout << "\n1. Agregar al inicio";
        cout << "\n2. Agregar ordenado";
        cout << "\n3. Es vacía";
        cout << "\n4. Buscar";
        cout << "\n5. Eliminar";
        cout << "\n6. Mostrar";
        cout << "\n7. Eliminar un elemento particular por posicion";
        cout << "\n8. Longitud";
        cout << "\n9. Salir\n";
    }
    
    

};