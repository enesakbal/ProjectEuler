#include <stdio.h>
#include <math.h>
int main(){


int k=0;
int c;
for (int i=4;k==0;i++){

    for (int j=3;j<i;j++){
        c=i*i+j*j;

        if (fmod(c,sqrt(c))==0){

            if((double) i + (double) j + sqrt(c)==1000){
                printf("%d^2 ve %d^2 = %.0lf^2\n",i,j,sqrt(c));
                printf("Answer : %d",(int) i * (int) j * (int) sqrt(c));
                k=1;
            }

        }

    }

}


return 0;
}
