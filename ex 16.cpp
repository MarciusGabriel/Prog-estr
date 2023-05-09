#include <iostream>
using namespace std;

int main() {
  float altura, peso;
  cout << "Digite a altura da pessoa em metros: ";
  cin >> altura;
  cout << "Digite o peso da pessoa em quilogramas: ";
  cin >> peso;

  if (altura < 1.20) {
    if (peso <= 60) {
      cout << "Classificaçao: A\n";
    } else if (peso <= 90) {
      cout << "Classificaçao: D\n";
    } else {
      cout << "Classificaçao: G\n";
    }
  } else if (altura <= 1.70) {
    if (peso <= 60) {
      cout << "Classificaçao: B\n";
    } else if (peso <= 90) {
      cout << "Classificaçao: E\n";
    } else {
      cout << "Classificaçao: H\n";
    }
  } else {
    if (peso <= 60) {
      cout << "Classificaçao: C\n";
    } else if (peso <= 90) {
      cout << "Classificaçao: F\n";
    } else {
      cout << "Classificaçao: I\n";
    }
  }

  return 0;
}
