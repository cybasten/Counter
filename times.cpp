#include<iostream>

using namespace std;

int main()
{
    int Time[27];
    for (int i = 0; i < 27; i++)
        Time[i] = 0;
    char next;
   	cout << "Type something here :" << endl;
    do
    {
        cin.get(next);
        if(!next == 20 && (next < 65 || next > 122 || (next > 90 && next < 97)))
        	continue;
        if(next > 96)
        	next = next - 32;
        switch(next)
        {
            case ' ':
                Time[0]++;
                break;
            default:
                Time[next - 64]++;
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
