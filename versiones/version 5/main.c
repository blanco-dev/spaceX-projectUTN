#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "astronauta.h"
#define DIM_MAX_ARCHI 15
#define DIM_MAX_STR 20

int main()
{
    char archivoAstronautas[DIM_MAX_ARCHI] = "astronautas";

    cargarUnAstroToArchivo(archivoAstronautas);
    mostrarAstronautas(archivoAstronautas);
    cargarAstroModificado(archivoAstronautas);


    return 0;
}

