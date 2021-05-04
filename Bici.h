#include <bits/stdc++.h>
using namespace std;


class Bici:public Vehiculo{
   // atributos privados
    private: 
    string color;
    string marca;
	string ubicacion;
	Usuario usuarioRenta;
    // atributos publicos
    public:
	
	///Constructor
	Bici(){
		
	}
	
	///Constructor con datos
	Bici(string scolor, string smarca, string subicacion, 
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
