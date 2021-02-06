#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define N 2000000
/*The sum of the primes below 10 is 2 + 3 + 5 + 7 = 17.
Find the sum of all the primes below two million.*/
int main(){
long int *p;
p=(long int*) calloc(N,sizeof(long int));

for (long int i=2;i<=sqrt(N);i++){
    if (p[i]==0){
    for (long int j=i;i*j<N;j++){

        p[i*j]=1;
    }
    }
}

long long total=0;
for (long int i=2;i<N;i++){

    if (p[i]==0){

        total=total+i;
    }

}

printf("%lld",total);


 return 0;
}
