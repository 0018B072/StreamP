#include <iostream>
#include <string>
#include <cstdlib>
#include <conio.h>
#include <fstream>
#include <vector>

using namespace std;
int main()
{
    string y;
    char again = '5';
    char goagain = '7';
    char x;
    ifstream the_file("streams.txt");
    //inspects the file (make sure its in the same directory)
    string s;
    vector<string> lines;
    while (getline(the_file, s)) {
        lines.push_back(s);


        //later change 3 to len var           
        /*cout << y;

        cout << endl;
*/
//system executes "y"
    }
    cout << "Enter 5 to open a stream | Enter 6 to Exit" << endl;
    x = _getch();

    while (again == '5' && goagain != '6') {
        //int len = sizeof(randomvar) / sizeof(randomvar[0]);
        if (x == '5') {
           srand(time(0));
           int z = 0 + (rand() % lines.size());
           y = lines.at(z);
           system(y.c_str());
        }
        else if (x == '6') {
            cout << "Exiting" << endl;
            break;
        }
        else {
            cout << "INVALID INPUT" << endl;
        }


        cout << "Enter 5 to open a stream | Enter 6 to Exit" << endl;
        x = _getch();

        //cout << "Total number of elements in array is " << len << endl;
    }

}
