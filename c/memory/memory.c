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

    /* Dynamic memory is allocated from the heap while the program is running. 
     *  The heap is a large, shared memory space used to allocate memory during 
     *  execution. Dynamic memory persists until manually deallocated, at which
     *  point it can be relcaimed for other uses. 
     * 
     * As its name implies Dynamic memory can be allocated, resized and 
     *  deallocated dynamically during runtime. The C standard libary provides 
     *  two commonly used functions for dynamically allocating memory: malloc() 
     *  and calloc(). Both functions return a pointer to the beginning of the 
     *  reserved block of memory. 
     * 
     * Malloc() uses a parameter to specify the amount of memory to reserve in
     *  bytes: */
    int mB = 1024;
    int *block1 = malloc(mB);

    /*  If memory cannot be allocated, the pointer to the block will be set to
     *   NULL. For this reason, it's good practice to confirm that the pointer
     *   does not equal NULL before attempting to access it: */
    const int allocFailure = -1;

    if (block1 == NULL)
    {
        return allocFailure;

    }

    printf("The size of block1 is %i\n", mB);

    /* Once allocated, memory can be treated like an array, with the size of
     *   each element.
     *  
     * It's important to note that the memory allocated by malloc() is not
     *  initialized to any particular value: It contains whatever data was
     *  already stored in that memory at the time of allocation. The below
     *  may or may not be zero depending on a variety of factors: */
    printf("The value at the beginning of block1 is %i.\n", block1[0]);

    /* Calloc takes two arguments: One specifying the number of "units" to 
     *  allocate, and another specifying the size of each unit in bytes: */
    int *block2 = calloc(1, mB);

    /* Unlike malloc(), calloc() initializes all of the memory it allocates to 
     *  zero. This introduces additional overhead, but prevents the need to 
     *  overwrite all of the data later on. The below will always be 0: */
    printf("The value at the beginning of block2 is %i.\n", block2[0]);

    /* Values stored in dynamically allocated memory can also be accessed using
     *  pointer arithmetic: */
    block2[1] = 50;
    printf("The value stored at %p is %i.\n", (block2 + 1), *(block2 + 1));

    /* It's important to note that allocated memory doesn't have a specific
     *  type. In the example above, each index advances the address by 4 bytes
     *  because the pointer being used is of type int. The same memory can be
     *  traversed with other pointer types, however, and doing so will change
     *  the number of bytes each index advances the address by: */
    char *blk2chrs = (char*)block2;
    blk2chrs[1] = 'c';
    printf("The value stored at %p is %c.\n", (blk2chrs + 1), *(blk2chrs + 1));

    /* In the event that the amount of allocated memory needs to be changed, the
     *  realloc() function can be used. The realloc function takes two
     *  arguments: A pointer to the block of memory to be reallocated and the
     *  new size for the block of memory in bytes: */
    block1 = realloc(block1, 2 * mB); // Resizes block1 to 2 MegaBytes.

    /* If the realloc function cannot resize the specified block for any reason,
     *  it will allocate a new block of the desired size and return a pointer
     *  to its location. As with the memory allocation functions, if memory
     *  cannot be resized or allocated, the pointer to the block will be set to
     *  NULL: */
    if (block1 == NULL)
    {
        return allocFailure;

    }
    
    printf("The size of block1 is %i bytes.\n", 2 * mB);

    /* Once dynamic memory is allocated, it remains reserved until it is 
     *  explicitly freed or the program ends. If allocated memory is never
     *  deallocated, a memory leak occurs. In some circumstances, these leaks can
     *  propogate until the system runs out of memory and crashes. 
     * 
     * For this reason, it's important to always deallocate any allocated 
     *  memory. This can be done with the free() function. The free function
     *  takes a single argument: A pointer to the block of memory to be
     *  deallocated. */
    free(block1); // Deallocates the allocated memory residing at block1.

    /* Once a block of memory has been deallocted, the pointer to that block 
     *  should be set to NULL. This is because, while the memory is no longer
     *  allocated to the program, the pointer still retains its beginning memory
     *  address. If the pointer is not set to NULL and the memory is allocated
     *  to another process, it becomes possible to access and corrupt that
     *  processes memory. This is both a stability issue and a security
     *  concern. */
    block1 = NULL;

    /* Note that it's considered good practice to deallocate memory as soon as 
     *  it's no longer needed. This is because it is possible to "lose" 
     *  allocated memory: If the pointer used to access a block of allocated memory 
     *  is assigned a different address without first being stored elsewhere, 
     *  there is no easy or practical way to locate the allocated block of 
     *  memory. As a result, a memory leak becomes all but guarateed: */
    int num = 5;
    block2 = &num; /* The pointer used to track the location of the second block
                    *  of allocated memory is reassigned, effectively preventing
                    *  that block from being located and freed. */

    return 0;

}