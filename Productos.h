#ifndef PRODUCTOS_H
#define PRODUCTOS_H
#include <vector>
#include <string>
#include "Repositorio.h"
using namespace std;

/*
DECLARA UN PRODUCTO QUE ES UN STRUCT PARA GUARDAR EN SU PROPIO ARCHIVO Y MOSTRAR EN LA GRILLA PRINCIPAL
Y TIENE TODAS LAS FUNCIONES NECESARIAS PARA CUANDO HAYA UN NUEVO PRODUCTO/INGRESOS/MODIFICACION 
DE UN PRODUCTO YA DECLARADO REALIZE SUS ACTUALIZACIONES
*/


struct Producto {
	char nombre[200], marca[200];
	int codigo, stock;
	float precio;
};

bool operator==(Producto a, Producto b);
ostream &operator<<(ostream &o, Producto n);
bool operator<(Producto a, Producto b);

class Productos {
public:
	Productos();
	
	char* VerNombre(int i);
	char* VerMarca(int i);
	int VerCodigo(int i);
	int VerStock(int i);
	float VerPrecio(int i);
	
	//DEVUELVE LA CANTIDAD DE PRODUCTOS
	int DevolverTamanio();
	void Ordenar();
	
	//BUSCA SI EL CODIGO DE UN PRODUCTO YA ESTA DECLARADO
	bool Existe(int codigo);
	
	//PARA BUSCAR DATOS DE UN PRODUCTO EN ESPECIFICO
	Producto BuscarProducto(int codigo) const;
	int BuscarIndice(int codigo);
	
	//PARA EL BOTON AGREGAR PRODUCTO
	void AgregarProducto(Producto aux);
	
	//DOBLECLICK SOBRE UN PRODUCTO
	void EliminarProducto(int codigo);
	void ActualizarProducto(Producto aux, int indice);
	
	//PARA INGRESO DE STOCK - UTILIZADO EN LA VENTANA3
	void AgregarStock(int codigo, int cantidad);
	void QuitarStock(int codigo, int cantidad);
	
	//GUARDA LOS CAMBIOS SOBRE EL PRODUCTO EN EL ARCHIVO
	void GuardarCambios(int indice);
	
	//PARA LA BARRA BUSCAR
	Producto FiltrarPorCodigo(int codigo);
	Producto FiltrarPorNombre(string nombre);
	vector<Producto>FiltrarPorMarca(string nombre);
	
private:
	string nombre, marca;
	int codigo, stock;
	float precio;
	
	vector<Producto>V_Productos;
	Repositorio<Producto>Repo_productos;
};

#endif

