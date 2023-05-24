#ifndef VENTANA2HIJA_H
#define VENTANA2HIJA_H
#include "wxfb_project.h"
#include "Ventas.h"
#include "Productos.h"


/*
ES LA SEGUNDA VENTANA (INGRESAR VENTA) DE NUESTRO PROGRAMA Y SE DECLARAN TODAS LAS ACCIONES
QUE SE PUEDE REALIZAR CON ELLA
*/

class Ventana2Hija : public Ventana2 {
	
private:
	Productos *p_producs;
	Ventas v_venta;
protected:
	void PressEnterCantidad( wxCommandEvent& event )  override;
	void ClickConfirmar( wxCommandEvent& event )  override;
	void DobleClickProducto( wxGridEvent& event )  override;
	void ClickConfirmarVenta( wxCommandEvent& event )  override;
	void ClickIrProductos( wxCommandEvent& event )  override;
	void ClickIrIngresos( wxCommandEvent& event )  override;
	
public:
	Ventana2Hija(wxWindow *parent=NULL, Productos *producs=NULL);
	~Ventana2Hija();
};

#endif

