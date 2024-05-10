#include <stdio.h>
#include "funciones.h"

int main()
{
    float inanu, montoan, meses, tasa, gananmensual, monto, inggen, ahorrado, montot, i ;
    inanu= ingresmontoinver(inanu);
    montoan= ingresmontoanu(montoan);
    meses= ingresmeses(meses);
    tasa=interes(montoan);
    ahorrado=0+inanu;
    montot=meses*inanu;
    meses=meses+1;
    printf("Mes\tMont.m\tAhorro.m\n");
    i=0;
    printf("%.f\t%.2f\n", i, ahorrado);
    for (float i = 1; i < meses; i++) {
        monto = calcularMontoMensual(ahorrado, tasa);
        gananmensual = calcularInteres(monto,ahorrado);
        ahorrado = calcularahorromen(gananmensual, inanu);
        printf("%.f\t%.2f\t%.2f\n", i, gananmensual, monto);
}
 inggen=gananmensual-montot;
 printf("El interes generado es: %.2f", inggen);
    return 0;
}