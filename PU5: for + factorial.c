#include <stdio.h>

int main ()
{
        int a,b;
        int cikls;

        printf("Lūdzu, ievadiet decimālu skaitli - \n");
        scanf("%d",&a);
        printf("Izvēlieties datu tipu (1 - char, 2 - int, 3 - long long) - \n");
        scanf("%d",&b);

        if(b == 1){
        char ch=1;
        char ieprieks;
        printf("Datu tips - char, skaitlis - %d\n",a);
        for (cikls=1;cikls<=a;cikls++) {
        ieprieks = ch;
        ch *= cikls;
        if (ch/cikls != ieprieks)
                    {
                      printf("Izvēlētais datu tips ir par mazu, lai pareizi attēlotu faktoriālu.\n");
                      break;
                    }
                }
        if(a == 0){
          printf("Skaitļa %d faktorials ir 1\n",a);
          }
        if(a>0 && ch/(cikls-1) == ieprieks){
          printf("Skaitļa %d faktoriāls ir %d\n",a,ch);
          }
        }

        else if(b==2){
        int nt = 1;
        int ieprieks;
        printf("Datu tips - int, skaitlis - %d\n",a);
        for (cikls = 1;cikls<=a;cikls++){
        ieprieks = nt;
        nt *= cikls;
        if (nt/cikls != ieprieks)
                    {
                     printf("Izvēlētais datu tips ir par mazu, lai pareizi attēlotu faktoriālu.\n");
                     break;
                    }
                }
        if(a == 0){
          printf("Skaitļa %d faktoriāls ir 1\n",a);
          }
        if(nt/(cikls-1) == ieprieks){
          printf("Skaitļa %d faktoriāls ir %d\n",a,nt);
          }
        }

        else if(b==3){
        long long lg = 1;
        long long ieprieks;
        printf("Datu tips long long, skaitlis %d\n",a);
        for(cikls = 1;cikls<=a;cikls++){
        ieprieks = lg;
        lg *= cikls;
        if (lg/cikls != ieprieks)
                     {
                      printf("Izvēlētais datu tips ir par mazu, lai pareizi attēlotu faktoriālu.\n");
                      break;
                     }
                   }
        if(a == 0){
          printf("Skaitļa %d faktoriāls ir 1\n",a);
          }
        if(lg/(cikls-1) == ieprieks){
          printf("Skaitļa %d faktoriāls ir %lld\n",a,lg);
          }
        }

        return 0;
}
