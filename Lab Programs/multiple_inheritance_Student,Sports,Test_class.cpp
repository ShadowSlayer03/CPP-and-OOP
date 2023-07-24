#include <iostream>
#define SIZE 5
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
    int testScores[SIZE];

public:
 void setTotalScore(int score[])
 {
  for(int i=0;i<SIZE;i++)
   {
      testScores[i] = score[i];
   }
 }

    int getTotalScore()
        {
        for(int i=0;i<SIZE;i++)
        cout<<testScores[i]<<endl;
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
    void displayResult()
     {
        int finalScore=0;
        for(int i=0;i<SIZE;i++)
        finalScore += testScores[i];
        finalScore +=sportsScore;
        cout << "Total Score: " << finalScore << endl;
     }
};

int main() {
    Result result;
    int testScores[SIZE], sportsScore,i;

    cout << "Enter Test Scores of a student in various subjects: "<<endl;
     for(i=0;i<SIZE;i++)
    {
         cin >> testScores[i];
    }
    result.setTotalScore(testScores);

    cout << "Enter Sports Score: ";
    cin >> sportsScore;
    result.setSportsScore(sportsScore);

    cout << endl;
    result.displayResult();

    return 0;
}


