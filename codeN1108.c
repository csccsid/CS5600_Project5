// Use C-Lang Static Analyzer to analyze and fix the bugs
// Also review the output generated to find any bugs that the static analyzer misses.
// Hint this code has 5-6 bugs that can be identified using static analyzer, 3 Tasks will also have to be completed
//1.. add null pointer check condition for ptr1 and ptr2 in the even_number method
//2.. add null pointer check condition for ptr3 in the array_print method
//3.. Complete even Logic using given pointer.

//MACROS (Hint: 1 macro definition for a library function is missing (look at warnings maybe?))
// include library that used in the code
#include<stdio.h>
#include<stdlib.h>


// custom method to check for even or odd number
void even_number(int *ptr1, char *ptr2) {

    // ----------------------- Secure Coding Task -------------------------------////
    // Task 1: Implement a NULL pointer check condition (use if statment) (most important secure coding practice)

    // ------  add null pointer check condition for ptr1 Here-------
    if(ptr1 == NULL)
    {
    	printf("Original First Number cannot be NULL");
    	return;
    }
    
    // pointer should be used after check
    printf("Original First Number is : %d \n ", (*ptr1));
    printf("Choice is : %c \n ", (*ptr2));

    //Task 2 : complete logic for detecting an even number

    if (*ptr1 % 2 == 0)//add logic for checking even number inside if condition ()
    {
        //print statements
        printf("Numbner %d is Even : \n", (*ptr1));
        printf("Confirmed choice is : %c \n", (*ptr2));
    } else {
        printf("Odd Number\n");
    }

}

//another custom array printing an array
void array_print(int *ptr3, int n) {
    // Task 3:: Add code here (if check condition for NULL pointer)
    if(ptr3 == NULL)
    {
    	printf("Pointer cannot be NULL");
    	return;
    }
    // the accessing of array cannot exceed it's boundary
    for (int i = 0; i < n; i++) {
        ptr3[i] = i;
        printf("Array is:%d\n ", ptr3[i]);
    }


}

int main() {
    // variable initializations (Hint: Missing values?????)
    // varible should be initialized
    int first_number = 26;
    char choice = 'Y';
    int *ptr_to_arr = NULL;
    int size_array = 0;

    //Note for developers(students): use variables in method using defined pointers (not directly)

    int *ptr_to_first_number = NULL;
    char *ptr_to_char = NULL;
    // size of int memory should be allocted to the int variable.
    ptr_to_arr = (int *) malloc(sizeof(int));
    if(!ptr_to_arr)
    {
    	printf("Memory allocate error");
    	return -1;
    }
    // Hint:: add and assign the references to the pointers here:
	ptr_to_first_number = &first_number;
	ptr_to_char = &choice;
	size_array = sizeof(*ptr_to_arr);

    //function call statements
    even_number(ptr_to_first_number, ptr_to_char);
    array_print(ptr_to_arr, size_array);
    
    // memory assigned in the heap need to be freed
    free(ptr_to_arr);
    return 0;

}
