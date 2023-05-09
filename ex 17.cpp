#include <iostream>
using namespace std;

int main() {
    int codProduto, codPais;
    float peso, precoGrama, precoTotal, imposto, valorTotal;

    cout << "Digite o codigo do produto (1 a 10): ";
    cin >> codProduto;
    cout << "Digite o peso do produto em quilos: ";
    cin >> peso;
    cout << "Digite o codigo do pais de origem (1 a 3): ";
    cin >> codPais;

    
    peso *= 1000;

  
    if (codProduto >= 1 && codProduto <= 4) {
        precoGrama = 10;
    } else if (codProduto >= 5 && codProduto <= 7) {
        precoGrama = 25;
    } else if (codProduto >= 8 && codProduto <= 10) {
        precoGrama = 35;
    } else {
        cout << "Codigo de produto invalido!" << endl;
        return 0;
    }

 
    precoTotal = peso * precoGrama;

   
    if (codPais == 1) {
        imposto = 0;
    } else if (codPais == 2) {
        imposto = 0.15 * precoTotal;
    } else if (codPais == 3) {
        imposto = 0.25 * precoTotal;
    } else {
        cout << "Código de pais invalido!" << endl;
        return 0;
    }

    
    valorTotal = precoTotal + imposto;

  
    cout << "Peso do produto em gramas: " << peso << endl;
    cout << "Preço total do produto: R$ " << precoTotal << endl;
    cout << "Valor do imposto: R$ " << imposto << endl;
    cout << "Valor total da compra: R$ " << valorTotal << endl;

    return 0;
}
