#include <iostream>
#include <locale.h>

using namespace std;

int main(){
	setlocale(LC_ALL,"portuguese");

    // Vari�veis
	int num1 = 0;
	int num2 = 0; 
    char operacao = 'a';

	cout << " ***** Calculadora ***** " << endl;

	cout << "Digite um n�mero: ";	
	cin >> num1;

    cout << "Escolha uma opera��o: " << endl;
    cout << "a - Adi��o            " << endl;
    cout << "s - Subtra��o         " << endl;
    cout << "m - Multiplica��o     " << endl;
    cout << "d - Divis�o           " << endl;
    cin >> operacao;

	cout << "Digite outro n�mero: ";
	cin >> num2;
	
	if (operacao == 'a'){
		cout << "A soma entre " << num1 << " e " << num2 << " �: " << num1 + num2;
	} else if (operacao == 's' ) {
		cout << "A subtra��o entre " << num1 << " e " << num2 << " �: " << num1 - num2;
    } else if (operacao == 'm'){
		cout << "A multiplica��o entre " << num1 << " e " << num2 << " �: " << num1 * num2;
	} else if (operacao == 'd'){
		cout << "A divis�o entre " << num1 << " e " << num2 << " �: " << num1 / num2;
	}
	
	system("pause");
    return 0;    
}
