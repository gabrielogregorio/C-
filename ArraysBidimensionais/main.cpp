#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;

int main() {
	int tabela[2][2] = {};
	
	tabela[0][0] = 1;
	tabela[0][1] = 2;
	tabela[1][1] = 3;
	
	cout << tabela[0][0] << tabela[0][1] << endl;
	cout << tabela[1][0] << tabela[1][1] << endl;

    system("pause");
	return 0;
}
