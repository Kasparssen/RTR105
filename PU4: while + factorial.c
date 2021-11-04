#include <stdio.h>

int main ()
{
        int a,b;
        int cikls = 1;

        printf("Lūdzu, ievadiet decimālu skaitli : \n");
        scanf("%d",&a);
        printf("Izvēlieties datu tipu (1 - char, 2 - int, 3 - long long) : \n");
        scanf("%d",&b);

        if(b == 1){
        char ch=1;
        char ieprieksejais;
        printf("Datu tips - char, skaitlis - %d\n",a);
        while (cikls<=a) {
        ieprieksejais = ch;
        ch = ch*cikls;
        if (ch/cikls != ieprieksejais)        //Pārbaude, vai faktoriāls aprēķināts pareizi. Ja "!n = !(n-1) * n" un "!n / n = !(n-1)" nav vienādi, tad radusies kļūda.   
                  {
                   printf("Izvēlētais datu tips nespēj pareizi noteikt faktoriāli.\n");
                   break;                   //Tiklīdz kods neatbilst, while loop tiek pārtraukts.
                   }
        cikls++;                            // Ja pārbaude neizpildās, cilks turpinās
                }
        if(ch/(cikls-1) == ieprieksejais){printf("Skaitļa %d faktorials ir %d\n",a,ch);
              }
        }

        else if(b==2){
        int nt = 1;
        int ieprieksejais;
        printf("Datu tips - int, skaitlis - %d\n",a);
        while (cikls<=a){
        ieprieksejais = nt;
        nt = nt*cikls;
        if (nt/cikls != ieprieksejais)
                   {
                    printf("Izvēlētais datu tips nespēj pareizi noteikt faktoriāli.\n");
                    break;
                  }
        cikls++;
                }
        if(nt/(cikls-1) == ieprieksejais){printf("Skaitļa %d faktorials ir %d\n",a,nt);
              }
        }

        else if(b==3){
        long long lg = 1;
        long long ieprieksejais;
        printf("Datu tips - long long, skaitlis - %d\n",a);
        while(cikls<=a){
        ieprieksejais = lg;
        lg = lg*cikls;
        if (lg/cikls != ieprieksejais)
                  {
                    printf("Izvēlētais datu tips nespēj pareizi noteikt faktoriāli.\n");
                    break;
                  }
        cikls++;
                }
        if(lg/(cikls-1) == ieprieksejais){printf("Skaitļa %d faktorials ir %lld\n",a,lg);
              }
        }



return 0;
}
