#include "Ventana2Hija.h"
#include "Ventana1Hija.h"
#include "Ventana3Hija.h"
#include <wx/msgdlg.h>
#include "ConvertirString.h"
#include "ConfirmarVentaHija.h"

Ventana2Hija::Ventana2Hija(wxWindow *parent, Productos *producs) : Ventana2(parent) {
	p_producs = producs;
}

Ventana2Hija::~Ventana2Hija() {
	
}


//BOTONES DE MOVIMIENTO --- CAMBIO DE VENTANA
void Ventana2Hija::ClickIrProductos( wxCommandEvent& event )  {
	Ventana1Hija *Ventana_Nueva = new Ventana1Hija(NULL, p_producs);
	Close();
	Ventana_Nueva->Show();
}

void Ventana2Hija::ClickIrIngresos( wxCommandEvent& event )  {
	Ventana3Hija *Ventana_Nueva = new Ventana3Hija(NULL, p_producs);
	Close();
	Ventana_Nueva->Show();
}

void Ventana2Hija::PressEnterCantidad( wxCommandEvent& event )  {
	if(m_textcodigo->IsEmpty()) {
		wxMessageBox("Ingresar codigo producto","Aviso");
	} else {
		int codigo = stoi(wx_to_std(m_textcodigo->GetValue()));
		if(p_producs->Existe(codigo)) {
			if(m_textcantidad->IsEmpty()){
				wxMessageBox("Ingresar una cantidad","Aviso");
			} else {
				int cantidad= stoi(wx_to_std(m_textcantidad->GetValue()));
				Producto p = p_producs->BuscarProducto(codigo);
				
				if(p.stock < cantidad){
					wxMessageBox("No hay suficiente stock","Aviso");
				} else {
					
					v_venta.AgregarDetalle(codigo, *p_producs, cantidad);
					Producto agregar = p_producs->BuscarProducto(codigo);
					
					m_grilla2->AppendRows(1);
					m_grilla2->SetCellValue(m_grilla2->GetNumberRows()-1,0, to_string(codigo));
					m_textcodigo->SetValue("");
					m_grilla2->SetCellValue(m_grilla2->GetNumberRows()-1,1, c_to_wx(agregar.nombre));
					m_grilla2->SetCellValue(m_grilla2->GetNumberRows()-1,2, c_to_wx(agregar.marca));
					m_grilla2->SetCellValue(m_grilla2->GetNumberRows()-1,3, to_string(cantidad));
					m_textcantidad->SetValue("");
					m_grilla2->SetCellValue(m_grilla2->GetNumberRows()-1,4, std_to_wx(to_string((agregar.precio))));
					
					//CALCULAMOS EL TOTAL
					m_texttotal->SetValue(to_string(v_venta.CalculatTotal()));
				}
			}
			
		} else{
			wxMessageBox("No existe un producto con ese codigo","Aviso");
		}
	}
}

void Ventana2Hija::ClickConfirmar( wxCommandEvent& event )  {
	if(m_textcodigo->IsEmpty()) {
		wxMessageBox("Ingresar codigo producto","Aviso");
	} else {
		int codigo = stoi(wx_to_std(m_textcodigo->GetValue()));
		if(p_producs->Existe(codigo)) {
			if(m_textcantidad->IsEmpty()){
				wxMessageBox("Ingresar una cantidad","Aviso");
			} else {
				int cantidad= stoi(wx_to_std(m_textcantidad->GetValue()));
				Producto p = p_producs->BuscarProducto(codigo);
				
				if(p.stock < cantidad){
					wxMessageBox("No hay suficiente stock","Aviso");
				} else {
					
					v_venta.AgregarDetalle(codigo, *p_producs, cantidad);
					Producto agregar = p_producs->BuscarProducto(codigo);
					
					m_grilla2->AppendRows(1);
					m_grilla2->SetCellValue(m_grilla2->GetNumberRows()-1,0, to_string(codigo));
					m_textcodigo->SetValue("");
					m_grilla2->SetCellValue(m_grilla2->GetNumberRows()-1,1, c_to_wx(agregar.nombre));
					m_grilla2->SetCellValue(m_grilla2->GetNumberRows()-1,2, c_to_wx(agregar.marca));
					m_grilla2->SetCellValue(m_grilla2->GetNumberRows()-1,3, to_string(cantidad));
					m_textcantidad->SetValue("");
					m_grilla2->SetCellValue(m_grilla2->GetNumberRows()-1,4, std_to_wx(to_string((agregar.precio))));
					
					//CALCULAMOS EL TOTAL
					m_texttotal->SetValue(to_string(v_venta.CalculatTotal()));
				}
			}
			
		} else{
			wxMessageBox("No existe un producto con ese codigo","Aviso");
		}
	}
}

void Ventana2Hija::DobleClickProducto( wxGridEvent& event )  {
	event.Skip();
}

void Ventana2Hija::ClickConfirmarVenta( wxCommandEvent& event )  {
	ConfirmarVentaHija win(this, p_producs, &v_venta);
	if(win.ShowModal()==1) {
		win.Close();
	}
}
