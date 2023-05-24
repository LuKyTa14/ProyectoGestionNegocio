#ifndef VENTAS_H
#define VENTAS_H
#include "Productos.h"
#include "Repositorio.h"

/*
DECLARA EL STRUCT DETALLE USADO EN INGRESOS Y EN VENTAS
Y TIENE TODAS LAS FUNCIONES NECESARIAS PARA CUANDO HAY UNA VENTA NUEVA ACTUALIZE
LA VENTANA PRINCIPAL DE PRODUCTOS
*/

//STRUCT USADO PARA DETALLAR UN INGRESO O UNA VENTA
struct Detalle {
	Producto produc;
	int cant;
};

class Ventas {
public:
	Ventas();
	void VerCantidad();
	
	//FUNCIONES PRINCIPALES PARA AGREGAR Y ELIMANAR UN VENTA EN LA VENTANA 2
	void AgregarDetalle(int codigo, const Productos &producs, int cantidad);
	void EliminarDetalle(int indice);
	float CalculatTotal();
	
	//TODAS FUNCIONES LLAMADA EN CONFIRMAR VENTA HIJA Y TAMBIEN EN EL HISTORICO DE VENTAS
	void SetNombre(string nombre);
	void SetApellido(string apellido);
	void SetFecha(int dia, int mes, int anio);
	
	char* GetNombre();
	char* GetApellido();
	int GetDia();
	int GetMes();
	int GetAnio();
	
	//CONFIRMAR VENTA ACTUALIZA LA VENTANA 2, SE LLAMA EN CONFIRMAR VENTA HIJA
	void ConfirmarVenta(Productos &producs);

private:
	vector<Detalle> vec_detalle;
	int d_dia, m_mes, a_anio;
	char n_nombre[50];
	char a_apellido[50];
};

#endif

