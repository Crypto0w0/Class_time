#include <iostream>
using namespace std;

class time{
    int seconds;
    int minutes;
    int hours;
public:
    time(){
        seconds = 0;
        minutes = 0;
        hours = 0;
    }
    time(int h, int m, int s){
        seconds = s;
        minutes = m;
        hours = h;
    }
    void check(){
        while(seconds > 59){
            seconds -= 60;
            minutes++;
        }
        while (minutes > 59){
            minutes -= 60;
            hours++;
        }
        while (hours > 23){
            hours -= 24;
        }
    }
    time getTime()const{
        time t;
        t.seconds = this->seconds;
        t.minutes = this->minutes;
        t.hours = this->hours;
        t.check();
        return t;
    }
    void setHour(int h){
        hours = h;
    }
    void setMinute(int m){
        minutes = m;
    }
    void setSecond(int s){
        seconds = s;
    }
    int getHour()const{
        return hours;
    }
    int getMinute()const{
        return minutes;
    }
    int getSecond()const{
        return seconds;
    }
    time operator+(int s){
        time t;
        t.seconds = this->seconds + s;
        t.minutes = this->minutes;
        t.hours = this->hours;
        t.check();
        return t;
    }
    ostream& operator<<(ostream& o, const time& t){
        o << t.getTime();
        return o;
    }
    time operator++(){
        time t;
        t.seconds = this->seconds++;
        t.minutes = this->minutes;
        t.hours = this->hours;
        t.check();
        return t;
    }
    time operator--(){
        time t;
        t.seconds = this->seconds--;
        t.minutes = this->minutes;
        t.hours = this->hours;
        t.check();
        return t;
    }
    bool operator>(time t){
        if (this->hours > t.hours){
            return true;
        }
        else return false;
        if (this->hours == t.hours){
            if (this->minutes > t.minutes){
                return true;
            }
            else return false;
        }
        if (this->hours == t.hours){
            if (this->minutes == t.minutes){
                if (this->seconds > t.seconds){
                    return true;
                }
                else return false;
            }
        }
    }
    bool operator<(time t){
        if (this->hours < t.hours){
            return true;
        }
        else return false;
        if (this->hours == t.hours){
            if (this->minutes < t.minutes){
                return true;
            }
            else return false;
        }
        if (this->hours == t.hours){
            if (this->minutes == t.minutes){
                if (this->seconds < t.seconds){
                    return true;
                }
                else return false;
            }
        }
    }
    bool operator==(time t){
        if (this->hours == t.hours && this->minutes == t.minutes && this->seconds == t.seconds){
            return true;
        }
        else return false;
    }
    bool operator!=(time t){
        if (this->hours != t.hours || this->minutes != t.minutes || this->seconds != t.seconds){
            return true;
        }
        else return false;
    }
};

int main() {
    
}
