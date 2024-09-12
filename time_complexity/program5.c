/*Question 5: Find the complexity of the following
 code which tests whether a given number is prime or not?
*/

int isPrime(int n)
{
    if (n == 1)   // --> k1
    {
        return 0;
    }
    for (int i = 2; i * i < n; i++)         // k1 + k2()
    {                                       // i=2
        if (n % i == 0)      // --> K2      // i=3
        {                                   //  .
            return 0;                       //  .
        }                                   // i = √n
                                            // O(√n)
    }
    return 1;
}

