#include <iostream>
using namespace std;

int main()
{       int n1, n,p=1;
	int dec=0,i=1,j,d;

     cout <<"\nConvert Binary to Decimal" << endl;

	cout << "Input a binary number : "<< endl;
	cin >> n;
	n1=n;
	for (j=n;j>0;j=j/10)
	{  
          d = j % 10;
            if(i==1)
                  p=p*1;
            else
                 p=p*2;

	   dec=dec+(d*p);
	   i++;
	}
        cout << "\nThe Binary Number : " << n1 << "\nThe equivalent Decimal  Number : " << dec << endl;
}
