#include <string>
#include <vector>

using namespace std;

int solution(vector<int> date1, vector<int> date2) {
    if(date1[0] < date2[0])
        return 1;
    else if(date1[0] == date2[0])
    {
        
      if(date1[1] < date2[1])    
         return 1;
      else if(date1[1] == date2[1])
      {
         if(date1[2] < date2[2])
           return 1;
         else
             return 0;
      }
      else
        return 0;
    }
    else
        return 0;
}