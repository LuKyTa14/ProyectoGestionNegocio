#include "Ventana1Hija.h"
#include "ConvertirString.h"
#include "AgregarProductoHija.h"
#include <wx/icon.h>
#include "Ventana2Hija.h"
#include "Ventana3Hija.h"
#include "EditarEliminarHija.h"
#include "VentanaRegistroVentasHija.h"


Ventana1Hija::Ventana1Hija(wxWindow *parent, Productos *producs) : Ventana1(parent) {
	this->producs = producs;
	this->ActualizarGrilla();
}


void Ventana1Hija::ActualizarGrilla(){
	if(m_grilla->GetNumberRows()>0)
		m_grilla->DeleteRows(0,m_grilla->GetColSize(0));
	producs->Ordenar();
	for(int i=0;i<producs->DevolverTamanio();i++) { 
		m_grilla->AppendRows(1);
		m_grilla->SetCellValue(m_grilla->GetNumberRows()-1,0,to_string(producs->VerCodigo(i)));
		m_grilla->SetCellValue(m_grilla->GetNumberRows()-1,1,c_to_wx(producs->VerNombre(i)));
		m_grilla->SetCellValue(m_grilla->GetNumberRows()-1,2,c_to_wx(producs->VerMarca(i)));
		m_grilla->SetCellValue(m_grilla->GetNumberRows()-1,3,to_string(producs->VerStock(i)));
		m_grilla->SetCellValue(m_grilla->GetNumberRows()-1,4,std_to_wx(to_string(producs->VerPrecio(i))));
	}
}

Ventana1Hija::~Ventana1Hija() {
	
}

//BOTON AGREGRAR PRODUCTO
void Ventana1Hija::ClickAgregarProducto( wxCommandEvent& event )  {
	AgregarProductoHija win(this, producs);
	if(win.ShowModal()==1){
		ActualizarGrilla();
	}
}

//BOTON EDITAR O DOBLECLICK PARA MODIFICAR DATOS
void Ventana1Hija::ClickEditarEliminar( wxCommandEvent& event )  {
	int indice = m_grilla->GetGridCursorRow();
	int codigo = producs->VerCodigo(indice);
	
	EditarEliminarHija win(this, producs, codigo);
	if(win.ShowModal()==1){
		ActualizarGrilla();
	}
}

void Ventana1Hija::DobleClickProducto( wxGridEvent& event )  {
	int indice = m_grilla->GetGridCursorRow();
	int codigo = producs->VerCodigo(indice);
	
	EditarEliminarHija win(this, producs, codigo);
	if(win.ShowModal()==1){
		ActualizarGrilla();
	}
}

//ACCIONES EN LA BARRA BUSCAR
void Ventana1Hija::ClickBuscar( wxCommandEvent& event )  {
	int pos = m_buscarpor->GetSelection();
	BuscarEnGrilla(pos);
}

void Ventana1Hija::EnterTextoBuscar( wxCommandEvent& event )  {
	int pos = m_buscarpor->GetSelection();
	BuscarEnGrilla(pos);
}

void Ventana1Hija::BuscarEnGrilla(int pos){
	Producto aux;
	vector<Producto>v_aux;
	if(!(m_textbuscar->IsEmpty())){
		switch (pos) {
		case 0:
			m_grilla->DeleteRows(0, m_grilla->GetColSize(0));
			aux = producs->FiltrarPorCodigo(stoi(wx_to_std(m_textbuscar->GetValue())));
			m_grilla->AppendRows(1);
			m_grilla->SetCellValue(m_grilla->GetNumberRows()-1,0, to_string(aux.codigo));
			m_grilla->SetCellValue(m_grilla->GetNumberRows()-1,1, c_to_wx(aux.nombre));
			m_grilla->SetCellValue(m_grilla->GetNumberRows()-1,2, c_to_wx(aux.marca));
			m_grilla->SetCellValue(m_grilla->GetNumberRows()-1,3, to_string(aux.stock));
			m_grilla->SetCellValue(m_grilla->GetNumberRows()-1,4, std_to_wx(to_string(aux.precio)));
			break;
		case 1:
			m_grilla->DeleteRows(0, m_grilla->GetColSize(0));
			aux = producs->FiltrarPorNombre(wx_to_std(m_textbuscar->GetValue()));
			m_grilla->AppendRows(1);
			m_grilla->SetCellValue(m_grilla->GetNumberRows()-1,0, to_string(aux.codigo));
			m_grilla->SetCellValue(m_grilla->GetNumberRows()-1,1, c_to_wx(aux.nombre));
			m_grilla->SetCellValue(m_grilla->GetNumberRows()-1,2, c_to_wx(aux.marca));
			m_grilla->SetCellValue(m_grilla->GetNumberRows()-1,3, to_string(aux.stock));
			m_grilla->SetCellValue(m_grilla->GetNumberRows()-1,4, std_to_wx(to_string(aux.precio)));
			break;
		case 2:
			m_grilla->DeleteRows(0, m_grilla->GetColSize(0));
			v_aux = producs->FiltrarPorMarca(wx_to_std(m_textbuscar->GetValue()));
			for(int i=0;i<v_aux.size();i++) { 
				m_grilla->AppendRows(1);
				m_grilla->SetCellValue(m_grilla->GetNumberRows()-1,0, to_string(v_aux[i].codigo));
				m_grilla->SetCellValue(m_grilla->GetNumberRows()-1,1, c_to_wx(v_aux[i].nombre));
				m_grilla->SetCellValue(m_grilla->GetNumberRows()-1,2, c_to_wx(v_aux[i].marca));
				m_grilla->SetCellValue(m_grilla->GetNumberRows()-1,3, to_string(v_aux[i].stock));
				m_grilla->SetCellValue(m_grilla->GetNumberRows()-1,4, std_to_wx(to_string(v_aux[i].precio)));
			}
			break;
		}
	} else {
		ActualizarGrilla();
	}
}

//BOTONES DE MOVIMIENTO --- CAMBIO DE VENTANA
void Ventana1Hija::ClickIrVentas( wxCommandEvent& event )  {
	Ventana2Hija *Ventana_Nueva = new Ventana2Hija(NULL, producs);
	Close();
	Ventana_Nueva->Show();
}

void Ventana1Hija::ClickIrIngresos( wxCommandEvent& event )  {
	Ventana3Hija *Ventana_Nueva = new Ventana3Hija(NULL, producs);
	Close();
	Ventana_Nueva->Show();
}

void Ventana1Hija::ClickRegistros( wxCommandEvent& event )  {
	VentanaRegistroVentasHija *Ventana_Nueva = new VentanaRegistroVentasHija(NULL, producs);
	Close();
	Ventana_Nueva->Show();
}

