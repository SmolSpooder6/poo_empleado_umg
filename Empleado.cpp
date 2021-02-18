#include "Persona.cpp"
#include <iostream>
using namespace std;

class Empleado : Persona{
  // atributos
  private : string puesto;
  int sueldo;
  int codigo_empleado;
  // constructor
  public :
  Empleado(){
  }
  Empleado(string nom,string ape,string dir,int tel,string pu,int su,int cod):Persona(nom,ape,dir,tel){ 
  codigo_empleado = cod;
  sueldo = su;
  puesto = pu;
  }
  
  // METODOS
  //set (modificar)
  void setCodigo_empleado(int cod){codigo_empleado = cod;}
  void setPuesto(string pu){puesto = pu;}
  void setSueldo(int su){sueldo = su;}
  
  void setNombres(string nom){nombres = nom;}
  void setApellidos(string ape){apellidos = ape;}
  void setDireccion(string dir){direccion = dir;}
  void setTelefono(int tel){telefono = tel;}
  
  //get (mostrar)
  int getCodigo_empleado(){return codigo_empleado;}
  string getPuesto(){return puesto;}
  int getSueldo(){return sueldo;}
  
  string getNombres(){return nombres;}
  string getApellidos(){return apellidos;}
  string getDireccion(){return direccion;}
  int getTelefono(){return telefono;}
  
// metodo
void mostrar2(){
	cout<<"______________________"<<endl;
	cout<<puesto<<", "<<codigo_empleado<<", "<<sueldo<<", "<<nombres<<", "<<apellidos<<", "<<direccion<<", "<<telefono<<", "<<endl;
	
}
};
