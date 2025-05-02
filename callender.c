#include <stdio.h>

int isLeapYear(int year) {
    return (year % 4 == 0 && (year % 100 != 0 || year % 400 == 0));
}

int getDaysInMonth(int month, int year) {
    switch (month) {
        case 1: return 31;
        case 2: return isLeapYear(year) ? 29 : 28;
        case 3: return 31;
        case 4: return 30;
        case 5: return 31;
        case 6: return 30;
        case 7: return 31;
        case 8: return 31;
        case 9: return 30;
        case 10: return 31;
        case 11: return 30;
        case 12: return 31;
        default: return 0;
    }
}

int getDayOfWeek(int day, int month, int year) {
    if (month < 3) {
        month += 12;
        year--;
    }
    int k = year % 100;
    int j = year / 100;
    int h = (day + (13*(month + 1))/5 + k + k/4 + j/4 + 5*j) % 7;
    return ((h + 6) % 7);
}

void printCalendar(int year) {
    const char* months[] = {"January", "February", "March", "April", "May", "June",
                             "July", "August", "September", "October", "November", "December"};
    const char* weekDays[] = {"Sun", "Mon", "Tue", "Wed", "Thu", "Fri", "Sat"};

    printf("Calendar for year %d\n", year);
    printf("------------------------\n");

    for (int month = 1; month <= 12; month++) {
        printf("\n\n  ------------%s-------------\n", months[month-1]);
        for (int i = 0; i < 7; i++) {
            printf("%s ", weekDays[i]);
        }
        printf("\n");

        int days = getDaysInMonth(month, year);
        int startDay = getDayOfWeek(1, month, year);

        for (int i = 0; i < startDay; i++) {
            printf("    ");
        }

        for (int day = 1; day <= days; day++) {
            printf("%3d ", day);
            if ((startDay + day) % 7 == 0) {
                printf("\n");
            }
        }
        printf("\n");
    }
}

int main() {
    int year;
    printf("Enter year: ");
    scanf("%d", &year);
    printCalendar(year);
    return 0;
}
