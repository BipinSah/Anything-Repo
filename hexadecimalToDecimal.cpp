#include <iostream>
#include <conio.h>
#include<math.h>
#include<string.h>
using namespace std;

int hexaToDecimal(string n)
{
    int ans=0;
    int base = 1;
    int len = n.size();
    for(int i=len-1; i>=0; i--)
    {
        if(n[i]>='0' && n[i]<='9')
        {
            ans += (n[i] - 48)*base;
            base = base * 16;
        }
        else if(n[i]>='A' && n[i]<='F')
        {
            ans += (n[i] - 55)*base;
            base = base*16;
        }
        else if(n[i]>='a' && n[i]<='f')
        {
            ans += (n[i] - 87)*base;
            base = base*16;
        }
        else
        {
            cout<<"Invalid Hex Digit ! " <<endl;
        }
    }
    return ans;
}
int main()
{
    string n;
    cout<<"Enter a Hexadecimal number to convert it into Decimal : ";
    cin>>n;
    
    cout<<"The Decimal form of "<<"'"<<n<<"'"<<"  is : "<<hexaToDecimal(n);
    
    return 0;
}
