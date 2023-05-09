#include <iostream>
using namespace std;
int main (){
	float preco, valor, qtd;

	
	cout << "Digite o valor do produto\n";
	cin >> preco;
	cout << "Digite a quantidade do produto\n";
	cin >> qtd;
	valor = preco*qtd;
	cout << "\nO preco digitado foi: " << preco;
	cout << "\nA quantidade digitada foi: "<< qtd;
	cout <<"\nO valor total foi de: " << valor;
	
	
	return 0;
}
