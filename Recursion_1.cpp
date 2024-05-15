// Q1) Write a program to calculate the sum of odd numbers between a and b (both inclusive) using recursion.
#include<iostream>
using namespace std;
int sum(int a, int b)
{
    if(a>b) return 0;
    return a+sum(a+2,b);
}
int main()
{
    int a,b;
    cin>>a>>b;
    if(a%2==0) a++;
    cout<<"sum = "<<sum(a,b);
}




// Q2) Calculate the number of ways in which a person can climb n stairs if he can take exactly 1, 2 or 3 steps at each level.
#include<iostream>
using namespace std;
int stair(int n)
{
    if(n==1) return 1;
    if(n==2) return 2;
    if(n==3) return 4;
    return stair(n-1)+stair(n-2)+stair(n-3);
}
int main()
{
    int n;
    cin>>n;
    cout<<"no of path = "<<stair(n);
}




// Q3) Given a positive integer, return true if it is a power of 2.
#include<iostream>
using namespace std;
bool check(int n)
{
    if(n==1) return true;
    else if(n%2!=0 || n==0) return false;
    return check(n/2);
}
int main()
{
    int n;
    cin>>n;
    cout<<check(n);
}