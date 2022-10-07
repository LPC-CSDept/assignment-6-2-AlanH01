#include <iostream>
#include <iomanip>
#include <random>
#include <cstdlib>
#include <math.h>
using namespace std;
// complete two functions

double nthpowerp(int n);
double nthpowern(int n);
void printout(double result);

int main () {

	int n;
	double result;

	cout << "enter num: ";
	cin>>n;

	if(n>0)
	 {
		result = nthpowerp(n);
	 }

	else if(n<0)
	 {
	  result = nthpowern(n);
	 }

	else
	 {
	  result = 1;
	 }

	printout(result);

	return 0;

}


double nthpowerp(int n)

{
  double result = 1.0;
  for (int i=0; i<n; i++)
  {
    result *= 2;

  }

  return result;

}


double nthpowern(int n)
{
	int m = -n;
	double result = 1.0;
	for(int i=0; i<m; i++)
  	  {
        result *= 0.5;
  	  }
  return result;
}

void printout(double result)
{

cout << "The result is " << setw(10) << fixed << setprecision(5) << result << endl;
}