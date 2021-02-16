#include <string>

#include "format.h"

using std::string;

string Format::ElapsedTime(long seconds) {
    int hours, minutes;
    hours = seconds / 3600;
    seconds = seconds % 3600;
    minutes = seconds / 60;
    seconds = seconds % 60;

    string hours_string;
    string minutes_string;
    string seconds_string;

    if (hours < 10){
        string hours_string = "0" + std::to_string(hours);
    }
    else {
        string hours_string = std::to_string(hours);
    }

    if (minutes < 10){
        string minutes_string = "0" + std::to_string(minutes);
    }
    else {
        string minutes_string = std::to_string(minutes);
    }

    if (seconds < 10){
        string seconds_string = "0" + std::to_string(seconds);
    }
    else {
        string seconds_string = std::to_string(seconds);
    }

    return hours_string + ":" + minutes_string + ":" + seconds_string;
}
