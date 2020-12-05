#include <ctime>
#include <iostream>

using namespace std;

void getLocalTime()
{
   #ifdef WIN32
   static bool unsetTZ = false;
   if ( !unsetTZ )
   {
      putenv( "TZ=" );
      unsetTZ = true;
   }
   #endif // !WIN32

   time_t t;
   t = time( NULL );
   cout << getenv("HOME");
   //cout << "asdasdsad";
   //cout << "timezone: " << getenv( "TZ" ) 
    //    << ", current local time: " << asctime( localtime( &t ));
}

int main()
{
    getLocalTime();
}