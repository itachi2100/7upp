// This program uses an if/else statement to assign a 
// letter grade of A, B, C, D, or F to a numeric test score.
#include<iostream>
using namespace std;

int main()
{
    // Create named constants to hold minimum
    // scores required for each letter grade.
    const int min_a_score = 90,
              min_b_score = 80,
              min_c_score = 70,
              min_d_score = 60;

    int testScore;      // Holds a numeric test score
    char grade;         // Holds a letter grade

    //Get the numeric score
    cout << "Enter your numeric test score and I will\n";
    cout << "tell you the letter grade you earned: ";
    cin >> testScore;

    //Determine the letter grade
    if (testScore >= min_a_score)
        grade = 'A';
    else if (testScore >= min_b_score)
        grade = 'B';
    else if (testScore >= min_c_score)
        grade = 'C';
    else if (testScore >= min_d_score)
        grade = 'D';
    else if (testScore >= 0)
        grade = 'F';

    // Display the letter grade
    cout << "Youre grade is " << grade << ".\n";

    return 0;

}