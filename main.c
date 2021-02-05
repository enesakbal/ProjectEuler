#include <stdio.h>
#include <stdlib.h>
int main(){

int sayi1=0;
int sayi2=1;
int temp;
int toplam=0;
for (int i=1;i<5000;i++){
    if (sayi1>4000000){
        break;
    }
    temp=sayi1+sayi2;
    sayi2=sayi1;
    sayi1=temp;
    printf("%d ",sayi1);
    if (sayi1%2==0){
      toplam+=sayi1;
    }

}
printf("\nToplam : %d",toplam);





     return 0;
}
