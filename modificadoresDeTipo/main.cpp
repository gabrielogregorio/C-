#include <iostream>

using namespace std;

int main(){
	// isso é definido pelos criadores dos compiladors
	int a = 0;       // Tem a mesma quantodade do a;
	short int b = 0; // reduz a capacidade
	long int c = 0;  // long não aumenta a capacidade do a.
	
	int a2 = 0;             // normal
	signed int b2 = -10;    // com sinal ou normal
	unsigned int c2 = -10;  // sem sinal. Esse -10 vai estourar tudo ( sujeira na memória )
	
	cout << c2;

    // armazenar um caractere da tabela ascii, pode passar o número também, em relação a tabela ascii;
    char caractere = 'c';
	
	// Retorna a quantidade de memória que cada variável está usando
	cout << sizeof(a) << endl;
	cout << sizeof(b) << endl;
	cout << sizeof(c) << endl;
	
	return 0;
}
