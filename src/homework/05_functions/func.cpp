//add include statements
#include "func.h"

//add function code here
double get_gc_content(const string& dna) {
    int gc_count = 0;
    for (char ch : dna) {
        if (ch == 'G' || ch == 'C') {
            gc_count++;
        }
    }
    return static_cast<double>(gc_count) / dna.length();
}

string get_reverse_string(string dna) {
    string reversed;
    for (int i = dna.length() - 1; i >= 0; i--) {
        reversed += dna[i];
    }
    return reversed;
}

string get_dna_complement(string dna) {
    dna = get_reverse_string(dna);
    for (char& ch : dna) {
        if (ch == 'A') ch = 'T';
        else if (ch == 'T') ch = 'A';
        else if (ch == 'C') ch = 'G';
        else if (ch == 'G') ch = 'C';
    }
    return dna;
}