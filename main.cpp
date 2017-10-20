//Author : Abdullah Baron

#include<string>
#include<vector>
#include<iostream>

using namespace std;

int main()
{ 
  vector <vector <char> > star;
  int rowNumber;
  int colNumber;
  
  cout<< "Enter rows and columns of stars:\n";
  cin>> rowNumber;
  cin>> colNumber;

if (rowNumber >0 && colNumber>0 )
  {
    star.resize(rowNumber);
    
  for( int row= 0; row<star.size();row++)
    {
     star[row].resize(colNumber);
      for( int col=0 ;col<star[row].size();col++)
       {
        star[row][col] = '*';
     
        cout<< star[row][col];
       
       
       }
        cout<< endl;

    }
  }      










return(0);
}

