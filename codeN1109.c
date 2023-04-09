// Use C-Lang Static Analyzer to analyze and fix the bugs
// Hint this code has bugs that can be identified using static analyzer
// Also review the output generated to find any bugs/vulnerabilities that the static analyzer misses.

//MACROS 
#include<stdio.h>
#include <stdlib.h>


//another custom array printing an array
void array_print(int* ptr3, int n)
{
	// varible should be initialized
    int sub = 0;
    // pointer should be checked before using
    if(ptr3 == NULL)
    {
    	printf("Pointer cannot be NULL");
    	return;
    }
    // the accessing of array cannot exceed it's boundary
    for(int i=0; i<n; i++)
    {
        ptr3[sub] = i;
        sub=sub+1;
        printf("Array is:%d\n ",ptr3[i]);
    }


}

int main(){
    // variable initializations 
    // varible should be initialized
    int* ptr_to_arr = NULL;
    int size_array = 0;

    //Note for developers(students): use variables in method using defined pointers (not directly)


	// size of int memory should be allocted to the int variable.
    ptr_to_arr = (int*)malloc(sizeof(int));
    if(!ptr_to_arr)
    {
    	printf("Memory allocate error");
    	return -1;
    }
    
    // Hint:: add and assign the references to the pointers here:
	size_array = sizeof(ptr_to_arr);

    //function call statements
    array_print(ptr_to_arr,size_array);
    // memory assigned in the heap need to be freed
    free(ptr_to_arr);
    return 0;


}

