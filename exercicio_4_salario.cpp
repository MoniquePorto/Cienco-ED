#include <iostream>

using namespace std;

int main() {
    float salario_atual, novo_salario;

    // Solicita entrada do sal�rio atual
    cout << "Digite o sal�rio atual do funcion�rio: ";
    cin >> salario_atual;

    // Calcula o reajuste baseado nas faixas salariais
    if (salario_atual < 1000) {
        novo_salario = salario_atual * 1.15; // Aumento de 15%
    } else if (salario_atual >= 1000 && salario_atual <= 1500) {
        novo_salario = salario_atual * 1.10; // Aumento de 10%
    } else {
        novo_salario = salario_atual * 1.05; // Aumento de 5%
    }

    // Exibe o novo sal�rio
    cout << "O novo sal�rio do funcion�rio �: R$" << novo_salario << endl;

    return 0;
}
