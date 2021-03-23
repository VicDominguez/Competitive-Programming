#include <iostream>
#include <algorithm>
using namespace std;


long long calcularGasto(int sueldos[], int umbral,int personas)
{
    long long acumulador = 0;
    for (int indice=0; indice<personas;indice++)
    {
        acumulador += min(umbral,sueldos[indice]);
        //System.out.println("ac " + acumulador);
    }
    return acumulador;
}

int umbralMaximo(int sueldos[],int minimo, int maximo, int presupuesto,int personas)
{
    if(maximo - minimo > 1)
    {
        int puntoMedio = (maximo + minimo) / 2;
        
        long long gastoMedio = calcularGasto(sueldos,puntoMedio,personas);
        if(gastoMedio >= presupuesto)
            return umbralMaximo(sueldos,minimo,puntoMedio,presupuesto,personas);
        else
            return umbralMaximo(sueldos,puntoMedio,maximo,presupuesto,personas);
    }
    else
    {
        long long gastoMaximo = calcularGasto(sueldos, maximo,personas);
        if(gastoMaximo > presupuesto)
            return minimo;
        else
            return maximo;
    }

}

int main()
{
    int presupuesto,personas,maximo,resultado;
    while(scanf("%d %d",&presupuesto,&personas) == 2)
    {
        int sueldos[personas];
        maximo = 0;
        for(int indicePersonas = 0,aux; indicePersonas < personas; indicePersonas++)
        {
            scanf("%d", &aux);
            sueldos[indicePersonas] = aux;
            maximo = max(maximo,aux);
        }
        resultado = ((calcularGasto(sueldos,maximo,personas)<=presupuesto)?maximo:umbralMaximo(sueldos,0,maximo,presupuesto,personas));
        printf("%d\n",resultado);
    }

    return 0;
}