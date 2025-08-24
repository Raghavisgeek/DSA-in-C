#include <stdio.h>
//
//void printArray(int arr[], int size) {
//    for(int i = 0; i < size; i++) {
//        printf("%d ", arr[i]);
//    }
//    printf("\n");
//}
//
//int partition(int arr[], int low, int high, int size) {
//    int pivot = arr[high];
//    int i = (low - 1);
//
//    for(int j = low; j <= high - 1; j++) {
//        if(arr[j] <= pivot) {
//            i++;
//            int temp = arr[i];
//            arr[i] = arr[j];
//            arr[j] = temp;
//        }
//    }
//
//    int temp = arr[i + 1];
//    arr[i + 1] = arr[high];
//    arr[high] = temp;
//
//    // Print array after each partition
//    printArray(arr, size);
//
//    return (i + 1);
//}
//
//void quickSort(int arr[], int low, int high, int size) {
//    if(low < high) {
//        int pi = partition(arr, low, high, size);
//
//        quickSort(arr, low, pi - 1, size);
//        quickSort(arr, pi + 1, high, size);
//    }
//}
//
//int main() {
//    int n;
//    printf("Enter number of elements: ");
//    scanf("%d", &n);
//
//    int arr[n];
//    printf("Enter %d elements: ", n);
//    for(int i = 0; i < n; i++) {
//        scanf("%d", &arr[i]);
//    }
//
//    printf("\nInitial array: ");
//    printArray(arr, n);
//
//    printf("\nSorting process:\n");
//    quickSort(arr, 0, n - 1, n);
//
//    printf("\nSorted array: ");
//    printArray(arr, n);
//
//    return 0;
//}

// hoare method

 int partition(int a[],int low,int high){
    int pivot=a[low];
    int i=low -1;
    int j= high +1;
    while(1){
        do{i++;}while(a[i]<pivot);

        do{j--;}while(a[j]>pivot);

        if(i>=j){return j;}

            int temp=a[i];
            a[i]=a[j];
            a[j]=temp;

    }
 }
void quicksort(int a[], int low,int high){
    if(low<high){
        int p = partition(a,low,high);
        quicksort(a,low,p);
        quicksort(a,p+1,high);
    }
}

 int main(){
    int size,a[size];
    printf("enter the size of element");
    scanf("%d",&size);
    printf("enter the element");
    for(int i=0 ; i<size;i++){
        scanf("%d",&a[i]);
    }
    quicksort(a,0,(size-1));
    printf("sorted array is : ");
    for(int i=0 ; i<size;i++){
        printf("%d ",a[i]);
    }
    return 0;
}
