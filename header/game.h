#include <string>
#include <vector>
using namespace std;

class Game
{
    string playerName;
    string currentWorld;
    vector<char> guessedLetters;
    int remainingAttempts;
    const int maxAttempts;
    bool gameWon;
    bool gameLost;

    void startNewGame(const string &word);
    bool processPlayerGuess(char guess);
    bool isWordGuessed();
    string getWordProgress();
    void endGameMessage(bool won);
};