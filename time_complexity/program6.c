/*Question 6: What is the time complexity
 of the following snippet of code?*/

 int isPrime(int n)
{
    for (int i = 2; i * i < 10000; i++)   // k1
    {                                     // Tn = K1 --> O(1)
        if (n % i == 0)
        {
            return 0;
        }
    }
 
    return 1;
}
isPrime();