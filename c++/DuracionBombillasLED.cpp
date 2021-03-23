
#include <iostream>

using namespace std;

int main()
{
    int numeroCasos, horasEncendida, numeroEncendidos, horasPorEncendido;
    scanf("%d", &numeroCasos);
    for(int iteracion=0; iteracion < numeroCasos; iteracion++)
    {
        scanf("%d %d %d", &horasEncendida, &numeroEncendidos, &horasPorEncendido);
        if(numeroEncendidos * horasPorEncendido > horasEncendida)
            puts("HORAS");
        else if (numeroEncendidos * horasPorEncendido < horasEncendida)
            puts("ENCENDIDOS");
        else
            puts("AMBAS");
    }

    return 0;
}