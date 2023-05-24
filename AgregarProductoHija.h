#ifndef AGREGARPRODUCTOHIJA_H
#define AGREGARPRODUCTOHIJA_H
#include "wxfb_project.h"
#include "Productos.h"

/*
ESTAN DECLARADAS LAS FUNCIONES DE LA VENTANA QUE SE ABRE AL PRECIONAR
EL BOTON AGREGAR PRODUCTO EN LA VENTANA PRINCIPAL
*/

class AgregarProductoHija : public Boton_AgregarProducto {
	
private:
	Productos *p_producs;
protected:
	void ClickCancelar( wxCommandEvent& event )  override;
	void ClickAgregar( wxCommandEvent& event )  override;
	
public:
	AgregarProductoHija(wxWindow *parent=NULL, Productos *producs=NULL);
	~AgregarProductoHija();
};

#endif

