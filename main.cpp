#include <iostream>

using namespace std;

int main() {

    int score {};

    bool hey {true};

    cout<<"Enter your score of the exa (0-100): ";
    cin>>score;

    char letter_grade{};

    if(score>=0 && score<=100) {
        if(score>=90 && score<=100)
            letter_grade='A';
        else if (score>=80 && score<=89)
               letter_grade = 'B';
        else if
            (score >= 70 && score<= 79)
            cout << 'C';

        cout<<letter_grade <<endl;

    } else {
        cout<<"Number is not in range " <<endl;
    }




    return 0;
}
