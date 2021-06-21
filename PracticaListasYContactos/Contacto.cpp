#include "Contacto.h"
#include <iostream>
using namespace std;

Contacto::Contacto() {}

Contacto::Contacto(string pNombre, string pApellido, string pPais, string pCorreo) {
	nombre = pNombre;
	apellido = pApellido;
	pais = pPais;
	correo = pCorreo; 
}

string Contacto::getNombre() {
	return nombre;
}
void Contacto::setNombre(string pNombre) {
	nombre = pNombre;
}

string Contacto::getApellido() {
	return apellido;
}
void Contacto::setApellido(string pApellido) {
	apellido = pApellido;
}

string Contacto::getPais() {
	return pais;
}
void Contacto::setPais(string pPais) {
	pais = pPais;
}

string Contacto::getCorreo() {
	return correo;
}
void Contacto::setCorreo(string pCorreo) {
	correo = pCorreo;
}