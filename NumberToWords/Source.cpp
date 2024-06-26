#include <iostream>
#include <string>

std::string numberToWords(int number) {
    std::string ones[] = { "Zero", "One", "Two", "Three", "Four", "Five", "Six", "Seven", "Eight", "Nine",
                          "Ten", "Eleven", "Twelve", "Thirteen", "Fourteen", "Fifteen", "Sixteen", "Seventeen", "Eighteen", "Nineteen" };
    std::string tens[] = { "", "", "Twenty", "Thirty", "Forty", "Fifty", "Sixty", "Seventy", "Eighty", "Ninety" };

    if (number == 0) {
        return ones[0];  // Special case for zero
    }

    std::string words = "";
    if (number >= 1000000000) {
        words += numberToWords(number / 1000000000) + " Billion ";
        number %= 1000000000;
    }
    if (number >= 1000000) {
        words += numberToWords(number / 1000000) + " Million ";
        number %= 1000000;
    }
    if (number >= 1000) {
        words += numberToWords(number / 1000) + " Thousand ";
        number %= 1000;
    }
    if (number >= 100) {
        words += numberToWords(number / 100) + " Hundred ";
        number %= 100;
    }
    if (number >= 20) {
        words += tens[number / 10] + " ";
        number %= 10;
    }
    if (number > 0) {
        words += ones[number] + " ";
    }

    return words;
}

int main() {
    int number = 100;
    std::string words = numberToWords(number);
    std::cout << words << std::endl;  
    return 0;
}