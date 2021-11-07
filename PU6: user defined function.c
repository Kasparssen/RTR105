#include <stdio.h>

void f1(){
printf("Palaista programma PU6.\n\n");
}
void f2(int f2_num){
        if(f2_num<=9){
        printf("Ievadītais skaitlis ir vienciparu skaitlis.\n");
        }
        if(f2_num>9){
          printf("Ievadītais skaitlis nav vienciparu skaitlis.\n");
        }
}

int f3(){
int f3_num;
printf("Ludzu, ievadiet citu skaitli :\n");
scanf("%d",&f3_num);
return f3_num;
}

int f4(int f3_out){
int f4_out;
f4_out = f3_out*2;
return f4_out;
}

int main(){

f1();

int f2_num;
printf("Ludzu, ievadiet naturalu skaitli. Funkcija parbaudis, vai tas ir vienciparu skaitlis.\n");
scanf("%d",&f2_num);
f2(f2_num);

int f3_out;
printf("Nakama funkcija lugs jums ievadit citu skaitli.\n.\n.\n.\n");
f3_out = f3();
printf("Jus tresaja funkcija ievadijat skaitli %d\n\n",f3_out);
int f4_out;
printf("Nakama funkcija reizinas jusu ievadito skaitli ar 2.\n\n");
f4_out = f4(f3_out);
printf("F3 skaitla dubults = %d\n",f4_out);
return 0;
}

