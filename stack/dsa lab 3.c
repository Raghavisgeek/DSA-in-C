//prog 1.find majority element of an array (1,2,1,3,1,2,5)
//prog 2.move all the zeros and negative to the end of the array
//prog 3.Print the subset of the given array(power set)
//prog 4.find the subset when sum is equal to num
//prog 5.find sum of all subset of the array
#include<stdio.h>
#include<stdlib.h>
int main(){
    int i=0,j=6;
    int arr[]={1,-4,5,0,-3,8,6};

    while(i<j){
    while(arr[i]>0){
        i++;
    }
    //swap now
    int temp = arr[i];
    arr[i]=arr[j];
    arr[j]=temp;
    j--;
    }
    for(int k=0;k<7;k++){
        printf("%d ",arr[k]);
    }
    return 0;
}


//int main(){
//  int arr[] ={1,3,3,4,4,5,6};
//  int count=0,i,j,resize;
//  int element,max=0;
//  int *res=(int *)malloc(sizeof(int));
//  for(i=0;i<7;i++){
//        count=0;
//        int alreadydone=0;
//        for()
//    for(j=0;j<7;j++){
//        if(arr[i]==arr[j]){
//            count++;
//        }
//    }
//    if(count>max){
//        free(res);
//        resize=1;
//        max=count;
//        res[0]=arr[i];
//
//     }else if (count==max){
//        resize++;
//        res=(int*)realloc(res,resize*sizeof(int));
//        res[resize-1]=arr[i];
//     }
//  }
//  for(i=0;i<resize;i++){
//    printf("%d ",res[i]);
//  }
//  printf("\n count is %d",max);
//  return 0;
//}
