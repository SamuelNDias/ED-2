#include <stdio.h>
#include <stdlib.h>

int lista1[5] = {10,25,30,45,50};
int lista2[6] = {10,25,30,40,50,70};
int lista3[5] = {1,8,10,18,25};
int listaResultante[5];

int main()
{
    int i = 0, j = 0, k = 0, l = 0, tamanho = 0;
    while ((i < 5) && (j < 6) && (k < 5))
    {
        if((lista1[i] < lista2[j]) && (lista1[i]<lista3[k])){
            i++;
        } else if((lista2[j] < lista1[i]) && (lista2[j]<lista3[k])){
            j++;
        } else if((lista3[k] < lista2[j]) && (lista3[k]<lista1[i])){
            k++;
        } else if((lista1[i] == lista2[j]) && (lista1[i] < lista3[k])){
            i++;
            j++;
        }
        else if((lista1[i] == lista3[k]) && (lista1[i] < lista2[j])){
            i++;
            k++;
        }else if((lista3[k] == lista2[j]) && (lista3[k] < lista1[i])){
            k++;
            j++;
        }else if((lista1[i] == lista2[j]) && (lista1[i] == lista3[k])){
            listaResultante[l] = lista1[i];
            i++;
            j++;
            k++;
            l++;
            tamanho++;
        }
    }
    printf("Lista resultante do machting: \n");
    for(l = 0; l <tamanho; l++)
    {
        printf(" %d |",listaResultante[l]);
    }
    
}