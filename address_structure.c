/*
* This file contains the example of the structure in C
* An address of a person
*/

#include <stdio.h>

// defining a struct, which we can do int two ways
// this is the way without using typedef
struct address {
    char lname[20];     // last name
    char fname[20];     // first name
    char street[20];    // street address
    int age;            // age
};

// and this is the one with typedef
typedef struct {
    char lname[20];     // last name
    char fname[20];     // first name
    char street[20];    // street address
    int age;            // age
} address2;

/*
* This example shows how to instantiate the structures
* Please note that the one defined using typedef is used more naturally
* Just like any other type
*/
void address_example() {

    // declaring a variable of type address
    struct address addressInfo;
 

    // and of address2
    address2 aInfo2;

    printf("Provide the name of the street: ");
    gets(addressInfo.street, 20);

    // this will lead to a problem because we have not defined conversion
    // aInfo2 = addressInfo;

    // we can fix it if we use the same type, address2 or struct address 
    // for both variables

    struct address aInfo3 = addressInfo;

    // the name of the street should be the same for both
    puts(aInfo3.street);

    // and what happens if we change the name of the street in one of them?
    puts("Provide the new street for Info 3: ");
    gets(aInfo3.street, 20);

    // and print the result
    puts(addressInfo.street);

    // what we can see is that we the strings are copied using deep copy
    // that is because the memory is reserved for them when creating objects
    // and when we copy the objects, the memory is also copied
}