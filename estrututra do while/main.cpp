#include <iostream>
#include <stdlib.h>
#include <locale.h>

using namespace std;

int main(){
	setlocale(LC_ALL,"portuguese");
	
	int x = 1;
	
	do {
		cout << "Evento";
	} while (x > 1);
	
	system("pause");
	return 0;
}

