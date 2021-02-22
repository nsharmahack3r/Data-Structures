#include<stdio.h>
void swap(int *a,int *b){
    int c = *a;
    *a = *b;
    *b = c;
}
int partition(int arr[],int low,int high){
    int pivot = arr[high];
    int i = low-1;
    for(int j = low; j<=high-1;j++){
        if(arr[j]<pivot){
            i++;
            swap(&arr[i],&arr[j]);
        }
    }
    swap(&arr[i+1],&arr[high]);
    return(i+1);
}
void quicksort(int arr[],int low, int high){
    if(low<high){
        int pivot = partition(arr, low,high);
        quicksort(arr,low,pivot-1);
        quicksort(arr,pivot+1,high);
    }
}
void printArray(int arr[], int lenght){
    for(int i =0 ;i<lenght ;i++){
        printf("%d ",arr[i]);
    }
    printf("\n");
}
int main(){
    int arr[] = {2,11,22,6,7,1};
    printArray(arr, 6);
    quicksort(arr,0,5);
    printArray(arr, 6);
    return 0;
}