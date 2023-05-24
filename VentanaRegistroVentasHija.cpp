#include "VentanaRegistroVentasHija.h"
#include "Ventana1Hija.h"
#include "Ventana2Hija.h"
#include "ConvertirString.h"
#include <wx/msgdlg.h>

// Repo_Venta("Ventas.dat")
VentanaRegistroVentasHija::VentanaRegistroVentasHija(wxWindow *parent, Productos *producs) : Boton_RegistrosVentas(parent) {
	p_producs = producs;
	
	vector<Venta> v_ventas = v_historico.UltimasVentas();
	
	for(Venta &v: v_ventas ){
		m_grilla5->AppendRows(1);
		
		//GENERAR UN STRING FECHA PARA PODER GUARDAR EN LA GRILLA FECHA
		string fecha = to_string(v.dia) + "/" + to_string(v.mes) + "/" + to_string(v.anio); 
		m_grilla5->SetCellValue(m_grilla5->GetNumberRows()-1,0,std_to_wx(fecha));
		
		//PASAR LOS CHAR* Y GENERAR UN ESPACIO PARA GUARDAR EN LA GRILLA COMO CLIENTE
		string s_coma = ", ";
		wxString nombre = c_to_wx(v.nombre);
		wxString coma = std_to_wx(s_coma);
		wxString apellido = c_to_wx(v.apellido);
		
		m_grilla5->SetCellValue(m_grilla5->GetNumberRows()-1,1,	apellido + coma + nombre);
		m_grilla5->SetCellValue(m_grilla5->GetNumberRows()-1,2,std_to_wx(to_string(v.total)));
		m_grilla5->SetCellValue(m_grilla5->GetNumberRows()-1,3,std_to_wx(to_string(v.cod_factura)));
	}
}

VentanaRegistroVentasHija::~VentanaRegistroVentasHija() {
	
}

//BUSCAR POR:
void VentanaRegistroVentasHija::EnterTextoBuscar( wxCommandEvent& event )  {
	int pos = m_buscarpor->GetSelection();
	BuscarEnGrilla(pos);
}

void VentanaRegistroVentasHija::ClickBuscar( wxCommandEvent& event )  {
	int pos = m_buscarpor->GetSelection();
	BuscarEnGrilla(pos);
}

void VentanaRegistroVentasHija::BuscarEnGrilla(int pos) {
	vector<Venta> v_venta;
	Venta m_venta;
	if(!(m_textbuscar->IsEmpty())){
		switch(pos) {
		case 0:
			m_grilla5->DeleteRows(0, m_grilla5->GetColSize(0));
			v_venta = v_historico.FiltrarPorFecha(wx_to_std(m_textbuscar->GetValue()));
			
			for(Venta &v: v_venta){
				m_grilla5->AppendRows(1);
				
				string fecha = to_string(v.dia) + "/" + to_string(v.mes) + "/" + to_string(v.anio); 
				m_grilla5->SetCellValue(m_grilla5->GetNumberRows()-1,0,std_to_wx(fecha));
				
				string s_coma = ", ";
				wxString nombre = c_to_wx(v.nombre);
				wxString coma = std_to_wx(s_coma);
				wxString apellido = c_to_wx(v.apellido);
				
				m_grilla5->SetCellValue(m_grilla5->GetNumberRows()-1,1,	apellido + coma + nombre);
				m_grilla5->SetCellValue(m_grilla5->GetNumberRows()-1,2,std_to_wx(to_string(v.total)));
				m_grilla5->SetCellValue(m_grilla5->GetNumberRows()-1,3,std_to_wx(to_string(v.cod_factura)));
			}
			break;
		case 1:
			m_grilla5->DeleteRows(0, m_grilla5->GetColSize(0));
			v_venta = v_historico.FiltrarPorCliente(wx_to_std(m_textbuscar->GetValue()));
			
			for(Venta &v: v_venta){
				m_grilla5->AppendRows(1);
				
				string fecha = to_string(v.dia) + "/" + to_string(v.mes) + "/" + to_string(v.anio); 
				m_grilla5->SetCellValue(m_grilla5->GetNumberRows()-1,0,std_to_wx(fecha));
				
				string s_coma = ", ";
				wxString nombre = c_to_wx(v.nombre);
				wxString coma = std_to_wx(s_coma);
				wxString apellido = c_to_wx(v.apellido);
				
				m_grilla5->SetCellValue(m_grilla5->GetNumberRows()-1,1,	apellido + coma + nombre);
				m_grilla5->SetCellValue(m_grilla5->GetNumberRows()-1,2,std_to_wx(to_string(v.total)));
				m_grilla5->SetCellValue(m_grilla5->GetNumberRows()-1,3,std_to_wx(to_string(v.cod_factura)));
			}
			break;
		case 2:
			m_grilla5->DeleteRows(0, m_grilla5->GetColSize(0));
			m_venta = v_historico.FiltrarPorFactura(stoi(wx_to_std(m_textbuscar->GetValue())));
			
			m_grilla5->AppendRows(1);
			string fecha = to_string(m_venta.dia) + "/" + to_string(m_venta.mes) + "/" + to_string(m_venta.anio); 
			m_grilla5->SetCellValue(m_grilla5->GetNumberRows()-1,0,std_to_wx(fecha));
			
			string s_coma = ", ";
			wxString nombre = c_to_wx(m_venta.nombre);
			wxString coma = std_to_wx(s_coma);
			wxString apellido = c_to_wx(m_venta.apellido);
			
			m_grilla5->SetCellValue(m_grilla5->GetNumberRows()-1,1,	apellido + coma + nombre);
			m_grilla5->SetCellValue(m_grilla5->GetNumberRows()-1,2,std_to_wx(to_string(m_venta.total)));
			m_grilla5->SetCellValue(m_grilla5->GetNumberRows()-1,3,std_to_wx(to_string(m_venta.cod_factura)));
		}
		
	} else {
		m_grilla5->DeleteRows(0, m_grilla5->GetColSize(0));
		v_venta = v_historico.UltimasVentas();
		for(Venta &v: v_venta){
			m_grilla5->AppendRows(1);
			
			string fecha = to_string(v.dia) + "/" + to_string(v.mes) + "/" + to_string(v.anio); 
			m_grilla5->SetCellValue(m_grilla5->GetNumberRows()-1,0,std_to_wx(fecha));
			
			string s_coma = ", ";
			wxString nombre = c_to_wx(v.nombre);
			wxString coma = std_to_wx(s_coma);
			wxString apellido = c_to_wx(v.apellido);
			
			m_grilla5->SetCellValue(m_grilla5->GetNumberRows()-1,1,	apellido + coma + nombre);
			m_grilla5->SetCellValue(m_grilla5->GetNumberRows()-1,2,std_to_wx(to_string(v.total)));
			m_grilla5->SetCellValue(m_grilla5->GetNumberRows()-1,3,std_to_wx(to_string(v.cod_factura)));
		}
	}
}

//BOTONES DE MOVIMIENTO --- CAMBIO DE VENTANA
void VentanaRegistroVentasHija::ClickVolver( wxCommandEvent& event )  {
	Ventana1Hija *Ventana_Nueva = new Ventana1Hija(NULL, p_producs);
	Close();
	Ventana_Nueva->Show();
}

void VentanaRegistroVentasHija::ClickNuevaVenta( wxCommandEvent& event )  {
	Ventana2Hija *Ventana_Nueva = new Ventana2Hija(NULL, p_producs);
	Close();
	Ventana_Nueva->Show();
}


