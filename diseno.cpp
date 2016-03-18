#include "obra.h"
#include "diseno.h"
#include <string>
#include <sstream>

Diseno::Diseno(string nombre,string autor,string ingreso, string terreno): Obra(nombre,autor,ingreso), terreno(terreno){
}

Diseno::~Diseno(){
}

string Diseno::toString() const{
	stringstream ss;
	ss << "Diseno\n" << Obra::toString() << "\nTerreno: " << terreno;
	return ss.str(); 
}
