#ifndef VENTANA3HIJA_H
#define VENTANA3HIJA_H
#include "wxfb_project.h"
#include "Productos.h"
#include "Ingresos.h"

/*
ES LA TERCERA VENTANA (INGRESAR STOCK) DE NUESTRO PROGRAMA Y SE DECLARAN TODAS LAS ACCIONES
QUE SE PUEDE REALIZAR CON ELLA
*/

class Ventana3Hija : public Ventana3 {
	
private:
	Productos *p_producs;
	Repositorio<Detalle>Repo_Ingresos;
protected:
	void PressEnterCantidad( wxCommandEvent& event )  override;
	void ClickConfirmar( wxCommandEvent& event )  override;
	void ClickIrVentas( wxCommandEvent& event )  override;
	void ClickIrProductos( wxCommandEvent& event )  override;
	
public:
	Ventana3Hija(wxWindow *parent=NULL, Productos *producs=NULL);
	~Ventana3Hija();
};

#endif

