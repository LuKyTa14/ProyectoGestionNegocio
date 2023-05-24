#ifndef HIJAACTUALIZARPRODUCTO_H
#define HIJAACTUALIZARPRODUCTO_H
#include "wxfb_project.h"
#include "Productos.h"

class HijaActualizarProducto : public ActualizarProducto {
	
private:
	Productos *p_producs;
	int m_codigo;
protected:
	void ClickCancelar( wxCommandEvent& event )  override;
	void ClickActualizarStock( wxCommandEvent& event )  override;
	void ClickActualizarPrecio( wxCommandEvent& event )  override;
	void ClickEliminar( wxCommandEvent& event )  override;
	
public:
	HijaActualizarProducto(wxWindow *parent=NULL, Productos *producs=NULL, int codigo=0);
	~HijaActualizarProducto();
};

#endif

