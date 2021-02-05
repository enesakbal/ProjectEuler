#include <stdio.h>
#include <stdlib.h>
#include <math.h>
long long Largest_Prime_Factor (long long number){
int sqrtofnumber=sqrt(number);
for (int i=2;i<=sqrtofnumber;i++){
    if (number%i==0){
        number/=i;
        return Largest_Prime_Factor(number);
    }
}

return number;



}

int main(){
long long num=600851475143;
long long test;
printf("%lld is the largest prime factor of the number %lld",Largest_Prime_Factor(num),num);

printf("\nDo you want try this ?\tNumber :");
scanf("%lld",&test);
printf("%lld is the largest prime factor of the number %lld",Largest_Prime_Factor(test),test);

return 0;
}
