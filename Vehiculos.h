#include <stdlib.h>
#include <iostream>
#include "Usuario.h"
using namespace std;


class Vehiculo{
   // atributos privados
    private: 


    // atributos publicos
    public:
	string estado;
    string ubicacion;
	///Constructor
	Vehiculo(){
		estado="Disponible";
		ubicacion="";
	};
	
	///Geter and setter
	void setEstado(string e){
		estado = e;
	}
	
	void setUbicacion(string u){
	    ubicacion = u;
	}
	
	string getEstado(){
		return estado;
	}
	
	string getUbicacion(){
		return ubicacion;
	}
	
};