#include <iostream>
#include <locale.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

using namespace std;

int main() {
    setlocale(LC_ALL, "portuguese");

    int num = 0;    
	cin >> num;
	
	switch (num){
		case 1:
			cout << "Janeiro" << endl;
			break;

		case 2:
			cout << "Fevereiro" << endl;
			break;
        default:
        	cout << "Outro Mês" << endl;
	}
	
    system("pause");
	return 0;
}

