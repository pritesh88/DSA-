/* Question 3: Consider the recursive algorithm below, 
where the random(int n) spends one unit of time to 
return a random integer where the probability of each
integer coming as random is evenly distributed within the
range [0,n]. If the average processing time is T(n),
what is the value of T(6)?

   */

#include <stdio.h>
#include <stdlib.h>

int random(int a)
{
    int i;
    int num =(rand()%(a+1));
    return num;
}

 int function(int n)
{
    int i = 0;          // k1 = 0
    if (n <= 0)
    {                                     //    T6 -> 1
                                          //    /   
                                          //  T(0)    T(5)     --> 1
        return 0;                         //          /   
    }                                     //         T(0) T(4)   --> 1
    else                                  //                /
    {                                     //             T(0)  T(3)  --> 1
                                          //                   /   
        i = random(n - 1);   // ---> 1    //                T(0)  T(2)  --> 1
        printf("this\n");                 //                      /
        return function(i) + function(n - 1 - i);  //          T(0)  T(1) -->1
    }                                            //                  /  
}                                          //                     T(0)  T(0)  --> 1
                                         //       6 times = 6 

int main(){
    function(6);
    return 0;
}
