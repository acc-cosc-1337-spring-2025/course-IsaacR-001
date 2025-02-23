#include <iostream>
#include "decisions.h"

int main() {
    int choice;
    int grade;

    std::cout << "MAIN MENU\n";
    std::cout << "1-Letter grade using if\n";
    std::cout << "2-Letter grade using switch\n";
    std::cout << "3-Exit\n";
    std::cout << "Enter your choice: ";
    std::cin >> choice;

    if (choice == 1 || choice == 2) {
        std::cout << "Enter a numerical grade (0-100): ";
        std::cin >> grade;

        if (grade >= 0 && grade <= 100) {
            if (choice == 1) {
                std::cout << "Letter grade: " << get_letter_grade_using_if(grade) << "\n";
            } else if (choice == 2) {
                std::cout << "Letter grade: " << get_letter_grade_using_switch(grade) << "\n";
            }
        } else {
            std::cout << "Number is out of range.\n";
        }
    } else if (choice == 3) {
        std::cout << "Exiting...\n";
    } else {
        std::cout << "Invalid choice.\n";
    }

    return 0;
}