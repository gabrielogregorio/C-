#include <iostream>
#include <locale.h>

using namespace std;

int main(){
	setlocale(LC_ALL,"portuguese");
	
	double numeroGigante = 1234;
	float numeroGrande = 987;
	int numeroNormal;
	
	cout << "Digite um n�mero: ";
	cin >> numeroNormal;
	int resto = numeroNormal % 2;
	
	if (resto == 0){
		cout << "Esse n�mer � par" << endl;
	} else {
		cout << "Esse n�mero � impar" << endl;
	}
	
	cout << numeroGigante / numeroGrande << endl;
	cout << numeroNormal  + numeroGrande << endl;
	cout << numeroNormal  - numeroNormal << endl;
	cout << numeroNormal  * numeroGrande << endl;
	
    system("pause");

	return 0;
	
}
