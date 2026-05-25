#include<iostream>
#include<fstream>
#include<sstream>

using namespace std;

int main(){

	ifstream entrada("Input/ArchivoEntrada.txt.txt");
	ofstream salida("output/archivoSalida.txt");
	
	if (entrada.is_open()&&salida.is_open()){
		cout<<"Archivo abierto"<<endl;
		string line;
		cout<<endl;

		while(getline(entrada,line)){
			salida << line;
		}
		cout<<"Archivo copiado correctamente";
	}
}
