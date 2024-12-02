#include <stdio.h>
#include <string.h>
typedef struct
{
    char city_name[50];
    char postal_code[50];
} Address;

typedef struct
{
    char full_name[20];
    int emp_id;
    float monthly_salary;
    Address employee_address;
} Employee;

int main()
{
    int num_employees;
    FILE *file_ptr;
    
    printf("Enter the number of employees: ");
    scanf("%d", &num_employees);
    getchar();

    Employee employee_list[num_employees];
    for (int i = 0; i < num_employees; i++)
    {
        printf("\nEnter details for employee %d:", i + 1);
        printf("\nFull Name: ");
        fgets(employee_list[i].full_name, sizeof(employee_list[i].full_name), stdin);
        employee_list[i].full_name[strcspn(employee_list[i].full_name, "\n")] = '\0'; // Remove newline character
        
        printf("Employee ID: ");
        scanf("%d", &employee_list[i].emp_id);
        
        printf("Monthly Salary: ");
        scanf("%f", &employee_list[i].monthly_salary);
        getchar(); // Consume newline character after scanf
        
        printf("City: ");
        fgets(employee_list[i].employee_address.city_name, sizeof(employee_list[i].employee_address.city_name), stdin);
        employee_list[i].employee_address.city_name[strcspn(employee_list[i].employee_address.city_name, "\n")] = '\0'; // Remove newline
        
        printf("Postal Code: ");
        fgets(employee_list[i].employee_address.postal_code, sizeof(employee_list[i].employee_address.postal_code), stdin);
        employee_list[i].employee_address.postal_code[strcspn(employee_list[i].employee_address.postal_code, "\n")] = '\0'; // Remove newline
    }

    file_ptr = fopen("employee_data.dat", "wb");
    if (file_ptr == NULL)
    {
        printf("Error opening file for writing.\n");
        return 1;
    }
    fwrite(employee_list, sizeof(Employee), num_employees, file_ptr);
    fclose(file_ptr);
    printf("Employee data saved to file.\n");
    file_ptr = fopen("employee_data.dat", "rb");
    if (file_ptr == NULL)
    {
        printf("Error opening file for reading.\n");
        return 1;
    }
    printf("\nEmployee Details:\n");
    fread(employee_list, sizeof(Employee), num_employees, file_ptr);
    for (int i = 0; i < num_employees; i++)
    {
        printf("\nFull Name: %s\n", employee_list[i].full_name);
        printf("Employee ID: %d\n", employee_list[i].emp_id);
        printf("Monthly Salary: %.2f\n", employee_list[i].monthly_salary);
        printf("City: %s\n", employee_list[i].employee_address.city_name);
        printf("Postal Code: %s\n", employee_list[i].employee_address.postal_code);
    }
    fclose(file_ptr);
    return 0;
}
