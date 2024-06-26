#include <iostream>
#include <chrono>
#include <ctime>
#include <thread>

using namespace std;

// Function to calculate the remaining time until a specific date and time
chrono::seconds GetRemainingTime(const tm& targetTime) {
    time_t currentTime = time(nullptr);
    tm localTime = { 0 };

#ifdef _WIN32
    localtime_s(&localTime, &currentTime);
#else
    localtime_r(&currentTime, &localTime);
#endif

    time_t currentTimeInSeconds = mktime(&localTime);
    time_t targetTimeInSeconds = mktime(const_cast<tm*>(&targetTime));

    chrono::seconds remainingTime(targetTimeInSeconds - currentTimeInSeconds);
    return remainingTime;
}

// Function to display the remaining time in the format HH:MM:SS
void DisplayRemainingTime(const chrono::seconds& remainingTime) {
    int hours = remainingTime.count() / 3600;
    int minutes = (remainingTime.count() % 3600) / 60;
    int seconds = remainingTime.count() % 60;

    cout << "Remaining Time: " << hours << ":" << minutes << ":" << seconds << endl;
}

int main() {
    // Set the target date and time (year, month, day, hour, minute, second)
    tm targetTime = { 0 };
    targetTime.tm_year = 2024 - 1900;  // Year (current year - 1900)
    targetTime.tm_mon = 2;             // Month (0 - 11, January is 0)
    targetTime.tm_mday = 15;           // Day of the month (1 - 31)
    targetTime.tm_hour = 12;           // Hour of the day (0 - 23)
    targetTime.tm_min = 0;             // Minute (0 - 59)
    targetTime.tm_sec = 0;             // Second (0 - 59)

    // Calculate the remaining time until the target date and time
    chrono::seconds remainingTime = GetRemainingTime(targetTime);

    // Display the remaining time every second until the target date and time
    while (remainingTime.count() > 0) {
        DisplayRemainingTime(remainingTime);
        this_thread::sleep_for(chrono::seconds(1));
        remainingTime -= chrono::seconds(1);
    }

    cout << "Countdown complete!" << endl;

    return 0;
}