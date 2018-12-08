#include <stdio.h>
#include <iostream>
#include <new>
#include <string>
#include <stdlib.h>
#include <locale.h>
#define TAM 10

using namespace std;

void imprime_vetor(int vetor[TAM]);
int busca_simples(int vetor[TAM], int valorProcurado, int *posicaoEncontrada);

int main(){

    setlocale(LC_ALL, "Portuguese");
    int vetor[TAM] = {1,23,44,56,63,72,84,90,98};
    int valorProcurado;
    int posicao, posicaoEncontrada;

    int cont;

    imprime_vetor(vetor);

    cout << endl << endl << "Qual número deseja encontrar? ";
    cin >> valorProcurado;

    if(busca_simples(vetor, valorProcurado, &posicaoEncontrada) == 1){
        cout << endl << "O valor foi encontrado na posicão: " << posicaoEncontrada;
    }else{
        cout << endl << "Valor não encontrado!";
    }
    cout << endl;
    return 0;
}

void imprime_vetor(int vetor[TAM]){

    int cont;

    for(cont = 0; cont < TAM; cont++){
        cout << vetor[cont] << " - ";
    }
}

int busca_simples(int vetor[TAM], int valorProcurado, int *posicaoEncontrada){

    int cont;

    bool valorFoiEncontrado;

    //Percorre a lista em busca do valor
    for(cont = 0; cont < TAM; cont++){
        if(vetor[cont] == valorProcurado){
            valorFoiEncontrado = true;
            *posicaoEncontrada = cont;
        }
    }

    if(valorFoiEncontrado){
        return 1;
    }else{
        return -1;
    }
}
