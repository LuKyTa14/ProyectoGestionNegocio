#include "VentasHistorico.h"
#include <cstring>
#include <vector>
#include <algorithm>
#include <wx/string.h>
#include "ConvertirString.h"
using namespace std;


VentasHistorico::VentasHistorico() : Repo_Venta("Ventas.dat"){

}

void VentasHistorico::AgregarNuevaVenta(Ventas v) {
	int codigo_factura = nuevo_codigo();
	Venta nueva_venta;
	nueva_venta.dia = v.GetDia();
	nueva_venta.mes = v.GetMes();
	nueva_venta.anio = v.GetAnio();
	strcpy(nueva_venta.nombre, v.GetNombre());
	strcpy(nueva_venta.apellido, v.GetApellido());
	nueva_venta.total = v.CalculatTotal();
	nueva_venta.cod_factura = codigo_factura;
	
	Repo_Venta.GuardarNuevo(nueva_venta);
}

int VentasHistorico::nuevo_codigo(){
	/*
	int codigo = 10000;
	vector<Venta> v_venta = Repo_Venta.BuscarTodos();
	bool nuevo_cod = true;
	
	while(nuevo_cod) {
		codigo = codigo + 1;
		nuevo_cod = false;
		
		for(Venta &v: v_venta){
			if(v.cod_factura == codigo) {
				nuevo_cod = true;
			}
		}
	} */
	
	Venta v;
	ifstream archi("Ventas.dat",ios::binary|ios::in|ios::app|ios::ate);
	int tamanio = archi.tellg()/sizeof(v);
	if(tamanio == 0) {
		codigo = 10000;
	} else {
		archi.seekg(0);
		archi.seekg((tamanio-1)*sizeof(v));
		archi.read(reinterpret_cast<char*> (&v), sizeof(v));
		archi.close();
		codigo = v.cod_factura;
		codigo++;
	}
	return codigo;
}

vector<Venta> VentasHistorico::UltimasVentas() {
	vector<Venta> aux = Repo_Venta.BuscarTodos();
	reverse(aux.begin(),aux.end());
	if(aux.size()>18) {
		aux.erase(aux.begin()+18,aux.end());
	}
	return aux;
	
}

vector<Venta> VentasHistorico::FiltrarPorFecha(string fecha) {
	vector<Venta> todas = Repo_Venta.BuscarTodos();
	vector<Venta> aux;
	for(Venta &v: todas) {
		string f_fecha = to_string(v.dia) + "/" + to_string(v.mes) + "/" + to_string(v.anio);
		if(f_fecha == fecha) {
			aux.push_back(v);
		}
	}
	return aux;
}

vector<Venta> VentasHistorico::FiltrarPorCliente(string nombre) {
	vector<Venta> todas = Repo_Venta.BuscarTodos();
	vector<Venta> aux;
	string nom, ape;
	for(Venta &v: todas) {
		/*
		string nom = v.nombre;
		string ape = v.apellido;
		string cliente = ape + nom;
		*/
		string cliente = v.apellido;
		if(cliente == nombre) {
			aux.push_back(v);
		}
	}
	return aux;
}

Venta VentasHistorico::FiltrarPorFactura(int codigo) {
	vector<Venta> todas = Repo_Venta.BuscarTodos();
	Venta v_aux;
	for(int i=0;i<todas.size();i++) { 
		int A = todas[i].cod_factura;
		if(A == codigo) {
			v_aux = todas[i];
			break;
		}
	}
	return v_aux;
}
