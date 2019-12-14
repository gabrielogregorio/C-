#include <iostream>
#include <locale.h>

using namespace std;

int main(){
	setlocale(LC_ALL,"portuguese");

    // Variáveis
	int num1 = 0;
	int num2 = 0; 
    char operacao = 'a';

	cout << " ***** Calculadora ***** " << endl;

	cout << "Digite um número: ";	
	cin >> num1;

    cout << "Escolha uma operação: " << endl;
    cout << "a - Adição            " << endl;
    cout << "s - Subtração         " << endl;
    cout << "m - Multiplicação     " << endl;
    cout << "d - Divisão           " << endl;
    cin >> operacao;

	cout << "Digite outro número: ";
	cin >> num2;
	
	if (operacao == 'a'){
		cout << "A soma entre " << num1 << " e " << num2 << " é: " << num1 + num2;
	} else if (operacao == 's' ) {
		cout << "A subtração entre " << num1 << " e " << num2 << " é: " << num1 - num2;
    } else if (operacao == 'm'){
		cout << "A multiplicação entre " << num1 << " e " << num2 << " é: " << num1 * num2;
	} else if (operacao == 'd'){
		cout << "A divisão entre " << num1 << " e " << num2 << " é: " << num1 / num2;
	}
	
	system("pause");
    return 0;    
}
