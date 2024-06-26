#include <iostream>

int readNumberInRange(int from, int to)
{
    int grade;
    do
    {
        std::cout << "Please enter a grade between " << from << " and " << to << ": ";
        std::cin >> grade;
    } while (grade < from || grade > to);

    return grade;
}

char getGradeLetter(int grade)
{
    if (grade >= 90)
        return 'A';
    else if (grade >= 80)
        return 'B';
    else if (grade >= 70)
        return 'C';
    else if (grade >= 60)
        return 'D';
    else if (grade >= 50)
        return 'E';
    else
        return 'F';
}

int main()
{
    int grade = readNumberInRange(0, 100);
    char gradeLetter = getGradeLetter(grade);

    std::cout << "Result = " << gradeLetter << std::endl;

    return 0;
}