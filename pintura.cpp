#include "obra.h"
#include "pintura.h"
#include <string>
#include <sstream>

Pintura::Pintura(string nombre,string autor,string ingreso,string lienzo,string tecnica): Obra(nombre,autor,ingreso), lienzo(lienzo),tecnica(tecnica){
}

Pintura::~Pintura(){
}

string Pintura::toString() const{
	stringstream ss;
	ss << "Pintura\n" << Obra::toString() << "\nMaterial del lienzo: " << lienzo << "\nTécnica empleada: " << tecnica;
	return ss.str(); 
}
