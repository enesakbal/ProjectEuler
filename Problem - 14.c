#include <stdio.h>
#include <math.h>
long long  meter=0;
long long odd_or_even(long long number){

if (number!=1){
    meter++;

    if (number%2==0){
        odd_or_even(number/2);
    }
    else {

        odd_or_even(3*number+1);

    }

}

else {

    return meter+1;

}

}

int main(){

long long biggest=0;
long long dd=0;
for (long long i=999999;i>1;i--){
    meter=0;
    if (odd_or_even(i)>biggest){
        biggest=odd_or_even(i);
        dd=i;
        printf("%lld --> %lld\n",i,biggest);
    }
}
printf("Answer : %lld\n",dd);


system("PAUSE");

 return 0;
}

