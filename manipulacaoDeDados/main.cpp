#include <iostream>

// regionaliza��o das coisas, inclusive acentua��o e datas
#include <locale.h>

using namespace std;

int main(){
    setlocale(LC_ALL, "portuguese");
    
	cout << "Infome um n�mero: " << endl;
	
	int num1 = 0;
	cin >> num1;
	
	cout << "O n�mero digitado e: " << num1 << endl;

	
	return 0;
	
}
