#include <iostream>

int convertToMinutes(int hour, int minute) {
    return hour * 60 + minute;
}

int calculateHoursWorked(int minutes) {
    return minutes / 60;
}

int calculateRemainingMinutes(int minutes) {
    return minutes % 60;
}

void displayHoursWorked(int hours, int minutes) {
    std::cout << "Hours Worked: " << hours << " hours and " << minutes << " minutes" << std::endl;
}

int main() {
    int startHour, startMinute;
    int endHour, endMinute;

    std::cout << "Enter the start time (hour minute): ";
    std::cin >> startHour >> startMinute;

    std::cout << "Enter the end time (hour minute): ";
    std::cin >> endHour >> endMinute;

    int startTimeInMinutes = convertToMinutes(startHour, startMinute);
    int endTimeInMinutes = convertToMinutes(endHour, endMinute);

    int minutesWorked = endTimeInMinutes - startTimeInMinutes;
    int hoursWorked = calculateHoursWorked(minutesWorked);
    int remainingMinutes = calculateRemainingMinutes(minutesWorked);

    displayHoursWorked(hoursWorked, remainingMinutes);

    return 0;
}