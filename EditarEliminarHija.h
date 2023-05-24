#ifndef EDITARELIMINARHIJA_H
#define EDITARELIMINARHIJA_H
#include "wxfb_project.h"
#include "Productos.h"

/*
ESTAN DECLARADAS LAS FUNCIONES DE LA VENTANA QUE SE ABRE AL PRECIONAR
EL BOTON EDITAR/ELIMINAR O DOBLE CLICK SOBRE UN PRODUCTO EN LA VENTANA PRINCIPAL
*/

class EditarEliminarHija : public Boton_EditarEliminarProducto {
	
private:
	Productos *p_producs;
	int m_codigo;
	int m_indice;
protected:
	void ClickActualizar( wxCommandEvent& event )  override;
	void ClickEliminar( wxCommandEvent& event )  override;
	void ClickCancelar( wxCommandEvent& event )  override;
	
public:
	EditarEliminarHija(wxWindow *parent=NULL, Productos *producs=NULL, int codigo=0);
	~EditarEliminarHija();
};

#endif

