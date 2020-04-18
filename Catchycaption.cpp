/*
Question:
Company Tesla has kept a contest for catchy caption for the image. They have a rule that the caption should not be more than 10 words. If the caption of a candidate is more than 10 words, then the candidature stands to be disqualified. Can you write a program to check whether a caption is eligible for the contest or not.
The maximum sizeof the caption is of 100 bytes.

Case 1

Input (stdin)
Tide's In - Dirt's Out

Output (stdout)
Caption eligible for the contest

Case 2

Input (stdin)
There are some things money can't buy. For everything else, there's MasterCard.

Output (stdout)
Caption not eligible for the contest
*/
#include <cstring>
#include <iostream>
int main()
{
   char caption[100];
  std::cin.get(caption,100);
  int count=0;
  
  int len = strlen(caption);
  
  for(int i=0;i<len;i++)
  {
    if(caption[i]==' ')
    {
      count++;
    }
  }
  if(count<=10)
  {
    std::cout<<"Caption eligible for the contest";
  }
  else if(count>10)
  {
    std::cout<<"Caption not eligible for the contest";
  }
  
   
}
