#include <iostream>
#include <string>
using namespace std;

// Gerando limite de vetores e criando variáveis.
int main(){
    const int tamanho = 5;
    int idades[tamanho];
    string nomes[tamanho];

// Pedindo pro usuário digita o nome e idade de uma pessoa.
    cout << "Digite a idade e o nome da pessoa: " << endl;
    for (int i = 0; i < tamanho; i++){
        cout << "Idade da pessoa "<< i + 1 << ": ";
        cin >> idades[i];
        cin.ignore(); 
        cout << "Nome da pessoa " << i + 1 << ": ";
        getline(cin, nomes[i]);
    }

// Colocando os valores inserido pelo usuário na maior idade, menor idade e soma idade.
    int maiorIdade = idades[0];
    int menorIdade = idades[0];
    string nomeMaiorIdade = nomes[0];
    string nomeMenorIdade = nomes[0];
    int somaIdades = 0;

    for (int i = 0; i < tamanho; ++i){
        if (idades[i] > maiorIdade){
            maiorIdade = idades[i];
            nomeMaiorIdade = nomes[i];
        } 
        if (idades[i] < menorIdade) {
            menorIdade = idades[i];
            nomeMenorIdade = nomes[i]; 
        }
        somaIdades += idades[i];
    }
// Cálculo de média de idade.
    float mediaIdades = static_cast<float>(somaIdades) / tamanho; 

// Imprimindo os resultados.
    cout << "\nNome da pessoa mais velha: " << nomeMaiorIdade << " (Idade: " << maiorIdade << ")" << endl;
    cout << "Nome da pessoa mais nova: " << nomeMenorIdade << " (Idade: " << menorIdade << ")" << endl;
    cout << "Media das idades: " << mediaIdades << endl;
    cout << "Saldo das idades: " << somaIdades << endl;

    return 0;
}
