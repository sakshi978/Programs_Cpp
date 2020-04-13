/*
Question:
  Raju has a square-shaped puzzle made up of small square pieces containing numbers on them. He wants to rearrange the puzzle by changing the elements of a row into a column element and column element into a row element. Help Raju to solve this puzzle.
  Input Format:

  The first input contains an integer 'r' which denotes the number of rows in puzzle

  The second input contains an integer 'c' which denotes the number of columns in puzzle

  The remaining input denotes the numbers on square shaped puzzle

  Output Format:

  Print the solved puzzle

  Sample Input:

  2

  2

  2 3

  4 5

  Sample Output:

  2 4

  3 5

  Case 1

  Input (stdin)
  2
  3
  1 2 3
  4 5 6

  Output (stdout)
  1 4
  2 5
  3 6
*/
#include<iostream>
int main()
{
  int r,c;
  std::cin>>r>>c;
  int arr[r][c];
  int out[c][r];
  
  for(int i=0;i<r;i++)
  {
    for(int j=0;j<c;j++)
    {
      std::cin>>arr[i][j];
    }
  }
  
  for(int i=0;i<r+c;i++)
  {
    for(int j=0;j<c+r;j++)
    {
      out[i][j]=arr[j][i];
    }
  }
  
  for(int i=0;i<c;i++)
  {
    for(int j=0;j<r;j++)
    {
      std::cout<<out[i][j]<<" ";
    }
    std::cout<<"\n";
  }
  return 0;
}
