#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
    int n = -1, count = 0;
    ifstream file;
    ofstream file1;
    string line;
    file.open("zadanie4.txt");
    if (!file.is_open())
        cout << "Error" << endl;
    else
    {
        while (getline(file, line))
        {
            for (int i = 0; i < line.size(); i++)
            {
                if (isdigit(line[i]))
                    count++;
            }
        }
        file.close();
        file1.open("zadanie4_rezult.txt");
        if (file1.is_open())
            file1 << "ALL NUM: " << count << endl;
        file1.close();
    }
}