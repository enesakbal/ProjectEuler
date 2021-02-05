#include <stdio.h>
#include <math.h>
#define N 105000

void Eratosthenes(int sayi,int *p){
p=(int *)calloc(sayi,sizeof(int));

for (int i=2;i<=sqrt(sayi);i++){

    if(p[i]==0){
        for (int j=i;i*j<sayi;j++){
            p[i*j]=1;
        }
    }
}

int k=0;
for (int i=2;;i++){
    if(p[i]==0){
       k++;
    }
    if (k==10001){
        k=i;
        break;
    }
}

printf("%d",k);


}


int main(){

int *p;

Eratosthenes(N,&p);







return 0;
}

