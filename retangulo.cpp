// faça um codigo para ler as dimensões de um retangulo
// <base/altura), depois calcular e escrever a area do retangulo
#include <iostream>
using namespace std; 
int main (){
	float b, a, area;
	
	cout << "Digite a base do retangulo \n";
	
	cin >> b ;
	
	cout << "\nDigite a altura do retangulo: \n ";
	
	cin >> a ;
	
	area=b*a;
	
	cout << "\n A area do retangulo eh de: " << area;
	
	getchar();
	
	
	
	
	return 0;
}
