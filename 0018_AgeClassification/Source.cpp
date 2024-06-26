#include <iostream>

enum class AgeClassification {
    Infant,
    Toddler,
    Preschooler,
    SchoolAgeChild,
    Adolescent,
    YoungAdult,
    MiddleAgedAdult,
    SeniorOrOlderAdult,
    Invalid
};

AgeClassification classifyAge(int age) {
    if (age >= 0 && age <= 1) {
        return AgeClassification::Infant;
    }
    else if (age >= 1 && age <= 3) {
        return AgeClassification::Toddler;
    }
    else if (age >= 3 && age <= 5) {
        return AgeClassification::Preschooler;
    }
    else if (age >= 6 && age <= 12) {
        return AgeClassification::SchoolAgeChild;
    }
    else if (age >= 13 && age <= 19) {
        return AgeClassification::Adolescent;
    }
    else if (age >= 20 && age <= 39) {
        return AgeClassification::YoungAdult;
    }
    else if (age >= 40 && age <= 59) {
        return AgeClassification::MiddleAgedAdult;
    }
    else if (age >= 60) {
        return AgeClassification::SeniorOrOlderAdult;
    }
    else {
        return AgeClassification::Invalid;
    }
}

// Function for reading the age
int readAge() {
    int age;
    std::cout << "Enter age: ";
    std::cin >> age;
    return age;
}

void printAgeClassification(AgeClassification classification) {
    switch (classification) {
    case AgeClassification::Infant:
        std::cout << "Infant" << std::endl;
        break;
    case AgeClassification::Toddler:
        std::cout << "Toddler" << std::endl;
        break;
    case AgeClassification::Preschooler:
        std::cout << "Preschooler" << std::endl;
        break;
    case AgeClassification::SchoolAgeChild:
        std::cout << "School-age child" << std::endl;
        break;
    case AgeClassification::Adolescent:
        std::cout << "Adolescent" << std::endl;
        break;
    case AgeClassification::YoungAdult:
        std::cout << "Young adult" << std::endl;
        break;
    case AgeClassification::MiddleAgedAdult:
        std::cout << "Middle-aged adult" << std::endl;
        break;
    case AgeClassification::SeniorOrOlderAdult:
        std::cout << "Senior or older adult" << std::endl;
        break;
    case AgeClassification::Invalid:
        std::cout << "Invalid age" << std::endl;
        break;
    }
}

int main() {
    int age = readAge();
    AgeClassification classification = classifyAge(age);
    printAgeClassification(classification);

    return 0;
}


/*

Infant: 0 to 1 year
Toddler: 1 to 3 years
Preschooler: 3 to 5 years
School-age child: 6 to 12 years
Adolescent: 13 to 19 years
Young adult: 20 to 39 years
Middle-aged adult: 40 to 59 years
Senior or older adult: 60 years and older

------------------------------------------------------------------------------------------------------------------
Infant: Refers to a child in the earliest stage of development, typically from birth to one year of age.
Toddler: Describes a young child who is learning to walk and actively exploring their environment, usually between the ages of one and three years.
Preschooler: Refers to a child who is attending preschool or is of preschool age, generally ranging from three to five years old.
School-age child: Describes a child who has reached the age to attend school and is in the primary or elementary school years, typically between the ages of six and twelve.
Adolescent: Refers to an individual who is going through the transitional period between childhood and adulthood, usually ranging from thirteen to nineteen years old.
Young adult: Describes a person who is in the early stage of adulthood, typically between the ages of twenty and thirty-nine. This age range is characterized by personal and professional growth, exploration, and independence.
Middle-aged adult: Refers to an individual who is in the middle stage of adulthood, often associated with stability, career advancement, and family responsibilities. This age range typically spans from forty to fifty-nine.
Senior or older adult: Describes an individual who is in the later stages of adulthood, typically aged sixty years and older. This phase of life is often associated with retirement, wisdom, and potential health-related changes.










*/