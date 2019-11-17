#include <iostream>

using namespace std;

int main(){
	// isso � definido pelos criadores dos compiladors
	int a = 0;       // Tem a mesma quantodade do a;
	short int b = 0; // reduz a capacidade
	long int c = 0;  // long n�o aumenta a capacidade do a.
	
	int a2 = 0;             // normal
	signed int b2 = -10;    // com sinal ou normal
	unsigned int c2 = -10;  // sem sinal. Esse -10 vai estourar tudo ( sujeira na mem�ria )
	
	cout << c2;

    // armazenar um caractere da tabela ascii, pode passar o n�mero tamb�m, em rela��o a tabela ascii;
    char caractere = 'c';
	
	// Retorna a quantidade de mem�ria que cada vari�vel est� usando
	cout << sizeof(a) << endl;
	cout << sizeof(b) << endl;
	cout << sizeof(c) << endl;
	
	return 0;
}
