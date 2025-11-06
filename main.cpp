#include <iostream> 
using namespace std;

bool checkprime(int n)
{
    if (n < 2 ) return false;
    for (int i = 2 ; i*i <=n; ++i)
    {
        if (n % i == 0) 
            return false;
    }
    return true;
}
int main()
{
    cout  << "Hello" << endl;
    return 0;
}