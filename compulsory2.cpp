#include <iostream>
#include <limits>
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

        cout << "Do you want to continue, Y for yes, N for no?\n";

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

void Polynomials()
{
    double a [4];
    double b [4];
    double result [4];

    double coefficient;

    cout << "please enter coefficient for x^3\n";
    cin >> coefficient;
    a[0] = coefficient; 
    
    cout << "please enter coefficient for x^2\n";
    cin >> coefficient;
    a[1] = coefficient;
    
    cout << "please enter coefficient for x\n";
    cin >> coefficient;
    a[2] = coefficient;

    cout << "please enter the constent\n";
    cin >> coefficient;
    a[3] = coefficient;

    cout << "add second polynomial\n";

    cout << "please enter coefficient for x^3\n";
    cin >> coefficient;
    b[0] = coefficient;

    cout << "please enter coefficient for x^2\n";
    cin >> coefficient;
    b[1] = coefficient;

    cout << "please enter coefficient for x\n";
    cin >> coefficient;
    b[2] = coefficient;

    cout << "please enter the constent\n";
    cin >> coefficient;
    b[3] = coefficient;

    cout << "Result:\n";

    result[0] = a[0] + b[0];
    result[1] = a[1] + b[1];
    result[2] = a[2] + b[2];
    result[3] = a[3] + b[3];

    cout << "adding polnomials\n";
    cout << result[0] << "x^3" << endl;
    cout << result[1] << "x^2" << endl;
    cout << result[2] << "x" << endl;
    cout << result[3] << endl;

    result[0] = a[0] - b[0];
    result[1] = a[1] - b[1];
    result[2] = a[2] - b[2];
    result[3] = a[3] - b[3];

    cout << "substracting polnomials\n";
    cout << result[0] << "x^3" << endl;
    cout << result[1] << "x^2" << endl;
    cout << result[2] << "x" << endl;
    cout << result[3] << endl;

    double prod [7];

    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        prod[i + j] += a[i] * b[j];
    }
    cout << "multiply polnomials\n";
    cout << prod[0] << "x^6" << endl;
    cout << prod[1] << "x^5" << endl;
    cout << prod[2] << "x^4" << endl;
    cout << prod[3] << "x^3" << endl;
    cout << prod[4] << "x^2" << endl;
    cout << prod[5] << "x" << endl;
    cout << prod[6] << endl;
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
        cout << "3) Polynomials" << endl;
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
                cout << "you chose Polynomials\n";
                Polynomials();
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