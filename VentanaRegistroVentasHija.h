#ifndef VENTANAREGISTROVENTASHIJA_H
#define VENTANAREGISTROVENTASHIJA_H
#include "wxfb_project.h"
#include "Productos.h"
#include "VentasHistorico.h"
#include "Repositorio.h"

/*
ES LA VENTANA DONDE PODEMOS VER LOS REGISTROS/HISTORIALES DE VENTAS DE NUESTRO 
PROGRAMA Y SE DECLARAN TODAS LAS ACCIONES QUE SE PUEDE REALIZAR CON ELLA
*/

class VentanaRegistroVentasHija : public Boton_RegistrosVentas {
	
private:
	Productos *p_producs;
//	Repositorio<Venta>Repo_Venta;
	VentasHistorico v_historico;
	
protected:
	void EnterTextoBuscar( wxCommandEvent& event )  override;
	void ClickBuscar( wxCommandEvent& event )  override;
	void ClickVolver( wxCommandEvent& event )  override;
	void ClickNuevaVenta( wxCommandEvent& event )  override;
	
	void BuscarEnGrilla(int pos);
	
public:
	VentanaRegistroVentasHija(wxWindow *parent=NULL, Productos *producs=NULL);
	~VentanaRegistroVentasHija();
};

#endif

