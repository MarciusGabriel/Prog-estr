#include <iostream>
using namespace std;
int main (){
	float custo, distribuidor, imposto, total;

   cout << " Digite o custo de fabrica do carro: \n";
   
   cin >> custo;
   
   	distribuidor = custo * 13/100;
   	
	imposto = custo * 18/100;
	
	total = custo + distribuidor + imposto;
   
   cout << "\nO Custo digitado foi: " << custo;
   
   cout << "\nO valor percentual do distribuidor foi: " << distribuidor;
   
   cout << "\n O valor do imposto foi: "<< imposto;
   
   cout << "\nO valor total foi de: " << total;




return 0;
}
