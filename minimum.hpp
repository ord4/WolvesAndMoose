#ifdef minimum_hpp
#define minimum_hpp
/****************************************************************************
* Pre-Condition: Array and integer variable (by reference)                  *
* Post-Condition: Integer variable holds the year of the minimum population *
****************************************************************************/
void minimum(int data[], int &minimum){
   minimum = 0;
   for(int i = 0; i <= YEARS; i++){
      if(data[i] < data[minimum]){
         minimum = i;
      }
   }
}
#endif
