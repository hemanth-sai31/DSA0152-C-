#include <iostream>
using namespace std;
class Time {
private:
    int hours;
    int minutes;
    int seconds;
public:
    Time(int h=0, int m=0, int s=0) : hours(h), minutes(m), seconds(s) {}
    Time operator+(const Time& other) {
        int total_seconds = hours * 3600 + minutes * 60 + seconds;
        total_seconds += other.hours * 3600 + other.minutes * 60 + other.seconds;
        int new_seconds = total_seconds % 60;
        int total_minutes = total_seconds / 60;
        int new_minutes = total_minutes % 60;
        int new_hours = total_minutes / 60;
        new_hours %= 24;
        return Time(new_hours, new_minutes, new_seconds);
    }
    void display() {
        std::cout << std::setw(2) << std::setfill('0') << hours << ":"
                  << std::setw(2) << std::setfill('0') << minutes << ":"
                  << std::setw(2) << std::setfill('0') << seconds << std::endl;
    }
};
int main() {
    Time time1(23, 30, 45);
    Time time2(1, 45, 20);
    std::cout << "Time 1: ";
    time1.display();
    std::cout << "Time 2: ";
    time2.display();
    Time result_time = time1 + time2;
    std::cout << "Resulting Time: ";
    result_time.display();
    return 0;
}
