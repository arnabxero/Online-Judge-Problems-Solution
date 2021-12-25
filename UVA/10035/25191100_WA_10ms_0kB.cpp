#include<bits/stdc++.h>

using namespace std;

int cr = 0;

int modder(int *x)
{
    int r = 0;

    if(*x>0)
    {
        r = *x%10;
        *x = *x/10;
        return r;
    }
    return r;
}

int carry_counter(int x, int y)
{
    cr = 0;

    int mn, mx, tmp, result = 0;

    mx = (x>=y)?x:y;
    mn = (x>=y)?y:x;

    while(mn>0 || cr>0)
    {
        if(cr>0)
            result++;

        int tmp = modder(&mn)+modder(&mx)+cr;

        cr = (tmp-(tmp%10))/10;

    }
    return result;
}

int main()
{
    int carry, r = 0, num1, num2, i, j, temp;

    cin>>num1>>num2;

    while(num1!=0 && num2!=0)
    {
        carry = carry_counter(num1, num2);

        if(carry == 0)
            cout<<"No carry operations."<<endl;
        else
            cout<<carry<<" carry operations."<<endl;

        cin>>num1>>num2;
    }
}
