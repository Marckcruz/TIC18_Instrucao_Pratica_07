#include <iostream>
#include <cmath>

using namespace std;

int main() {

    int num; 
    int numOriginal;
    int restante;
    int n = 0;
    int resultado = 0;

    
    cout << "Digite um número inteiro: ";
    cin >> num;

    numOriginal = num;

    
    while (numOriginal != 0) {
        numOriginal /= 10;
        n++;
    }

    numOriginal = num;

    
    while (numOriginal != 0) {
        restante = numOriginal % 10;
        resultado += pow(restante, n);
        numOriginal /= 10;
    }

    
    if (resultado == num) {
        cout << num << " é um número Armstrong." << endl;
    } else {
        cout << num << " não é um número Armstrong." << endl;
    }
    cout << " " << endl;
    return 0;

    

}
