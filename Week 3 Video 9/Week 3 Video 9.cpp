#include <iostream>
using namespace std;

int main()
{
    cout << " --------  Welcome to my program!!!  -------- " << endl;
    cout << " What would ou like to do? " << endl;
    cout << " 1) Check to see if a number is even." << endl;
    cout << " 2) Check to see if a number is positive." << endl;
    cout << " 3) Check to see if a number is a multiple of 7." << endl;
    cout << " Press 1, 2, or 3 on the keyboard to continue: ";

    int input;
    cin >> input;

    switch (input)
    {
        case 1:
        {
            cout << "Please enter a number: ";
            int number;
            cin >> number;
            if (number % 2 == 0)
            {
                cout << "The number you entered is even! " << endl;
            }
            else
            {
                cout << "The number you entered is odd! " << endl;
            }

            break;
        }
        case 2:
        {
            cout << "Please enter a number: ";
            int number;
            cin >> number;
            if (number > 0)
            {
                cout << "The number you entered is positive! " << endl;
            }
            else if (number < 0)
            {
                cout << "The number you entered is negative! " << endl;
            }
            else
            {
                cout << "The number you entered is neither. It's just zero!" << endl;
            }

            break;
        }
        case 3:
        {
            cout << "Please enter a number: ";
            int number;
            cin >> number;

            bool isMultipleOf7 = number % 7 == 0;
            if (isMultipleOf7)
            {
                cout << "The number you entered is a multiple of 7!" << endl;
            }
            else
            {
                cout << "The number you entered is not a multiple of 7!" << endl;
            }

            break;
        }
        default:
        {
            cout << "Invalid input. Goodbye." << endl;
            break;
        }
    }
}
