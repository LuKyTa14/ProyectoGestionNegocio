#include "EditarEliminarHija.h"
#include "ConvertirString.h"
#include <wx/msgdlg.h>

EditarEliminarHija::EditarEliminarHija(wxWindow *parent, Productos *producs, int codigo) : Boton_EditarEliminarProducto(parent) {
	p_producs = producs;
	m_codigo = codigo;
	m_indice = p_producs->BuscarIndice(m_codigo);
	
	Producto p = p_producs->BuscarProducto(m_codigo);
	m_textnombre->SetValue(std_to_wx(p.nombre));
	m_textmarca->SetValue(std_to_wx(p.marca));
	m_textcodigo->SetValue(to_string(p.codigo));
	m_textstock->SetValue(to_string(p.stock));
	m_textprecio->SetValue(std_to_wx(to_string(p.precio)));
	SetTitle("Editar Producto");
}

//BOTON ELIMINAR
void EditarEliminarHija::ClickEliminar( wxCommandEvent& event )  {
	p_producs->EliminarProducto(m_codigo);
	EndModal(1);
}

//BOTON ACTUALIZAR
void EditarEliminarHija::ClickActualizar( wxCommandEvent& event ){
	if( m_textcodigo->IsEmpty() or m_textmarca->IsEmpty() or m_textnombre->IsEmpty()
	   or m_textprecio->IsEmpty() or m_textstock->IsEmpty()) {
		wxMessageBox("Por favor complete todos los campos", "Aviso");
	} else {
		Producto auxiliar;
		strcpy(auxiliar.nombre,(wx_to_std(m_textnombre->GetValue()).c_str()));
		strcpy(auxiliar.marca,(wx_to_std(m_textmarca->GetValue()).c_str()));
		auxiliar.codigo = stoi(wx_to_std(m_textcodigo->GetValue()));
		auxiliar.stock = stoi(wx_to_std(m_textstock->GetValue()));
		auxiliar.precio = stoi(wx_to_std(m_textprecio->GetValue()));
		
		p_producs->ActualizarProducto(auxiliar, m_indice);
		p_producs->GuardarCambios(m_indice);
		EndModal(1);
	}
}

//BOTON CANCELAR
void EditarEliminarHija::ClickCancelar( wxCommandEvent& event )  {
	EndModal(0);
}


EditarEliminarHija::~EditarEliminarHija() {
	
}
