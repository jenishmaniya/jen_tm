#include<stdio.h>
#include<conio.h>
void main(){
int i,j,k;
clrscr();
for(i=5;i>=1;i--){
   for(k=i;k<5;k++){
   printf(" ",k);
   }
   for(j=1;j<=i;j++){
   if((i+j)%2==0){
   printf("1");
   }else{
   printf("0");
   }
   }
   printf("\n");
}
getch();
}