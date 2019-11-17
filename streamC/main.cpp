/* Stream � uma sequ�ncia de dados */
// biblioteca <iostream.h>
// Ela substitui por completo a <stdio.h> por completo.

// << Operador de inser��o
// >> Operador de extra��o  

#include <iostream>
#include <stdlib.h>
#include <iomanip> // para formatarmos o que ser� impresso no controle. Como o setw
using namespace std;

// manipuladores hex e setw()
int main(){	
	// objeto c out
    cout << "Estudanto a entrada e saida de dados" << endl;
	cout << 10 + 50 << endl;
		
	// manipulador hex converte para hexadecimal
	cout << hex << 10 + 50 << endl;
	
	// Nosso campo ter� 1000 caracteres
	cout << setw(1000) << 10 + 50 << endl;
	
	return 0;
}
