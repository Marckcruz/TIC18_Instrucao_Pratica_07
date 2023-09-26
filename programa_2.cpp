#include <iostream>

using namespace std;

int main() {
    int num;
    int numOriginal;
    int numRevertido = 0;
    int restante;

    
    cout << "Digite um número inteiro: ";
    cin >> num;

    numOriginal = num; 

    
    while (num > 0) {
        restante = num % 10;
        numRevertido = numRevertido * 10 + restante;
        num /= 10;
    }

    
    if (numOriginal == numRevertido) {
        cout << numOriginal << " é um palíndromo." << endl;
    } else {
        cout << numOriginal << " não é um palíndromo." << endl;
    }
cout << " " << endl;
    return 0;
}
