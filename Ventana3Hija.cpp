#include "Ventana3Hija.h"
#include "Ventana1Hija.h"
#include "Ventana2Hija.h"
#include "ConvertirString.h"
#include <wx/msgdlg.h>

Ventana3Hija::Ventana3Hija(wxWindow *parent, Productos *producs) : Ventana3(parent), Repo_Ingresos("Ingresos.dat") {
	p_producs = producs;
	vector<Detalle> v_ingreso = Repo_Ingresos.BuscarTodos();
	reverse(v_ingreso.begin(), v_ingreso.end());
	if(v_ingreso.size()>14) {
		v_ingreso.erase(v_ingreso.begin()+14,v_ingreso.end());
	}
	for(Detalle &d: v_ingreso) { 
		m_grilla3->AppendRows(1);
		m_grilla3->SetCellValue(m_grilla3->GetNumberRows()-1,0,to_string(d.produc.codigo));
		m_grilla3->SetCellValue(m_grilla3->GetNumberRows()-1,1,c_to_wx(d.produc.nombre));
		m_grilla3->SetCellValue(m_grilla3->GetNumberRows()-1,2,c_to_wx(d.produc.marca));
		m_grilla3->SetCellValue(m_grilla3->GetNumberRows()-1,3,to_string(d.cant));
	}
}

Ventana3Hija::~Ventana3Hija() {
	
}

//ACIONES AL PRECIONAR ENTER O PRECIONAR CONFIRMAR
void Ventana3Hija::PressEnterCantidad( wxCommandEvent& event )  {
	
	if(m_textcodigo->IsEmpty()) {
		wxMessageBox("Ingresar codigo producto","Aviso");
	} else {
		int codigo = stoi(wx_to_std(m_textcodigo->GetValue()));
		
		if(p_producs->Existe(codigo)) {
			if(m_textcantidad->IsEmpty()){
				wxMessageBox("Ingresar una cantidad","Aviso");
			} else {
				int cantidad= stoi(wx_to_std(m_textcantidad->GetValue()));
				
				Ingresos ingreso_nuevo(codigo, *p_producs, cantidad);
				ingreso_nuevo.GuardarCambios(*p_producs);
			}
		} else {
			wxMessageBox("No existe un producto con ese codigo","Error");
		}
	}
	
	//ACTUALIZO LA VENTANA SI NO APRETA MUCHAS VECES CONFIRMAR Y EL PROGRAMA SOLO AGREGA UNA VEZ
	Ventana3Hija *Ventana_Nueva = new Ventana3Hija(NULL, p_producs);
	Close();
	Ventana_Nueva->Show();
}

void Ventana3Hija::ClickConfirmar( wxCommandEvent& event )  {

	if(m_textcodigo->IsEmpty()) {
		wxMessageBox("Ingresar codigo producto","Aviso");
	} else {
		int codigo = stoi(wx_to_std(m_textcodigo->GetValue()));
		
		if(p_producs->Existe(codigo)) {
			if(m_textcantidad->IsEmpty()){
				wxMessageBox("Ingresar una cantidad","Aviso");
			} else {
				int cantidad= stoi(wx_to_std(m_textcantidad->GetValue()));
				
				Ingresos ingreso_nuevo(codigo, *p_producs, cantidad);
				ingreso_nuevo.GuardarCambios(*p_producs);
			}
		} else {
			wxMessageBox("No existe un producto con ese codigo","Error");
		}
	}
	
	//ACTUALIZO LA VENTANA SI NO APRETA MUCHAS VECES CONFIRMAR Y EL PROGRAMA SOLO AGREGA UNA VEZ
	Ventana3Hija *Ventana_Nueva = new Ventana3Hija(NULL, p_producs);
	Close();
	Ventana_Nueva->Show();
}



//BOTONES DE MOVIMIENTO --- CAMBIO DE VENTANA
void Ventana3Hija::ClickIrProductos( wxCommandEvent& event )  {
	Ventana1Hija *Ventana_Nueva = new Ventana1Hija(NULL, p_producs);
	Close();
	Ventana_Nueva->Show();
}

void Ventana3Hija::ClickIrVentas( wxCommandEvent& event )  {
	Ventana2Hija *Ventana_Nueva = new Ventana2Hija(NULL, p_producs);
	Close();
	Ventana_Nueva->Show();
}


