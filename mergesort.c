#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include<ctype.h>

void merge(int a[], int low, int upper, int mid) {
	mid = low + (upper - low) / 2;
	int k, j = mid + 1;
	int b[];
	while (low <= mid && j <= upper) {
		if (a[low] < a[j]) {
			b[k] = a[low];
		} else {
			b[k] = a[j];
			j++;
		} k++;
	} if (low > mid) {
		while (j <= upper) {
			b[k] = a[j];
			j++;
			k++;
		}
	} else {
		while (low <= mid) {
			b[k] = a[low];
			low++;
			k++;
		}
	}

}
void mergesort(int a[], int upper, int low) {
	int mid;
	if (low < upper) {
		mid = low + (upper - low) / 2;
		mergesort(a, low, mid);
		mergesort(a, mid + 1, upper);
		merge(a, low, mid, upper);
	}
}
void printArray(int arr[], int size) {
	for (int i = 0; i < size; i++)
		printf("%d ", arr[i]);
}
int main() {
	int a[] = {1123, 123, 1233, 1232, 4, 1, 545};
	int size = sizeof(a) / 4;
	int upper = size - 1;
	int low = 0;
	mergesort(a, 0, size - 1);
	printarray(a, size);

}