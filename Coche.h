#include <stdlib.h>
#include <iostream>
#include "Vehiculos.h"
#include "Moto.h"
#include "Bici.h"
using namespace std;


class Coche:public Vehiculo{
   // atributos privados
    private: 
    string color;
    string marca;
	Usuario usuarioRenta;
    // atributos publicos
    public:
	
	///Constructor
	Coche(){
		
	}
	
	///Otro constructor con datos
	Coche(string scolor, string smarca, string subicacion, 
	string sestado, Usuario u){
		color = scolor;
		marca  = smarca;
		ubicacion = subicacion;
		estado = sestado;
		usuarioRenta = u;
	}
	
	///Geter and setter
	void setColor(string c){
		color = c;
	}
	
	void setMarca(string m){
	    marca = m;
	}
	
	void setUsuario(Usuario u){
	    usuarioRenta=u;
	}
	
	string getColor(){
		return color;
	}
	
	string getMarca(){
	   return marca;
	}
	
	Usuario getUsuario(){
	    return usuarioRenta;
	}
	
	
};
