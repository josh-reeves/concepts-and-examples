#include <stdio.h>
#include <stdlib.h>

int main()
{
    /* Understanding how memory allocation works is a key part of understanding
     *  how programs work at a concrete level, which is, in turn, essential for
     *  writing well-optimized and secure code. */

    /* Memory can either be allocated statically or dynamically. Static memory
     *  is allocated by the system before the program runs. It typically 
     *  includes the memory required for any declared variables. As its name
     *  implies, once allocated, static memory cannot be changed. If a variable
     *  goes unused, that memory is wasted: */
    int unused; /* The system will allocate 4 bytes of memory for this variable
                    regardless of whether or not it is used. */
                    
    /* The size of any variable can be obtained via the sizeof operator: */
    printf("The size of unused is %zu bytes.\n", sizeof(unused));

    /* Dynamic memory is allocated to the heap while the program is running. The
     *  heap is a large memory space allocated to the program from RAM as needed
     *  by the operating system. When no longer needed, the operating system can
     *  reclaim this memory for use by other processes.
     * 
     * As its name implies heap memory can be allocated, resized and deallocated
     *  dynamically during runtime. The C standard libary provides two commonly
     *  used functions for dynamically allocating memory: malloc() and
     *  calloc(). Both functions return a pointer to the beginning of the 
     *  reserved block of memory. 
     * 
     * Malloc() uses a parameter to specify the amount of memory to reserve in
     *  bytes: */
    int *block1 = malloc(1024);

    /*  Once allocated, memory can be treated like an array, with the size of
     *   each element 
     *  It's important to note that the memory allocated by malloc() is not
     *  initialized to any particular value: It contains whatever data was
     *  already stored in that memory at the time of allocation: */
    printf("%i\n", block1[0]); // This may or may not be 0.

    /* Calloc takes two arguments: One specifying the number of "units" to 
     *  allocate, and another specifying the size of each unit in bytes: */
    int *block2 = calloc(1, 1024);

    /* Unlike malloc(), calloc() initializes all of the memory it allocates to 
     *  zero. This introduces additional overhead, but prevents the need to 
     *  overwrite all of the data later on: */
    printf("%i\n", block2[0]); // This will always be 0.

    return 0;

}