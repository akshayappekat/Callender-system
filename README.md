# Calendar Program in C

This C program generates and prints a calendar for a given year. It calculates the number of days in each month, determines the starting day of the week for each month, and prints a formatted calendar.

## Features

- **Leap Year Calculation**  
  The program correctly handles leap years (years divisible by 4, except for century years unless divisible by 400). This affects the number of days in February (28 or 29 days).

- **Day of the Week Calculation**  
  The program calculates the starting day of the week for the 1st day of each month using the **Zeller's congruence** algorithm.

- **Calendar Output**  
  The program displays a full calendar for the given year with:
  - Each month of the year
  - Days of the week (Sun, Mon, Tue, etc.)
  - Proper alignment of days

## How It Works

1. **Input**:  
   The user is prompted to enter the year for which the calendar is to be printed.

2. **Leap Year Check**:  
   The program checks if the given year is a leap year using the `isLeapYear()` function.

3. **Days in Each Month**:  
   The program calculates the number of days in each month, taking into account leap years for February using the `getDaysInMonth()` function.

4. **Day of the Week Calculation**:  
   Using **Zeller's Congruence**, the program calculates the starting day of the week for each month, which is then used to format the calendar.

5. **Calendar Printing**:  
   The program prints the calendar month by month, aligning the days correctly under the corresponding day of the week (Sun, Mon, etc.).

### Example Output:

## Technical Details

- **Functions**:
  - `isLeapYear(int year)`: Determines if the given year is a leap year.
  - `getDaysInMonth(int month, int year)`: Returns the number of days in a given month of the year.
  - `getDayOfWeek(int day, int month, int year)`: Returns the day of the week for a specific date using Zeller's Congruence formula.
  - `printCalendar(int year)`: Prints the calendar for the specified year, displaying each month with its corresponding days of the week.

- **Libraries Used**:
  - `stdio.h` for standard input and output operations.

## Improvements for Future Development

- **Support for More Calendars**: Add functionality to print calendars for specific months or other years.
- **User Interface**: Improve user interaction by allowing the user to choose a specific month or customize the calendar layout.
- **Export to File**: Implement file handling to allow the calendar to be saved to a text file for printing or future reference.
