#include <iostream>

using namespace std;

int main() {
    int altura;

    cout << "Informe a altura do padrão: ";
    cin >> altura;
    
    cout << " " << endl;
    
    cout << "Padrão 'a':" << endl;
    cout << " " << endl;
    for (int i = 0; i < altura; i++) {
        for (int j = 0; j < altura; j++) {
            cout << "* ";
        }
        cout << endl;
    }

    cout << " " << endl;
    
    cout << "Padrão 'b':" << endl;
    cout << " " << endl;
    for (int i = 1; i <= altura; i++) {
        for (int j = 1; j <= i; j++) {
            cout << "* ";
            }
            cout << endl;
            }

    cout << " " << endl;

    
    cout << "Padrão 'c':"<< endl;
    cout << " " << endl;
    for (int i = 0; i < altura; i++) {
        for (int j = 0; j < altura; j++) {
            if (i == 0 || i == altura - 1 || j == 0 || j == altura - 1) {
                cout << "* ";
            } else {
                cout << "  ";
            }
        }
        cout << endl;
    }

    cout << " " << endl;

    return 0;
}
