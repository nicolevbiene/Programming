#include <iostream>
using namespace std;



int main()
{
    bool isRunning = true;
    
    while (isRunning)
    {
        int choice;
        cout << "Options:" << endl;
        cout << "1) Option 1" << endl;
        cout << "2) Option 2" << endl;
        cout << "3) Option 3" << endl;
        cout << "4) Quit" << endl;
        cout << "Enter choice: ";
        cin >> choice;

        switch (choice)
        {
            case 1:
                cout << "you chose option 1\n";
                break;
            case 2:
                cout << "you chose option 2\n";
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
                break;
        }
    }
    cout << "Good Bye";
}