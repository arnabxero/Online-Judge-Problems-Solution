///**************** Iftekhar Ahmed Arnab ****************///
///********** North East University Bangladesh **********///
///****************** ID: 190103020028 ******************///
///********************* 20th Batch *********************///
///**************** Session: Spring-2019 ****************///
///********* Current Semester : 4th(March, 2020) ********///
///************ Email : arnab.xero@gmail.com ************///



/* Welcome to arnab's coding kingdom -_-
///Heres my rough code ._. ///

#include<bits/stdc++.h>

using namespace std;

int main()
{
    char ch[2000];

    cin>>ch;

    int n = strlen(ch);

    bool r = true, c1 = false, c2 = false;
    bool rx = false;
    bool tx = false;

    //cout<<n;

    int i = 0;

    while(i<n && ch[i]!='@')
    {
        rx = true;

        //cout<<ch[i]<<endl;
        if(!((ch[i]>='A' && ch[i]<='Z') || (ch[i]>='a' && ch[i]<='z') || (ch[i]>='0' && ch[i]<='9') || (ch[i]=='_')))
            r = false;
        //cout<<ch[i]<<"== False"<<endl;
        i++;
    }

    if(ch[i]=='@')
    {
        c1 = true;
        i++;
    }

    //cout<<ch[i];

    while(i<n && ch[i]!='/')
    {
        tx = true;

        if(ch[i] == '.' && (ch[i-1] == '.' || ch[i-1] == '@'))
            r = false;
        if(ch[i] == '.' && (ch[i+1] == '/' || ch[i+1] == '\0'))
            r = false;

        if(!((ch[i]>='A' && ch[i]<='Z') || (ch[i]>='a' && ch[i]<='z') || (ch[i]=='.') || (ch[i]>='0' && ch[i]<='9') || (ch[i]=='_')))
            r = false;
        //cout<<ch[i]<<"== False"<<endl;

        i++;
    }

    if(ch[i]=='/')
    {
        if(ch[i]=='/' && ch[i+1]=='\0')
            r = false;

        i++;
        //cout<<ch[i]<<endl;
        while(i<n)
        {
            if(!((ch[i]>='A' && ch[i]<='Z') || (ch[i]>='a' && ch[i]<='z') || (ch[i]>='0' && ch[i]<='9') || (ch[i]=='_')))
                r = false;
                //cout<<ch[i]<<"== False"<<endl;

            i++;
        }
    }
    //cout<<ch[i];


    if(r && rx && tx)
        cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
}
*/
/////////////Rough Code Ends here///////////////

#include<bits/stdc++.h>

using namespace std;

bool ck1(char ch)
{
    if(!((ch>='A' && ch<='Z') || (ch>='a' && ch<='z') || (ch>='0' && ch<='9') || (ch=='_')))
        return true;

    return false;
}

bool ck2(char ch)
{
    if(!((ch>='A' && ch<='Z') || (ch>='a' && ch<='z') || (ch=='.') || (ch>='0' && ch<='9') || (ch=='_')))
        return true;

    return false;
}

bool ck3(char ch)
{
    if(!((ch>='A' && ch<='Z') || (ch>='a' && ch<='z') || (ch>='0' && ch<='9') || (ch=='_')))
        return true;

    return false;
}

int main()
{
    char ch[2000];

    cin>>ch;

    int i = 0;
    int n = strlen(ch);

    bool r = true;
    bool c1 = false;
    bool c2 = false;
    bool rx = false;
    bool tx = false;

    while(i<n && ch[i]!='@')
    {
        rx = true;

        if(ck1(ch[i]))
            r = false;

        i++;
    }

    if(ch[i]=='@')
    {
        c1 = true;
        i++;
    }

    while(i<n && ch[i]!='/')
    {
        tx = true;

        if(ch[i] == '.' && (ch[i-1] == '.' || ch[i-1] == '@'))
            r = false;
        if(ch[i] == '.' && (ch[i+1] == '/' || ch[i+1] == '\0'))
            r = false;

        if(ck2(ch[i]))
            r = false;

        i++;
    }

    if(ch[i]=='/')
    {
        if(ch[i]=='/' && ch[i+1]=='\0')
            r = false;

        i++;

        while(i<n)
        {
            if(ck2(ch[i]))
                r = false;

            i++;
        }
    }

    if(r && rx && tx)
        cout<<"YES"<<endl;

    else cout<<"NO"<<endl;
}

