#include "HijaActualizarProducto.h"
#include "ConvertirString.h"

HijaActualizarProducto::HijaActualizarProducto(wxWindow *parent, Productos *producs, int codigo) : ActualizarProducto(parent) {
	p_producs = producs;
	m_codigo = codigo;
	Producto p = p_producs->BuscarProducto(m_codigo);
	m_textprecionuevo->SetValue(to_string(p.precio));
	SetTitle("Editar datos");
}

HijaActualizarProducto::~HijaActualizarProducto() {
	
}

void HijaActualizarProducto::ClickEliminar( wxCommandEvent& event )  {
	p_producs->EliminarProducto(m_codigo);
	EndModal(1);
}

void HijaActualizarProducto::ClickActualizarStock( wxCommandEvent& event )  {
	int nuevo_stock = stoi(wx_to_std(m_textstock->GetValue()));
	p_producs->AgregarStock(m_codigo, nuevo_stock);
	p_producs->GuardarCambios(p_producs->BuscarIndice(m_codigo));
	EndModal(1);
}

void HijaActualizarProducto::ClickActualizarPrecio( wxCommandEvent& event )  {
	float nuevo_precio = stof(wx_to_std(m_textprecionuevo->GetValue()));
	p_producs->ActualizarPrecio(m_codigo, nuevo_precio);
	p_producs->GuardarCambios(p_producs->BuscarIndice(m_codigo));
	EndModal(1);
}

void HijaActualizarProducto::ClickCancelar( wxCommandEvent& event )  {
	EndModal(0);
}

