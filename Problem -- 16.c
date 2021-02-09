#include <stdio.h>

int main (){

    int numbers[9999]={0};
    int n=2,p=1000,temp=0,carry=0,a;
    numbers[0]=1;
    a= (n>9999) ? 5:(n>999) ? 4:(n>99) ? 3:(n>9) ? 2:1;

    for (int i=0;i<p;i++){
        carry=0;

        for (int j=0;j<=p*a;j++){


            if (numbers[j]==0 && carry==0)
                continue;

            else{

                temp=n*numbers[j]+carry;
                numbers[j]=(temp>9) ? temp%10 : temp;
                carry=temp/10;
            }
        }
    }
int sum=0;
for (int i=a*p;i>=0;i--){

    printf("%d",numbers[i]);
    sum+=numbers[i];

}
printf("\n%d",sum);




 return 0;
}
