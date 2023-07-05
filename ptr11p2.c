/* source file for ptr11p2.c
 *
 * ptr11p2 demonstrtes the function insertEntry(). This function takes as
 * arguments a pointer to a struct entry (the listHead) and another pointer
 * to a struct entry after which the new entry is to be placed.
 *
 * Sunday July 2nd
 *   I'm very tired. There is confusion in my mind about how the linked list
 *   and insertEntry() are supposed to work together. Simplify the fisrt
 *   versions. Think about how any singly linked list would work with a
 *   function like insertEntry(). How does the book present the problem?
 *
 *
*/

/* includes */

#include <stdio.h>


/* defines */




/* structs */

struct entry{
    int value;
    struct entry *next;
};


/* function declarations */

void insertEntry(struct entry *p2New, struct entry *p2Exist);


/* main */

int main(int argc, char *argv[]){

    /* declare entries */

    struct entry n1, n2, n3, n4, nNew, *p2Entry;
    struct entry *p2New, *p2Exist;





    /* define entries */

    n1.value = 100;
    n2.value = 200;
    n3.value = 300;
    n4.value = 400;
    nNew.value = 500;






    /* create linked list */

    n1.next = &n2;
    n2.next = &n3;
    n3.next = &n4;
    n4.next = (struct entry *) 0;
    nNew.next = (struct entry *) 0;






    /* print out original list */

    p2Entry = &n1;
    while(p2Entry != (struct entry *) 0) {
        printf("%i  ", p2Entry->value);
        p2Entry = p2Entry->next;
    }
    printf("\n");






    /* insert new node */

    p2New = &nNew;
    p2Exist = &n4;                  /* insert after entry 2 */
    insertEntry(p2New, p2Exist);









    /* print new linked list */


    p2Entry = &n1;
    while(p2Entry != (struct entry *) 0) {
        printf("%i  ", p2Entry->value);
        p2Entry = p2Entry->next;
    }
    printf("\n");








    return(0);
}



/* funtion definitions */


void insertEntry(struct entry *p2New, struct entry *p2Exist){

    p2New->next = p2Exist->next;
    p2Exist->next = p2New;


}



