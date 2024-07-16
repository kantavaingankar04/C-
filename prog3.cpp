
#include <iostream>
#include <vector>
using namespace std;

class Student {
private:
    vector<int> scores;

public:
    void input() {
        for (int i = 0; i < 5; i++) {
            int score;
            cin >> score;
            scores.push_back(score);
        }
    }

    friend int calculateTotalScore(Student s);
};

int calculateTotalScore(Student s) {
    int total = 0;
    for (int score : s.scores) {
        total += score;
    }
    return total;
}

int main() {
    int n;
    cin >> n;

    Student kristen;
    kristen.input();
    int kristenTotal = calculateTotalScore(kristen);

    int higherCount = 0;

    for (int i = 0; i < n - 1; i++) {
        Student s;
        s.input();
        int total = calculateTotalScore(s);

        if (total > kristenTotal) {
            higherCount++;
        }
    }

    cout << higherCount << endl;

    return 0;
}
