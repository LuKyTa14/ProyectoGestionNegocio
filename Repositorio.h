#ifndef REPOSITORIO_H
#define REPOSITORIO_H
#include <string>
#include <vector>
#include <fstream>
using namespace std;

//AL SER UN template LA ESPECIALIZACION TIENE QUE ESTAR EN EL .h

template<typename T>
class Repositorio {
public:
	
	//CONSTRUCTOR DEL REPOSITORIO CUANDO ES LLAMADO, A TRAVEZ DEL NOMBRE DE UN ARCHIVO
	Repositorio(string nombre){
		
		T auxiliar;
		
		nombre_archivo = nombre;
		ifstream archi(nombre_archivo,ios::binary|ios::in|ios::ate);
		
		int cantidad_datos = archi.tellg()/sizeof(T);
		archi.seekg(0);
		
		for (int i=0;i<cantidad_datos;i++){
			archi.read(reinterpret_cast<char *> (&auxiliar), sizeof(auxiliar));
			Vector_Rep.push_back(auxiliar);
		}
		archi.close();
	}
	
	//DEVUELVE TODOS LOS DATOS GUARDADOS EN EL ARCHIVO LLAMADO
	vector<T> BuscarTodos(){
		return Vector_Rep;
	}
	
	//ELIMINA PERMANTENTE UNA ENTIDAD DEL VECTOR Y DEL ARCHIVO
	void EliminarPermanente(T entidad){
		auto it_remove = remove(Vector_Rep.begin(), Vector_Rep.end(), entidad);
		if(it_remove != Vector_Rep.end()){
			Vector_Rep.erase(it_remove);
		}
		
		ofstream archi(nombre_archivo,ios::binary|ios::trunc);
		for(int i=0;i<Vector_Rep.size();i++) { 
			archi.write(reinterpret_cast<char *> (&Vector_Rep[i]), sizeof(T));
		}
		archi.close();
	}
	
	//GUARDA UNA NUEVA ENTIDAD EN EL VECTOR Y EL ARCHIVO
	void GuardarNuevo(T entidad) {
		ofstream archi(nombre_archivo,ios::binary|ios::out|ios::app);
		archi.write(reinterpret_cast<char*> (&entidad), sizeof(entidad));
		Vector_Rep.push_back(entidad);
		archi.close();
	}
	
	//BUSCA SI ESXISTE ESA ENTIDAD BUSCADA EN EL VECTOR
	bool Existe(T entidad){
		bool existe = false;
		auto it = find(Vector_Rep.begin(), Vector_Rep.end(), entidad);
		if (it != Vector_Rep.end()){
			existe = true;
		}
		return existe;
	}
	
	//MODIFICA, ACTUALIZA LOS DAATOS DEL VECTOR Y ARCHIVO
	void ActualizarParametros ( T entidad, int pos) {
		fstream archi(nombre_archivo,ios::binary|ios::in|ios::ate|ios::out);
		
		int cantidad_datos = archi.tellg()/sizeof(T);
		archi.seekg(0);
		archi.seekg(pos*sizeof(T));
		archi.write(reinterpret_cast<char*> (&entidad), sizeof(entidad));
		
		Vector_Rep[pos] = entidad;
	}
	
	
private:
	string nombre_archivo;
	vector<T> Vector_Rep;
};

#endif

