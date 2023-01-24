#include <stdio.h>   
#include <stdlib.h>  
#include <time.h>

void output(int[], int);   
void insertion(int[], int); 


int main()  
{  	
	int i=0,x;
	printf("Enter Array size ? ");
	scanf("%d",&x);
    int array[x];  
    
    while(i<x){
    	
		array[i]=rand();
		i++;
	}
		
	// insertion sort time calculate
    time_t start_t2,end_t2;

    start_t2 = clock();
    insertion(array, x); 
    end_t2 = clock()-start_t2;
    printf("Execution time for insertionSort = %ld\n\n", end_t2);

    printf("After sorting array elements are - \n");    
    output(array, x);  
    return 0;  
} 
// insertion sort
void insertion(int a[], int n)
{  
    int i, j, temp;  
    for (i = 1; i < n; i++) {  
        temp = a[i];  
        j = i - 1;  
  
        while(j>=0 && temp <= a[j])    
        {    
            a[j+1] = a[j];     
            j = j-1;    
        }    
        a[j+1] = temp;    
    }  
}   
void output(int arr[],int n){
    for (int i = 0; i < n; i++)
    {
        printf("%d ",arr[i]);
    }
    
}