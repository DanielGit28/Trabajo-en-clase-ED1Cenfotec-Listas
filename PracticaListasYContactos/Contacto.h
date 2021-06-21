
#ifndef CONTACTO_H
#define CONTACTO_H
#include <string>
using namespace std;
class Contacto
{
public: 
	Contacto();
	Contacto(string pNombre, string pApellido, string pPais, string pCorreo);

	string getNombre();
	void setNombre(string pNombre);

	string getApellido();
	void setApellido(string pApellido);

	string getPais();
	void setPais(string pPais);

	string getCorreo();
	void setCorreo(string pCorreo);

private: 
	string nombre;
	string apellido;
	string pais;
	string correo;

};

#endif

