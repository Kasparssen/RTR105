#include <stdio.h>
#include <math.h>

void main () {
        double a, b, x;
        int N,i=0; //Lietotaaja noteiktaa precizitaate un kaartu skaits
        printf("\t\t\t 1. un 2. kaartas atvasinaajumu apreekinaataajs funkcijai sin^2(x/2).\n");
        printf("Luudzu, ievadiet veelamo precizitaati (punktu skaits, kurs tiks reekinaats :\n");
        scanf("%d",&N);
        printf("Ievadiet kreiso robezu (saakuma koordinaatu x) :\n");
        scanf("%lf",&a);
        printf("Ievadiet labo robezu (beigu koordinaatu x) :\n");
        scanf("%lf",&b);
        double delta_x=(b-a)/(N-1); //Izmainas formula balstoties uz ievadiitajaam veertiibaam.
        double fx[N], fx_prim[N-1], fx_primform[N-1], fx_prim2[N-1], fx_primform2[N-1];
        x = a;
        for (i=0;i<N;i++){              //F(x) veertiibas
        fx[i] = sin(x/2)*sin(x/2);      // FUnkcija - sin^2(x/2)
        x += delta_x;
        }
        for (i=0;i<N;i++){              // F(x)' veertiibas no atvasinaajuma
        fx_prim[i] = cos(x/2)*sin(x/2);
        x += delta_x;
        }
        for (i=0;i<N-1;i++){            //F(x)' caur delta formulu
                fx_primform[i]=(fx[i+1]-fx[i])/delta_x;
                x += delta_x;
        }
        for (i=0;i<N-1;i++){            //F(x)'' caur atvasinaajumu
                fx_prim2[i]= (cos(x/2)*cos(x/2))/2-(sin(x/2)*sin(x/2))/2;
                x += delta_x;
        for (i=0;i<N-1;i++){            //F(x)'' caur delta formulu
                fx_primform2[i]=(fx_prim[i+1]-fx_prim[i])/delta_x;
                x += delta_x;
        }

        }
        printf("\tx\t\tF(x)\t\tF\'(x)\t\tF\'(x)\t\tF\'\'(x)\t\tF\'\'(x)\n");
        x =a;
        for(i=0;i<N-1;i++){
        printf("%10.2f\t%10.2f\t%10.2f\t%10.2f\t%10.2f\t%10.2f\n",x, fx[i],fx_prim[i], fx_primform[i], fx_prim2[i], fx_primform2[i]>
        x +=delta_x;
        }
}
