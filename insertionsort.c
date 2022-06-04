#include <stdio.h>
void printArray(int array[], int size) {
	for (int i = 0; i < size; i++) {
		printf("%d ", array[i]);
	}
}
void insertionSort(int array[], int size) {
	for (int step = 1; step < size; step++) {
		int key = array[step];
		int j = step - 1;
	while (key < array[j] && j >= 0) {
		array[j + 1] = array[j];
		j--;
	}
	array[j + 1] = key;
	}
}
int main() {
	int data[] = {9, 5, 12321,6,10,12,122,1, 4, 3};
	int size = sizeof(data) / 4;
	insertionSort(data, size);
	printArray(data, size);
}
