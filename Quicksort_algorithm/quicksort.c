#include <stdio.h>
#include "quicksort.h"

int partition(int arr[], int low, int high){
    int pivot = arr[high];
    int i = (low - 1);

for (int j=low ; j<=high - 1 ; ++j) {
    if (arr[j] <= pivot) {
        int intr = arr[i + 1];
        arr[i + 1] = arr[j];
        arr[j]=intr;
        i++;
    }
}
//swap the last element with the pivot value to place it in its correct position after sorting
int intr = arr[i + 1];
arr[i+1] = arr[high];
arr[high] = intr;
return (i + 1);
}
void quicksort(int arr[], int low , int high){
    if (low<high ){
        int pi =partition(arr,low,high);
        quicksort(arr,low,pi-1 ); //left subarray
        quicksort(arr,pi+1,high);//right sub array
        }}
