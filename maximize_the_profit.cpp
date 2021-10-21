#include <bits/stdc++.h>
using namespace std;

int portfolio_profit_maximisation(int maxSum, vector<int> a, vector<int> b) {
    //write your code here
    int s=0,i=0,j=0,c=0;
    while(s<maxSum&&i<a.size()&&j<b.size())
    {
        if(a[i]>b[j]&&b[j]+s<=maxSum) {
          s=s+b[j];
          c++;
          j++;
        }
        else if(a[i]<b[j]&&a[i]+s<=maxSum){
            s=s+a[i];
            c++;
            i++;
        }
        else break;
    }

    while(s<maxSum&&i!=a.size())
    {
        s=s+a[i];
            c++;
            i++;
    }
    while(s<maxSum&&j!=b.size())
    {
        s=s+b[j];
          c++;
          j++;
    }
    return c;
}

int main()
{
    ios::sync_with_stdio(false);

    int n, m, x;
    cin >> n >> m >> x;

    vector<int> a(n);
    vector<int> b(m);

    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }

    for (int i = 0; i < m; ++i) {
        cin >> b[i];
    }
    int result = portfolio_profit_maximisation(x, a, b);
    cout << result;
    return 0;
}