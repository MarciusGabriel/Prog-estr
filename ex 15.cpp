#include <iostream>

using namespace std;

int main() {
    float x, y, z;
    cout << "Digite os valores de X, Y e Z: ";
    cin >> x >> y >> z;
    

    if (x < y + z && y < x + z && z < x + y) {
        if (x == y && y == z) {
            cout << "Triangulo equilatero." << endl;
        }
        else if (x == y || x == z || y == z) {
            cout << "Triangulo isosceles." << endl;
        }
        else {
            cout << "Triangulo escaleno." << endl;
        }
    }
    else {
        cout << "Nao e possivel formar um triangulo com esses valores." << endl;
    }
    return 0;
}
