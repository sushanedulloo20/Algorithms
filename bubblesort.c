#include<stdio.h>
void bubblesort(int a[], int n){
    int i,j,imin,temp;
    for(j=0;j<n-1;j++){
        for(i=0;i<n-j-1;i++){
            if(a[i]>a[i+1]){
                int temp=a[i+1];
                a[i+1]=a[i];
                a[i]=temp;
            }
        }
    }
}
void printarray(int a[], int n){
    int i;
    for(i=0;i<n;i++){
        printf("%d ",a[i]);
    }
}
int main(){
    int a[]={1,123,23,1232,9};
    int n=sizeof(a)/4;
    bubblesort(a,n);
    printarray(a,n);
}