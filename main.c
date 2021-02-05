#include <stdio.h>
#include <stdlib.h>
int main(){


int i=1;
int toplam=0;

for (int i=3;i<1000;i++){
    if (i%3==0 || i%5==0){
        toplam+=i;
    }

}

printf("%d",toplam);



     return 0;
}
