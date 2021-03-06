/*Write a program that asks for student's exam grades 
(integers 4-10 inclusive) and prints the average of 
the given numbers. Integers outside of the 4-10 range 
should not be included when calculating the average. 
Program receives numbers until input is finished by 
inputting a negative number. Finally the program 
prints the amount of grades and their average.*/
#include <iostream>
using namespace std;
int main()
{
    int n=0;
    float average, grade,sum=0;
    cout << "Program calculates the test grade average." << endl;
    cout << "Finish inputting with a negative number." << endl;
    do
    {
        cout << "Input grade (4-10) ";
        cin >> grade;
        if (grade >= 4  && grade <=10 )
        {
            n++;
            sum += grade;
            average = sum / n;
        }
    }while (grade > 0);
    cout << "You inputted " << n << " grades." << endl;
    cout << "Grade average: " << average << endl;
    return 0;
}