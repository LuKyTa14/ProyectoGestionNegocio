#include "Ventas.h"
#include <cstring>
using namespace std;

Ventas::Ventas(){

}

//FUNCIONES PRINCIPALES PARA AGREGAR Y ELIMANAR UN VENTA EN LA VENTANA 2
void Ventas::AgregarDetalle(int codigo, const Productos &producs, int cantidad) {
	Producto p = producs.BuscarProducto(codigo);
	Detalle d = {p, cantidad};
	vec_detalle.push_back(d);
}

void Ventas::EliminarDetalle(int indice) {
	vec_detalle.erase(vec_detalle.begin()+indice);
}

float Ventas::CalculatTotal() {
	float total = 0;
	for (Detalle &d : vec_detalle) {
		total += d.cant * d.produc.precio;
	}
	return total;
}

//TODAS FUNCIONES LLAMADA EN CONFIRMAR VENTA HIJA Y TAMBIEN EN EL HISTORICO DE VENTAS
void Ventas::SetNombre(string nombre) {
	strcpy(n_nombre, nombre.c_str());
}

char* Ventas::GetNombre() { return n_nombre; }


void Ventas::SetApellido(string apellido) {
	strcpy(a_apellido, apellido.c_str());
}

char* Ventas::GetApellido() { return a_apellido; }


void Ventas::SetFecha(int dia, int mes, int anio) {
	d_dia = dia;
	m_mes = mes;
	a_anio = anio;
}

int Ventas::GetDia() { return d_dia; }
int Ventas::GetMes() { return m_mes;}
int Ventas::GetAnio() { return a_anio; }


//CONFIRMAR VENTA ACTUALIZA LA VENTANA 2, SE LLAMA EN CONFIRMAR VENTA HIJA
void Ventas::ConfirmarVenta(Productos &producs) {
	
	//ACTUALIZO LA VENTANA PRINCIPAL
	for (Detalle d: vec_detalle) {
		producs.QuitarStock(d.produc.codigo, d.cant);
		producs.GuardarCambios(producs.BuscarIndice(d.produc.codigo));
	}
	
}

