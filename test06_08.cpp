#include <iostream>
#include <fstream>
using namespace std;
const int SIZE = 60;
int main()
{
    char filename[SIZE];
    ifstream inFile;
    cout << "Enter name of data file: ";
    cin.getline(filename, SIZE);
    inFile.open(filename);
    if (!inFile.good())
    {
        cout << "Could not open the file " << filename << endl;
        cout << "Program terminating." << endl;
        inFile.close();
        exit(EXIT_FAILURE);
    }
    char c;
    inFile >> c;
    int count = 1;
    while (inFile.good())
    {
        count++;
        inFile >> c;
    }
    if (inFile.eof())
        cout << "End of file reached" << endl;
    else if (inFile.fail())
        cout << "Input terminated by data mismatch" << endl;
    else
        cout << "Input terminated for unknown reason" << endl;
    if (count == 0)
    {
        cout << "No data processed" << endl;
    }
    else
    {
        cout << "the number of character in this text is: "
        << count << endl;
    }
    inFile.close();
    return 0;
}