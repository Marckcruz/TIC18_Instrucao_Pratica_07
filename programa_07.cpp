#include <iostream>

using namespace std;

int main() {
    int altura;

    cout << " " << endl;
    cout << "Digite a altura do padrão: ";
    cin >> altura;

    char caractere = 'A'; 

    for (int i = 1; i <= altura; i++) {
        for (int j = 1; j <= i; j++) {
            
            cout << caractere;
            caractere++;
        }
        cout << endl; 
    }
    cout << " " << endl;

    return 0;
}
