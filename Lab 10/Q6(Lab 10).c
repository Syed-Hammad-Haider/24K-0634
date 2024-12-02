#include <stdio.h>

typedef struct
{
    char name[30];
    char location[30];
    int days;
    float price;
    int available_seats;
} TravelPackage;

void show_packages(TravelPackage packages[], int count);
void make_booking(TravelPackage packages[], int count);

int main()
{
    int option;
    TravelPackage packages[3] = {
        {"Tour de Francais", "France", 14, 799.99, 6},
        {"Home to Futbol", "Brazil", 7, 549.99, 10},
        {"Heaven on Earth", "Portugal", 10, 999.99, 8},
    };

    while (1)
    {
        printf("\nMenu:-\n1: Display Travel Packages\n2: Book a Travel Package\n3: Exit\n");
        scanf("%d", &option);
        switch (option)
        {
        case 1:
            show_packages(packages, 3);
            break;
        case 2:
            make_booking(packages, 3);
            break;
        case 3:
            printf("Exiting the program...");
            return 0;
        default:
            printf("Invalid input. Please enter again.");
        }
    }
    return 0;
}

void show_packages(TravelPackage packages[], int count)
{
    printf("\nAvailable Packages:\n");
    for (int idx = 0; idx < count; idx++)
    {
        printf("Package %d\n", idx + 1);
        printf("Package Name: %s\t", packages[idx].name);
        printf("Destination: %s\t", packages[idx].location);
        printf("Duration (in days): %d\t", packages[idx].days);
        printf("Cost (in $): %.2f\t", packages[idx].price);
        printf("Number of Seats: %d\t", packages[idx].available_seats);
        printf("\n");
    }
}

void make_booking(TravelPackage packages[], int count)
{
    int package_choice, seats_to_book;
    float total_amount;
    printf("Enter the package number to book: ");
    scanf("%d", &package_choice);

    if (package_choice <= 0 || package_choice > count)
    {
        printf("Invalid package number.\n");
        return;
    }

    if (packages[package_choice - 1].available_seats > 0)
    {
        printf("Enter the number of seats to buy: ");
        scanf("%d", &seats_to_book);
        if (seats_to_book > 0 && seats_to_book <= packages[package_choice - 1].available_seats)
        {
            packages[package_choice - 1].available_seats -= seats_to_book;
            total_amount = packages[package_choice - 1].price * seats_to_book;
            printf("Booking successful for package '%s' to %s\n", packages[package_choice - 1].name, packages[package_choice - 1].location);
            printf("Amount to be paid is %.2f.\n", total_amount);
        }
        else if (seats_to_book > packages[package_choice - 1].available_seats)
        {
            printf("Number of seats available is less than the amount entered.\n");
        }
        else{
            printf("Invalid Input.\n");
            return;
        }
    }
    else
    {
        printf("No more seats left for package number %d.\n", package_choice);
    }
}
