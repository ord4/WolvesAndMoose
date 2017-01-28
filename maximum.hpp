#ifndef maximum_hpp
#define maximum_hpp
/***********************************************************************
* Pre-Condition: Passed an array and a variable by reference           *
* Post-Condition: Modifies passed variable to hold the year of maximum *
*                 population                                           *
***********************************************************************/
void maximum(int data[], int &maximum)
{
   maximum = 0;
   for(int i = 1; i <= YEARS; i++)
   {
      if(data[i] > data[maximum])
      {
         maximum = i;
      }
   }
}

#endif 
