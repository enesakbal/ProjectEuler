#include <stdio.h>
#include <math.h>




int matris[100][50];


int addtion(int digit){
int total=0,carry;
for (int i=0;i<100;i++){

    total+=matris[i][digit];

}

return total;
}





int main(){

char number[5000];
    FILE *File_of_Number;

if ((File_of_Number=fopen("Number_of _Problem_13.txt","r")) != NULL) {
int i=0;
    while(!feof(File_of_Number)){

        fscanf(File_of_Number," %c",&number[i]);
        i++;
    }
}



int meter=0;
int k;
for (int i=0;i<100;i++){

    for (int j=0;j<50;j++,meter++){
        k=number[meter]-'0';
        matris[i][j]=k;
    }
}

int total[50];

int carry=0;

for (int i=49;i>=0;i--){
    meter=0;
    if (i==0){

        total[i]=(addtion(i)+carry);
        break;

    }


    total[i]=(addtion(i)+carry)%10;
    meter=((addtion(i)+carry)-total[i])/10;
    carry=meter;


}





for (int j=49,i=0;j>=0;j--,i++){
        int temp=total[i];
        total[i]=total[j];
        total[j]=temp;
    }




printf("\nTotal :");
for (int i=0;i<50;i++){
    printf("%d",total[i]);
}
printf("\n");


 return 0;
}

