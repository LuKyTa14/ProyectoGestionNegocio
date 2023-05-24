#include "ConfirmarVentaHija.h"
#include <wx/msgdlg.h>
#include "ConvertirString.h"
#include "Ventana2Hija.h"

ConfirmarVentaHija::ConfirmarVentaHija(wxWindow *parent, Productos *producs, Ventas *venta) : Boton_ConfirmarVenta(parent) {
	p_producs = producs;
	v_venta = venta;
}

void ConfirmarVentaHija::ClickCancelar( wxCommandEvent& event )  {
	EndModal(0);
}

void ConfirmarVentaHija::ClickConfirmar( wxCommandEvent& event )  {
	
	if(m_textnombre->IsEmpty() or m_textapellido->IsEmpty() or m_textdia->IsEmpty()
	   or m_textmes->IsEmpty() or m_textanio->IsEmpty()) {
		wxMessageBox("Ingrese todos los datos correspondientes", "Aviso");
	} else {
		
		int dia = stoi(wx_to_std(m_textdia->GetValue()));
		int mes = stoi(wx_to_std(m_textmes->GetValue()));
		int anio = stoi(wx_to_std(m_textanio->GetValue()));
		
		v_venta->SetNombre(wx_to_std(m_textnombre->GetValue()));
		v_venta->SetApellido(wx_to_std(m_textapellido->GetValue()));
		v_venta->SetFecha(dia, mes, anio);
		
		h_historico.AgregarNuevaVenta(*v_venta);
		v_venta->ConfirmarVenta(*p_producs);
		
		//ACTUALIZO LA VENTANA PARA HACER UNA NUEVA VENTA
		Ventana2Hija *Ventana_Nueva = new Ventana2Hija(NULL, p_producs);
		GetParent()->Close();
		Ventana_Nueva->Show();
		
		EndModal(1);
	}
	
}

ConfirmarVentaHija::~ConfirmarVentaHija() {
	
}

