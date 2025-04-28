#include <iostream>

using namespace std;

int main() {
    float horas_trabalhadas, salario_minimo, valor_hora, salario_bruto, imposto, salario_liquido;

    // Solicita entrada dos dados
    cout << "Digite o número de horas trabalhadas: ";
    cin >> horas_trabalhadas;

    cout << "Digite o valor do salário mínimo: ";
    cin >> salario_minimo;

    // Calcula valores
    valor_hora = salario_minimo / 2;
    salario_bruto = horas_trabalhadas * valor_hora;
    imposto = salario_bruto * 0.03;
    salario_liquido = salario_bruto - imposto;

    // Exibe resultados
    cout << "\nValor da hora trabalhada: R$" << valor_hora << endl;
    cout << "Salário bruto: R$" << salario_bruto << endl;
    cout << "Imposto (3%): R$" << imposto << endl;
    cout << "Salário líquido: R$" << salario_liquido << endl;

    return 0;
}
