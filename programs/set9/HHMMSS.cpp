#include<iostream>
#include<cstdio>
using namespace std;

class Time {
    private:
        int hour, minute, second;
    public:
    Time (int N) {
        hour = N/(60*60)%24;
        minute = ((N-(hour*60*60))/60)%60;
        second = (N%(60*60*24))%60;
        return;
    }

    string getTime () {
        string hs = hour > 9 ? to_string(hour) : '0'+to_string(hour);
        string ms = minute > 9 ? to_string(minute) : '0'+to_string(minute);
        string ss = second > 9 ? to_string(second) : '0'+to_string(second);
        return hs+":"+ms+":"+ss;
    }
};

int main()
{
    long int N;
    cin >> N;
    Time currentTime(N);
    cout << currentTime.getTime();
    return 0;
}