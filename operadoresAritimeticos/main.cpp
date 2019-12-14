#include <iostream>
#include <locale.h>

using namespace std;

int main(){
	setlocale(LC_ALL,"portuguese");
	
	double numeroGigante = 1234;
	float numeroGrande = 987;
	int numeroNormal;
	
	cout << "Digite um número: ";
	cin >> numeroNormal;
	int resto = numeroNormal % 2;
	
	if (resto == 0){
		cout << "Esse númer é par" << endl;
	} else {
		cout << "Esse número é impar" << endl;
	}
	
	cout << numeroGigante / numeroGrande << endl;
	cout << numeroNormal  + numeroGrande << endl;
	cout << numeroNormal  - numeroNormal << endl;
	cout << numeroNormal  * numeroGrande << endl;
	
    system("pause");

	return 0;
	
}
