#include <iostream>
#include <iomanip>
using namespace std;

int main(){
	for (int x = 1; x < 11; ++x){
		for (int i = 1; i < 11; ++i){
			cout << x << "*" << i << "=" << x*i << " | " ;
		}
		cout << endl;
	}
	system("pause");
	return 0;
}
