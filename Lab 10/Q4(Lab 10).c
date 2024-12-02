#include <stdio.h>
#include <string.h>
typedef struct
{
    char title[30];
    char author[30];
    int publication_year;
    float price;
} Book;

void display_books(Book library[], int num_books);
void search_book_by_title(Book library[], int num_books);
void list_books_by_author(Book library[], int num_books);

int main()
{
    int option;
    Book library[5] = {
        {"Life Of Pi", "Yann Martel", 2001, 49.99},
        {"The Kite Runner", "Khaled Hosseini", 2003, 59.99},
        {"A Tale Of Two Cities", "Yann Martel", 1859, 69.99},
        {"The Alchemist", "Paulo Coehlo", 1988, 79.99},
        {"Diary Of A Wimpy Kid", "Jeff Kinney", 2010, 39.99}};

    while (1)
    {
        printf("\nMenu:-\n1: Display all books\n2: Search for a book by title\n3: List book by a specific author\n4: Exit\n");
        scanf("%d", &option);
        getchar();
        switch (option)
        {
        case 1:
            display_books(library, 5);
            break;
        case 2:
            search_book_by_title(library, 5);
            break;
        case 3:
            list_books_by_author(library, 5);
            break;
        case 4:
            printf("Exiting the program...");
            return 0;
        default:
            printf("Invalid input. Please enter again.");
        }
    }
    return 0;
}

void display_books(Book library[], int num_books)
{
    printf("\nAvailable Books\n");
    for (int i = 0; i < num_books; i++)
    {
        printf("Book number %d\n", i + 1);
        printf("Title: %s\t", library[i].title);
        printf("Author: %s\t", library[i].author);
        printf("Publication Year: %d\t", library[i].publication_year);
        printf("Price: %.2f\t", library[i].price);
        printf("\n");
    }
}

void search_book_by_title(Book library[], int num_books)
{
    char search_title[50];
    printf("Enter the title of the book to be searched: ");
    fgets(search_title, sizeof(search_title), stdin);
    search_title[strcspn(search_title, "\n")] = 0;

    int i, found = 0;
    for (i = 0; i < num_books; i++)
    {
        if (strcmp(library[i].title, search_title) == 0)
        {
            found = 1;
            break;
        }
    }

    if (found == 1)
    {
        printf("Book found.\n");
        printf("Title: %s\t", library[i].title);
        printf("Author: %s\t", library[i].author);
        printf("Publication Year: %d\t", library[i].publication_year);
        printf("Price: %.2f\t", library[i].price);
        printf("\n");
    }
    else
    {
        printf("Book not found.\n");
    }
}

void list_books_by_author(Book library[], int num_books)
{
    char search_author[50];
    printf("Enter the author: ");
    fgets(search_author, sizeof(search_author), stdin);
    search_author[strcspn(search_author, "\n")] = 0;

    int i, found = 0;
    for (i = 0; i < num_books; i++)
    {
        if (strcmp(library[i].author, search_author) == 0)
        {
            found = 1;
            printf("Book Title: %s\n", library[i].title);
        }
    }

    if (found == 0)
    {
        printf("No books available by the author %s.\n", search_author);
    }
}
