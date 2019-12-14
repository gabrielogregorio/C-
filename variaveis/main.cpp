#include <iostream>

using namespace std;

int main(){
	int num1 = 10;
	int num2 = 1000;
	
	char letra = 'A';
	char letras[2] = {};
	letras[1] = 'b';

	char nome[10] = "Julia";
	float numero = 10.5;
	bool acertou = false;
	
	
	// endl significa que estamos finalizando a linha
	cout << num1 + num2 << endl;
	cout << letra       << endl;
	cout << letras[0]   << letras[1] << endl;
	cout << nome        << endl;
	cout << numero      << endl;
	cout << acertou     << endl;
	
    system("PAUSE");
    // programa finalizado com sucesso	
	return 0;
}
