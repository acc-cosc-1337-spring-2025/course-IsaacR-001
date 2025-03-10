#include <iostream>
#include "func.h"

int main() {
    int choice;
    string dna;

    cout << "Menu:\n";
    cout << "1- Get GC Content\n";
    cout << "2- Get DNA Complement\n";
    cout << "3- Exit\n";
    cout << "Enter your choice: ";
    cin >> choice;

    if (choice == 1 || choice == 2) {
        cout << "Enter a DNA string: ";
        cin >> dna;

        if (choice == 1) {
            double gc_content = get_gc_content(dna);
            cout << "GC Content: " << gc_content << endl;
        } else if (choice == 2) {
            string complement = get_dna_complement(dna);
            cout << "DNA Complement: " << complement << endl;
        }
    } else if (choice == 3) {
        cout << "Exiting program.\n";
    } else {
        cout << "Invalid choice.\n";
    }

    return 0;
}