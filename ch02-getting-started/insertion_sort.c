#include <stdio.h>

void asc_insertion_sort(int A[], int n){
	for(int i = 1; i < n; i++){
		int key = A[i];
		int j = i-1;
		
		while(j >= 0 && A[j] > key){
			A[j+1] = A[j];
			j--;
		}

		A[j+1] = key;
	}
}

void desc_insertion_sort(int A[], int n){
	for(int i = 1; i < n; i++){
		int key = A[i];
		int j = i-1;
		
		while(j >= 0 && A[j] < key){
			A[j+1] = A[j];
			j--;
		}

		A[j+1] = key;
	}
}

int main(void) {
	int A[] = {31, 41, 59, 26, 41, 58};

	asc_insertion_sort(A, 6);

	for(int i = 0; i < 6; i++){
		printf("%d ", A[i]);
	}

	printf("\n");

	desc_insertion_sort(A, 6);

	for(int i = 0; i < 6; i++){
		printf("%d ", A[i]);
	}

	printf("\n");

}
