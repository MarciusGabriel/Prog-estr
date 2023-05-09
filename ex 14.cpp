#include <iostream>
using namespace std;

int main() {
    float preco_atual, novo_preco;
    int venda_media;

    cout << "Digite o preco atual do produto: R$ ";
    cin >> preco_atual;

    cout << "Digite a venda media mensal do produto: ";
    cin >> venda_media;

    if (venda_media < 500 && preco_atual < 30.0) {
        novo_preco = preco_atual * 1.1; 
    } else if (venda_media < 500 && preco_atual >= 30.0 && preco_atual < 80.0) {
        novo_preco = preco_atual * 1.15;
    } else if (venda_media < 500 && preco_atual >= 80.0) {
        novo_preco = preco_atual;
    } else if (venda_media >= 500 && venda_media < 1200 && preco_atual < 30.0) {
        novo_preco = preco_atual * 1.1; 
    } else if (venda_media >= 500 && venda_media < 1200 && preco_atual >= 30.0 && preco_atual < 80.0) {
        novo_preco = preco_atual * 1.15; 
    } else if (venda_media >= 500 && venda_media < 1200 && preco_atual >= 80.0) {
        novo_preco = preco_atual; 
    } else if (venda_media >= 1200 && preco_atual < 30.0) {
        novo_preco = preco_atual * 1.1; 
    } else if (venda_media >= 1200 && preco_atual >= 30.0 && preco_atual < 80.0) {
        novo_preco = preco_atual * 1.15; 
    } else if (venda_media >= 1200 && preco_atual >= 80.0) {
        novo_preco = preco_atual;  
    }

    if (novo_preco != preco_atual) {
        novo_preco *= 0.8;  
    }

    cout << "O novo preço do produto eh: R$ " << novo_preco << endl;

    return 0;
}
