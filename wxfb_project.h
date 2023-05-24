///////////////////////////////////////////////////////////////////////////
// C++ code generated with wxFormBuilder (version 3.10.1-0-g8feb16b3)
// http://www.wxformbuilder.org/
//
// PLEASE DO *NOT* EDIT THIS FILE!
///////////////////////////////////////////////////////////////////////////

#pragma once

#include <wx/artprov.h>
#include <wx/xrc/xmlres.h>
#include <wx/button.h>
#include <wx/string.h>
#include <wx/bitmap.h>
#include <wx/image.h>
#include <wx/icon.h>
#include <wx/gdicmn.h>
#include <wx/font.h>
#include <wx/colour.h>
#include <wx/settings.h>
#include <wx/stattext.h>
#include <wx/sizer.h>
#include <wx/combobox.h>
#include <wx/textctrl.h>
#include <wx/grid.h>
#include <wx/frame.h>
#include <wx/dialog.h>

///////////////////////////////////////////////////////////////////////////


///////////////////////////////////////////////////////////////////////////////
/// Class Ventana1
///////////////////////////////////////////////////////////////////////////////
class Ventana1 : public wxFrame
{
	private:

	protected:
		wxButton* m_ir_ingresos;
		wxStaticText* m_staticText2;
		wxButton* m_ir_ventas;
		wxButton* m_registrosventas;
		wxStaticText* m_staticText4;
		wxComboBox* m_buscarpor;
		wxTextCtrl* m_textbuscar;
		wxButton* m_buscar;
		wxGrid* m_grilla;
		wxButton* m_editareliminar;
		wxButton* m_agregarproducto;

		// Virtual event handlers, override them in your derived class
		virtual void ClickIrIngresos( wxCommandEvent& event ) { event.Skip(); }
		virtual void ClickIrVentas( wxCommandEvent& event ) { event.Skip(); }
		virtual void ClickRegistros( wxCommandEvent& event ) { event.Skip(); }
		virtual void EnterTextoBuscar( wxCommandEvent& event ) { event.Skip(); }
		virtual void ClickBuscar( wxCommandEvent& event ) { event.Skip(); }
		virtual void DobleClickProducto( wxGridEvent& event ) { event.Skip(); }
		virtual void ClickEditarEliminar( wxCommandEvent& event ) { event.Skip(); }
		virtual void ClickAgregarProducto( wxCommandEvent& event ) { event.Skip(); }


	public:

		Ventana1( wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = wxEmptyString, const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize( 800,500 ), long style = wxDEFAULT_FRAME_STYLE|wxTAB_TRAVERSAL );

		~Ventana1();

};

///////////////////////////////////////////////////////////////////////////////
/// Class Boton_RegistrosVentas
///////////////////////////////////////////////////////////////////////////////
class Boton_RegistrosVentas : public wxFrame
{
	private:

	protected:
		wxButton* m_volver;
		wxStaticText* m_staticText26;
		wxButton* m_ir_ventas;
		wxGrid* m_grilla5;
		wxStaticText* m_staticText4;
		wxComboBox* m_buscarpor;
		wxTextCtrl* m_textbuscar;
		wxButton* m_buscar;

		// Virtual event handlers, override them in your derived class
		virtual void ClickVolver( wxCommandEvent& event ) { event.Skip(); }
		virtual void ClickNuevaVenta( wxCommandEvent& event ) { event.Skip(); }
		virtual void EnterTextoBuscar( wxCommandEvent& event ) { event.Skip(); }
		virtual void ClickBuscar( wxCommandEvent& event ) { event.Skip(); }


	public:

		Boton_RegistrosVentas( wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = wxEmptyString, const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize( 800,500 ), long style = wxDEFAULT_FRAME_STYLE|wxTAB_TRAVERSAL );

		~Boton_RegistrosVentas();

};

///////////////////////////////////////////////////////////////////////////////
/// Class Boton_EditarEliminarProducto
///////////////////////////////////////////////////////////////////////////////
class Boton_EditarEliminarProducto : public wxDialog
{
	private:

	protected:
		wxStaticText* m_staticText52;
		wxTextCtrl* m_textcodigo;
		wxStaticText* m_staticText53;
		wxTextCtrl* m_textnombre;
		wxStaticText* m_staticText521;
		wxTextCtrl* m_textmarca;
		wxStaticText* m_staticText522;
		wxTextCtrl* m_textstock;
		wxStaticText* m_staticText523;
		wxTextCtrl* m_textprecio;
		wxButton* m_eliminar;
		wxButton* m_actualizar;
		wxButton* m_cancelar;

		// Virtual event handlers, override them in your derived class
		virtual void ClickEliminar( wxCommandEvent& event ) { event.Skip(); }
		virtual void ClickActualizar( wxCommandEvent& event ) { event.Skip(); }
		virtual void ClickCancelar( wxCommandEvent& event ) { event.Skip(); }


	public:

		Boton_EditarEliminarProducto( wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = wxEmptyString, const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize( 404,318 ), long style = wxDEFAULT_DIALOG_STYLE );

