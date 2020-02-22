#include "airline_ticket.h"
#include "test_runner.h"

#include <algorithm>
#include <numeric>
using namespace std;

#define SORT_BY(field)  [](const AirlineTicket& lhs, const AirlineTicket& rhs) { \
                        return lhs.field < rhs.field;}

bool operator < (const Time& lsh, const Time& rsh)
{
    if(lsh.hours == rsh.hours) return lsh.minutes < rsh.minutes;
    else return lsh.hours < rsh.hours;
}

bool operator == (const Time& lsh, const Time& rsh)
{
    return (lsh.hours == rsh.hours) && (lsh.minutes == rsh.minutes);
}


ostream& operator << (ostream& os, const Time& time )
{
    return os << time.hours << ':' << time.minutes;
}


bool operator < (const Date& lsh, const Date& rsh)
{
    if(lsh.year == rsh.year)
    {
        if(lsh.month == rsh.month) return lsh.day < rsh.day;
        else return lsh.month < rsh.month;
    }
    else return lsh.year < rsh.year;
}


bool operator == (const Date& lsh, const Date& rsh)
{
    return (lsh.year == rsh.year) && (lsh.month == rsh.month) && (lsh.day == rsh.day);
}

ostream& operator << (ostream& os, const Date& date )
{
    return os << date.day << '-' << date.month << '-' << date.year;
}

void TestSortBy() {
  vector<AirlineTicket> tixs = {
    {"VKO", "AER", "Utair",     {2018, 2, 28}, {17, 40}, {2018, 2, 28}, {20,  0}, 1200},
    {"AER", "VKO", "Utair",     {2018, 3,  5}, {14, 15}, {2018, 3,  5}, {16, 30}, 1700},
    {"AER", "SVO", "Aeroflot",  {2018, 3,  5}, {18, 30}, {2018, 3,  5}, {20, 30}, 2300},
    {"PMI", "DME", "Iberia",    {2018, 2,  8}, {23, 00}, {2018, 2,  9}, { 3, 30}, 9000},
    {"CDG", "SVO", "AirFrance", {2018, 3,  1}, {13, 00}, {2018, 3,  1}, {17, 30}, 8000},
  };

  sort(begin(tixs), end(tixs), SORT_BY(price));
  ASSERT_EQUAL(tixs.front().price, 1200);
  ASSERT_EQUAL(tixs.back().price, 9000);

  sort(begin(tixs), end(tixs), SORT_BY(from));
  ASSERT_EQUAL(tixs.front().from, "AER");
  ASSERT_EQUAL(tixs.back().from, "VKO");

  sort(begin(tixs), end(tixs), SORT_BY(arrival_date));
  ASSERT_EQUAL(tixs.front().arrival_date, (Date{2018, 2, 9}));
  ASSERT_EQUAL(tixs.back().arrival_date, (Date{2018, 3, 5}));
}

int main() {
  TestRunner tr;
  RUN_TEST(tr, TestSortBy);
}
