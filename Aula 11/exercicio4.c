#include <stdio.h>
#include <stdlib.h>
#define MAX 13

typedef struct{
    int valor;
    bool utilizado;
}Registro;

typedef struct{
    Registro hash[MAX];
}Hash;

int funcaoHash(int chave) {
    return (chave % MAX + MAX) % MAX;
}

void inicializa(Hash *h)
{
    int i = 0;
    while(i < MAX)
    {
        h->hash[i] = false;
        i ++;
    }
}

int inserir(Hash *h, int chave) {
    int posInicial = funcaoHash(chave);   
    for (int i = 0; i < M; i++) {
        int pos = (posInicial + i * i) % MAX;  
        if (!h->hash[pos].ocupado) {
            h->hash[pos].valor = chave;
            h->hash[pos].utilizado = true;
            return 1; 
        }
        if (h->hash[pos].valor == chave) {
            return 0; 
        }
    }    
    return 0; 
}

int buscar(Hash *h, int chave) {
    int posInicial = funcaoHash(chave);
    for (int i = 0; i < MAX; i++) {
        int pos = (posInicial + i * i) % MAX;
        if (!h->hash[pos].utilizado) {
            return -1; 
        }
        if (h->hash[pos].valor == chave) {
            return pos;
        }
    }
    return -1;
}
