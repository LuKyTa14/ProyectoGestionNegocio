#ifndef CONFIRMARVENTAHIJA_H
#define CONFIRMARVENTAHIJA_H
#include "wxfb_project.h"
#include "Productos.h"
#include "Ventas.h"
#include "VentasHistorico.h"

/*
ESTAN DECLARADAS LAS FUNCIONES DE LA VENTANA QUE SE ABRE AL PRECIONAR
EL BOTON CONFIRMAR VENTA EN LA VENTANA 3 (INGRESAR VENTA)
*/

class ConfirmarVentaHija : public Boton_ConfirmarVenta {
	
private:
	Productos *p_producs;
	Ventas *v_venta;
	VentasHistorico h_historico;
protected:
	void ClickCancelar( wxCommandEvent& event )  override;
	void ClickConfirmar( wxCommandEvent& event )  override;
	
public:
	ConfirmarVentaHija(wxWindow *parent=NULL, 	Productos *producs=NULL, Ventas *venta=NULL);
	~ConfirmarVentaHija();
};

#endif

