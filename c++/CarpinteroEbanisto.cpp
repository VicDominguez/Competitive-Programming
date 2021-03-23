#include <iostream>
#include <vector>
#include <algorithm> //donde estan min y max entre otros
#include <climits> //para usar el INT_MAX

using namespace std;
using ll = long long;
using vi = vector<int>; // el arraylist de c++
using vvi = vector<vi>; //vector de vectores, vamos, un array 2D pero dinamico

int algoritmo(int inicio, int fin, vi const& cortes, vvi & cache)
{
    if(inicio + 1 == fin)
        return 0;
    else if (cache[inicio][fin] != -1)
        return cache[inicio][fin];
    else
    {
        int costeMinimo = INT_MAX;
        for (int pivote = inicio + 1; pivote < fin; pivote++) 
        {
            int costeAct = algoritmo(inicio, pivote, cortes, cache) + algoritmo(pivote, fin, cortes, cache);
            costeMinimo = min(costeMinimo, costeAct);
            
        }
        cache[inicio][fin] = costeMinimo + cortes[fin] - cortes[inicio];
        //printf("Cacheando inicio: %d, fin: %d, costeMinimo %d, cortes[%d] = %d, cortes[%d] = %d valor %d\n",
        //    inicio,fin,costeMinimo,fin,cortes[fin],inicio,cortes[inicio],cache[inicio][fin]);
        return cache[inicio][fin];
    }
}

int main()
{
    int longitud,numeroCortes;
    
    while(scanf("%d %d",&longitud,&numeroCortes)==2 && (longitud !=0 || numeroCortes != 0))
    {
        vi cortes(numeroCortes+2);
        cortes[0] = 0;
        cortes[numeroCortes+1] = longitud;
        for(int corte=1;corte<=numeroCortes;corte++)
            cin >> cortes[corte];
        vvi cache(numeroCortes+2,vi(numeroCortes+2,-1)); //hace la tabla de numeroCortes+2 cortes cuadrada e inicializada a -1
        printf("%d\n", 2*algoritmo(0,numeroCortes+1,cortes,cache));
    }

    return 0;
}