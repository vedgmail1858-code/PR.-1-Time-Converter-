// Online C++ compiler (editor)
// Write and run C++ online using this editor.

#include <iostream>
using namespace std;

class Timeconvertor
{
    public:

    void secondtotime()
    {
        int totalsecond;
        int hours,minutes,seconds;
        
        cout <<"Enter total seconds:";
        cin >> totalsecond;

        hours= totalsecond/3600;
        minutes= (totalsecond%3600)/60;
        seconds= totalsecond%60;

        cout << "HH:MM:SS=>" << hours <<":" << minutes << ":" << seconds << endl;
    }
    void timetosecond()
    {
        int hours,minutes,seconds;

        cout << "Enter hours:";
        cin >> hours;
        cout << "Enter minutes:";
        cin >>  minutes;
        cout << "Enter seconds:";
        cin >> seconds;

        int totalseconds=(hours * 3600)+(minutes * 60)+seconds;
        cout << "total seconds:" << totalseconds << endl;
    }
};
int main() {
    Timeconvertor obj;
    obj.secondtotime();
    obj.timetosecond();
    return 0;
}