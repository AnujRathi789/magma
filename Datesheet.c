// block 1
// to import standard input and output
#include <stdio.h>
// to import clear statements,etc (if any)
#include <conio.h>
// to import strings and use strings
#include <stdlib.h>
// to import strings and use strings
#include <string.h>

// block 2
// declare all variables which store their respective
//  data using structure 'library'
struct library
{
    // to store the name of the book
    char book_name[100];
    //  to store the name of the author of the book
    float cost;
    // to store the number of pages of the book
    int no_of_pages;
};

// block 3

// main function

int main()
{
    // using the struct library again.'
    // in order to perform operation
    struct library lib[100];
    char book_namep[100];
    int i, j, count;
    i = 0;
    j = 0;
    // block 3.1

    while (j != 6)
    {
        printf("\n\n1.Add Book details\n");
        printf("2. Display the list of books and its details:\n");
        printf("3. Display the total no. of books in the library:\n");
        printf("4. Exit\n\n");
        printf("Enter the number:");
        scanf("%d", &j);

        // block 3.1.1

        char temp;
        switch (j)
        {
        // in order to add the book details
        case 1:
            printf("\nYou can add the details of the book:");
            printf("\nEnter the book name:");
            scanf("%s",lib[i].book_name);
            scanf("%c", temp);
            printf("\nEnter the author name:");
            scanf("%s", lib[i]);
            scanf("%c", temp);
            printf("\nEnter the number of pages:");
            scanf("%d", &lib[i].no_of_pages);
            scanf("%f", &lib[i].cost);
            count = count + 1;
            i = i + 1;
            break;

        case 2:
            // if there are no books registered previously
            if (count == 0)
            {
                printf("There are no books stored!!\n\n");
            }
            break;

        case 3:
            // to view the total number of books
            printf("\nTotal number of the books in the library\n\n");
            break;

        case 4:

            // to exit from the program
            exit(0);
            // if any number other than 1,2,3,4 is entered
            

        default:
            printf("\nInvalid number enterd\n\n");
        }
    }
}