#include <iostream>

using namespace std;

 
int main(){
	// Array com lixo
	int numeros[10];
	
	// Iniciando arrays com zeros
	int outros[10] = {};

	
	numeros[1] = 10;
	numeros[2] = 9;
	numeros[3] = 8;
	numeros[4] = 7;
	char letras[] = {'a','b','c'};

	for (int i = 0; i< 10; i++){		
     	cout << outros[i] << endl;
		cout << numeros[i] <<endl;
	}
	return 0;
}
