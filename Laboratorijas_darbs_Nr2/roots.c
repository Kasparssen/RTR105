#include <stdio.h>
#include <math.h>
float modified_sin(float x, float c){
        return sin(x/2)*sin(x/2)-c;
                }


int main () {
        float a, b, c, x, delta_x;
        float funkca, funkcb;     // Šos izmantoju atsevišķu funkciju vietā, lai iegūtu vērtības pie robežām sin^2(x/2)-c
        int k=0;
        printf("           Funkcijas Sin(x/2)*sin(x/2) sakņu noteicējs\n");
        printf("Ievadiet kreiso robežu :\n");
        scanf("%f", &a);
        printf("Ievadiet labo robežu :\n");
        scanf("%f", &b);
        printf("Ievadiet c veertību vienādojumam sin(x)=c\n");
        scanf("%f", &c);
        printf("Ievadiet preciztāti aprēķiniem  :\n");
        scanf("%f", &delta_x);
        funkca = sin(a/2)*sin(a/2)-c; funkcb = sin(b/2)*sin(b/2)-c;
        if (funkca*funkcb>0) {
        printf("Intervāā[%.2f;%.2f] sin(x/2)*sin(x/2) funkcijai ",a,b);
        printf("sakņu nav (vai tajā ir pāra skaits sakņu)n");
        return 1;
        }

                while ((b-a)>delta_x) {
                k++;
                x = (a+b)/2.;
                if (funkca*modified_sin(x,c)>0)
                a = x;
                else
                b = x;
                printf("%2d. iteraacija : sin(%7.3f)=%7.3f\n",k,x, modified_sin(x,c)+c);     //Visas garumzīmes nespēju izlabot, jo mana kodešanas vide neļauj ievadīt tādas.
                }
                printf("Sakne atrodas pie x=%.3f, jo pie shiis x veertiibas sin(x/2)*sin(x/2) ir %.3f, kas sakriit ar juusu izveele>

return 0;
}
