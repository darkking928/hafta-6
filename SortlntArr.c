#include <stdio.h>
#include <cs50.h>

void selectionSort(int array[],int size);

int main(){
    int n;
    printf("Eleman sayısını girin: ");
    n = get_int("");
    int array[n];
    for (int i=0; i<n; i++) {
        printf("%d. elemanı girin: ", i+1);
        array[i] = get_int("");
    }
    
    selectionSort(array,n);
    printf("Sırası ile küçükten büyüğe: ");
    for(int i =0;i<n;i++){
        printf("%d ",array[i]);
    }
    printf("\n");
}

void selectionSort(int array[],int size){
	int min;
	
	for(int i =0;i<size-1;i++){
		min = i;
		
		for(int j = i;j<size;j++){
			if(array[j]<array[min]){
				min = j;
			}
		}
		int temp = array[i];
		array[i] = array[min];
		array[min] = temp;
	}
}