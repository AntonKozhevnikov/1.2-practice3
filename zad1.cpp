#include <iostream>
#include <ctime>

using namespace std;

int main() {
    int d, m, y;
    cout<<"your birthday in format: day month year"<<endl;
    cin>>d>>m>>y;
    if (y<1900 || (m<1&&m>12) || (d<1&&d>31))
        cout<<"error";
    else
    {
    time_t b_time, c_time;
    tm bday = {0};
    {
    bday.tm_mday = d;
    bday.tm_mon = m - 1;
    bday.tm_year = y - 1900;
    };
    b_time = mktime(&bday);
    c_time = time(0);
    int years;
    years= difftime(c_time, b_time);
    cout<<years/31536000<<" years ";
    int days;
    days= difftime(c_time, b_time);
    cout<<(days/3600/24)-((years/31536000)*365.25)<<" days ";
    }
    return 0;
}
