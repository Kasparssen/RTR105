#include <stdio.h>
int main ()


{
        unsigned char a;                        //Izmantojot "unsigned char", atrisinās kļūme, kur skaitļi, kuri ir lielāki par 127 sāk ciparu "1" parādīt kā "-1"
        printf("Lai redzētu skaitli binārajā sistēmā, ievadiet skaitli no 0 līdz 255.  \n"); 
        scanf("%hhd", &a);                      // "%hhd" atrisina kļūmi, kurā programma sagaida citu datu tipu no "char"
        printf("Skaitlis binārajā sistēmā :  "); 
        printf("%d", ((a >> 7) % 2));            
        printf("%d", ((a >> 6) % 2));
        printf("%d", ((a >> 5) % 2));
        printf("%d", ((a >> 4) % 2));
        printf(" %d", ((a >> 3) % 2));
        printf("%d", ((a >> 2) % 2));
        printf("%d", ((a >> 1) % 2));
        printf("%d\n", a % 2);
        return 0;                               // Kodu veidoju pēc RTR105_08_V02_b_Nodarbiiba_operaacijas.mp4 beigu ieteikumiem - char datu tips, neizmantojot if, for un while.
                                                // Kods šādā formātā var parādīt tikai 1 baitu (8 bitu) lielus skaitļus binārajā sistēmā. Lai pareizi attēlotu lielākus skaitļus, tajā jāpievieno secīgi rindas, kā rindās 10-16.
}
