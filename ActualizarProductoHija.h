#ifndef ACTUALIZARPRODUCTOHIJA_H
#define ACTUALIZARPRODUCTOHIJA_H
#include "wxfb_project.h"
#include "Productos.h"

class ActualizarProductoHija : public Boton_ActualizarProducto {
	
private:
	Productos *p_producs;
	int m_codigo;
protected:
	void ClickActualizar( wxCommandEvent& event )  override;
	
public:
	ActualizarProductoHija(wxWindow *parent=NULL, Productos *producs=NULL, int codigo=0);
	~ActualizarProductoHija();
};

#endif

