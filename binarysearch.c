#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <ctype.h>

int linearsearch(int arr[], int size, int element) {
    int i ;
	for (i = 0; i < size; i++) {
		if (arr[i] == element) {
			return i;
		}
	} return -1;
}
int main() {
	int arr[] = {1, 54, 6, 2, 63432, 234, 233, 25, 277};
	int size = sizeof(arr) / sizeof(int);
	int element = 23;
	int searchindex = linearsearch(arr, size, element);
    if(searchindex!=-1){
        printf("The element %d found at index %d", element, searchindex );
    }else{
        printf("The element %d not found in array",element);
    }
}