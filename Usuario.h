#include <stdlib.h>
#include <iostream>

using namespace std;

class Usuario{
   // atributos privados
    private: 
    string nombre;
    string contrasena;
    int saldo;
    bool bici;
    bool coche;
    bool moto;

    
    // atributos publicos
    public:
    
    //constructor para crear objetos
    Usuario(){
    	
	}
	
    Usuario(string unnombre,string unacontrasena, int unsaldo, 
	    bool unabici, bool uncoche, bool unamoto){
        nombre = unnombre;
        contrasena =unacontrasena;
        saldo=unsaldo;
        bici=unabici;
        coche=uncoche;
        moto=unamoto; 
    }
     
    //Getters    
    int getSaldo(){
        return saldo;
    }
    
    string getContrasena(){
    	return contrasena;
	}
   
    string getNombre(){
    	return nombre;
	}
    
    bool getBici(){
        return bici;
    }
    
    bool getCoche(){
        return coche;
    }
    
    bool getMoto(){
        return moto;
    }

    // Setters  

    void setSaldo(int s){
        saldo = s;
    }
    
    void setNombre(string s){
    	nombre=s;
	}
	
	void setContrasena(string c){
    	contrasena=c;
	}

    string setDatos(){
        cout << "Por favor ingrese el nombre de usuario: " << endl;
        cin >> nombre;
        cout << "Por favor ingrese una contraseña: " << endl;
        cin >> contrasena;
        cout << "Se a cambiado sus datos : " << nombre << endl; 
               
    }
    
    void cambioDatos(){
        cout << "Por favor ingrese el nuevo nombre de usuario: "  << endl;
        cin >> nombre;
        cout << "Por favor ingrese su nueva contraseña: " << endl;
        cin >> contrasena;
    }
    
    bool rentarMoto(){
         cout << "El costo de rentar una moto por un moto es de $100: " << endl;
         if (saldo >= 100){
             saldo -= 100;
             moto = true;
             cout << "Haz rentado un motocicleta por el  moto" << endl;
             return true; // utilice esto para atribuir a un objeto de la subclase moto que su disponibilidad es false esto se va hacer desde el main() 
         }
         else{
             return false;
         }
             
     }

      bool rentarCoche(){
         cout << "El costo de rentar un coche por un coche es de $150: " << endl;
         if (saldo >= 150){
             saldo -= 150;
             coche = true;
             cout << "Haz rentado un coche por el precio " << endl;
             return true; // utilice esto para atribuir a un objeto de la subclase coche que su disponibilidad es false esto se va hacer desde el main() 
         }
         else
         {
            return false;
         }       
     }

    bool rentarBici()
     {
         cout << "El costo de rentar una bicicleta por un día es de $75: " << endl;
         if (saldo >= 75)
         {
             saldo -= 75;
             bici = true;
             cout << "Haz rentado una bicicleta por el día" << endl;
             return true; // utilice esto para atribuir a un objeto de la subclase bicicleta que su disponibilidad es false esto se va hacer desde el main() 
         }
         else
         {
            return false;
         }       
     }

};  
