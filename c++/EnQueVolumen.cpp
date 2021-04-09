//
// Created by snoza on 23/03/2021.
//

#include <iostream>

using namespace std;


int main()
{
    int iteraciones;
    scanf("%d", &iteraciones);
    while(iteraciones--)
    {
        int numero;
        scanf("%d",&numero);
        printf("%d\n",numero/100);
    }

    return 0;
}

