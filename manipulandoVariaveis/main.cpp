#include <iostream>

using namespace std;

int main(){
	int varInt = 100;
	char c = 'g';
	double pFlutuante = 3.53;
	
	cout << "Valor da varInt e:     " << varInt     << endl;
	cout << "Valor da c e:          " << c          << endl;
	cout << "Valor da pFlutuante e: " << pFlutuante << endl << endl;	

	cout << "Memoria da variavel varint e:   " << sizeof(varInt)     << endl;	
	cout << "Memoria da variavel pFlutuante: " << sizeof(pFlutuante) << endl;	
	cout << "Memoria da variavel c:          " << sizeof(c)          << endl;	
	
	system("pause");
	
	return 0;
}
