#include <stdio.h>
#include "funciones.h"
float interes(float a){
    float tasa = a/12;
    return tasa;
}
float calcularMontoMensual(float a, float b){
    float monto = (a * b)/100;
    return monto;
}
float calcularInteres (float a, float b){
    float gananmensual = a+b;
    return gananmensual;
}
float calcularahorromen (float a, float b){
    float ahorrado = a+b;
    return ahorrado;
}
float ingresmontoinver(float a){
    float inanu;
    printf ("Ingrese el monto a invertir: ");
    scanf ("%f",&inanu);
    return inanu;
}
float ingresmontoanu(float a){
    float montoan;
    printf ("Ingrese el monto anual que se tiene: ");
    scanf ("%f",&montoan);
    return montoan;
}
float ingresmeses(float a){
    float meses;
    printf ("Ingrese meses que se usara: ");
    scanf ("%f",&meses);
    return meses;
}