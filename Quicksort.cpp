//Quicksort
//Feito por: Johnattan Silva Ferreira.

#include <iostream>
#include <locale.h>
using namespace std;

//função para particionar o vetor
int particiona(int vetNum[], int inicio, int fim)
{
    int pivo = vetNum[fim];
    int i = (inicio -1);
    for(int j = inicio; j <= fim - 1; j++)
    {
        if(vetNum[j] <= pivo)
        {
            i = i + 1;
            swap(vetNum[i], vetNum[j]);
        }
    }
    swap(vetNum[i+1], vetNum[fim]);
    return i+1;
}

//procedimento quicksort para ordenar o vetor
void quicksort(int vetNum[], int inicio, int fim)
{
    int p = 0;
    if(inicio < fim)
    {
        p = particiona(vetNum, inicio, fim);
        quicksort(vetNum, inicio, p-1);//esquerda do pivo
        quicksort(vetNum, p+1, fim);//direita do pivo
    }
}

int main()
{
    setlocale(LC_ALL, "Portuguese");
    int inicio = 0;
    int fim = 14;
    int vetNum[15]={9,10,-1,3,6,2,1,-3,1,0,-2,15,8,-7,0};

    //mostrando o vetor inicial desordenado
    cout << "Vetor desordenado: \n\n";
    cout << "[";
    for(int i = 0; i < 15; i ++)
        {
        cout << vetNum[i];
        if(i<14)
        {
            cout << ", ";
        }
    }
    cout << "]\n";

    //chamando o procedimento quicksort
    quicksort(vetNum, inicio, fim);
    cout << endl;

    //mostrando o vetor após a ordenação pelo quicksort
    cout << "Vetor ordenado: \n\n";
    cout << "[";
    for(int i = 0; i < 15; i ++)
        {
        cout << vetNum[i];
        if(i<14)
        {
            cout << ", ";
        }
    }
    cout << "]\n";
    return 0;
}
