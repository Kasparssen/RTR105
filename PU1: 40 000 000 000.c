#include <stdio.h>

int main ()
{
long pirmais;
long otrais;
printf("Ievadiet pirmo skaitli (400000): ");    //Iekavās doti prasītie skaitļi, jo kods nestrādā ar vērtībām, kas nav vesali skaitļi.
scanf("%li", &pirmais);
printf("Ievadiet otro skaitli (100000): ");
scanf("%li", &otrais);
printf("Reizinājums : %li \n", pirmais * otrais);
return 0;
}
