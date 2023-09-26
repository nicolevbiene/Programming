#include <iostream>
using namespace std;

void SimpleMath()
{
    bool isRunning = true;

    while (isRunning)
    {
        int numberA;
        cout << "please enter a number and press enter\n";
        cin >> numberA;
        char operators;
        cout << "please enter a operator and press enter (+ - * /)\n";
        cin >> operators;
        int numberB;
        cout << "please enter a number and press enter\n";
        cin >> numberB;
        double result;

        switch (operators)
        {
            case '+':
                result = numberA + numberB;
                break;
            case '-':
                result = numberA - numberB;
                break;
            case '*':
            result = numberA * numberB;
                break;
            case '/':
                result = double(numberA) / double(numberB);
                break;
        }
        cout << "Result:" << result << endl;

        cout << "Do you want to continue?\n";

        bool isContinue = true;
        
        while (isContinue)
        {
            char desision;
            cin >> desision;

            switch (desision)
            {
                case 'Y':
                    isContinue = false;
                    break;
                case 'N':
                    isRunning = false; 
                    isContinue = false;
                    break;
                default:
                    cout << "invalid choice, choose Y or N:\n";
                    cin.clear();
                    cin.ignore(numeric_limits<streamsize>::max(), '\n');
                    break;
            }
        }
    }
}

int Factorial(int number)
{
    if (number == 0)
    {
        return 1;
    }
    else
    {
        return (number * Factorial(number-1));
    }   
}

void setUpFactorial()
{
    int number;
    int result;

    cout << "enter a number\n";
    cin >> number;
    if (number < 0)
    {
        cout << "negative number not alout\n";
    }
    else
    {
        cout << "Result:";
        result = Factorial(number);
        cout << result << endl;
    }
}

int main()
{
    bool isRunning = true;
    
    while (isRunning)
    {
        int choice;
        //cout << "Options:" << endl;
        cout << "1) SimpleMath" << endl;
        cout << "2) setUpFactorial" << endl;
        cout << "3) Option 3" << endl;
        cout << "4) Quit" << endl;
        cout << "Enter choice: ";
        cin >> choice;

        switch (choice)
        {
            case 1:
                cout << "you chose SimpleMath\n";
                SimpleMath();
                break;
            case 2:
                cout << "you chose setUpFactorial\n";
                setUpFactorial();
                break;
            case 3:
                cout << "you chose option 3\n";
                break;
            case 4:
                cout << "you chose to quit\n";
                isRunning = false;
                break;
            default:
                cout << "invalid choice, choose again:\n";
                cin.clear();
                cin.ignore(numeric_limits<streamsize>::max(), '\n');
                break;
        }
    }
    cout << "Good Bye";
}