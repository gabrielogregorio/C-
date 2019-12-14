#include <iostream>
#include <locale.h>
#include <stdlib.h>

using namespace std;

int main() {
	setlocale(LC_ALL,"portuguese");
	int i = 0;
	cout << "Digite um número: ";
	cin >> i;
	
	string texto = (i > 10) ? "Maior que 10":"Menor que 10";

	cout << texto << endl;
	
	system("pause");
	
	return 0;
}
