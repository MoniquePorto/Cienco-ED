#include <iostream>
#include <list>

int main() {
    std::list<int> numeros;
    int numero;

    // Solicita ao usu�rio que digite 5 n�meros inteiros
    std::cout << "Digite 5 n�meros inteiros:\n";
    for (int i = 0; i < 5; ++i) {
        std::cin >> numero;
        numeros.push_back(numero);
    }

    // Exibe os n�meros na ordem de inser��o
    std::cout << "N�meros na ordem de inser��o: ";
    for (int n : numeros) {
        std::cout << n << " ";
    }
    std::cout << std::endl;

    // Exibe os n�meros em ordem inversa
    std::cout << "N�meros em ordem inversa: ";
    for (auto it = numeros.rbegin(); it != numeros.rend(); ++it) {
        std::cout << *it << " ";
    }
    std::cout << std::endl;

    return 0;
}
