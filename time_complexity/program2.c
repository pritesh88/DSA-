void func(int n)
{
    int sum=0;     // k1
    int product =1;

    for (int i = 0; i <n; i++)   // ----> 0 to n
    {
        for (int j = 0; j < n; j++)  // ----> 0 to n
        {
            printf("%d , %d\n", i,j);  // k2
        }                    
    }                          /*   [n1 +n2 +n3 + ....(n-1)n] k2
                                     = nk2(1 + 1 + 1 +.....+ n)k2 n²
                                        = O(n²)
    */
}
