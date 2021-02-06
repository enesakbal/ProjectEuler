#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define N 10
int main(){

/*2520 is the smallest number that can be divided by each of the numbers from 1 to 10 without any remainder.

What is the smallest positive number that is evenly divisible by all of the numbers from 1 to 20?*/

long long product=1;
int zero=0;
int Array[N];

for (int i=0;i<N;i++){Array[i]=i+1;}


for (int i=1;i<N;i++){


    product*=Array[i];

    if (Array[i]!=1){printf(" %d *",Array[i]);}

    for (int j=i+1;j<N;j++){




        if (Array[j]%Array[i]==0){

            Array[j]=Array[j]/Array[i];

        }


    }


}
printf("= %lld",product);





 return 0;
}
