#ifndef population_hpp
#define population_hpp
/************************************************************
* Pre-Condition: Two arrays (moose and wolves)              *
* Post-Condition: Arrays filled with calculated populations *
************************************************************/
void population(int wolves[], int moose[]){
   using namespace constants;
   for (int i = 1; i <= YEARS; i++){
      wolves[i] = (1 - DEATH_RATE + (CONVERSION_RATE * moose[i - 1])) * (wolves[i - 1]);
      moose[i] = (1 + GROWTH_RATE - ((GROWTH_RATE * moose[i - 1]) / CAPACITY) - (WOLF_ABILITY * wolves[i - 1])) * moose[i - 1];
   }
   return;
}
#endif
