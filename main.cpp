#include <iostream>
#include <string>
#include <vector>

#include "obra.h"
#include "literatura.h"
#include "diseno.h"
#include "pintura.h"
#include "escultura.h"


using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::vector;

void menu();
void lit(vector<Obra>&);
void diseno(vector<Obra>&);
void escultura(vector<Obra>&);
void pintura(vector<Obra>&);
void listar(vector<Obra>& );


int main(int argc,char*argv[]){
	vector<Obra> inventario;
	vector<Obra> transferido;
	bool continuar=true;
	int opcion;
	do{
		cout << endl;
		menu();
		cin >> opcion;
		if(opcion==1){
			lit(inventario);
		}else if(opcion==2){
			escultura(inventario);
		}else if(opcion==3){
			pintura(inventario);
		}else if(opcion==4){
			diseno(inventario);
		}else if(opcion==5){
			int cambio;
			cout << "Inventario" << endl;
			listar(inventario);
			cout << "Ingrese el número de la obra a transferir: ";
			cin >> cambio;
			cambio-=1;
			if(cambio <0 && cambio > inventario.size() ){
				cout << "Ingresó algo inválido" << endl;
			}else{
				transferido.push_back(inventario[cambio]);
				inventario.erase(inventario.begin() + cambio);
			}
		}else if(opcion==6){
			cout << "Inventario" << endl;
			listar(inventario);
			cout << endl <<"Transferidas" << endl;
			listar(transferido);
		}else if(opcion==7){
			cout << "Gracias por usarlo" << endl;
			opcion=false;
		}
	}while(continuar==true);	
	return 0;
}

void menu(){
	cout << "Bienvenido al museo: " 	<< endl
		 << "1: Ingresar literatura"	<< endl
		 << "2: Ingresar escultura"		<< endl
		 << "3: Ingresar pintura"		<< endl
		 << "4: Ingresar diseño"		<< endl
		 << "5: Transferir "			<< endl
		 << "6: Reportes"				<< endl
		 << "7: Salir"					<< endl;	
}

void lit(vector<Obra>& inventario){
	string nombre,autor,fecha,genero,epoca;
	cout << "Nombre de la obra: ";
	cin >> nombre;
	cout << "Autor de la obra: ";
	cin >> autor;
	cout << "Fecha de ingreso: ";
	cin >> fecha;
	cout << "Genero de la obra: ";
	cin >> genero;
	cout << "Epoca: ";
	cin >> epoca;	
	inventario.push_back(Literatura(nombre,autor,fecha,genero,epoca));
}

void diseno(vector<Obra>& inventario){
	string nombre,autor,fecha,terreno;
	cout << "Nombre de la obra: ";
	cin >> nombre;
	cout << "Autor de la obra: ";
	cin >> autor;
	cout << "Fecha de ingreso: ";
	cin >> fecha;
	cout << "Terreno de la obra: ";
	cin >> terreno;
	inventario.push_back(Diseno(nombre,autor,fecha,terreno));
}

void escultura(vector<Obra>& inventario){
	string nombre,autor,fecha,material;
	double peso;
	cout << "Nombre de la obra: ";
	cin >> nombre;
	cout << "Autor de la obra: ";
	cin >> autor;
	cout << "Fecha de ingreso: ";
	cin >> fecha;
	cout << "Material de la obra: ";
	cin >> material;
	cout << "Peso: ";
	cin >> peso;
	inventario.push_back(Escultura(nombre,autor,fecha,peso,material));
}

void pintura(vector<Obra>& inventario){
	string nombre,autor,fecha,lienzo,tecnica;
	cout << "Nombre de la obra: ";
	cin >> nombre;
	cout << "Autor de la obra: ";
	cin >> autor;
	cout << "Fecha de ingreso: ";
	cin >> fecha;
	cout << "Material del lienzo: ";
	cin >> lienzo;
	cout << "tecnica: ";
	cin >> tecnica;	
	inventario.push_back(Pintura(nombre,autor,fecha,lienzo,tecnica));
}

void listar(vector<Obra>& inventario){
	if(inventario.size()!=0){
		for(int i=0;i<inventario.size();i++){
			cout <<(i+1)<< ") "<<inventario[i].toString() << endl;
		}
	}else{
		cout << "No hay obras disponibles" << endl;
	}
}
