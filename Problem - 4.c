#include <stdio.h>
#include <stdlib.h>
int main(){
/*A palindromic number reads the same both ways.
The largest palindrome made from the product of two 2-digit numbers is 9009 = 91 × 99.
Find the largest palindrome made from the product of two 3-digit numbers.*/
int k=-1;
int sayac=0;
int bignum=0;
for (int i=999;i>99;i--){

        k++;

        for (int j=999;j>99;j--){
             if (FindNumber(i*j)==1 && i*j>bignum){
                bignum = i*j;

                sayac=1;

             }

        }

}

printf("%d",bignum);


return 0;
}

int FindNumber(int num){
int array1[6];
int part1;
int part2;

part2=num%1000;
part1=(num-part2)/1000;

array1[0]=(part1-part1%100)/100;

array1[1]=(part1%100-part1%10)/10;

array1[2]=(part1%10);

array1[3]=(part2-part2%100)/100;

array1[4]=(part2%100-part2%10)/10;

array1[5]=(part2%10);

int k=0;
for (int i=0;i<3;i++){
    if(array1[i]==array1[5-i]){
        k++;
    }

}

if (k==3){

    return 1;
}
else{
    return 0;
}
}
