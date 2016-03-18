#pragma once
#include "obra.h"
#include <string>
#include <sstream>

class Pintura: public Obra{
		string tecnica;
		string lienzo;
    public:
		Pintura(string,string,string,string,string);
		Pintura(const Pintura&);
		virtual~Pintura();
		virtual string toString() const;
};
