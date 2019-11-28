#include <iostream>
using namespace std;
int main()
{
   int i,n,sum=0;
   cout << "Input Value of terms : "<< endl;
   cin >> n;
   cout << "\nThe first  natural numbers are: " << n << endl;
   for(i=1;i<=n;i++)
   {
     cout << i << " ";
     sum+=i;
   }
   cout << "\nThe Sum of natural numbers upto " << n << " terms : " << sum <<"\n)";

}
