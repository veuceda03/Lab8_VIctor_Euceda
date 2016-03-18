#pragma once
#include "obra.h"
#include <string>
#include <sstream>

class Literatura: public Obra{
		string genero;
		string epoca;
    public:
		Literatura(string,string,string,string,string);
		Literatura(const Literatura&);
		virtual~Literatura();
		virtual string toString() const;
};
