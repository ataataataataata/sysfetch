
#include "Uptime.h"

using namespace std;

void Uptime::getUptime() {
   ULONGLONG ms = GetTickCount64();

   ULONGLONG second = ms / 1000;
   ULONGLONG minute = second / 60;
   ULONGLONG hour  = minute / 60;

   minute = minute % 60;
   second = second % 60;

   cout << hour << " hour " << minute << " minute " << second << " second" << endl;

}