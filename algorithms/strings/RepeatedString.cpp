#include <iostream>
#include <math.h>
using namespace std;

class RepeatedString {
public:
    long RepeatedStringN(string s, long n) {
        long occurrences = 0;
        for (int i = 0; i < s.length(); i++) {
            if (s[i] == 'a') {
                occurrences++;
            }
        }
        long repetition = n / s.length();
        occurrences *= repetition;
        double modulus = n % s.length();
        for (int i = 0; i < modulus; i++) {
            if (s[i] == 'a') {
                occurrences++;
            }
        }
        return occurrences;
    }
};
