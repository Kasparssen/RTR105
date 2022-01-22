#include <stdio.h>
#include <math.h>
double sinuss(double x){
 double S;
 long double a;
        int k=1;

a = pow(-1,k+1)*pow(x,2*k)/(4); //Izmantojot formulu pie k=1 apreekina pirmo veertiibu (x^2/4)
S = a;
printf("a%.2d\t%8.2Lf\t%8.2f\n",k,a,S);

while(k<500){
        k++;
        a = a * (-1) *x*x / ((2*k)*(2*k-1));  
        S = S + a;
        if (k == 1 || k == 499 || k == 500){    
        printf("a%.2d\t%8.2LE\t%8.2f\n",k,a,S);}                //Jaa, eksponentees tieshaam ir tik mazas.
        }
        return S;
}

void main(){
        double x,y,yy;
        printf("Luudzu, ievadiet apreekinaamaa x veertiibu : \n");  //Definicijas apgabals ir visi realie skaitli.
        scanf("%le",&x);
        y=sin(x/2)*sin(x/2);
        printf("Standarta funkcija : sin(x/2)*sin(x/2) \n y=sin(%.2f/2)*sin(%.2f/2)=%.2f\n\n",x,x,y);
        printf("Lietotaja aprekini :\n");
        yy = sinuss(x);
        printf("\nLietotaja funkcija : vertiba noteikta ar summu \n y=sin(%.2f/2)*sin(%.2f/2)=%.2f\n",x,x,yy);
        printf("\n                500\n");
        printf("               _____\n");
        printf("               \\          k+1    2*k\n");
        printf("                \\     (-1)   *  x          \n");
        printf("    Sin(%.2f) =  >    _____________\n",x);
        printf("                /        2*(2*k)!           \n");
        printf("               /____               \n");
        printf("                k=1  \n\n");
        printf("                                2 \n");
        printf("                              -x   \n");
        printf("Rekurences reizinatajs: _______________\n");
        printf("                        (2*k)*(2*(k-1)) \n");

}
