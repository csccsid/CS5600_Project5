// Use C-Lang Static Analyzer to analyze and fix the bugs
// Also review the output generated to find any bugs that the static analyzer misses.
// Hint this code has 3 bugs that can be identified using static analyzer, 1 vulnerability will have to be identified by looking at the output.

//MACROS
#include<stdio.h>

# define ARRAY_MEMORY_SIZE 10

// custom method to print digits from 11 to value of size in main().
void method(int *rtp, int *rtp1) {
	// pointer should be checked before use
	if(rtp == NULL || rtp1 == NULL)
	{
		printf("Pointer cannot be NULL");
		return;
	}
	
	
	// the variable should be initialized befor use.
    int count = 1;
    for (int i = 0; i < (*rtp1); i++) {
        printf("Numbers are: %d \n", (*rtp + count));
        count++;
    }

}

// custom method to fill an array with numbers till valid defined "macro' size
void memory_filler(int arr[]) {
    int inc = 0;
    // the accessing of array cannot exceed it's boundary
    for (int k = 0; k < ARRAY_MEMORY_SIZE; k++) {
        arr[k] = inc;
        inc += 1;
        printf("Array element is: %d \n", arr[k]);
    }
}


int main() {
    // variable initializations

    int first_number = 10;
    int size = 9;
    int random_array[ARRAY_MEMORY_SIZE];

    //Note for developers: use as size in method using defined pointers (not directly)

    int *ptr_to_first_number = NULL;
    int *ptr_to_size = NULL;
    // Hint:: add the assign the references to the pointers here:
	ptr_to_first_number = &first_number;
	ptr_to_size = &size;

    //function call statements
    method(ptr_to_first_number, ptr_to_size);
    memory_filler(random_array);

    return 0;

}
