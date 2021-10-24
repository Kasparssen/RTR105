#include <stdio.h>

int main ()
{
        int a;
        int b;
        int c;
        int choise;

                printf("Ievadiet pirmo ciparu : \n");
                scanf("%i", &a);
                printf("Ievadiet otro ciparu : \n");
                scanf("%i", &b);
                printf("Ievadiet trešo ciparu : \n");
                scanf("%i", &c);
                printf("Izvēlieties kārtošanas secību ( 1 = augoša, 2 = dilstoša) : \n");
                scanf("%d", &choise);
        if ( choise == 2) {
                printf("Izvēlētā secība - dilstoša\n");
        if (a>b && a>c && b>c){printf("%d %d %d\n",a,b,c);} //Apzinos, ka vienā rindā rakstīt "if" kodu nav ieteicams, taču šajā gadījumā uzskatu, ka šādi ir pārskatāmāk
        if (a>b && a>c && c>b){printf("%d %d %d\n",a,c,b);}

        if (b>a && b>c && a>c){printf("%d %d %d\n",b,a,c);}
        if (b>a && b>c && c>a){printf("%d %d %d\n",b,c,a);}

        if (c>a && c>b && a>b){printf("%d %d %d\n",c,a,b);}
        if (c>a && c>b && b>a){printf("%d %d %d\n",c,b,a);}
        // Atkārtotiem skaitļiem
        if (a==b && b==c){printf("%d %d %d\n",a,b,c);}
        if (a==b && b>c){printf("%d %d %d\n",a,b,c);}
        if (a==b && c>b){printf("%d %d %d\n",c,b,a);}
        if (a==c && b>c){printf("%d %d %d\n",b,a,c);}
        if (a==c && c>b){printf("%d %d %d\n",a,c,b);}
        if (b==c && a>c){printf("%d %d %d\n",a,b,c);}
        if (b==c && c>a){printf("%d %d %d\n",b,c,a);}
             }

        if ( choise == 1) {
                printf("Izvēlētā secība - augoša\n");
        if(a<b && a<c && b<c){printf("%d %d %d\n",a,b,c);}
        if(a<b && a<c && c<b){printf("%d %d %d\n",a,c,b);}

        if(b<a && b<c && a<c){printf("%d %d %d\n",b,a,c);}
        if(b<a && b<c && c<a){printf("%d %d %d\n",b,c,a);}
          
        if(c<a && c<b && a<b){printf("%d %d %d\n",c,a,b);}
        if(c<a && c<b && b<a){printf("%d %d %d\n",c,b,a);}
        // Atkārtotiem skaitļiem
        if (a==b && b==c){printf("%d %d %d\n",a,b,c);}
        if (a==b && b>c){printf("%d %d %d\n",c,b,a);}
        if (a==b && c>b){printf("%d %d %d\n",a,b,c);}
        if (a==c && b>c){printf("%d %d %d\n",c,a,b);}
        if (a==c && c>b){printf("%d %d %d\n",b,c,a);}
        if (b==c && a>c){printf("%d %d %d\n",c,b,a);}
        if (b==c && c>a){printf("%d %d %d\n",a,b,c);}
             }
}
