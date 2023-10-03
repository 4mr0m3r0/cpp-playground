#include <iostream>
#include <vector>
#include <unordered_map>
#include <cmath>
using namespace std;

class TournamentWinner {
public:
    // Big O Notation. Time O(n) | Space O(k)
    string TournamentWinnerON(vector<vector<string>> competitions, vector<int> results) {
        unordered_map<string, int> top_winners;
        for (int i = 0; i < competitions.size(); i++) {
            if (results[i] == 0) {
                string team = competitions[i][1];
                int points = top_winners[team];
                top_winners[team] = points + 3;
            } else {
                string team = competitions[i][0];
                int points = top_winners[team];
                top_winners[team] = points + 3;
            }
        }
        string winner;
        int score = 0;
        for (auto team_points : top_winners) {
            if (team_points.second > score) {
                winner = team_points.first;
                score = team_points.second;
            }
        }
        return winner;
    }
    
    // Big O Notation. Time O(n) | Space O(k)
    string TournamentWinnerONSecondVariant(vector<vector<string>> competitions, vector<int> results) {
        unordered_map<string, int> top_winners;
        string winner;
        int top_score = 0;
        for (int i = 0; i < competitions.size(); i++) {
            string team = competitions[i][abs(results[i] - 1)];
            int points = top_winners[team] + 3;
            top_winners[team] = points;
            if (points > top_score) {
                top_score = points;
                winner = team;
            }
        }
        return winner;
    }
};
