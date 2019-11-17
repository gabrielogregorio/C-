#include <iostream>

// regionalização das coisas, inclusive acentuação e datas
#include <locale.h>

using namespace std;

int main(){
    setlocale(LC_ALL, "portuguese");
    
	cout << "Infome um número: " << endl;
	
	int num1 = 0;
	cin >> num1;
	
	cout << "O número digitado e: " << num1 << endl;

	
	return 0;
	
}
