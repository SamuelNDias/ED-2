#include <stdio.h>
#include <stdlib.h>

int lista1[5]= {10,25,30,45,60};
int lista2[6] = {5,20,30,40,50,70};
int listaResultante[11];

int main()
{
    int i = 0, j = 0, k = 0,tamanho = 0;
    while((i < 5) && (j <6))
    {
        if(lista1[i] < lista2[j])
        {
            listaResultante[k] = lista1[i];
            i++; 
            k++;
            tamanho++;
        }else if(lista2[j]< lista1[i]){
            listaResultante[k] = lista2[j];
            j++;
            k++;
            tamanho++;
        } else if(lista1[i] == lista2[j]){
            listaResultante[k] = lista1[i];
            i++;
            j++;
            k++;
            tamanho++;
        }
    }
    while(i<5)
    {
        listaResultante[k] = lista1[i];
        i++;
        k++;
        tamanho++;
    }
    while(j < 6)
    {
        listaResultante[k] = lista2[j];
        j++;
        k++;
        tamanho++;
    }

    printf("Lista resultante do merging: \n");
    for(k = 0; k < tamanho; k++)
    {
        printf(" %d |",listaResultante[k]);
    }
    return 0;    

}