#include<stdio.h>
#include<stdlib.h>
#include<string.h>
//merge two sorted arrays

void merge_two_sorted_arrays(int array[],int n1,int array1[],int n2,int array2[]){

    int i=0;
    int j=0;
    int k=0;
    while(i<n1+n2){

        if(array[j]<array1[k]){
            array2[i]=array[j];
            j++;
        }
        else if(array[j]>array1[k]){
            array2[i]=array1[k];
            k++;
        }
        else if(array[j]==array1[k]){
            array2[i]=array1[k];
            k++;
            j++;
          
        }
        i++;
    }

}
int main(){

    int array[] = {1,2,3,4,5,6,7,8};
    int array1[] = {9,10,11,12,13,14,15,16,17,18,19,20};
    int n1 = sizeof(array)/sizeof(array[0]);
    int n2 =  sizeof(array1)/sizeof(array1[0]);

    int array2[n1+n2];
    merge_two_sorted_arrays(array,n1,array1,n2,array2);
    printf("Merging of two arrays :- ");
    for(int i =0;i<(n1+n2);i++){
        printf("%d ",array2[i]);
    }
    printf("\n");
}