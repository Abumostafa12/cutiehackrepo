#ifndef LEADERBOARD_H
#define LEADERBOARD_H

using namespace std;

#include <string>
#include <algorithm> 

struct PlayerScore {

    string nameOfThePlayer;
    int theScoreAmount;

    
    PlayerScore() : nameOfThePlayer(""), theScoreAmount(0) {}

    // constructor with paramters for special constructor 
    PlayerScore(const string& nameInput, int scoreInput) : nameOfThePlayer(nameInput), theScoreAmount(scoreInput) {}

    // Overload the '<' operator to sort PlayerScore by score in descending order
    bool operator < (const PlayerScore& otherScore) const {
        return theScoreAmount > otherScore.theScoreAmount;
    }
};

class Leaderboard {
public:
    static const int MAX_LEADERBOARD_SIZE = 10; // Static variable for max entries

    // default constructor
    Leaderboard() : size(0) {}

    // Function to add a new score to the leaderboard
    void addScore(const string& nameOfThePlayer, int score);

    // Function to display the top scores of the game
    void displayTopScores(unsigned int N);

    void clearLeaderboard();

    // Function to get the  size of the leaderboard
    unsigned int getLeaderboardSize() const;

    // Function to check if the leaderboard is full
    bool isLeaderboardFull() const;

private:
    PlayerScore scores[MAX_LEADERBOARD_SIZE]; // Array to store list of all the player scores
    unsigned int size; // the number that records how many scores are in the array
};

#endif 