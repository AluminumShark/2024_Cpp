#include <iostream>
using namespace std;

int main()
{
    int hours = 0, minutes = 0, seconds = 0, extraTimes = 0;

    cin >> hours >> minutes >> seconds >> extraTimes;

    int extraHours = extraTimes / 3600,
        extraMinutes = (extraTimes / 60) - (60 * extraHours),
        extraSeconds = extraTimes - (extraHours * 3600) - (extraMinutes * 60);

    hours += extraHours;
    minutes += extraMinutes;
    seconds += extraSeconds;

    if (seconds >= 60)
    {   
        seconds -= 60;
        minutes++;
        if (minutes >= 60)
        {   
            minutes -= 60;
            hours++;
        }
        
    }
    

    cout << hours << ":" << minutes << ":" << seconds;

    return 0;
    
}