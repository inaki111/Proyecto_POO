//Carlos Iñaki Román Martinez A01702712
// En este programa vas apoder rentar diferentes vehiculos en varias partes del país. 
#include <stdlib.h>
#include <iostream>
#include "Coche.h"
#define MAX 50

using namespace std;

///Variables falssas
bool inicioSesion = false;
///Variables globales
Usuario listaUsuarios[MAX];
Coche listaCoches[MAX];
Moto listaMotos[MAX];
Bici listaBicis[MAX];

void llenadoDatos(){
	///Datos para los usuarios
Usuario usuario1("Carlos","admin", 200, false, false, false);
Usuario usuario2("Sebastian","admin", 150, true, false, false);
Usuario usuario3("Valeria","admin", 200, false, false, false);
Usuario usuario4("Mariana","admin", 100, false, true, false);
Usuario usuario5("Juan","admin", 75, false, false, true);
Usuario x;
listaUsuarios[0]=usuario1;
listaUsuarios[1]=usuario2;
listaUsuarios[2]=usuario3;
listaUsuarios[3]=usuario4;
listaUsuarios[5]=usuario5;

  ///Datos para los diferentes vehiculos
  Coche coche1("Azul", "Chevrolet", "CDMX", 
	"Disponible", x);
  Coche coche2("Verde", "NISSAN", "Toluca", 
	"Disponible", x);
  Coche coche3("Azul", "SEAT", "CDMX", 
	"Rentado", usuario1);
	
  Bici bici1("Negro", "BH", "CDMX", 
	"Rentado", usuario2);	
  Bici bici2("Negro", "BH", "CDMX", 
	"Rentado", usuario2);
   
  Moto moto1("Rojo", "Italika", "CDMX", 
	"Disponible", x);	
  Moto moto2("Negro", "Italika", "CDMX", 
	"Disponible", x);
		
listaCoches[0]=coche1;
listaCoches[1]=coche2;
listaCoches[2]=coche3;

listaMotos[0]=moto1;
listaMotos[1]=moto2;

listaBicis[0]=bici1;
listaBicis[1]=bici2;
}

void menu(){
	cout<<"1. Ingresar dinero"<<endl;
	cout<<"2. Vehiculos alquilados"<<endl;
	cout<<"3. Rentar Vehiculo"<<endl;
	cout<<"4. Salir"<<endl;
}


void switchMenu(int opcion, int ref){
	//
	int dinero, id=-1;
	bool bandera = false;
	switch(opcion){
		case 1: ///Ingresar dinero
			cout<<"Dinero a ingresar: "<<endl;
			cin>>dinero;
			listaUsuarios[ref].setSaldo(listaUsuarios[ref].getSaldo()+dinero);
			cout<<"Registro correcto"<<endl;
		break;
		case 2:
			for(int i=0;i<MAX;i++){
				if(listaCoches[i].getUsuario().getNombre()==listaUsuarios[ref].getNombre()){
					///Imprimir informacion
					bandera=true;
					cout<<"Datos: "<<endl;
					cout<<"Marca: "<<listaCoches[i].getMarca()<<endl;
					cout<<"Color: "<<listaCoches[i].getColor()<<endl;
					cout<<"Ubicacion: "<<listaCoches[i].getUbicacion()<<endl; 
				}
			}
			if(!bandera)
			  cout<<"No hay datos alquilados"<<endl;
		break;
		case 3:
			 for(int i=0;i<MAX;i++){
				if(listaCoches[i].getEstado()=="Disponible"){
					///Imprimir informacion
					bandera=true;
					cout<<"ID: "<<i<<endl;
					cout<<"Datos: "<<endl;
					cout<<"Marca: "<<listaCoches[i].getMarca()<<endl;
					cout<<"Color: "<<listaCoches[i].getColor()<<endl;
					cout<<"Ubicacion: "<<listaCoches[i].getUbicacion()<<endl; 
				}
			}
			cout<<"Ingrese al ID del carro que desea alquilar"<<endl;
			cin>>id;
			///Poner el estado del auto como rentado
			listaCoches[id].setEstado("Rentado");
			listaCoches[id].setUsuario(listaUsuarios[ref]);
			///Restar el saldo
			listaUsuarios[ref].setSaldo(listaUsuarios[ref].getSaldo()-150);
			cout<<"Auto rentado con exito"<<endl;
		break;
		case 4:
			cout<<"BYE"<<endl;
			inicioSesion = false;
		break;
		default:
			cout<<"Ingrese una opcion valida"<<endl;
			break;
	}
}

int main(){
	
	///Llenar los datos de los usuarios
	llenadoDatos();
	
	
    string usuario;
    string contrasena;
    inicioSesion = false;
	int opc=0;
    cout << "Bienvenido al programa, en este podrás rentar bicicletas en la ciudad de Querétaro" << endl;
    cout << "Por favor inicie sesion: " << endl;

    do{
        cout << "Usuario" << endl;
        cin >> usuario;
        cout << "Contrasena" << endl;
        cin >> contrasena;

        ///Recorrer la lista de usuarios 
        for(int i=0;i<MAX;i++){
        	if(listaUsuarios[i].getNombre()==usuario){
        		///Si se encuentra
        		///Validar la contraseña
        		if(listaUsuarios[i].getContrasena()==contrasena){
        			///Inicia sesion correctamente
        			cout<<"INICIO DE SESION CORRECTO"<<endl;
        			 inicioSesion = true;
        			 ////Mandar a llamar los menus
        			 do{
        			 	menu();
        			 	cout<<"Ingrese una opcion valida: "<<endl;
        			 	cin>>opc;
        			 	switchMenu(opc,i);
						system("PAUSE");
						system("CLS");			 	
					 }while(inicioSesion);
        			 
        			 ///Salir del ciclo de validar usuarios
        			 break;
				}else{
					cout<<"ERROR AL INICIAR SESION"<<endl;
				}
			}
		}

    } while(true == inicioSesion);

}