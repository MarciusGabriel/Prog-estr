#include <iostream>
using namespace std;

int main() {
  int codEstado, codCarga;
  float pesoCarga, pesoQuilos, precoCarga, precoQuilo, imposto, valorTotal;

  cout << "Digite o codigo do estado de origem da carga (entre 1 e 5): ";
  cin >> codEstado;

  cout << "Digite o peso da carga do caminhao em toneladas: ";
  cin >> pesoCarga;

  cout << "Digite o codigo da carga (entre 10 e 40): ";
  cin >> codCarga;

  pesoQuilos = pesoCarga * 1000; 

  if (codCarga >= 10 && codCarga <= 15) {
    precoQuilo = 100;
  } else if (codCarga >= 21 && codCarga <= 30) {
    precoQuilo = 250;
  } else if (codCarga >= 31 && codCarga <= 40) {
    precoQuilo = 340;
  }

  precoCarga = pesoQuilos * precoQuilo; 

  switch (codEstado) { 
    case 1:
      imposto = precoCarga * 0.35;
      break;
    case 2:
      imposto = precoCarga * 0.25;
      break;
    case 3:
      imposto = precoCarga * 0.15;
      break;
    case 4:
      imposto = precoCarga * 0.05;
      break;
    case 5:
      imposto = 0;
      break;
  }

  valorTotal = precoCarga + imposto;

  cout << "\nPeso da carga em quilos: " << pesoQuilos;
  cout << "\nPreço da carga: R$" << precoCarga;
  cout << "\nImposto: R$" << imposto;
  cout << "\nValor total transportado: R$" << valorTotal;

  return 0;
}
