#ifndef VENTASHISTORICO_H
#define VENTASHISTORICO_H
#include "Repositorio.h"
#include "Ventas.h"

/*
DECLARA UN STRUCT VENTA Y CREA TODAS LAS FUNCIONES NECESARIAS PARA CUANDO HAY UNA VENTA CONFIRMADA
GUARDE UN SU PROPIO ARCHIVO LOS DETALLES CORRESPONDIENTES. GENERANDO SU CODIGO DE
FACTURACION PROXIMO. TAMBIEN ESTAN LOS METODOS PARA FILTRAR EN EL REGISTRO HISTORICO
*/

struct Venta{
	int dia, mes, anio;
	char nombre[50];
	char apellido[50];
	float total;
	int cod_factura;
};

class VentasHistorico {

public:
	VentasHistorico();
	
	//AGREGA UNA NUEVA VENTA Y LA GUARDA EN EL ARCHIVO
	void AgregarNuevaVenta(Ventas v);
	
	//GENERA UN CODIGO DISTINTO PARA CADA VENTA
	int nuevo_codigo();
	
	//BUSCA LAS ULTIMAS VENTAS
	vector<Venta> UltimasVentas();
	
	//FILTRADO DE UNA VENTA
	vector<Venta> FiltrarPorFecha (string fecha);
	vector<Venta> FiltrarPorCliente(string nombre);
	Venta FiltrarPorFactura(int codigo);
	
private:
	Repositorio<Venta> Repo_Venta;
	int codigo;
};

#endif

