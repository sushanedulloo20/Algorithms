#include<stdio.h>
void selectionsort(int a[], int n){
    int i,j;
    for(i=0;i<n-1;i++){
        while(a[i]<a[i-1] && i>=0){
            a[i]=a[i-1];
            i--;
        }
    }
}
void printarray(int a[],int n){
    int i;
    for(i=0;i<n;i++){
        printf("%d ",a[i]);
    }
}
int main(){
    int a[]={3,123,23,1232,9};
    int n=sizeof(a)/4;
    selectionsort(a,n);
    printarray(a,n);
}