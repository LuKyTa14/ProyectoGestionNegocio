#include "ActualizarProductoHija.h"
#include <wx/msgdlg.h>
#include "ConvertirString.h"

ActualizarProductoHija::ActualizarProductoHija(wxWindow *parent, Productos *producs, int codigo) : 
	Boton_ActualizarProducto(parent) {
	
	p_producs = producs;
	m_codigo = codigo;
	Producto p = p_producs->BuscarProducto(m_codigo);
	m_textprecionuevo->SetValue(to_string(p.precio));
}

void ActualizarProductoHija::ClickActualizar( wxCommandEvent& event )  {
	if(m_textcodigo->IsEmpty() or m_textprecionuevo->IsEmpty()){
	float nuevo_precio = stof(wx_to_std(m_textprecionuevo->GetValue()));
	p_producs->ActualizarPrecio(m_codigo, nuevo_precio);
	p_producs->GuardarCambios(p_producs->BuscarIndice(m_codigo));
	EndModal(1);
}

ActualizarProductoHija::~ActualizarProductoHija() {
	
}

