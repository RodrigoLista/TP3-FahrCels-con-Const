/*
 ============================================================================
 Name        : farhCels.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>

float calcularCels(int);

int main(void) {
const inicio=0;
const fin=300;
const incremento=20;

int farh;
float cels;
   for(farh=inicio;farh<=fin;farh=farh+incremento)
       {cels=calcularCels(farh);
         printf("%3d %6.1f\n",farh,cels);
       }

return 0;

}

float calcularCels(int farhenheit){
   float celsius=(5.0/9.0)*(farhenheit-32);
   return celsius;
}
