#include <iostream>

using namespace std;

int main() {
    int num;

    
    cout << "Digite um número inteiro positivo: ";
    cin >> num;

    cout << " " << endl;

    if (num <= 0) {
        cout << "Por favor, insira um número inteiro positivo." << endl;
        return 1; 
    }

    int a = 0, b = 1, c;

    cout << "Sequência de Fibonacci até " << num << ": ";

    if (num >= 1) {
        cout << a;
    }
    if (num >= 2) {
        cout << ", " << b;
    }

    for (int i = 3; i <= num; i++) {
        c = a + b;
        if (c <= num) {
            cout << ", " << c;
        } else {
            break;
        }
        a = b;
        b = c;
    }

    cout << endl;
    cout << " " << endl;
    
    return 0;
}
