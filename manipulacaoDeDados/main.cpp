#include <iostream>
#include <locale.h> // regionaliza��o das coisas, inclusive acentua��o e datas

using namespace std;

int main(){
    setlocale(LC_ALL, "portuguese");
    
	cout << "Infome um n�mero: " << endl;
	
	int num1 = 0;
	cin >> num1;
	
	cout << "O n�mero digitado e: " << num1 << endl;

    system("pause");
	return 0;
	
}