		~Boton_EditarEliminarProducto();

};

///////////////////////////////////////////////////////////////////////////////
/// Class Boton_AgregarProducto
///////////////////////////////////////////////////////////////////////////////
class Boton_AgregarProducto : public wxDialog
{
	private:

	protected:
		wxStaticText* m_staticText52;
		wxTextCtrl* m_textcodigo;
		wxStaticText* m_staticText53;
		wxTextCtrl* m_textnombre;
		wxStaticText* m_staticText521;
		wxTextCtrl* m_textmarca;
		wxStaticText* m_staticText522;
		wxTextCtrl* m_textstock;
		wxStaticText* m_staticText523;
		wxTextCtrl* m_textprecio;
		wxButton* m_cancelar;
		wxButton* m_agregar;

		// Virtual event handlers, override them in your derived class
		virtual void ClickCancelar( wxCommandEvent& event ) { event.Skip(); }
		virtual void ClickAgregar( wxCommandEvent& event ) { event.Skip(); }


	public:

		Boton_AgregarProducto( wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = wxEmptyString, const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize( 251,234 ), long style = wxDEFAULT_DIALOG_STYLE );

		~Boton_AgregarProducto();

};

///////////////////////////////////////////////////////////////////////////////
/// Class Ventana2
///////////////////////////////////////////////////////////////////////////////
class Ventana2 : public wxFrame
{
	private:

	protected:
		wxButton* m_ir_productos;
		wxStaticText* m_staticText11;
		wxButton* m_ir_ingresos;
		wxStaticText* m_staticText18;
		wxStaticText* m_staticText19;
		wxTextCtrl* m_textcodigo;
		wxTextCtrl* m_textcantidad;
		wxButton* m_confirmar;
		wxGrid* m_grilla2;
		wxButton* m_confirmarventa;
		wxStaticText* m_staticText45;
		wxTextCtrl* m_texttotal;

		// Virtual event handlers, override them in your derived class
		virtual void ClickIrProductos( wxCommandEvent& event ) { event.Skip(); }
		virtual void ClickIrIngresos( wxCommandEvent& event ) { event.Skip(); }
		virtual void PressEnterCantidad( wxCommandEvent& event ) { event.Skip(); }
		virtual void ClickConfirmar( wxCommandEvent& event ) { event.Skip(); }
		virtual void DobleClickProducto( wxGridEvent& event ) { event.Skip(); }
		virtual void ClickConfirmarVenta( wxCommandEvent& event ) { event.Skip(); }


	public:

		Ventana2( wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = wxEmptyString, const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize( 800,500 ), long style = wxDEFAULT_FRAME_STYLE|wxTAB_TRAVERSAL );

		~Ventana2();

};

///////////////////////////////////////////////////////////////////////////////
/// Class Boton_ConfirmarVenta
///////////////////////////////////////////////////////////////////////////////
class Boton_ConfirmarVenta : public wxDialog
{
	private:

	protected:
		wxStaticText* m_staticText36;
		wxTextCtrl* m_textnombre;
		wxStaticText* m_staticText37;
		wxTextCtrl* m_textapellido;
		wxStaticText* m_staticText5231;
		wxTextCtrl* m_textdia;
		wxStaticText* m_staticText32;
		wxTextCtrl* m_textmes;
		wxStaticText* m_staticText33;
		wxTextCtrl* m_textanio;
		wxButton* m_cancelar;
		wxButton* m_confirmar;

		// Virtual event handlers, override them in your derived class
		virtual void ClickCancelar( wxCommandEvent& event ) { event.Skip(); }
		virtual void ClickConfirmar( wxCommandEvent& event ) { event.Skip(); }


	public:

		Boton_ConfirmarVenta( wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = wxEmptyString, const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize( 461,253 ), long style = wxDEFAULT_DIALOG_STYLE );

		~Boton_ConfirmarVenta();

};

///////////////////////////////////////////////////////////////////////////////
/// Class Ventana3
///////////////////////////////////////////////////////////////////////////////
class Ventana3 : public wxFrame
{
	private:

	protected:
		wxButton* m_ir_ventas;
		wxStaticText* m_staticText13;
		wxButton* m_ir_productos;
		wxStaticText* m_staticText18;
		wxStaticText* m_staticText19;
		wxTextCtrl* m_textcodigo;
		wxTextCtrl* m_textcantidad;
		wxButton* m_confirmar;
		wxStaticText* m_staticText21;
		wxGrid* m_grilla3;

		// Virtual event handlers, override them in your derived class
		virtual void ClickIrVentas( wxCommandEvent& event ) { event.Skip(); }
		virtual void ClickIrProductos( wxCommandEvent& event ) { event.Skip(); }
		virtual void PressEnterCantidad( wxCommandEvent& event ) { event.Skip(); }
		virtual void ClickConfirmar( wxCommandEvent& event ) { event.Skip(); }


	public:

		Ventana3( wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = wxEmptyString, const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize( 800,500 ), long style = wxDEFAULT_FRAME_STYLE|wxTAB_TRAVERSAL );

		~Ventana3();

};

