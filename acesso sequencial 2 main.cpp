#include <iostream>
#include <fstream>    // Biblioteca para manipula��o de arquivos
#include <string>
using namespace std;

int main() {

    ifstream arquivo("dados.txt"); // Cria um objeto de entrada (ifstream) e abre o arquivo "dados.txt"
    string linha;  // Vari�vel para armazenar temporariamente cada linha lida do arquivo
    int contador = 0

    // Enquanto for poss�vel ler uma linha do arquivo, execute o bloco
    while (getline(arquivo, linha)) {
    // Exibe a linha lida no console
    cout << "linha " << ++contador << ": " << linha << endl;
    }

    cout << "/nTotal de linhas " << contador << endl;
    arquivo.close(); // Fecha o arquivo ap�s a leitura
    return 0;
}


