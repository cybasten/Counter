#include<iostream>

using namespace std;

int main()
{
    int Time[27];
    for (int i = 0; i < 27; i++)
        Time[i] = 0;
    char next;
    do
    {
        cin.get(next);
        switch(next)
        {
            case ' ':
                Time[0]++;
                break;
            default:
                Time[next - 96]++;
                break;
                 
        }
    }while(next != '\n');
    cout << "<ws> : " << Time[0] << endl;
    for (int i = 1; i < 27; i++)
        if (Time[i] != 0)
            cout << "  " << char(i + 96) << "  : " << Time[i] << endl;
    system("pause");
    return 0;
}
