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

    int somaDivisores = 0;

    
    for (int i = 1; i <= num / 2; i++) {
        if (num % i == 0) {
            somaDivisores += i;
        }
    }

    
    if (somaDivisores == num) {
        cout << num << " é um número perfeito." << endl;
    } else {
        cout << num << " não é um número perfeito." << endl;
    }
    cout << " " << endl;
    return 0;
}
