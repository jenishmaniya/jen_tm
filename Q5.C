#include<stdio.h>
#include<conio.h>
void main(){
int i,j,k,a;
clrscr();
for(i=5;i>=1;i--){
for(k=1;k<i;k++){
printf(" ");
}
   for(j=i;j<=5;j++){
   printf("%d",j);
   }
   for(a=4;a>=i;a--){
   printf("%d",a);
   }
   printf("\n");
}
getch();
}