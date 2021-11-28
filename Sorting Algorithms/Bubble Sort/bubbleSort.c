/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#include <stdbool.h>

void display(int list[], int n){
    printf("Input Array is : ");
    printf("[");
    for(int i=0;i<n;i++){
        printf("%d ",list[i]);
    }
    printf("]");
}

void bubbleSort(int list[], int n){
    // if 5 elements then 4 comparisons needed > if i=1 to i<n otherwises if i=0 to i<n-1
    for(int i=0;i<n-1;i++){
        int swapped = false;
        for(int j=0;j<n-1-i;j++){
            if(list[j]>list[j+1]){
                int temp = list[j];
                list[j] = list[j+1];
                list[j+1] = temp;
                swapped = true;
            }
        }
        if(!swapped){
            break;
        }
    }
}

void output(int list[], int n){
    printf("\nOutput Array is : ");
    printf("[");
    for(int i=0;i<n;i++){
        printf("%d ", list[i]);
    }
    printf("]");
}

int main()
{
    // Algorithm for Bubble short
    int list[9] = {4,3,8,2,5,9,7,1,6};
    int n = sizeof(list)/sizeof(list[0]);
    display(list,n);
    bubbleSort(list,n);
    output(list,n);
    return 0;
}
