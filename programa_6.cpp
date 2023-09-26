#include <iostream>
#include <string>
#include <stdio.h>
#include <iomanip> 

using namespace std;

int main() {
    int matricula;
    double nota1, nota2, nota3;
    char continuar;

    cout << fixed << setprecision(1);

    cout << "Cadastro de Alunos" << endl;
    cout << " " << endl;

    

    do {        
        cout << "Informe a matrícula do aluno (apenas números): ";
        cin >> matricula;
        
        cout << "Informe a primeira nota: ";
        cin >> nota1;
        cout << "Informe a segunda nota: ";
        cin >> nota2;
        cout << "Informe a terceira nota: ";
        cin >> nota3;

        
        double media = (nota1 + nota2 + nota3) / 3.0;
        
        cout << " "<< endl;
                
        cout << "==========================================="<< endl;
        cout << "MATRICULA  NOTA1  NOTA2  NOTA3  MEDIA" << endl;
        cout << "==========================================="<< endl;
        cout << matricula << "        " << nota1 << "     " << nota2 << "     " << nota3 << "     " << media << endl;
        

        cout << " "<< endl;
        cout << "Deseja cadastrar outro aluno? (S/N): ";
        cin >> continuar;
        cout << " "<< endl;
        

    } while (continuar == 'S' || continuar == 's');

       

    return 0;
}
