#include<iostream>
#include<fstream>
#include<sstream>

using namespace std;

int main(){

	ifstream entrada("Input/ArchivoEntrada.txt.txt");

	if (entrada.is_open()){
		cout<<"Archivo abierto"<<endl;
		string line;
		cout<<endl;

		while(getline(entrada,line)){
			cout<<line<<endl;
		}
	}
}
