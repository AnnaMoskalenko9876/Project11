#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
    ifstream file;
    ofstream file1;
    int n = -1, s = 0;
    string word, word_replace, line;
    cout << "Enter the word you want to replace: ";
    getline(cin, word_replace);
    cout << "Enter word: ";
    getline(cin, word);
    s = word_replace.size();

    file.open("zadanie1.txt");
    file1.open("zadanie1_rezult.txt");
    if (!file.is_open())
        cout << "Error" << endl;
    else
    {
        while (getline(file, line))
        {
            n = -1;
            while (true)
            {
                n = line.find(word_replace, ++n);
                if (n != string::npos)
                    line.replace(n, s, word);
                else break;
            }
            file1 << line << endl;
        }
        file.close();
    }
}