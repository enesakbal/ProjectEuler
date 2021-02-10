#include <stdio.h>
int main(){
int mounths[12]={31,0,31,30,31,30,31,31,30,31,30,31};
int firstday=2;
int i=1901;
int sunday=0;
while(i<2001){

mounths[1]=28;

if (i%4==0){
    mounths[1]=29;
}
for (int j=0;j<12;j++){
    if (firstday%7==0){
        sunday+=1;}
    firstday+=mounths[j]%7;
}

i++;
}


printf("%d",sunday);

return 0;
}
