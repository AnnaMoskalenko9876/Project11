#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
    int n = 0;
    ifstream file;
    char alph[] = { 'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z','A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z' };
    int sum[size(alph)] = { };
    string line;
    file.open("zadanie3.txt");
    if (!file.is_open())
        cout << "Error" << endl;
    else
    {
        while (getline(file, line))
        {
            for (int i = 0; i < line.size(); i++)
            {
                for (int j = 0; j < size(alph); j++)
                {
                    if (line[i] == alph[j])
                        sum[j] += 1;
                }
            }
        }
        for (int i = 0; i < size(alph); i++)
        {
            cout << alph[i] << " - " << sum[i] << endl;
        }
    }
}