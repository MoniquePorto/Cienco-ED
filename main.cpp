#include <iostream>
#include <list>

int main() {
    std::list<int> numeros;
    int numero;

    // Solicita ao usuário que digite 5 números inteiros
    std::cout << "Digite 5 números inteiros:\n";
    for (int i = 0; i < 5; ++i) {
        std::cin >> numero;
        numeros.push_back(numero);
    }

    // Exibe os números na ordem de inserção
    std::cout << "Números na ordem de inserção: ";
    for (int n : numeros) {
        std::cout << n << " ";
    }
    std::cout << std::endl;

    // Exibe os números em ordem inversa
    std::cout << "Números em ordem inversa: ";
    for (auto it = numeros.rbegin(); it != numeros.rend(); ++it) {
        std::cout << *it << " ";
    }
    std::cout << std::endl;

    return 0;
}
