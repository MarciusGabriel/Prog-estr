#include <iostream>

using namespace std;

int main() {
    float angulo;
    cout << "Digite a medida do angulo em graus (de 1 a 360): ";
    cin >> angulo;
    
    if (angulo > 0 && angulo <= 90) {
        cout << "O angulo esta no primeiro quadrante." << endl;
    }
    else if (angulo > 90 && angulo <= 180) {
        cout << "O angulo esta no segundo quadrante." << endl;
    }
    else if (angulo > 180 && angulo <= 270) {
        cout << "O angulo esta no terceiro quadrante." << endl;
    }
    else if (angulo > 270 && angulo <= 360) {
        cout << "O angulo está no quarto quadrante." << endl;
    }
    else {
        cout << "Valor invalido. Digite um angulo entre 1 e 360 graus." << endl;
    }
    
    return 0;
}
