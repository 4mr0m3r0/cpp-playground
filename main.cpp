#include <iostream>
#include <vector>
#include "algorithms/TournamentWinner.cpp"
using namespace std;

int main(int argc, const char * argv[]) {
    TournamentWinner tournament_winner;
    vector<vector<string>> competitions{{"HTML", "C#"}, {"C#", "Python"}, {"Python", "HTML"}};
    vector<int> results {0, 0, 1};
    string winner = tournament_winner.TournamentWinnerONSecondVariant(competitions, results);
    cout << "The winner is: " << winner << endl;
    return 0;
}
