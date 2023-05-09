#include <iostream>
using namespace std;
int main (){
	int a,b,c,d;
	
	cout << "Digite o primeiro nummero\n";
	cin >> a;
	cout << "Digite o segundo nummero\n";
	cin >> b;
	cout << "Digite o terceiro nummero\n";
	cin >> c;
	cout << "Digite o quarto nummero\n";
	cin >> d;
	
	if (a <= b && b<=c){
		cout << "Os numeros em ordem crescente sao" << d << c << b << a ;
	}
	else {
		cout << "Os numeros na foram digitados em ordem crescente";
	}
	
	
	

	
	
	
	return 0;
}
