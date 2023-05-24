#ifndef VENTANA1HIJA_H
#define VENTANA1HIJA_H
#include "wxfb_project.h"
#include "Productos.h"
#include <vector>
#include "Repositorio.h"
using namespace std;

/*
ES LA VENTANA PRINCIPAL DE NUESTRO PROGRAMA Y SE DECLARAN TODAS LAS ACCIONES
QUE SE PUEDE REALIZAR CON ELLA
*/

class Ventana1Hija : public Ventana1 {
	
private:
	Productos *producs;
	
protected:
	void ClickRegistros( wxCommandEvent& event )  override;
	void DobleClickProducto( wxGridEvent& event )  override;
	void ClickEditarEliminar( wxCommandEvent& event )  override;
	void EnterTextoBuscar( wxCommandEvent& event )  override;
	void ClickBuscar( wxCommandEvent& event )  override;
	void ClickIrIngresos( wxCommandEvent& event )  override;
	void ClickIrVentas( wxCommandEvent& event )  override;
	void ClickAgregarProducto( wxCommandEvent& event )  override;
	
	void ActualizarGrilla();
	void BuscarEnGrilla(int pos);
	
public:
	Ventana1Hija(wxWindow *parent=NULL, Productos *producs=NULL);
	~Ventana1Hija();
};

#endif

