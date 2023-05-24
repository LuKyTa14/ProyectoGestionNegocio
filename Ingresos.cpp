#include "Ingresos.h"

Ingresos::Ingresos(int codigo, const Productos &producs, int cantidad) : Repo_Ingresos("Ingresos.dat") {
	Producto p = producs.BuscarProducto(codigo);
	vec_prod = p;
	m_cantidad = cantidad;
}

void Ingresos::GuardarCambios(Productos &producs) {
	Detalle d = {vec_prod, m_cantidad};
	Repo_Ingresos.GuardarNuevo(d);
	
	//ACTUALIZO GRILLA PRINCIPAL
	producs.AgregarStock(vec_prod.codigo, m_cantidad);
	producs.GuardarCambios(producs.BuscarIndice(vec_prod.codigo));
}

