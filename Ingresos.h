#ifndef INGRESOS_H
#define INGRESOS_H
#include <vector>
#include "Productos.h"
#include "Repositorio.h"
#include "Ventas.h"
using namespace std;

/*
DECLARA TODAS LAS FUNCIONES NECESARIAS PARA CUANDO HAY UN INGRESO NUEVO ACTUALIZE
LA VENTANA PRINCIPAL DE PRODUCTOS Y GUARDE UN SU PROPIO ARCHIVO TODOS LOS
INGRESOS CORRESPONDIENTES. ADEMAS ACTUALIZA SU GRILLA ULTIMOS INGRESOS

LOS GUARDA EN UN VECTOR <DETALLE> (DECLARADO EN Ventas.h)
*/

class Ingresos {
public:
	Ingresos(int codigo, const Productos &producs, int cantidad);
	
	//ACTUALIZA LA GRILLA PRINCIPAL CUANDO HAY UN INGRESO
	void GuardarCambios(Productos &producs);
	
private:
	Producto vec_prod;
	int m_cantidad;
	Repositorio<Detalle>Repo_Ingresos;
};

#endif

