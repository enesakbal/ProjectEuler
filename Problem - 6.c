#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main(){
long long int squares=0;
int numbers=0;
for (int i=1;i<=100;i++){
    numbers+=i;
    squares+=i*i;
}
printf("%lld",numbers*numbers-squares);


return 0;
}
