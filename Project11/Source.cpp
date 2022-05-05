
#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
    int count = 0, n = 0;
    string line;
    ifstream file;
    ofstream file1;
    file.open("zadanie2.txt");
    file1.open("zadanie2_rezult.txt");
    if (!file.is_open())
        cout << "Error" << endl;
    else
    {
        while (getline(file, line))
        {
            while (true)
            {
                n = line.find_first_of(".!?;", ++n);
                if (n != string::npos)
                {
                    if (islower(line[n + 2]))
                        line[n + 2] = toupper(line[n + 2]);
                }
                else break;
            }
            line[0] = toupper(line[0]);
            if (file1.is_open())
                file1 << line << endl;
            file1.close();
        }
        file.close();
    }
}