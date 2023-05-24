///////////////////////////////////////////////////////////////////////////
// C++ code generated with wxFormBuilder (version 3.10.1-0-g8feb16b3)
// http://www.wxformbuilder.org/
//
// PLEASE DO *NOT* EDIT THIS FILE!
///////////////////////////////////////////////////////////////////////////

#include "wxfb_project.h"

///////////////////////////////////////////////////////////////////////////

Ventana1::Ventana1( wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style ) : wxFrame( parent, id, title, pos, size, style )
{
	this->SetSizeHints( wxDefaultSize, wxDefaultSize );
	this->SetBackgroundColour( wxColour( 120, 120, 255 ) );

	wxBoxSizer* bSizer2;
	bSizer2 = new wxBoxSizer( wxVERTICAL );

	wxBoxSizer* bSizer3;
	bSizer3 = new wxBoxSizer( wxHORIZONTAL );

	m_ir_ingresos = new wxButton( this, wxID_ANY, wxT("<<INGRESOS"), wxDefaultPosition, wxDefaultSize, 0 );
	m_ir_ingresos->SetFont( wxFont( 13, wxFONTFAMILY_MODERN, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_BOLD, false, wxT("Consolas") ) );
	m_ir_ingresos->SetForegroundColour( wxColour( 0, 64, 128 ) );

	bSizer3->Add( m_ir_ingresos, 1, wxALL|wxALIGN_CENTER_VERTICAL, 5 );


	bSizer3->Add( 0, 0, 1, wxEXPAND, 5 );

	m_staticText2 = new wxStaticText( this, wxID_ANY, wxT("PRODUCTOS"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText2->Wrap( -1 );
	m_staticText2->SetFont( wxFont( 18, wxFONTFAMILY_SWISS, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_NORMAL, false, wxT("Verdana") ) );

	bSizer3->Add( m_staticText2, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );


	bSizer3->Add( 0, 0, 1, wxEXPAND, 5 );

	m_ir_ventas = new wxButton( this, wxID_ANY, wxT("VENTAS>>"), wxDefaultPosition, wxDefaultSize, 0 );
	m_ir_ventas->SetFont( wxFont( 13, wxFONTFAMILY_MODERN, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_BOLD, false, wxT("Consolas") ) );
	m_ir_ventas->SetForegroundColour( wxColour( 0, 64, 128 ) );

	bSizer3->Add( m_ir_ventas, 1, wxALL|wxALIGN_CENTER_VERTICAL, 5 );


	bSizer2->Add( bSizer3, 0, wxEXPAND, 5 );

	wxBoxSizer* bSizer4;
	bSizer4 = new wxBoxSizer( wxHORIZONTAL );

	m_registrosventas = new wxButton( this, wxID_ANY, wxT("Registros de Ventas"), wxDefaultPosition, wxDefaultSize, 0 );
	m_registrosventas->SetFont( wxFont( 10, wxFONTFAMILY_SWISS, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_NORMAL, false, wxT("Arial") ) );
	m_registrosventas->SetForegroundColour( wxColour( 0, 0, 0 ) );
	m_registrosventas->SetBackgroundColour( wxColour( 255, 255, 128 ) );

	bSizer4->Add( m_registrosventas, 0, wxALL, 5 );


	bSizer4->Add( 0, 0, 1, wxEXPAND, 5 );

	m_staticText4 = new wxStaticText( this, wxID_ANY, wxT("Buscar por:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText4->Wrap( -1 );
	m_staticText4->SetFont( wxFont( 11, wxFONTFAMILY_SWISS, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_NORMAL, false, wxT("Arial") ) );

	bSizer4->Add( m_staticText4, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );

	m_buscarpor = new wxComboBox( this, wxID_ANY, wxT("Seleccionar"), wxDefaultPosition, wxDefaultSize, 0, NULL, 0 );
	m_buscarpor->Append( wxT("CODIGO") );
	m_buscarpor->Append( wxT("PRODUCTO") );
	m_buscarpor->Append( wxT("MARCA") );
	m_buscarpor->SetFont( wxFont( 10, wxFONTFAMILY_SWISS, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_NORMAL, false, wxT("Arial") ) );

	bSizer4->Add( m_buscarpor, 0, wxALL, 5 );

	m_textbuscar = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, wxTE_PROCESS_ENTER );
	bSizer4->Add( m_textbuscar, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );

	m_buscar = new wxButton( this, wxID_ANY, wxT("Buscar"), wxDefaultPosition, wxDefaultSize, 0 );
	m_buscar->SetFont( wxFont( 10, wxFONTFAMILY_SWISS, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_NORMAL, false, wxT("Arial") ) );

	bSizer4->Add( m_buscar, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );


	bSizer4->Add( 0, 0, 1, wxEXPAND, 5 );


	bSizer4->Add( 0, 0, 1, wxEXPAND, 5 );


	bSizer4->Add( 0, 0, 1, wxEXPAND, 5 );


	bSizer4->Add( 0, 0, 1, wxEXPAND, 5 );


	bSizer2->Add( bSizer4, 0, wxALIGN_CENTER_HORIZONTAL|wxEXPAND, 5 );

	m_grilla = new wxGrid( this, wxID_ANY, wxDefaultPosition, wxDefaultSize, 0 );

	// Grid
	m_grilla->CreateGrid( 0, 5 );
	m_grilla->EnableEditing( true );
	m_grilla->EnableGridLines( true );
	m_grilla->EnableDragGridSize( false );
	m_grilla->SetMargins( 0, 0 );

	// Columns
	m_grilla->SetColSize( 0, 144 );
	m_grilla->SetColSize( 1, 223 );
	m_grilla->SetColSize( 2, 161 );
	m_grilla->SetColSize( 3, 106 );
	m_grilla->SetColSize( 4, 140 );
	m_grilla->EnableDragColMove( false );
	m_grilla->EnableDragColSize( true );
	m_grilla->SetColLabelValue( 0, wxT("CODIGO") );
	m_grilla->SetColLabelValue( 1, wxT("PRODUCTO") );
	m_grilla->SetColLabelValue( 2, wxT("MARCA") );
	m_grilla->SetColLabelValue( 3, wxT("STOCK") );
	m_grilla->SetColLabelValue( 4, wxT("PRECIO") );
	m_grilla->SetColLabelAlignment( wxALIGN_CENTER, wxALIGN_CENTER );

	// Rows
	m_grilla->EnableDragRowSize( true );
	m_grilla->SetRowLabelSize( 0 );
	m_grilla->SetRowLabelAlignment( wxALIGN_CENTER, wxALIGN_CENTER );

	// Label Appearance

	// Cell Defaults
	m_grilla->SetDefaultCellAlignment( wxALIGN_CENTER, wxALIGN_TOP );
	bSizer2->Add( m_grilla, 1, wxALL, 5 );

	wxBoxSizer* bSizer110;
	bSizer110 = new wxBoxSizer( wxHORIZONTAL );

	m_editareliminar = new wxButton( this, wxID_ANY, wxT("Editar/Eliminar"), wxDefaultPosition, wxDefaultSize, 0 );
	m_editareliminar->SetFont( wxFont( 12, wxFONTFAMILY_SWISS, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_BOLD, false, wxT("Arial Narrow") ) );

	bSizer110->Add( m_editareliminar, 0, wxALL, 5 );

	m_agregarproducto = new wxButton( this, wxID_ANY, wxT("Agregar Producto"), wxDefaultPosition, wxDefaultSize, 0 );
	m_agregarproducto->SetFont( wxFont( 12, wxFONTFAMILY_SWISS, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_BOLD, false, wxT("Arial Narrow") ) );

	bSizer110->Add( m_agregarproducto, 0, wxALL, 5 );


	bSizer2->Add( bSizer110, 0, wxALIGN_RIGHT, 5 );


	this->SetSizer( bSizer2 );
	this->Layout();

	this->Centre( wxBOTH );

	// Connect Events
	m_ir_ingresos->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( Ventana1::ClickIrIngresos ), NULL, this );
	m_ir_ventas->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( Ventana1::ClickIrVentas ), NULL, this );
	m_registrosventas->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( Ventana1::ClickRegistros ), NULL, this );
	m_textbuscar->Connect( wxEVT_COMMAND_TEXT_ENTER, wxCommandEventHandler( Ventana1::EnterTextoBuscar ), NULL, this );
	m_buscar->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( Ventana1::ClickBuscar ), NULL, this );
	m_grilla->Connect( wxEVT_GRID_CELL_LEFT_DCLICK, wxGridEventHandler( Ventana1::DobleClickProducto ), NULL, this );
	m_editareliminar->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( Ventana1::ClickEditarEliminar ), NULL, this );
	m_agregarproducto->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( Ventana1::ClickAgregarProducto ), NULL, this );
}

