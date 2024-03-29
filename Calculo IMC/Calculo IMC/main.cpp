//
//  main.cpp
//  Calculo IMC
//
//  Created by Carlos Augusto Nogueira de Souza on 3/29/24.
//

#include <iostream>
using namespace std;

// Função para calcular o IMC
double calcularIMC(double peso, double altura) {
    return peso / (altura * altura);
}

int main() {
    double peso, altura;

    // Solicitar entrada do usuário para peso e altura
    cout << "Digite o peso (em quilogramas): ";
    cin >> peso;
    cout << "Digite a altura (em metros): ";
    cin >> altura;

    // Calcular o IMC
    double imc = calcularIMC(peso, altura);

    // Exibir o resultado
    cout << "Seu IMC é: " << imc << endl;

    // Interpretar o IMC
    if (imc < 18.5) {
        cout << "Abaixo do peso normal" << endl;
    } else if (imc < 25) {
        cout << "Peso normal" << endl;
    } else if (imc < 30) {
        cout << "Acima do peso normal" << endl;
    } else {
        cout << "Obesidade" << endl;
    }

    return 0;
}
