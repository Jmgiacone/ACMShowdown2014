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
            cout << sum << endl;
            sum += numberOfTicks;
            cout << sum << endl;
            if ((firstNum - secondNum) < 0)
                sum += (firstNum - secondNum)+numberOfTicks;
            else
                sum += (firstNum - secondNum);
            cout << sum << endl;
            if ((numberOfTicks - secondNum) - (numberOfTicks - thirdNum) < 0)
                sum += ((numberOfTicks - secondNum) - (numberOfTicks - thirdNum) + numberOfTicks);
            else
                sum += ((numberOfTicks - secondNum) - (numberOfTicks - thirdNum));
        
            cout << "Case #" << count << ": " << sum << endl;
            count++;
        }
    }
    return 0;
}