#include <iostream>
using namespace std;
int main (){
float salario, comissao, total;
cout << "Digite o salario:\n";
cin>> salario;
cout << "Digite o valor total da venda de carros deste mes:\n ";
cin>> comissao;
comissao = comissao*5/100;
total = salario+comissao;
cout << "\nO salario total foi de: "<< total;



return 0;
}
