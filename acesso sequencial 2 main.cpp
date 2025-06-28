#include <iostream>
#include <fstream>    // Biblioteca para manipulação de arquivos
#include <string>
using namespace std;

int main() {

    ifstream arquivo("dados.txt"); // Cria um objeto de entrada (ifstream) e abre o arquivo "dados.txt"
    string linha;  // Variável para armazenar temporariamente cada linha lida do arquivo
    int contador = 0

    // Enquanto for possível ler uma linha do arquivo, execute o bloco
    while (getline(arquivo, linha)) {
    // Exibe a linha lida no console
    cout << "linha " << ++contador << ": " << linha << endl;
    }

    cout << "/nTotal de linhas " << contador << endl;
    arquivo.close(); // Fecha o arquivo após a leitura
    return 0;
}


