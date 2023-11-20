#include <iostream>
#include <vector>
#include "algorithms/strings/RepeatedString.cpp"
using namespace std;

int main(int argc, const char * argv[]) {
    RepeatedString repeated_string;
    long occurrencesA = repeated_string.RepeatedStringN("a", 1000000000000);
    cout << "Number of Occurrences = " << occurrencesA << endl;
    
    long occurrencesB = repeated_string.RepeatedStringN("aba", 10);
    cout << "Number of Occurrences = " << occurrencesB << endl;
    
    long occurrencesC = repeated_string.RepeatedStringN("abcac", 10);
    cout << "Number of Occurrences = " << occurrencesC << endl;
    
    long occurrencesD = repeated_string.RepeatedStringN("beeaabc", 711560125001);
    cout << "Number of Occurrences = " << occurrencesD << " <-> Expected = 203302892858" << endl;
    
    long occurrencesE = repeated_string.RepeatedStringN("gfcaaaecbg", 547602);
    cout << "Number of Occurrences = " << occurrencesE << " <-> Expected = 164280" << endl;
    return 0;
}
