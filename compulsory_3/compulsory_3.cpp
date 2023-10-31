#include <iostream>
#include <string>
using namespace std;

const unsigned int MaxFolders = 5;
const unsigned int MaxFiles = 10;

class File
{
    private:
        string name;
        int size;
        string date;

    public:
        File(string newName, int newSize, string newDate)
        {
            name = newName;
            size = newSize;
            date = newDate;
        }
        File()
        {
            name = "";
            size = 0;
            date = "";
        }
        void printinformation()
        {
            cout << "name: " << name << endl;
            cout << "size: " << size << "MB" << endl;
            cout << "date: " << date << endl;
        }
        int getsize()
        {
            return size;
        }
};

class Folder
{
    private:
        string name;
        int size;
        string date;
        Folder* folders;
        File files[MaxFiles];
        int numberoffiles;
        int numberoffolders;

    public:
        Folder()
        {

        }
        Folder(string newName, int newSize, string newDate)
        {
            name = newName;
            size = newSize;
            date = newDate;
            numberoffiles = 0;
            numberoffolders = 0;
            folders = new Folder[MaxFolders];
        }
        void createFolder(string name)
        {
            if (numberoffolders < MaxFolders == true)
            {
                Folder folder(name, rand() % 100, "Oktober");
                folders[numberoffolders] = folder;
                numberoffolders++;
            }
            else 
            {
                cout << "error, you have too many folders\n";
            }
        }
        void createFile(string name)
        {
            if (numberoffiles < MaxFiles == true)
            {
                File file(name, rand() % 100, "Oktober");
                files[numberoffiles] = file;
                numberoffiles++;
            }
            else 
            {
                cout << "error, you have too many files\n";
            }
        }
        void printfolderinformation()
        {
            cout << "name: " << name << endl;
            cout << "size: " << size << "MB" << endl;
            cout << "date: " << date << endl;
        }
        void printinformation()
        {
            cout << "folders:\n";

            for (int i = 0; i < numberoffolders; i++) 
            {
                folders[i].printfolderinformation();
            }
            cout << "files:\n";
            for (int i = 0; i < numberoffiles; i++) 
            {
                files[i].printinformation();
            }
        }
        void printlargestfile()
        {
            int largestFileSize = 0;
            int largestFileIndex = 0;
            for (int i = 0; i < numberoffiles; i++)
            {
                if (files[i].getsize() > largestFileSize)
                {
                    largestFileSize = files[i].getsize();
                    largestFileIndex = i;
                }
            }
            files[largestFileIndex].printinformation();
        }
};

int main()
{
    srand(time(NULL));
    Folder head("Main", 100, "Oktober");
    Folder* currentFolder = &head;

    while (true)
    {
        int input;
        string stringinput;
        cout << "Type 1 to create a new folder\n"
                "Type 2 to create a new file\n"
                "Type 3 for information about files and folders\n"
                "Type 4 to list information about the largest file\n"
                "Type anything else to quit\n";

        cin >> input;
        switch(input)
        {
            case 1:
                cout << "Name the folder\n";
                cin >> stringinput;
                currentFolder->createFolder(stringinput);
                break;
            case 2:
                cout << "Name the file\n";
                cin >> stringinput;
                currentFolder->createFile(stringinput);
                break;
            case 3:
                cout << "information\n";
                currentFolder->printinformation();
                break;
            case 4:
                cout << "information largest file\n";
                currentFolder->printlargestfile();
                break;
            default:
                return 0;
                break;
        }
    }
    return 0;
}