#include <algorithm>
#include <iostream>
#include <cstring>
using namespace std;

int main()
{
   char str1[10]; 
   char str2[10];
   cin>>str1;
   cin>>str2;
   if( (strlen(str1))!= (strlen(str2))) 
   {cout<<"not anagrams! \n";
    return 0;}
  sort(str1, str1+ strlen(str1));
  sort(str2, str2 + strlen(str2));
  for(int i = 0; i<strlen(str1); i++){
      if(str1[i]!=str2[i]){    
         cout<<"not anagrams\n";
         return 0;
      }  }
    cout<<"they are anagrams \n";
    return 0;
}