#include <stdio.h>

typedef struct
{
    int day;
    int month;
    int year;
} Date;

int is_valid_date(Date user_date);
int is_leap_year(int year);
int get_days_in_month(int month, int year);
int calculate_days_between(Date start_date, Date end_date);
void print_day_of_week(Date user_date);

int main()
{
    Date first_date, second_date;
    printf("Enter the first date (dd-mm-yyyy): ");
    scanf("%d-%d-%d", &first_date.day, &first_date.month, &first_date.year);
    printf("Enter the second date (dd-mm-yyyy): ");
    scanf("%d-%d-%d", &second_date.day, &second_date.month, &second_date.year);

    if (is_valid_date(first_date))
    {
        printf("The first date entered is a valid date.\n");
    }
    else
    {
        printf("The first date entered is not a valid date.\n");
    }

    if (is_valid_date(second_date))
    {
        printf("The second date entered is a valid date.\n");
    }
    else
    {
        printf("The second date entered is not a valid date.\n");
    }

    printf("The number of days between the two dates is %d.\n", calculate_days_between(first_date, second_date));

    print_day_of_week(first_date);
    print_day_of_week(second_date);
    return 0;
}

int is_valid_date(Date user_date)
{
    if (user_date.year <= 0)
    {
        return 0;
    }
    if (user_date.month < 1 || user_date.month > 12)
    {
        return 0;
    }
    if (user_date.day < 1)
    {
        return 0;
    }

    if (user_date.month == 1 || user_date.month == 3 || user_date.month == 5 || user_date.month == 7 || user_date.month == 8 || user_date.month == 10 || user_date.month == 12)
    {
        if (user_date.day > 31)
        {
            return 0;
        }
    }
    else if (user_date.month == 4 || user_date.month == 6 || user_date.month == 9 || user_date.month == 11)
    {
        if (user_date.day > 30)
        {
            return 0;
        }
    }
    else
    {
        if ((user_date.year % 4 == 0 && user_date.year % 100 != 0) || user_date.year % 400 == 0)
        {
            if (user_date.day > 29)
            {
                return 0;
            }
        }
        else
        {
            if (user_date.day > 28)
            {
                return 0;
            }
        }
    }

    return 1;
}

int is_leap_year(int year)
{
    if ((year % 400 == 0) || (year % 100 != 0 && year % 4 == 0))
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int get_days_in_month(int month, int year)
{
    if (month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12)
    {
        return 31;
    }
    if (month == 4 || month == 6 || month == 9 || month == 11)
    {
        return 30;
    }
    if (month == 2)
    {
        return is_leap_year(year) ? 29 : 28;
    }
    return 0;
}

int calculate_days_between(Date start_date, Date end_date)
{
    int total_days_start = 0, total_days_end = 0;

    for (int year = 1; year < start_date.year; year++)
    {
        total_days_start += (is_leap_year(year) ? 366 : 365);
    }

    for (int month = 1; month < start_date.month; month++)
    {
        total_days_start += get_days_in_month(month, start_date.year);
    }
    total_days_start += start_date.day;

    for (int year = 1; year < end_date.year; year++)
    {
        total_days_end += (is_leap_year(year) ? 366 : 365);
    }

    for (int month = 1; month < end_date.month; month++)
    {
        total_days_end += get_days_in_month(month, end_date.year);
    }
    total_days_end += end_date.day;

    return total_days_end - total_days_start;
}

void print_day_of_week(Date user_date)
{
    int day = user_date.day, month = user_date.month, year = user_date.year;
    if (month < 3)
    {
        month += 12;
        year -= 1;
    }
    int k = year % 100;
    int j = year / 100;
    int day_of_week_index = (day + (13 * (month + 1)) / 5 + k + (k / 4) + (j / 4) + (5 * j)) % 7;
    const char *days[] = {"Saturday", "Sunday", "Monday", "Tuesday", "Wednesday", "Thursday", "Friday"};
    printf("The day of the week for %d-%d-%d is: %s\n", day, month, year, days[day_of_week_index]);}