Ventana1::~Ventana1()
{
	// Disconnect Events
	m_ir_ingresos->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( Ventana1::ClickIrIngresos ), NULL, this );
	m_ir_ventas->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( Ventana1::ClickIrVentas ), NULL, this );
	m_registrosventas->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( Ventana1::ClickRegistros ), NULL, this );
	m_textbuscar->Disconnect( wxEVT_COMMAND_TEXT_ENTER, wxCommandEventHandler( Ventana1::EnterTextoBuscar ), NULL, this );
	m_buscar->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( Ventana1::ClickBuscar ), NULL, this );
	m_grilla->Disconnect( wxEVT_GRID_CELL_LEFT_DCLICK, wxGridEventHandler( Ventana1::DobleClickProducto ), NULL, this );
	m_editareliminar->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( Ventana1::ClickEditarEliminar ), NULL, this );
	m_agregarproducto->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( Ventana1::ClickAgregarProducto ), NULL, this );

}

Boton_RegistrosVentas::Boton_RegistrosVentas( wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style ) : wxFrame( parent, id, title, pos, size, style )
{
	this->SetSizeHints( wxDefaultSize, wxDefaultSize );
	this->SetBackgroundColour( wxColour( 120, 120, 255 ) );

	wxBoxSizer* bSizer39;
	bSizer39 = new wxBoxSizer( wxVERTICAL );

	wxBoxSizer* bSizer40;
	bSizer40 = new wxBoxSizer( wxHORIZONTAL );

	m_volver = new wxButton( this, wxID_ANY, wxT("VOLVER"), wxDefaultPosition, wxDefaultSize, 0 );
	m_volver->SetFont( wxFont( 13, wxFONTFAMILY_MODERN, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_BOLD, false, wxT("Consolas") ) );
	m_volver->SetForegroundColour( wxColour( 0, 64, 128 ) );

	bSizer40->Add( m_volver, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );


	bSizer40->Add( 0, 0, 1, wxEXPAND, 5 );

	m_staticText26 = new wxStaticText( this, wxID_ANY, wxT("REGISTROS DE VENTAS"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText26->Wrap( -1 );
	m_staticText26->SetFont( wxFont( 18, wxFONTFAMILY_SWISS, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_NORMAL, false, wxT("Verdana") ) );

	bSizer40->Add( m_staticText26, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );


	bSizer40->Add( 0, 0, 1, wxEXPAND, 5 );

	m_ir_ventas = new wxButton( this, wxID_ANY, wxT("NUEVA VENTA>>"), wxDefaultPosition, wxDefaultSize, 0 );
	m_ir_ventas->SetFont( wxFont( 13, wxFONTFAMILY_MODERN, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_BOLD, false, wxT("Consolas") ) );
	m_ir_ventas->SetForegroundColour( wxColour( 0, 64, 128 ) );

	bSizer40->Add( m_ir_ventas, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );


	bSizer39->Add( bSizer40, 0, wxEXPAND, 5 );

	wxBoxSizer* bSizer41;
	bSizer41 = new wxBoxSizer( wxVERTICAL );

	m_grilla5 = new wxGrid( this, wxID_ANY, wxDefaultPosition, wxDefaultSize, 0 );

	// Grid
	m_grilla5->CreateGrid( 0, 4 );
	m_grilla5->EnableEditing( true );
	m_grilla5->EnableGridLines( true );
	m_grilla5->EnableDragGridSize( false );
	m_grilla5->SetMargins( 0, 0 );

	// Columns
	m_grilla5->SetColSize( 0, 157 );
	m_grilla5->SetColSize( 1, 214 );
	m_grilla5->SetColSize( 2, 188 );
	m_grilla5->SetColSize( 3, 215 );
	m_grilla5->EnableDragColMove( false );
	m_grilla5->EnableDragColSize( true );
	m_grilla5->SetColLabelValue( 0, wxT("FECHA") );
	m_grilla5->SetColLabelValue( 1, wxT("CLIENTE") );
	m_grilla5->SetColLabelValue( 2, wxT("PRECIO FINAL") );
	m_grilla5->SetColLabelValue( 3, wxT("CODIGO FACTURA") );
	m_grilla5->SetColLabelAlignment( wxALIGN_CENTER, wxALIGN_CENTER );

	// Rows
	m_grilla5->EnableDragRowSize( true );
	m_grilla5->SetRowLabelSize( 0 );
	m_grilla5->SetRowLabelAlignment( wxALIGN_CENTER, wxALIGN_CENTER );

	// Label Appearance

	// Cell Defaults
	m_grilla5->SetDefaultCellAlignment( wxALIGN_CENTER, wxALIGN_TOP );
	bSizer41->Add( m_grilla5, 1, wxALL|wxALIGN_CENTER_HORIZONTAL, 5 );


	bSizer39->Add( bSizer41, 1, wxEXPAND, 5 );

	wxBoxSizer* bSizer4;
	bSizer4 = new wxBoxSizer( wxHORIZONTAL );

	m_staticText4 = new wxStaticText( this, wxID_ANY, wxT("Buscar por:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText4->Wrap( -1 );
	m_staticText4->SetFont( wxFont( 11, wxFONTFAMILY_SWISS, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_NORMAL, false, wxT("Arial") ) );

	bSizer4->Add( m_staticText4, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );

	m_buscarpor = new wxComboBox( this, wxID_ANY, wxT("Seleccionar"), wxDefaultPosition, wxDefaultSize, 0, NULL, 0 );
	m_buscarpor->Append( wxT("FECHA") );
	m_buscarpor->Append( wxT("APELLIDO CLIENTE") );
	m_buscarpor->Append( wxT("CODIGO FACTURA") );
	m_buscarpor->SetFont( wxFont( 10, wxFONTFAMILY_SWISS, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_NORMAL, false, wxT("Arial") ) );

	bSizer4->Add( m_buscarpor, 0, wxALL, 5 );

	m_textbuscar = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, wxTE_PROCESS_ENTER );
	bSizer4->Add( m_textbuscar, 0, wxALL, 5 );

	m_buscar = new wxButton( this, wxID_ANY, wxT("Buscar"), wxDefaultPosition, wxDefaultSize, 0 );
	m_buscar->SetFont( wxFont( 10, wxFONTFAMILY_SWISS, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_NORMAL, false, wxT("Arial") ) );

	bSizer4->Add( m_buscar, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );


	bSizer39->Add( bSizer4, 0, wxALIGN_CENTER_HORIZONTAL, 5 );


	this->SetSizer( bSizer39 );
	this->Layout();

	this->Centre( wxBOTH );

	// Connect Events
	m_volver->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( Boton_RegistrosVentas::ClickVolver ), NULL, this );
	m_ir_ventas->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( Boton_RegistrosVentas::ClickNuevaVenta ), NULL, this );
	m_textbuscar->Connect( wxEVT_COMMAND_TEXT_ENTER, wxCommandEventHandler( Boton_RegistrosVentas::EnterTextoBuscar ), NULL, this );
	m_buscar->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( Boton_RegistrosVentas::ClickBuscar ), NULL, this );
}

