#include<iostream>
using namespace std;
void output(long start, long end)
{
    for(long i = start ; i <= end ; i++)
    {
        cout << "md \"" << i << "\"" << "\n";
    }
}
int main()
{
    long start, end;
    cout << "Input start: ";
    cin >> start;
    cout << "Input end: ";
    cin >> end;
    output(start, end);
}