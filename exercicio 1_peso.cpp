#include <iostream>

using namespace std;

int main() {
    float peso, altura, imc;

    cout << "Digite seu peso (kg): ";
    cin >> peso;

    cout << "Digite sua altura (m): ";
    cin >> altura;

    imc = peso / (altura * altura);

    cout << "Seu IMC �: " << imc << endl;

    if (imc < 20) {
        cout << "Abaixo do peso" << endl;
    } else if (imc >= 20 && imc < 25) {
        cout << "Peso ideal" << endl;
    } else {
        cout << "Acima do peso" << endl;
    }

    return 0;
}
