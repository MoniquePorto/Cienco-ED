#include <iostream>
#include <vector>
using namespace std;

struct Livro {
    string titulo;
    string autor;
    int anoPublicacao;
};

int main() {
    vector<Livro> biblioteca;
    string SAIDA = "sair"; //

    cout << "=== SISTEMA DE CADASTRO DE LIVROS ===\n";
    cout << "Para encerrar, digite '" << SAIDA << "' no t�tulo\n\n";

    while(true) {
        Livro novoLivro;


        cout << "T�tulo do livro: ";
        getline(cin, novoLivro.titulo);


        if(novoLivro.titulo == SAIDA) {
            break;
        }


        cout << "Autor: ";
        getline(cin, novoLivro.autor);

        cout << "Ano de publica��o: ";
        cin >> novoLivro.anoPublicacao;
        cin.ignore();


        biblioteca.push_back(novoLivro);
        cout << "Livro cadastrado com sucesso!\n\n";
    }


    cout << "\n=== LIVROS CADASTRADOS ===\n";
    for(const auto& livro : biblioteca) {
        cout << "T�tulo: " << livro.titulo << "\n";
        cout << "Autor: " << livro.autor << "\n";
        cout << "Ano: " << livro.anoPublicacao << "\n";
        cout << "----------------------------\n";
    }

    cout << "\nTotal de livros registrados: " << biblioteca.size() << endl;
    return 0;
}