Boton_RegistrosVentas::~Boton_RegistrosVentas()
{
	// Disconnect Events
	m_volver->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( Boton_RegistrosVentas::ClickVolver ), NULL, this );
	m_ir_ventas->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( Boton_RegistrosVentas::ClickNuevaVenta ), NULL, this );
	m_textbuscar->Disconnect( wxEVT_COMMAND_TEXT_ENTER, wxCommandEventHandler( Boton_RegistrosVentas::EnterTextoBuscar ), NULL, this );
	m_buscar->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( Boton_RegistrosVentas::ClickBuscar ), NULL, this );

}

Boton_EditarEliminarProducto::Boton_EditarEliminarProducto( wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style ) : wxDialog( parent, id, title, pos, size, style )
{
	this->SetSizeHints( wxDefaultSize, wxDefaultSize );

	wxBoxSizer* bSizer79;
	bSizer79 = new wxBoxSizer( wxVERTICAL );

	wxBoxSizer* bSizer80;
	bSizer80 = new wxBoxSizer( wxHORIZONTAL );

	m_staticText52 = new wxStaticText( this, wxID_ANY, wxT("Codigo:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText52->Wrap( -1 );
	m_staticText52->SetFont( wxFont( 10, wxFONTFAMILY_SWISS, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_BOLD, false, wxT("Arial") ) );

	bSizer80->Add( m_staticText52, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );

	m_textcodigo = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	bSizer80->Add( m_textcodigo, 1, wxALL|wxALIGN_CENTER_VERTICAL, 5 );


	bSizer79->Add( bSizer80, 1, wxEXPAND, 5 );

	wxBoxSizer* bSizer81;
	bSizer81 = new wxBoxSizer( wxHORIZONTAL );

	m_staticText53 = new wxStaticText( this, wxID_ANY, wxT("Nombre:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText53->Wrap( -1 );
	m_staticText53->SetFont( wxFont( 10, wxFONTFAMILY_SWISS, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_BOLD, false, wxT("Arial") ) );

	bSizer81->Add( m_staticText53, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );

	m_textnombre = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	bSizer81->Add( m_textnombre, 1, wxALL|wxALIGN_CENTER_VERTICAL, 5 );


	bSizer79->Add( bSizer81, 1, wxEXPAND, 5 );

	wxBoxSizer* bSizer801;
	bSizer801 = new wxBoxSizer( wxHORIZONTAL );

	m_staticText521 = new wxStaticText( this, wxID_ANY, wxT("Marca:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText521->Wrap( -1 );
	m_staticText521->SetFont( wxFont( 10, wxFONTFAMILY_SWISS, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_BOLD, false, wxT("Arial") ) );

	bSizer801->Add( m_staticText521, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );

	m_textmarca = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	bSizer801->Add( m_textmarca, 1, wxALL|wxALIGN_CENTER_VERTICAL, 5 );


	bSizer79->Add( bSizer801, 1, wxEXPAND, 5 );

	wxBoxSizer* bSizer802;
	bSizer802 = new wxBoxSizer( wxHORIZONTAL );

	m_staticText522 = new wxStaticText( this, wxID_ANY, wxT("Stock:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText522->Wrap( -1 );
	m_staticText522->SetFont( wxFont( 10, wxFONTFAMILY_SWISS, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_BOLD, false, wxT("Arial") ) );

	bSizer802->Add( m_staticText522, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );

	m_textstock = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	bSizer802->Add( m_textstock, 1, wxALL|wxALIGN_CENTER_VERTICAL, 5 );


	bSizer79->Add( bSizer802, 1, wxEXPAND, 5 );

	wxBoxSizer* bSizer803;
	bSizer803 = new wxBoxSizer( wxHORIZONTAL );

	m_staticText523 = new wxStaticText( this, wxID_ANY, wxT("Precio:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText523->Wrap( -1 );
	m_staticText523->SetFont( wxFont( 10, wxFONTFAMILY_SWISS, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_BOLD, false, wxT("Arial") ) );

	bSizer803->Add( m_staticText523, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );

	m_textprecio = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	bSizer803->Add( m_textprecio, 1, wxALL|wxALIGN_CENTER_VERTICAL, 5 );


	bSizer79->Add( bSizer803, 1, wxEXPAND, 5 );

	wxBoxSizer* bSizer95;
	bSizer95 = new wxBoxSizer( wxHORIZONTAL );

	m_eliminar = new wxButton( this, wxID_ANY, wxT("Eliminar"), wxDefaultPosition, wxDefaultSize, 0 );
	m_eliminar->SetFont( wxFont( 12, wxFONTFAMILY_SWISS, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_NORMAL, false, wxT("Arial") ) );
	m_eliminar->SetForegroundColour( wxColour( 160, 0, 0 ) );
	m_eliminar->SetBackgroundColour( wxSystemSettings::GetColour( wxSYS_COLOUR_WINDOW ) );

	bSizer95->Add( m_eliminar, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );


	bSizer95->Add( 0, 0, 1, wxEXPAND, 5 );

	m_actualizar = new wxButton( this, wxID_ANY, wxT("Actualizar"), wxDefaultPosition, wxDefaultSize, 0 );
	m_actualizar->SetFont( wxFont( 11, wxFONTFAMILY_SWISS, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_NORMAL, false, wxT("Arial") ) );
	m_actualizar->SetForegroundColour( wxColour( 0, 160, 0 ) );

	bSizer95->Add( m_actualizar, 0, wxALL|wxALIGN_RIGHT|wxALIGN_CENTER_VERTICAL, 5 );

	m_cancelar = new wxButton( this, wxID_ANY, wxT("Cancelar"), wxDefaultPosition, wxDefaultSize, 0 );
	m_cancelar->SetFont( wxFont( 11, wxFONTFAMILY_SWISS, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_NORMAL, false, wxT("Arial") ) );

	bSizer95->Add( m_cancelar, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );


	bSizer79->Add( bSizer95, 1, wxEXPAND|wxALIGN_RIGHT, 5 );


	this->SetSizer( bSizer79 );
	this->Layout();

	this->Centre( wxBOTH );

	// Connect Events
	m_eliminar->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( Boton_EditarEliminarProducto::ClickEliminar ), NULL, this );
	m_actualizar->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( Boton_EditarEliminarProducto::ClickActualizar ), NULL, this );
	m_cancelar->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( Boton_EditarEliminarProducto::ClickCancelar ), NULL, this );
}

Boton_EditarEliminarProducto::~Boton_EditarEliminarProducto()
{
	// Disconnect Events
	m_eliminar->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( Boton_EditarEliminarProducto::ClickEliminar ), NULL, this );
	m_actualizar->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( Boton_EditarEliminarProducto::ClickActualizar ), NULL, this );
	m_cancelar->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( Boton_EditarEliminarProducto::ClickCancelar ), NULL, this );

}

Boton_AgregarProducto::Boton_AgregarProducto( wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style ) : wxDialog( parent, id, title, pos, size, style )
{
	this->SetSizeHints( wxDefaultSize, wxDefaultSize );

	wxBoxSizer* bSizer79;
	bSizer79 = new wxBoxSizer( wxVERTICAL );

	wxBoxSizer* bSizer80;
	bSizer80 = new wxBoxSizer( wxHORIZONTAL );

	m_staticText52 = new wxStaticText( this, wxID_ANY, wxT("Codigo:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText52->Wrap( -1 );
	m_staticText52->SetFont( wxFont( 10, wxFONTFAMILY_SWISS, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_BOLD, false, wxT("Arial") ) );

	bSizer80->Add( m_staticText52, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );

	m_textcodigo = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	bSizer80->Add( m_textcodigo, 1, wxALL, 5 );


	bSizer79->Add( bSizer80, 1, wxEXPAND, 5 );

	wxBoxSizer* bSizer81;
	bSizer81 = new wxBoxSizer( wxHORIZONTAL );

	m_staticText53 = new wxStaticText( this, wxID_ANY, wxT("Nombre:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText53->Wrap( -1 );
	m_staticText53->SetFont( wxFont( 10, wxFONTFAMILY_SWISS, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_BOLD, false, wxT("Arial") ) );

	bSizer81->Add( m_staticText53, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );

	m_textnombre = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	bSizer81->Add( m_textnombre, 1, wxALL, 5 );


	bSizer79->Add( bSizer81, 1, wxEXPAND, 5 );

	wxBoxSizer* bSizer801;
	bSizer801 = new wxBoxSizer( wxHORIZONTAL );

	m_staticText521 = new wxStaticText( this, wxID_ANY, wxT("Marca:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText521->Wrap( -1 );
	m_staticText521->SetFont( wxFont( 10, wxFONTFAMILY_SWISS, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_BOLD, false, wxT("Arial") ) );

	bSizer801->Add( m_staticText521, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );

	m_textmarca = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	bSizer801->Add( m_textmarca, 1, wxALL, 5 );


	bSizer79->Add( bSizer801, 1, wxEXPAND, 5 );

	wxBoxSizer* bSizer802;
	bSizer802 = new wxBoxSizer( wxHORIZONTAL );

	m_staticText522 = new wxStaticText( this, wxID_ANY, wxT("Stock:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText522->Wrap( -1 );
	m_staticText522->SetFont( wxFont( 10, wxFONTFAMILY_SWISS, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_BOLD, false, wxT("Arial") ) );

	bSizer802->Add( m_staticText522, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );

	m_textstock = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	bSizer802->Add( m_textstock, 1, wxALL, 5 );


	bSizer79->Add( bSizer802, 1, wxEXPAND, 5 );

	wxBoxSizer* bSizer803;
	bSizer803 = new wxBoxSizer( wxHORIZONTAL );

	m_staticText523 = new wxStaticText( this, wxID_ANY, wxT("Precio:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText523->Wrap( -1 );
	m_staticText523->SetFont( wxFont( 10, wxFONTFAMILY_SWISS, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_BOLD, false, wxT("Arial") ) );

	bSizer803->Add( m_staticText523, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );

	m_textprecio = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	bSizer803->Add( m_textprecio, 1, wxALL, 5 );


	bSizer79->Add( bSizer803, 1, wxEXPAND, 5 );

	wxBoxSizer* bSizer95;
	bSizer95 = new wxBoxSizer( wxHORIZONTAL );

	m_cancelar = new wxButton( this, wxID_ANY, wxT("Cancelar"), wxDefaultPosition, wxDefaultSize, 0 );
	m_cancelar->SetFont( wxFont( 11, wxFONTFAMILY_SWISS, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_NORMAL, false, wxT("Arial") ) );

	bSizer95->Add( m_cancelar, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );


	bSizer95->Add( 0, 0, 1, wxEXPAND, 5 );

	m_agregar = new wxButton( this, wxID_ANY, wxT("Agregar"), wxDefaultPosition, wxDefaultSize, 0 );
	m_agregar->SetFont( wxFont( 11, wxFONTFAMILY_SWISS, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_NORMAL, false, wxT("Arial") ) );
	m_agregar->SetForegroundColour( wxColour( 0, 160, 0 ) );
	m_agregar->SetBackgroundColour( wxSystemSettings::GetColour( wxSYS_COLOUR_WINDOW ) );

	bSizer95->Add( m_agregar, 0, wxALL|wxALIGN_RIGHT|wxALIGN_CENTER_VERTICAL, 5 );


	bSizer79->Add( bSizer95, 0, wxEXPAND|wxALIGN_RIGHT, 5 );


	this->SetSizer( bSizer79 );
	this->Layout();

	this->Centre( wxBOTH );

	// Connect Events
	m_cancelar->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( Boton_AgregarProducto::ClickCancelar ), NULL, this );
	m_agregar->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( Boton_AgregarProducto::ClickAgregar ), NULL, this );
}

Boton_AgregarProducto::~Boton_AgregarProducto()
{
	// Disconnect Events
	m_cancelar->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( Boton_AgregarProducto::ClickCancelar ), NULL, this );
	m_agregar->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( Boton_AgregarProducto::ClickAgregar ), NULL, this );

}

Ventana2::Ventana2( wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style ) : wxFrame( parent, id, title, pos, size, style )
{
	this->SetSizeHints( wxDefaultSize, wxDefaultSize );
	this->SetBackgroundColour( wxColour( 120, 120, 255 ) );

	wxBoxSizer* bSizer16;
	bSizer16 = new wxBoxSizer( wxVERTICAL );

	wxBoxSizer* bSizer17;
	bSizer17 = new wxBoxSizer( wxHORIZONTAL );

	m_ir_productos = new wxButton( this, wxID_ANY, wxT("<<PRODUCTOS"), wxDefaultPosition, wxDefaultSize, 0 );
	m_ir_productos->SetFont( wxFont( 13, wxFONTFAMILY_MODERN, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_BOLD, false, wxT("Consolas") ) );
	m_ir_productos->SetForegroundColour( wxColour( 0, 64, 128 ) );

	bSizer17->Add( m_ir_productos, 1, wxALL|wxALIGN_CENTER_VERTICAL, 5 );


	bSizer17->Add( 0, 0, 1, wxEXPAND, 5 );

	m_staticText11 = new wxStaticText( this, wxID_ANY, wxT("NUEVA VENTA"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText11->Wrap( -1 );
	m_staticText11->SetFont( wxFont( 18, wxFONTFAMILY_SWISS, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_NORMAL, false, wxT("Verdana") ) );

	bSizer17->Add( m_staticText11, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );


	bSizer17->Add( 0, 0, 1, wxEXPAND, 5 );

	m_ir_ingresos = new wxButton( this, wxID_ANY, wxT("INGRESOS>>"), wxDefaultPosition, wxDefaultSize, 0 );
	m_ir_ingresos->SetFont( wxFont( 13, wxFONTFAMILY_MODERN, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_BOLD, false, wxT("Consolas") ) );
	m_ir_ingresos->SetForegroundColour( wxColour( 0, 64, 128 ) );

	bSizer17->Add( m_ir_ingresos, 1, wxALL|wxALIGN_CENTER_VERTICAL, 5 );


	bSizer16->Add( bSizer17, 0, wxEXPAND, 5 );

	wxBoxSizer* bSizer51;
	bSizer51 = new wxBoxSizer( wxVERTICAL );


	bSizer16->Add( bSizer51, 1, wxEXPAND, 5 );

	wxBoxSizer* bSizer21;
	bSizer21 = new wxBoxSizer( wxHORIZONTAL );

	wxBoxSizer* bSizer25;
	bSizer25 = new wxBoxSizer( wxVERTICAL );

	m_staticText18 = new wxStaticText( this, wxID_ANY, wxT("Codigo:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText18->Wrap( -1 );
	m_staticText18->SetFont( wxFont( 11, wxFONTFAMILY_SWISS, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_NORMAL, false, wxT("Arial") ) );

	bSizer25->Add( m_staticText18, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxEXPAND, 5 );

	m_staticText19 = new wxStaticText( this, wxID_ANY, wxT("Cantidad:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText19->Wrap( -1 );
	m_staticText19->SetFont( wxFont( 11, wxFONTFAMILY_SWISS, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_NORMAL, false, wxT("Arial") ) );

	bSizer25->Add( m_staticText19, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxEXPAND, 5 );


	bSizer21->Add( bSizer25, 1, wxEXPAND, 5 );

	wxBoxSizer* bSizer26;
	bSizer26 = new wxBoxSizer( wxVERTICAL );

	m_textcodigo = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, wxTE_CENTER );
	bSizer26->Add( m_textcodigo, 1, wxALL|wxALIGN_CENTER_HORIZONTAL, 5 );

	m_textcantidad = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, wxTE_CENTER|wxTE_PROCESS_ENTER );
	bSizer26->Add( m_textcantidad, 1, wxALL|wxALIGN_CENTER_HORIZONTAL, 5 );


	bSizer21->Add( bSizer26, 0, 0, 5 );

	wxBoxSizer* bSizer30;
	bSizer30 = new wxBoxSizer( wxVERTICAL );


	bSizer30->Add( 0, 0, 1, wxEXPAND, 5 );

	m_confirmar = new wxButton( this, wxID_ANY, wxT("Confirmar"), wxDefaultPosition, wxDefaultSize, 0 );
	m_confirmar->SetFont( wxFont( 11, wxFONTFAMILY_SWISS, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_NORMAL, false, wxT("Arial") ) );
	m_confirmar->SetForegroundColour( wxColour( 0, 160, 0 ) );
	m_confirmar->SetBackgroundColour( wxSystemSettings::GetColour( wxSYS_COLOUR_WINDOW ) );

	bSizer30->Add( m_confirmar, 0, wxALL|wxALIGN_CENTER_HORIZONTAL, 5 );


	bSizer21->Add( bSizer30, 1, wxEXPAND, 5 );


	bSizer16->Add( bSizer21, 0, wxALIGN_CENTER_HORIZONTAL, 5 );

	m_grilla2 = new wxGrid( this, wxID_ANY, wxDefaultPosition, wxDefaultSize, 0 );

	// Grid
	m_grilla2->CreateGrid( 0, 5 );
	m_grilla2->EnableEditing( true );
	m_grilla2->EnableGridLines( true );
	m_grilla2->EnableDragGridSize( false );
	m_grilla2->SetMargins( 0, 0 );

	// Columns
	m_grilla2->SetColSize( 0, 144 );
	m_grilla2->SetColSize( 1, 209 );
	m_grilla2->SetColSize( 2, 161 );
	m_grilla2->SetColSize( 3, 108 );
	m_grilla2->SetColSize( 4, 152 );
	m_grilla2->EnableDragColMove( false );
	m_grilla2->EnableDragColSize( true );
	m_grilla2->SetColLabelValue( 0, wxT("CODIGO") );
	m_grilla2->SetColLabelValue( 1, wxT("PRODUCTO") );
	m_grilla2->SetColLabelValue( 2, wxT("MARCA") );
	m_grilla2->SetColLabelValue( 3, wxT("CANTIDAD") );
	m_grilla2->SetColLabelValue( 4, wxT("PRECIO UNITARIO") );
	m_grilla2->SetColLabelAlignment( wxALIGN_CENTER, wxALIGN_CENTER );

	// Rows
	m_grilla2->EnableDragRowSize( true );
	m_grilla2->SetRowLabelSize( 0 );
	m_grilla2->SetRowLabelAlignment( wxALIGN_CENTER, wxALIGN_CENTER );

	// Label Appearance

	// Cell Defaults
	m_grilla2->SetDefaultCellAlignment( wxALIGN_LEFT, wxALIGN_TOP );
	bSizer16->Add( m_grilla2, 1, wxALL, 5 );

	wxBoxSizer* bSizer18;
	bSizer18 = new wxBoxSizer( wxHORIZONTAL );

	m_confirmarventa = new wxButton( this, wxID_ANY, wxT("Confirmar Venta"), wxDefaultPosition, wxDefaultSize, 0 );
	m_confirmarventa->SetFont( wxFont( 12, wxFONTFAMILY_SWISS, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_BOLD, false, wxT("Arial Narrow") ) );

	bSizer18->Add( m_confirmarventa, 0, wxALL, 5 );


	bSizer18->Add( 0, 0, 1, wxEXPAND, 5 );


	bSizer18->Add( 0, 0, 1, wxEXPAND, 5 );

	m_staticText45 = new wxStaticText( this, wxID_ANY, wxT("Total:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText45->Wrap( -1 );
	m_staticText45->SetFont( wxFont( 11, wxFONTFAMILY_SWISS, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_NORMAL, false, wxT("Arial") ) );

	bSizer18->Add( m_staticText45, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );

	m_texttotal = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	bSizer18->Add( m_texttotal, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );


	bSizer16->Add( bSizer18, 0, wxALIGN_CENTER_HORIZONTAL|wxEXPAND, 5 );


	this->SetSizer( bSizer16 );
	this->Layout();

	this->Centre( wxBOTH );

	// Connect Events
	m_ir_productos->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( Ventana2::ClickIrProductos ), NULL, this );
	m_ir_ingresos->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( Ventana2::ClickIrIngresos ), NULL, this );
	m_textcantidad->Connect( wxEVT_COMMAND_TEXT_ENTER, wxCommandEventHandler( Ventana2::PressEnterCantidad ), NULL, this );
	m_confirmar->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( Ventana2::ClickConfirmar ), NULL, this );
	m_grilla2->Connect( wxEVT_GRID_CELL_LEFT_DCLICK, wxGridEventHandler( Ventana2::DobleClickProducto ), NULL, this );
	m_confirmarventa->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( Ventana2::ClickConfirmarVenta ), NULL, this );
}

Ventana2::~Ventana2()
{
	// Disconnect Events
	m_ir_productos->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( Ventana2::ClickIrProductos ), NULL, this );
	m_ir_ingresos->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( Ventana2::ClickIrIngresos ), NULL, this );
	m_textcantidad->Disconnect( wxEVT_COMMAND_TEXT_ENTER, wxCommandEventHandler( Ventana2::PressEnterCantidad ), NULL, this );
	m_confirmar->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( Ventana2::ClickConfirmar ), NULL, this );
	m_grilla2->Disconnect( wxEVT_GRID_CELL_LEFT_DCLICK, wxGridEventHandler( Ventana2::DobleClickProducto ), NULL, this );
	m_confirmarventa->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( Ventana2::ClickConfirmarVenta ), NULL, this );

}

Boton_ConfirmarVenta::Boton_ConfirmarVenta( wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style ) : wxDialog( parent, id, title, pos, size, style )
{
	this->SetSizeHints( wxDefaultSize, wxDefaultSize );

	wxBoxSizer* bSizer79;
	bSizer79 = new wxBoxSizer( wxVERTICAL );

	wxBoxSizer* bSizer80;
	bSizer80 = new wxBoxSizer( wxHORIZONTAL );

	m_staticText36 = new wxStaticText( this, wxID_ANY, wxT("Nombre:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText36->Wrap( -1 );
	m_staticText36->SetFont( wxFont( 10, wxFONTFAMILY_SWISS, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_BOLD, false, wxT("Arial") ) );

	bSizer80->Add( m_staticText36, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );

	m_textnombre = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	bSizer80->Add( m_textnombre, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );

	m_staticText37 = new wxStaticText( this, wxID_ANY, wxT("Apellido:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText37->Wrap( -1 );
	m_staticText37->SetFont( wxFont( 10, wxFONTFAMILY_SWISS, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_BOLD, false, wxT("Arial") ) );

	bSizer80->Add( m_staticText37, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );

	m_textapellido = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	bSizer80->Add( m_textapellido, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );


	bSizer79->Add( bSizer80, 1, wxALIGN_CENTER_HORIZONTAL, 5 );

	wxBoxSizer* bSizer8031;
	bSizer8031 = new wxBoxSizer( wxHORIZONTAL );

	m_staticText5231 = new wxStaticText( this, wxID_ANY, wxT("Fecha:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText5231->Wrap( -1 );
	m_staticText5231->SetFont( wxFont( 10, wxFONTFAMILY_SWISS, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_BOLD, false, wxT("Arial") ) );

	bSizer8031->Add( m_staticText5231, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );

	m_textdia = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, wxTE_CENTER );
	bSizer8031->Add( m_textdia, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );

	m_staticText32 = new wxStaticText( this, wxID_ANY, wxT("/"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText32->Wrap( -1 );
	m_staticText32->SetFont( wxFont( 10, wxFONTFAMILY_SWISS, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_BOLD, false, wxT("Arial") ) );

	bSizer8031->Add( m_staticText32, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );

	m_textmes = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, wxTE_CENTER );
	bSizer8031->Add( m_textmes, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );

	m_staticText33 = new wxStaticText( this, wxID_ANY, wxT("/"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText33->Wrap( -1 );
	m_staticText33->SetFont( wxFont( 10, wxFONTFAMILY_SWISS, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_BOLD, false, wxT("Arial") ) );

	bSizer8031->Add( m_staticText33, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );

	m_textanio = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, wxTE_CENTER );
	bSizer8031->Add( m_textanio, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );


	bSizer79->Add( bSizer8031, 1, wxALIGN_CENTER_HORIZONTAL, 5 );

	wxBoxSizer* bSizer95;
	bSizer95 = new wxBoxSizer( wxHORIZONTAL );

	m_cancelar = new wxButton( this, wxID_ANY, wxT("Cancelar"), wxDefaultPosition, wxDefaultSize, 0 );
	m_cancelar->SetFont( wxFont( 11, wxFONTFAMILY_SWISS, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_NORMAL, false, wxT("Arial") ) );

	bSizer95->Add( m_cancelar, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );

	m_confirmar = new wxButton( this, wxID_ANY, wxT("Confirmar"), wxDefaultPosition, wxDefaultSize, 0 );
	m_confirmar->SetFont( wxFont( 11, wxFONTFAMILY_SWISS, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_NORMAL, false, wxT("Arial") ) );
	m_confirmar->SetForegroundColour( wxColour( 0, 160, 0 ) );

	bSizer95->Add( m_confirmar, 0, wxALL|wxALIGN_RIGHT|wxALIGN_CENTER_VERTICAL, 5 );


	bSizer79->Add( bSizer95, 1, wxALIGN_RIGHT, 5 );


	this->SetSizer( bSizer79 );
	this->Layout();

	this->Centre( wxBOTH );

	// Connect Events
	m_cancelar->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( Boton_ConfirmarVenta::ClickCancelar ), NULL, this );
	m_confirmar->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( Boton_ConfirmarVenta::ClickConfirmar ), NULL, this );
}

Boton_ConfirmarVenta::~Boton_ConfirmarVenta()
{
	// Disconnect Events
	m_cancelar->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( Boton_ConfirmarVenta::ClickCancelar ), NULL, this );
	m_confirmar->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( Boton_ConfirmarVenta::ClickConfirmar ), NULL, this );

}

Ventana3::Ventana3( wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style ) : wxFrame( parent, id, title, pos, size, style )
{
	this->SetSizeHints( wxDefaultSize, wxDefaultSize );
	this->SetBackgroundColour( wxColour( 120, 120, 255 ) );

	wxBoxSizer* bSizer19;
	bSizer19 = new wxBoxSizer( wxVERTICAL );

	wxBoxSizer* bSizer20;
	bSizer20 = new wxBoxSizer( wxHORIZONTAL );

	m_ir_ventas = new wxButton( this, wxID_ANY, wxT("<<VENTAS"), wxDefaultPosition, wxDefaultSize, 0 );
	m_ir_ventas->SetFont( wxFont( 13, wxFONTFAMILY_MODERN, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_BOLD, false, wxT("Consolas") ) );
	m_ir_ventas->SetForegroundColour( wxColour( 0, 64, 128 ) );

	bSizer20->Add( m_ir_ventas, 1, wxALL|wxALIGN_CENTER_VERTICAL, 5 );


	bSizer20->Add( 0, 0, 1, wxEXPAND, 5 );

	m_staticText13 = new wxStaticText( this, wxID_ANY, wxT("INGRESAR STOCK"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText13->Wrap( -1 );
	m_staticText13->SetFont( wxFont( 16, wxFONTFAMILY_SWISS, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_NORMAL, false, wxT("Verdana") ) );

	bSizer20->Add( m_staticText13, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );


	bSizer20->Add( 0, 0, 1, wxEXPAND, 5 );

	m_ir_productos = new wxButton( this, wxID_ANY, wxT("PRODUCTOS>>"), wxDefaultPosition, wxDefaultSize, 0 );
	m_ir_productos->SetFont( wxFont( 13, wxFONTFAMILY_MODERN, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_BOLD, false, wxT("Consolas") ) );
	m_ir_productos->SetForegroundColour( wxColour( 0, 64, 128 ) );

	bSizer20->Add( m_ir_productos, 1, wxALL|wxALIGN_CENTER_VERTICAL, 5 );


	bSizer19->Add( bSizer20, 0, wxEXPAND, 5 );


	bSizer19->Add( 0, 0, 0, 0, 5 );

	wxBoxSizer* bSizer21;
	bSizer21 = new wxBoxSizer( wxHORIZONTAL );

	wxBoxSizer* bSizer25;
	bSizer25 = new wxBoxSizer( wxVERTICAL );

	m_staticText18 = new wxStaticText( this, wxID_ANY, wxT("Codigo:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText18->Wrap( -1 );
	m_staticText18->SetFont( wxFont( 11, wxFONTFAMILY_SWISS, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_NORMAL, false, wxT("Arial") ) );

	bSizer25->Add( m_staticText18, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxEXPAND, 5 );

	m_staticText19 = new wxStaticText( this, wxID_ANY, wxT("Cantidad:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText19->Wrap( -1 );
	m_staticText19->SetFont( wxFont( 11, wxFONTFAMILY_SWISS, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_NORMAL, false, wxT("Arial") ) );

	bSizer25->Add( m_staticText19, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxEXPAND, 5 );


	bSizer21->Add( bSizer25, 1, wxEXPAND, 5 );

	wxBoxSizer* bSizer26;
	bSizer26 = new wxBoxSizer( wxVERTICAL );

	m_textcodigo = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, wxTE_CENTER );
	bSizer26->Add( m_textcodigo, 1, wxALL|wxALIGN_CENTER_HORIZONTAL, 5 );

	m_textcantidad = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, wxTE_CENTER|wxTE_PROCESS_ENTER );
	bSizer26->Add( m_textcantidad, 1, wxALL|wxALIGN_CENTER_HORIZONTAL, 5 );


	bSizer21->Add( bSizer26, 0, 0, 5 );

	wxBoxSizer* bSizer30;
	bSizer30 = new wxBoxSizer( wxVERTICAL );


	bSizer30->Add( 0, 0, 1, wxEXPAND, 5 );

	m_confirmar = new wxButton( this, wxID_ANY, wxT("Confirmar"), wxDefaultPosition, wxDefaultSize, 0 );
	m_confirmar->SetFont( wxFont( 11, wxFONTFAMILY_SWISS, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_NORMAL, false, wxT("Arial") ) );
	m_confirmar->SetForegroundColour( wxColour( 0, 160, 0 ) );
	m_confirmar->SetBackgroundColour( wxSystemSettings::GetColour( wxSYS_COLOUR_WINDOW ) );

	bSizer30->Add( m_confirmar, 0, wxALL|wxALIGN_CENTER_HORIZONTAL, 5 );


	bSizer21->Add( bSizer30, 1, wxEXPAND, 5 );


	bSizer19->Add( bSizer21, 0, wxALIGN_CENTER_HORIZONTAL, 5 );


	bSizer19->Add( 0, 0, 0, 0, 5 );

	wxBoxSizer* bSizer28;
	bSizer28 = new wxBoxSizer( wxHORIZONTAL );

	m_staticText21 = new wxStaticText( this, wxID_ANY, wxT("Últimos ingresos:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText21->Wrap( -1 );
	m_staticText21->SetFont( wxFont( 12, wxFONTFAMILY_SWISS, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_NORMAL, false, wxT("Verdana") ) );

	bSizer28->Add( m_staticText21, 0, wxALL|wxEXPAND, 5 );


	bSizer19->Add( bSizer28, 0, wxEXPAND, 5 );

	wxBoxSizer* bSizer29;
	bSizer29 = new wxBoxSizer( wxVERTICAL );

	m_grilla3 = new wxGrid( this, wxID_ANY, wxDefaultPosition, wxDefaultSize, 0 );

	// Grid
	m_grilla3->CreateGrid( 0, 4 );
	m_grilla3->EnableEditing( true );
	m_grilla3->EnableGridLines( true );
	m_grilla3->EnableDragGridSize( false );
	m_grilla3->SetMargins( 0, 0 );

	// Columns
	m_grilla3->SetColSize( 0, 157 );
	m_grilla3->SetColSize( 1, 224 );
	m_grilla3->SetColSize( 2, 178 );
	m_grilla3->SetColSize( 3, 215 );
	m_grilla3->EnableDragColMove( false );
	m_grilla3->EnableDragColSize( true );
	m_grilla3->SetColLabelValue( 0, wxT("CODIGO") );
	m_grilla3->SetColLabelValue( 1, wxT("NOMBRE") );
	m_grilla3->SetColLabelValue( 2, wxT("MARCA") );
	m_grilla3->SetColLabelValue( 3, wxT("CANTIDAD DE INGRESO") );
	m_grilla3->SetColLabelAlignment( wxALIGN_CENTER, wxALIGN_CENTER );

	// Rows
	m_grilla3->EnableDragRowSize( true );
	m_grilla3->SetRowLabelSize( 0 );
	m_grilla3->SetRowLabelAlignment( wxALIGN_CENTER, wxALIGN_CENTER );

	// Label Appearance

	// Cell Defaults
	m_grilla3->SetDefaultCellAlignment( wxALIGN_CENTER, wxALIGN_TOP );
	bSizer29->Add( m_grilla3, 1, wxALL|wxALIGN_CENTER_HORIZONTAL, 5 );


	bSizer19->Add( bSizer29, 1, wxEXPAND, 5 );


	this->SetSizer( bSizer19 );
	this->Layout();

	this->Centre( wxBOTH );

	// Connect Events
	m_ir_ventas->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( Ventana3::ClickIrVentas ), NULL, this );
	m_ir_productos->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( Ventana3::ClickIrProductos ), NULL, this );
	m_textcantidad->Connect( wxEVT_COMMAND_TEXT_ENTER, wxCommandEventHandler( Ventana3::PressEnterCantidad ), NULL, this );
	m_confirmar->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( Ventana3::ClickConfirmar ), NULL, this );
}

Ventana3::~Ventana3()
{
	// Disconnect Events
	m_ir_ventas->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( Ventana3::ClickIrVentas ), NULL, this );
	m_ir_productos->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( Ventana3::ClickIrProductos ), NULL, this );
	m_textcantidad->Disconnect( wxEVT_COMMAND_TEXT_ENTER, wxCommandEventHandler( Ventana3::PressEnterCantidad ), NULL, this );
	m_confirmar->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( Ventana3::ClickConfirmar ), NULL, this );

}
