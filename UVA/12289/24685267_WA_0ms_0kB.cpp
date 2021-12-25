#include<bits/stdc++.h>

using namespace std;

int num_chk(char *p, int n)
{
    int i;
    char ch1[4] = "one", ch2[4] = "two", ch3[6] = "three", ch4[5] = "four", ch5[5] = "five", ch6[4] = "six", ch7[6] = "seven", ch8[6] = "eight", ch9[5] = "nine", ch10[4] = "ten";

    if(n==3)
    {
        int one, two, six, ten;
        one=two=six=ten=0;

        for(i=0; i<n; i++)
        {
            if(ch1[i]!=p[i])
                one++;
            if(ch2[i]!=p[i])
                two++;
            if(ch6[i]!=p[i])
                six++;
            if(ch10[i]!=p[i])
                ten++;
        }
        if(one==1)
            return 1;
        else if(two==1)
            return 2;
        else if(six==1)
            return 6;
        else if(ten==1)
            return 10;
    }
    if(n==4)
    {
        int four, five, nine;

        four=five=nine=0;

        for(i=0; i<n; i++)
        {
            if(ch4[i]!=p[i])
                four++;
            if(ch5[i]!=p[i])
                five++;
            if(ch9[i]!=p[i])
                nine++;
        }
        if(four==1)
            return 4;
        else if(five==1)
            return 5;
        else if(nine==1)
            return 9;
    }
    if(n==5)
    {
        int seven, eight, three;

        seven=eight=three=0;

        for(i=0; i<n; i++)
        {
            if(ch3[i]!=p[i])
                three++;
            if(ch7[i]!=p[i])
                seven++;
            if(ch8[i]!=p[i])
                eight++;
        }
        if(seven==1)
            return 7;
        else if(eight==1)
            return 8;
        else if(three==1)
            return 3;
    }
}

int main ()
{
    int t;

    cin>>t;

    while(t--)
    {
        char ch[7];

        cin>>ch;

        int x = num_chk(ch, strlen(ch));

        cout<<x<<endl;
    }
}
