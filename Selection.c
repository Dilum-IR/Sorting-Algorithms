#include <stdio.h>   
#include <stdlib.h>  
#include <time.h>

void output(int[], int);   
void selection(int[], int);

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
	
	// selection sort time calculate
	time_t start_t1,end_t1;

    start_t1 = clock();
    selection(array, x); 
    end_t1 = clock()-start_t1;
    printf("Execution time for selectionSort = %ld\n\n", end_t1);
    
    printf("After sorting array elements are - \n");    
    output(array, x);  
    return 0;  
} 


// selection sort 
void selection(int arr[], int n)  
{  
    int i, j, min;  
      
    for (i = 0; i < n-1; i++)    
    {  
        min = i; 
          
        for (j = i+1; j < n; j++)  
        if (arr[j] < arr[min])  
            min = j;  
 
        int temp = arr[min];  
        arr[min] = arr[i];  
        arr[i] = temp;  
    }  
} 

void output(int arr[],int n){
    for (int i = 0; i < n; i++)
    {
        printf("%d ",arr[i]);
    }
    
}
