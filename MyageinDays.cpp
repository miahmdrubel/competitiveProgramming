// Enter your date of birth in 3 parts - date (dd), month (mm), year (yyyy)

#include <iostream>
#include <ctime>

using namespace std;

int now_date, now_month, now_year;

bool isLeapYear(int year) {
    if (year % 4 == 0 && (year % 100 != 0 || year % 400 == 0))
        return true;
    return false;
}

int daysInMonth(int month, int year) {
    if (month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12)
        return 31;
    else if (month == 4 || month == 6 || month == 9 || month == 11)
        return 30;
    else
        return (isLeapYear(year)) ? (29) : (28);
}

bool isDOBvalid(int date, int month, int year) {
    if (year > now_year) {
        return false;
    } else if (year == now_year) {
        if (month > now_month) {
            return false;
        } else if (month == now_month) {
            if (date > now_date)
                return false;
            else
                return true;
        } else {
            return true;
        }
    } else {
        return true;
    }
}

bool isDATEvalid(int date, int month, int year) {
    if (year < 1 || month < 1 || month > 12 || date < 1 || date > daysInMonth(month, year))
        return false;
    return true;
}

long int dates2days(int d1, int m1, int y1, int d2, int m2, int y2) {
    int days = 0, month, year;

    // Days in starting year
    days += daysInMonth(m1, y1) - d1 + 1;
    month = m1 + 1;
    while (month <= 12) {
        days += daysInMonth(month, y1);
        month++;
    }

    // Days after starting year till the end of ending year
    year = y1 + 1;
    while (year <= y2) {
        days += (isLeapYear(year)) ? (366) : (365);
        year++;
    }

    // Days remaining (counted additionally) in ending year REMOVAL
    days -= daysInMonth(m2, y2) - d2 + 1;
    month = m2 + 1;
    while (month <= 12) {
        days -= daysInMonth(month, y2);
        month++;
    }

    return days;
}

string date2day(int date, int month, int year) {
    long int day = dates2days(1, 1, 1, date, month, year) % 7;
    if (day == 0)
        return "Monday";
    else if (day == 1)
        return "Tuesday";
    else if (day == 2)
        return "Wednesday";
    else if (day == 3)
        return "Thursday";
    else if (day == 4)
        return "Friday";
    else if (day == 5)
        return "Saturday";
    else
        return "Sunday";
}

int main() {
    // Your DOB (Date Of Birth)
    int dob_date, dob_month, dob_year;
    cin >> dob_date;
    cin >> dob_month;
    cin >> dob_year;

    // Today's Date
    time_t now = time(0);
    tm *ltm = localtime(&now);
    now_date = ltm -> tm_mday;
    now_month = 1 + ltm -> tm_mon;
    now_year = 1900 + ltm -> tm_year;

    // Input Date Validation
    if (cin.fail() || !isDATEvalid(dob_date, dob_month, dob_year)) {
        cout << "Enter DOB in \"dd mm yyyy\" format!\n\n\"dd\"   varies from   01 to 31\n\"mm\"   varies from   01 to 12\n\"yyyy\" varies from 0001 to  " << static_cast<unsigned char>(236) << "\n\nSample Input : 09 12 1996";
        return 1;
    }

    // Just Born Validation
    if (dob_date == now_date && dob_month == now_month && dob_year == now_year) {
        cout << dob_date << "/" << dob_month << "/" << dob_year << " is your DOB!? Are you born today!?";
        return 1;
    }

    // DOB Validation
    if (!isDOBvalid(dob_date, dob_month, dob_year)) {
        cout << dob_date << "/" << dob_month << "/" << dob_year << " is your DOB!? Are you from the future!?";
        return 1;
    }

    // Happy Birthday
    if (dob_date == now_date && dob_month == now_month)
        cout << "Happy Birthday!" << endl;

    // Your age in days
    long int age = dates2days(dob_date, dob_month, dob_year, now_date, now_month, now_year);
    cout << "Your age is " << age << ((age == 1) ? " day." : " days.") << endl;

    // Your day of birth
    cout << "You born on " << date2day(dob_date, dob_month, dob_year) << " : " << dob_date << "/" << dob_month << "/" << dob_year << "." << endl;

    // Your next birthday
    int next_bday_date = dob_date, next_bday_month = dob_month, next_bday_year = now_year + 1;
    if (dob_year < now_year && (dob_month > now_month || (dob_month == now_month && dob_date > now_date)))
        next_bday_year = now_year;
    if (dob_date == 29 && dob_month == 2)
        while (!isLeapYear(next_bday_year))
            next_bday_year++;
    cout << "Your next birthday is on " << date2day(next_bday_date, next_bday_month, next_bday_year) << " : " << next_bday_date << "/" << next_bday_month << "/" << next_bday_year << ".";

    return 0;
}
