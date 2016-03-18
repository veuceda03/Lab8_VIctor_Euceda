#pragma once
#include "obra.h"
#include <string>
#include <sstream>

class Diseno: public Obra{
		string terreno;
    public:
		Diseno(string,string,string,string);
		Diseno(const Diseno&);
		virtual~Diseno();
		virtual string toString() const;
};
