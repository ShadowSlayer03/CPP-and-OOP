#include <iostream>
using namespace std;

class Student {
protected:
    string usn;

public:
    void setUSN(string _usn) {
        usn = _usn;
    }

    string getUSN() {
        return usn;
    }
};

class Test {
protected:
    int totalScore;

public:
    void setTotalScore(int score) {
        totalScore = score;
    }

    int getTotalScore() {
        return totalScore;
    }
};

class Sports {
protected:
    int sportsScore;

public:
    void setSportsScore(int score) {
        sportsScore = score;
    }

    int getSportsScore() {
        return sportsScore;
    }
};

class Result : public Sports, public Test {
public:
    void displayResult() {
        int finalScore = getTotalScore() + getSportsScore();
        cout << "Total Score: " << finalScore << endl;
    }
};

int main() {
    Result result;
    string usn;
    int testScore, sportsScore;

    cout << "Enter USN: ";
    cin >> usn;
    result.setUSN(usn);

    cout << "Enter Test Score: ";
    cin >> testScore;
    result.setTotalScore(testScore);

    cout << "Enter Sports Score: ";
    cin >> sportsScore;
    result.setSportsScore(sportsScore);

    cout << endl;
    cout << "Result for USN " << result.getUSN() << endl;
    result.displayResult();

    return 0;
}
