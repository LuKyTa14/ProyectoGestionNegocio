#include "AgregarProductoHija.h"
#include "ConvertirString.h"
#include "Productos.h"
#include <wx/msgdlg.h>

AgregarProductoHija::AgregarProductoHija(wxWindow *parent, Productos *producs) : Boton_AgregarProducto(parent) {
	p_producs=producs;
	SetTitle("Cargar nuevo producto");
}

//BOTON CANCELAR
void AgregarProductoHija::ClickCancelar( wxCommandEvent& event )  {
	EndModal(0);
}

//BOTON AGREGAR PRODUCTO
void AgregarProductoHija::ClickAgregar( wxCommandEvent& event )  {
	if( m_textcodigo->IsEmpty() or m_textmarca->IsEmpty() or m_textnombre->IsEmpty()
	   or m_textprecio->IsEmpty() or m_textstock->IsEmpty()) {
		wxMessageBox("Por favor complete todos los campos", "Aviso");
	} else {
		int cod = stoi(wx_to_std(m_textcodigo->GetValue()));
		if(p_producs->Existe(cod)) {
			wxMessageBox ("Ya existe un producto con este codigo, por favor ingrese uno distinto"); 
		} else{
			Producto auxiliar;
			strcpy(auxiliar.nombre,(wx_to_std(m_textnombre->GetValue()).c_str()));
			strcpy(auxiliar.marca,(wx_to_std(m_textmarca->GetValue()).c_str()));
			auxiliar.codigo = stoi(wx_to_std(m_textcodigo->GetValue()));
			auxiliar.stock = stoi(wx_to_std(m_textstock->GetValue()));
			auxiliar.precio = stoi(wx_to_std(m_textprecio->GetValue()));
			p_producs->AgregarProducto(auxiliar);
			EndModal(1);
		}
	}
}

AgregarProductoHija::~AgregarProductoHija() {
	
}


