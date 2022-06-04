#include<stdio.h>

void perm(){
    for(int i=0;i<3;i++){
        for(int j=i+1;j<3;j++){
            h=b[i];
            b[i]=b[j];
            b[j]=h;
        }printf("%c",b[i]);
    }
}
int main(){
    char b[3];
    scanf("%s",b);
    char h;
}



