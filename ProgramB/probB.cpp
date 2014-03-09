//Team 2NorthPartay

#include <iostream>

using namespace std;


int main()
{
    bool quit = false;
    int numberOfTicks;
    int firstNum, secondNum, thirdNum;
    int sum;
    int count = 1;

    cout << "# PROGRAM B BY 2NorthPartay" << endl;

    while (!quit)
    {
    
        cin >> numberOfTicks;
        cin >> firstNum;
        cin >> secondNum;
        cin >> thirdNum;
    
        if (numberOfTicks == 0 && firstNum == 0 && secondNum == 0 && thirdNum == 0)
            quit = true;
        else{
            sum = 0;
            sum += (3*numberOfTicks)-1;
//            cout << sum << endl;
//            sum += firstNum;
            sum += numberOfTicks;
            if ((firstNum - secondNum) < 0)
                sum += numberOfTicks - ((firstNum - secondNum) + numberOfTicks);
            else
                sum += numberOfTicks - (firstNum - secondNum);
            if ((numberOfTicks - secondNum) - (numberOfTicks - thirdNum) < 0)
                sum += numberOfTicks-((numberOfTicks - secondNum) - (numberOfTicks - thirdNum)+numberOfTicks);
            else
                sum += numberOfTicks-((numberOfTicks - secondNum) - (numberOfTicks - thirdNum));
        
            cout << "Case #" << count << ": " << sum << endl;
            count++;
        }
    }
    return 0;
}