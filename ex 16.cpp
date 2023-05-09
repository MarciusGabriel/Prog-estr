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
      cout << "Classifica�ao: A\n";
    } else if (peso <= 90) {
      cout << "Classifica�ao: D\n";
    } else {
      cout << "Classifica�ao: G\n";
    }
  } else if (altura <= 1.70) {
    if (peso <= 60) {
      cout << "Classifica�ao: B\n";
    } else if (peso <= 90) {
      cout << "Classifica�ao: E\n";
    } else {
      cout << "Classifica�ao: H\n";
    }
  } else {
    if (peso <= 60) {
      cout << "Classifica�ao: C\n";
    } else if (peso <= 90) {
      cout << "Classifica�ao: F\n";
    } else {
      cout << "Classifica�ao: I\n";
    }
  }

  return 0;
}
