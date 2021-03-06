#include <sstream>
#include <string>
#include "obra.h"

using std::string;
using std::stringstream;

Obra::Obra(string nombre,string autor,string ingreso): nombre(nombre), autor(autor), ingreso(ingreso) {
	
}

Obra::Obra(const Obra& nueva): nombre(nueva.nombre), autor(nueva.autor), ingreso(nueva.ingreso){
}

Obra::~Obra(){
}

string Obra::toString() const{
	stringstream ss;
	ss <<"Titulo: "<< nombre <<"\nAutor: " << autor << "\nFecha de ingreso: " << ingreso;
	return ss.str(); 
}

string Obra::getNombre(){
	return nombre;
}
string Obra::getAutor(){
	return autor;
}
string Obra::getFecha(){
	return ingreso;
}
