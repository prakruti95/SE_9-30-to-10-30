#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    char data[100];

    // Open file in append mode
    ofstream outfile;
    outfile.open("afile.dat", ios::app);

    cout << "Appending to the file" << endl;

    cout << "Enter your name: ";
    cin.getline(data, 100);
    outfile << data << endl;

    cout << "Enter your age: ";
    cin >> data;
    cin.ignore();
    outfile << data << endl;

    // Close the file
    outfile.close();

    // Open file for reading
    ifstream infile;
    infile.open("afile.dat");

    cout << "\nReading from the file" << endl;

    while (infile >> data)
    {
        cout << data << endl;
    }

    // Close the file
    infile.close();

    return 0;
}
