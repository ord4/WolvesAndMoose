#ifndef constants_hpp
#define constants_hpp
/***************************************************************************
* This file contains all of the constants needed by the program to perform *
* the necessary calculations                                               *
***************************************************************************/
namespace constants{
   extern const double DEATH_RATE      = 0.1;
   extern const double CONVERSION_RATE = 0.00001;
   extern const double GROWTH_RATE     = 0.4;
   extern const double WOLF_ABILITY    = 0.0005;
   extern const int    CAPACITY        = 30000;
   extern const int    YEARS           = 100;
   extern const int    TABLE_INCREMENT = 10;
}
#endif
