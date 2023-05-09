#include <iostream>
using namespace std;

int main() {
    int I;
    float A, B, C;

    cout << "Digite o valor de I (1, 2 ou 3): ";
    cin >> I;

    cout << "Digite o valor de A: ";
    cin >> A;

    cout << "Digite o valor de B: ";
    cin >> B;

    cout << "Digite o valor de C: ";
    cin >> C;

    if (I == 1) {
 
        if (A < B && A < C) {
            cout << A << " ";
            if (B < C) {
                cout << B << " " << C << endl;
            } else {
                cout << C << " " << B << endl;
            }
        } else if (B < A && B < C) {
            cout << B << " ";
            if (A < C) {
                cout << A << " " << C << endl;
            } else {
                cout << C << " " << A << endl;
            }
        } else {
            cout << C << " ";
            if (A < B) {
                cout << A << " " << B << endl;
            } else {
                cout << B << " " << A << endl;
            }
        }
    } else if (I == 2) {
    
        if (A > B && A > C) {
            cout << A << " ";
            if (B > C) {
                cout << B << " " << C << endl;
            } else {
                cout << C << " " << B << endl;
            }
        } else if (B > A && B > C) {
            cout << B << " ";
            if (A > C) {
                cout << A << " " << C << endl;
            } else {
                cout << C << " " << A << endl;
            }
        } else {
            cout << C << " ";
            if (A > B) {
                cout << A << " " << B << endl;
            } else {
                cout << B << " " << A << endl;
            }
        }
    } else {

        if (A > B && A > C) {
            if (B > C) {
                cout << B << " " << A << " " << C << endl;
            } else {
                cout << C << " " << A << " " << B << endl;
            }
        } else if (B > A && B > C) {
            if (A > C) {
                cout << A << " " << B << " " << C << endl;
            } else {
                cout << C << " " << B << " " << A << endl;
            }
        } else {
            if (A > B) {
                cout << A << " " << C << " " << B << endl;
            } else {
                cout << B << " " << C << " " << A << endl;
            }
        }
    }

    return 0;
}
