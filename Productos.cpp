#include "Productos.h"
#include <fstream>

#include <algorithm>
#include <iomanip>
#include <cstring>
using namespace std;

bool operator==(Producto a, Producto b) {
	return a.codigo == b.codigo;
}

ostream &operator<<(ostream &o, Producto n){
	o<<n.nombre<<"  "<<n.stock<<"  "<<n.precio<<endl;
	return o;
}

bool operator< (Producto a, Producto b) {
	return a.codigo < b.codigo;
}

Productos::Productos() : Repo_productos("productos.dat"){
	V_Productos = Repo_productos.BuscarTodos();
}


//VER DATALLES DE LOS PRODUCTOS
char* Productos::VerNombre(int i) { return V_Productos[i].nombre;}
char* Productos::VerMarca(int i) { return V_Productos[i].marca;}
int Productos::VerCodigo(int i){ return V_Productos[i].codigo;}
int Productos::VerStock(int i){ return V_Productos[i].stock;}
float Productos::VerPrecio(int i){ return V_Productos[i].precio;}

//TAMAÑO DEL ARREGLO
int Productos::DevolverTamanio(){
	return V_Productos.size();
}
//ORDENAR EL ARREGLO
void Productos::Ordenar() {
	sort(V_Productos.begin(),V_Productos.end());
}


//BUSCAR
Producto Productos::BuscarProducto(int codigo)const {
	Producto auxiliar;
	for(int i=0;i<V_Productos.size();i++) { 
		if(V_Productos[i].codigo==codigo){
			auxiliar = V_Productos[i];
		}
	} return auxiliar;
}

int Productos::BuscarIndice(int codigo) {
		int auxiliar;
	for(int i=0;i<V_Productos.size();i++) { 
		if(V_Productos[i].codigo==codigo){
			auxiliar = i;
		}
	} return auxiliar;
}

//EXISTE
bool Productos::Existe(int codigo) {
	bool existe = false;
	for(int i=0;i<V_Productos.size();i++) { 
		if(V_Productos[i].codigo == codigo) {
			existe = true;
		}
	} return existe;
}

//AGREGAR Y ELIMINAR PRODUCTO
void Productos::AgregarProducto(Producto aux){
	V_Productos.push_back(aux);
	Repo_productos.GuardarNuevo(aux);
}

void Productos::EliminarProducto(int codigo){
	Producto p = BuscarProducto(codigo);
	auto it = remove(V_Productos.begin(), V_Productos.end(),p);
	V_Productos.erase(it);
	Repo_productos.EliminarPermanente(p);
}

//ACTUALIZAR Y GUARDAR CAMBIOS EN PRODUCTOS
void Productos::ActualizarProducto(Producto aux, int indice) {
	V_Productos[indice] = aux;
	Repo_productos.ActualizarParametros(V_Productos[indice], indice);
}


void Productos::AgregarStock(int codigo, int cantidad) {
	int i = BuscarIndice(codigo);
	V_Productos[i].stock += cantidad;
	Repo_productos.ActualizarParametros(V_Productos[i], i);
}

void Productos::QuitarStock(int codigo, int cantidad) {
	int i = BuscarIndice(codigo);
	V_Productos[i].stock -= cantidad;
	Repo_productos.ActualizarParametros(V_Productos[i], i);
}

void Productos::GuardarCambios(int indice){
	Repo_productos.ActualizarParametros(V_Productos[indice], indice);
}

//FILTRAR POR ------- CODIGO, NOMBRE, MARCA
Producto Productos::FiltrarPorCodigo(int codigo) {
	Producto aux;
	for(int i=0;i<V_Productos.size();i++) { 
		int A = V_Productos[i].codigo;
		if(A==codigo) {
			aux = V_Productos[i];
			break;
		}
	} return aux;
}

Producto Productos::FiltrarPorNombre(string nombre) {
	Producto aux;
	for(int i=0;i<V_Productos.size();i++) { 
		string A = V_Productos[i].nombre;
		if(A==nombre) {
			aux = V_Productos[i];
			break;
		}
	} return aux;
}

vector<Producto> Productos::FiltrarPorMarca (string nombre) {
	vector<Producto>v_aux;
	for(int i=0;i<V_Productos.size();i++) { 
		string A = V_Productos[i].marca;
		if(A==nombre) {
			v_aux.push_back(V_Productos[i]);
		}
	} return v_aux;
}
