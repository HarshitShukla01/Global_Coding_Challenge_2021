//question
/*
Harry has just started investing in stock markets. 
There are a variety of securities that he can buy, 
but he is a bit confused about buying the securities 
because he has a limited amount of money. 
The prices of the various securities are given for N days 
and security_value[k] denotes the price of the security on the kth day. 
There is one more rule, Harry can buy at most k number of securities on the kth day. 
As mentioned earlier, Harry has a limited amount of money with him 
to buy these securities and this amount is denoted by z. 
Can you guide Harry in finding the maximum number of securities that he can buy?
*/

//sample input
/*
64
17 24 7 45 15 14 37 40 8 23 27 17
*/
//solution => 8

#include <iostream>
#include <string>
#include <stdio.h>
#include <ctype.h>
#include <vector>
#include <queue>
#include <sstream>
#include <typeinfo>
#include <bits/stdc++.h>
using namespace std;

int securitiesBuying(int z,int security_value[],int n)
{
    int no_of_stocks=0;
   // participants code here
    vector<vector<int>> arr(n,vector<int> (2,0));
    for(int i=0;i<n;i++)
    {
        arr[i][0]=security_value[i];
        arr[i][1]=i+1;
    }
    sort(arr.begin(),arr.end());
    int sum=0;
    for(int i=0;i<n;i++)
    {
        int s = arr[i][0]*arr[i][1];
        if(z-s>=0)
        {sum=sum+arr[i][1]; z=z-s;}
        else{
            int k = z/arr[i][0];
            sum=sum+k;
            break;
        }
    }
    no_of_stocks =sum;
    return no_of_stocks;
}
 
int main(){
 
int z;
cin>>z;
vector<int> input_data;
string buffer;
int data;
getline(cin, buffer);
getline(cin, buffer);
istringstream iss(buffer);
 
 
while (iss >> data)
    input_data.push_back(data);
 
int n= input_data.size();
 
 
 int security_value[n];
    for (int i = 0; i < n; i++) {
        security_value[i] = input_data[i];
    }
 
 
 
int no_of_stocks_purchased = securitiesBuying(z,security_value,n);
cout << no_of_stocks_purchased;
 
 
 
}
 