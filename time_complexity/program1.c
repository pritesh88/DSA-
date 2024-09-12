#include<stdio.h>

void func1(int array[],int length)
{
    int sum = 0;            // f1 = k1
    int product = 1;      

    for(int i = 0; i< length;i++)   // f2 = k2n
    {
        sum += array[i];
    }

    for (int i = 0;i< length;i++)   // f3   k3n
    {                                    
        product *= array[i];        /* -----> Tn = f1 + f2 +f3
                                                  = k1 + k2 + k3 (Drop less dominating terms )
                                                    = (k2+k3)n 
                                                     = k4 n ->  O(n)
                                                        = O(length) */
     }
                                  
}

 int main()
{
    int arr[]= {3,5,78};
    func1(arr,3);
    return 0;
}