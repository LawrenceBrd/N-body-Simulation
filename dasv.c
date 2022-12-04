//DASV (DETERMINAZIONE ANGOLO e SCOMPOSIZIONE in VETTORI)
/*
Lorentio Brodesco

ATTENZIONE, IL CODICE NON CALCOLA L'ANGOLO SU UN PIANO 
CARTESIANO CONVENZIONALE MA SOLO DEL QUARTO QUADRANTE CON VALORI 
DELL'ASSE Y INVERTITI (QUINDI POSITIVI) IN QUANTO SIMULA L'AREA DELLO SCHERMO

*/
#include <math.h>
#include <stdio.h>
# define PI 3.142857
int main()
{
    int x0, x1, y0, y1;
    double seno, coseno;
    double angolo=0.0;
    
    printf("\nInserire coordinate dei due punti (x0, y0, x1, y1):");
    scanf("%d %d %d %d", &x0, &y0, &x1, &y1);
    
    if(x0==x1)
    {
        if(y0>y1)
        {
            angolo=90.0;
        }
        else
        {
            angolo=270.0;
        }
    }
    if(y0==y1)
    {
        if(x0>x1)
        {
            angolo=180.0;
        }
        else
        {
            angolo=0.0;
        }
    }
    if((y0>y1)&&(x0!=x1))
    {
        if(x0>x1)
        {
            angolo=atan(((y0-y1)*(1.0))/((x0-x1)*(1.0)));
            if(angolo<0)
            {
                angolo=angolo*(-1.0);
            }
            angolo=(angolo*180)/PI;
            angolo=angolo+90.0;
        }
        else
        {
            angolo=atan(((y0-y1)*(1.0))/((x0-x1)*(1.0)));
            if(angolo<0)
            {
                angolo=angolo*(-1.0);
            }
            angolo=(angolo*180.0)/PI;
        }
    }
    if((y0<y1)&&(x0!=x1))
    {
        if(x0>x1)
        {
            angolo=atan(((y0-y1)*(1.0))/((x0-x1)*(1.0)));
            if(angolo<0)
            {
                angolo=angolo*(-1.0);
            }
            angolo=(angolo*180.0)/PI;
            angolo=angolo+180.0;
        }
        else
        {
            angolo=atan(((y0-y1)*(1.0))/((x0-x1)*(1.0)));
            if(angolo<0)
            {
                angolo=angolo*(-1.0);
            }
            angolo=(angolo*180.0)/PI;
            angolo=angolo+270.0;
        }
    }
    printf("\nVettore di angolo %lf°", angolo);
    angolo=(angolo*3.14)/180.0;
    seno=sin(angolo);
    coseno=cos(angolo);
    printf("\nSeno: %lf \nCoseno: %lf", seno, coseno);

    return 0;
}
