// cambio para el repositorio remoto
#include "Cliente.cpp"
#include "Empleado.cpp"
#include <iostream>
using namespace std;
main(){
	string nit,nombres,apellidos,direccion,puesto;
	int telefono;
	int sueldo;
	int codigo_empleado;
	cout<<"Ingrese Nit: ";
	cin>>nit;
	cout<<"Ingrese Nombres: ";
	cin>>nombres;
	cout<<"Ingrese Apellidos: ";
	cin>>apellidos;
	cout<<"Ingrese Direccion: ";
	cin>>direccion;
	cout<<"Ingrese Telefono: ";
	cin>>telefono;
	// instanciar un objeto
	Cliente obj = Cliente(nombres,apellidos,direccion,telefono,nit);
	obj.mostrar();
	//cout<<"Ingrese Nit: ";
	//cin>>nit;
	//obj.setNit(nit);
	obj.mostrar();
	
	
	cout<<"Ingrese Codigo del Empleado: ";
	cin>>codigo_empleado;
	cout<<"Ingrese Sueldo: ";
	cin>>sueldo;
	cout<<"Ingrese Puesto: ";
	cin>>puesto;
	
	Empleado obj2 = Empleado(nombres,apellidos,direccion,telefono,puesto,sueldo,codigo_empleado);
	obj2.mostrar2();
	// instanciar un objeto y utilizar get and set
	
/*	Cliente obj = Cliente();
	obj.setNit(nit);
	obj.setNombres(nombres);
	obj.setApellidos(apellidos);
	obj.setDireccion(direccion);
	obj.setTelefono(telefono);
	//obj.mostrar();
	cout<<"Nit: "<<obj.getNit()<<endl;
	cout<<"Nombres: "<<obj.getNombres()<<endl;
	cout<<"Apellidos: "<<obj.getApellidos()<<endl;
	cout<<"Direccion: "<<obj.getDireccion()<<endl;
	cout<<"Telefono: "<<obj.getTelefono()<<endl;
*/	

}
