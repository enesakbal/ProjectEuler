#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){

FILE *local;

local=fopen("p022_names.txt","r");

char names[6000][15];
char c;
int i=0,j=0,max=0;
while ((c=fgetc(local))!=EOF){

        if (c==','){

            j=0;
            i++;
            max++;
            continue;
        }
        else if (c=='"'){
            continue;

        }
        else{
        names[i][j]=c;
        j++;
        }

}
max+=1;





char tmp[12];

for (int i = 0; i <= max  ; i++)
{
    for (int j =0 ; j < max; j++)
    {
        if (strcmp(names[i], names[j]) < 0)
        {
            strcpy(tmp, names[i]);
            strcpy(names[i], names[j]);
            strcpy(names[j], tmp);
        }
    }
}




long long sum=0;

int alphabet[26]={0};
for (int i=1;i<=26;i++)
    alphabet[i]=i;
int temp=0;
for (int i=1;i<=max;i++){
temp=0;
    for (int j=0;j<strlen(names[i]);j++){


        temp+=alphabet[names[i][j]-65+1];



    }
    sum+=temp*i;

}

printf("%lld",sum);



return 0;
}
