#include<iostream>
using namespace std;
int main ()
{
    string T;
    int m ;
    int t=0;
    cin >> T;
    m = T.length();
    for(int i = 0; i < m-1; i++)
    {
      for ( int j = i+1 ; j < m; j++){
        if ( T[i]!=T[j]) t++;
      }
    } cout << t + 1 ;
}
