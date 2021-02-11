/** @summary
 * Represent any number as the product of primes (no unique) 
*/

#include <iostream>
#include <vector>
#include <bits/stdc++.h>

// used for exit function
#include <math.h>
#include <limits.h>

using namespace std;

/** Generate Primes
 * @param lmt {int} - upper limit for prime list ( > 4 )
 * @returns primeList { vector<int> } - list of primes
*/
vector<int> SieveOfAtkin(int lmt)
{
  vector<int> primes;
  primes.push_back(2);
  primes.push_back(3);

  bool sieve[lmt];

  for (int i = 0; i < lmt; i++)
    sieve[i] = false;

  for (int a = 1; a * a < lmt; a++)
  {
    for (int b = 1; b * b < lmt; b++)
    {
      // Main part of Sieve of Atkin
      int n = (4 * a * a) + (b * b);
      if (n <= lmt && (n % 12 == 1 || n % 12 == 5))
        sieve[n] ^= true;
      n = (3 * a * a) + (b * b);
      if (n <= lmt && n % 12 == 7)
        sieve[n] ^= true;
      n = (3 * a * a) - (b * b);
      if (a > b && n <= lmt && n % 12 == 11)
        sieve[n] ^= true;
    }
  }

  for (int r = 5; r * r < lmt; r++)
  {
    if (sieve[r])
    {
      for (int i = r * r; i < lmt; i += r * r)
        sieve[i] = false;
    }
  }

  for (int x = 5; x < lmt; x++)
    if (sieve[x])
      primes.push_back(x);

  return primes;
}

/** Main Function
 * @author Abhinav Robinson
 * @returns void
*/
int main()
{
  int num;

  cout << "Enter a number : ";
  cin >> num;

  // preprocess (generate primes)
  vector<int> primes = SieveOfAtkin(num);

  // init factor list
  vector<int> factors;

  // prime search loop
  while (true)
  {
    // divide by smallest prime
    for (auto i : primes)
    {
      // if divides
      if (num % i == 0)
      {
        // add to factors
        factors.push_back(i);
        // complete division
        num = num / i;
        // break out of loop
        break;
      }
    }

    // if num == 1 {can't be divided any more}
    if (num <= 1)
      break;
  }

  // print factors
  cout << "Factor are : ";
  for (auto i : factors)
    cout << i << ',';

  // important: clean up memory
  printf("\n");
  printf("Cleaning up memory...\n");

  num = 0;
  primes.clear();
  factors.clear();

  //clear buffer, wait for input to close program
  cout << "Enter Anything to Quit :)" << endl;
  cin.clear();
  cin.ignore(INT_MAX, '\n');
  cin.get();

  // End of Main
  return 0;
}