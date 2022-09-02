#include <iostream>
#include <fstream>
#include <string> // used for getline function
using namespace std;
int main()
{
    // connecting our file with {out} stream
    ofstream out("FileOutput.txt"); // i can write any word after the ofstream
    // creating a name string variable and filling it with string entered by the user
    string name;
    cout << "enter your name ";
    cin >> name;
    // writing a string to the file
    out << name + "is my name";
    // disconnecting our file
    out.close();

    // connecting our file with hin stream
    ifstream in("FileOutput.txt"); // i can write any word after the ifstream
    // creating a content string variable and filling it with string present there in the text file
    string read;
    getline(in, read);
    cout << read;
    // disconnecting our file
    in.close();
    return 0;
}