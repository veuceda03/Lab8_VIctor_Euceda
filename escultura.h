#pragma once
#include "obra.h"
#include <string>
#include <sstream>

class Escultura: public Obra{
		double peso;
		string material;
    public:
		Escultura(string,string,string,double,string);
		Escultura(const Escultura&);
		virtual~Escultura();
		virtual string toString() const;
};
