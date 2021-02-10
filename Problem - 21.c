#include <stdio.h>
#include <stdlib.h>

int divizors(int num){
int sum=0;
for (int i=1;i<=num/2+1;i++){
    if (num%i==0)
        sum+=i;

}

return (sum);
}


int main(){
int sum=0;
int amicable1,amicable2;
for (int i=1;i<=1000;i++){
    amicable1=divizors(i);
    amicable2=divizors(amicable1);
    if (i!=amicable1 && i==amicable2){
        printf("%d ",i);
        sum+=i;
    }


}
printf("\n\n%d",sum);

return 0;
}
