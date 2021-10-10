#include <stdio.h>
int main ()


{
        char a;
        printf("Ievadiet skaitli (Darbojošās vērtības - [0-127])  \n"); 
        scanf("%d", &a);
        printf("Skaitlis binārajā sistēmā :  "); // Ievadot skaitli, kas lielāks par 127, kods sāk vērtības "1" rādīt kā "-1". Šī ķļūme nenotiek, ja izmanto int char vietā.
        printf("%d", ((a >> 7) % 2));            // Lai tiktu vaļā no - zīmēm, centos izmantot "u" "d" vietā funkcijā, taču tas radīja vēl vairāk problēmu.
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
