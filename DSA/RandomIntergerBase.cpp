#include <bits/stdc++.h>
using namespace std;
int main()
{
    int s = 0;
    for (int i = 0; i < 1; i++)
    {
      // generating random integer
        s = rand() % 5 + 5000000000;
    }
    
    cout << "Random Intger is : "<<s << endl;
  
    int m = s;
    int max = INT_MIN;
    int rem = 0;
    while (s != 0)
    {
        rem = s % 10;
        if (rem > max)
        {
            // m is the highest base number
            max = rem;
        }
        s /= 10;
    }
    cout << "The Highest Base of a "<< m <<" is "<< max + 1 << endl;
    return 0;
}
