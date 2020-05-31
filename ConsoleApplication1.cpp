#include <iostream>
#include<ctime>
using namespace std;
int main()
{
    srand(time(NULL));
    int yearMatrix[365];
    int twoDigitSum=0;
    for (int i = 0; i < 365; i++)
    {
        yearMatrix[i] = 1+rand() % 100;
        if(yearMatrix[i]>9 && yearMatrix[i] < 100)
            twoDigitSum ++;
    }
    cout << twoDigitSum;
}

