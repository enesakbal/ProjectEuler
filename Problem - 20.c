#include <stdio.h>
#include <stdlib.h>
#define MAX 999
int main(){

int *arr;
arr=(int*)calloc(999,sizeof(int));
arr[0]=1;

int temp=0,sum=0,carry=0,fac=100;

for (int i=2;i<=fac;i++){
carry=0;

    for (int j=0;j<=MAX;j++){

        if (carry==0 && arr[j]==0)
            continue;
        else{
            temp=(i)*arr[j]+carry;
            arr[j]=temp>9 ? temp%10 : temp;
            carry=temp/10;


        }


    }



}




printf("Number : ");
int k;
for (int i=500;i>=0;i--){
    if (arr[i]!=0){
        k=1;
    }
    if(k==1){
    sum+=arr[i];
    printf("%d",arr[i]);
    }
}

printf("\n\nSum of digits :");
printf("%d",sum);



return 0;
}
