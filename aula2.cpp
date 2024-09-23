#include <iostream>

int soma(int lista[]){

    int soma = 0;
    for (int i = 0; i < 5; i++){
        soma += lista[i];
    }
    return soma;

}

//função que não devolve nada e que recebe como parametros 2 fload sendo que o ultimo tem defeito de 10.2 e vai retornar a soma dos 2 float

float soma (float x, float y=10.2){

    return x+y
}