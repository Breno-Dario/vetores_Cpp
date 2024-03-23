#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

// Declarando um limite para o vetor.
const int valorTaxa = 5;

// Fazendo calculo de divída, multa, juros e a ser pago.
void calculoDePrestacoes(double divida[], int dia[], double valorMulta[], double valorJuros[], double valorPagar[]) {
    for (int i = 0; i < valorTaxa; i++) {
        valorMulta[i] = 0.02 * divida[i];
        valorJuros[i] = 0.01 * dia[i] * divida[i];
        valorPagar[i] = divida[i] + valorMulta[i] + valorJuros[i];
    }
}

// Gerando uma tabela de resultados.
void imprimirPrestacoes(double divida[], int dia[], double valorMulta[], double valorJuros[], double valorPagar[]) {
    cout << "Prestacao\t Multa\t Juros\t Total" << endl;
    
    for (int i = 0; i < valorTaxa; i++) {
        cout << fixed << setprecision(2) << "P" << i + 1 << "\t\t"
             << valorMulta[i] << "\t"
             << valorJuros[i] << "\t"
             << valorPagar[i] << endl;
    }
}

// Armazenado os valores colocado pelos usuário.
int main () {
    double divida[valorTaxa]; 
    int dias[valorTaxa];
    double valorMulta[valorTaxa] = {0}; 
    double valorJuros[valorTaxa] = {0}; 
    double valorPagar[valorTaxa] = {0}; 

// Resposta da divida, prestação dos dias de atraso.
    cout <<"Informe o valor das dividas e os dias em atraso para cada prestacao: " << endl;
    for (int i = 0; i < valorTaxa; i++) {
        cout << "Prestacao " << i + 1 << " : " << endl;
        cout << "Valor da divida: ";
        cin >> divida[i];
        cout << "Dias em atraso: ";
        cin >> dias[i];
    }
    
    // Armazenado valores.
    calculoDePrestacoes(divida, dias, valorMulta, valorJuros, valorPagar);
    imprimirPrestacoes(divida, dias, valorMulta, valorJuros, valorPagar);
  
    return 0;
}
