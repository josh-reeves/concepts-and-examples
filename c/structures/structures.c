#include <stdio.h>
#include <string.h>

/* Structures provide a way to group and store related data of different types.
 *  In C, structs are created using the struct keyword: */
struct Name
{
    // The variables a structure contains are referred to as its members:
    char firstName[100];
    char lastName[100];

}; /* Note that structs require a semi-colon after the curly braces containing
       their members.*/

struct Address
{
    int zipCode;
    int streetNumber;

    /* Structures can also be nested: A structure can be used as a member of
        another structure: */
    struct Name resident;

    char state[100];
    char city[100];
    char streetName[100];

};

void UpdateResident(struct Address *address, struct Name name);

int main()
{
    /* To access the structure, a variable for it must be created (similar to
     *  instantiation in object-oriented languages). This is done by using the
     *  struct keyword, followed by the structure's identifier, followed by a 
     *  unique identifier for the variable: */
    struct Address address1;

    /* Once the variable has been created, members of the structure can be
     *  accessed using dot notation (variable.member). */
    address1.zipCode = 12345;
    address1.streetNumber = 25;

    /* Note that string members cannot use the same simplified assignment syntax
     *  that C usually allows for arrays of characters (string = "value"). To
     *  work around this, it's common to use the strcopy method from the \
     *  string.h file: */
    strcpy(address1.state, "Alabama");
    strcpy(address1.city, "Example City");
    strcpy(address1.streetName, "Test Street");
    strcpy(address1.resident.firstName, "John");
    strcpy(address1.resident.lastName, "Doe");

    printf("%s %s\n%i %s\n%s, %s %i\n\n", address1.resident.firstName, address1.resident.lastName, address1.streetNumber, address1.streetName, address1.city, address1.state, address1.zipCode);
    
    /* C also provides a simplified syntax for defining the members of a
     *  of a structure: At declaration, the values for a structure's members can
     *  be provided via the assignment operator followed by a list contained 
     *  within curly braces. The order of the values in the list must match the
     *  order in which the members of the structure are declared. Note that this
     *  even works for the members of nested structures: */
    struct Address address2 = {12345, 25, "Jane", "Doe", "Alabama", "Example City", "Test Street"};
    printf("%s %s\n%i %s\n%s, %s %i\n\n", address2.resident.firstName, address2.resident.lastName, address2.streetNumber, address2.streetName, address2.city, address2.state, address2.zipCode);

    struct Name resident = {"Jacob", "Doe"};

    UpdateResident(&address1, resident);
    printf("%s %s\n%i %s\n%s, %s %i\n\n", address1.resident.firstName, address1.resident.lastName, address1.streetNumber, address1.streetName, address1.city, address1.state, address1.zipCode);

    return 0;

}

/* Because structures can potentially hold a large amount of data, it can be
 *  beneficial to pass functions a pointer to the structure, rather than the
 *  structure itself. When a structure is passed into a standard parameter, the
 *  data contained within the structure is copied into the parameter. When a
 *  pointer to a structure is used, no data is actually copied. Instead the
 *  parameter merely acts as a reference, and changes made via the pointer are
 *  reflected on the original structure.
 * 
 * This is essentially the same as passing a parameter via reference in modern
 *  C variants. */
void UpdateResident(struct Address *addr, struct Name name)
{
    /* When using a pointer to a structure, its members must be accessed with
     *  the structure pointer operator, ->, rather than a dot: */
    addr->resident = name;

}

/* Note that it isn't uncommon for the C compiler to allocate additiona memory
 *  between the members of a structure. This process, referred to as, "padding,"
 */