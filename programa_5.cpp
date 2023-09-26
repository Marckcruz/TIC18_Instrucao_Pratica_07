#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    
    srand(static_cast<unsigned int>(time(nullptr)));
    
    int numeroSecreto = rand() % 100 + 1;
    
    int palpite;
    int tentativas = 0;

    cout << "Olá!!!" << endl; 
    cout << "Bem-vindo ao jogo de adivinhação!" << endl;
    cout << " " << endl;

    do {        
        cout << "Adivinhe um número (entre 1 e 100): ";
        cin >> palpite;

        tentativas++;
        
        if (palpite < numeroSecreto) {
            cout << "Adivinhe um número mais alto." << endl;
        } else if (palpite > numeroSecreto) {
            cout << "Advinnhe um número mais baixo." << endl;
        } else {
            cout << "Parabéns! Você acertou o número em " << tentativas << " tentativas." << endl;
            cout << " " << endl;
        }

                
    } while (palpite != numeroSecreto);

    cout << " " << endl;
    return 0;
}
