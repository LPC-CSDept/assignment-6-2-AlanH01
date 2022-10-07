#include <iomanip>
#include <iostream>
using namespace std;

// complete two functions
double nthpowerp(int n)
{
  double result = 1.0;
  for (int i=0; i<n;i++)
  {
        result*=2;
  }
  return result;
}
double nthpowern(int n)
{
int m=-n;
double result=1.0;
for(int i=0; i<m;i++)
  {
        result*=2;
  }
  return result;
}
