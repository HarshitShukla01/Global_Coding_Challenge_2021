#include <bits/stdc++.h>
using namespace std;

int totalPairs(int n, vector<int> arr) {
    // Complete the total pairs function
    int sum=0;
    for(int i=0;i<n-1;i++)
    {
        int l=arr[i],r=arr[i+1],c=1,b_max=0;
        for(int j=i+2;j<n;j++)
        {
            b_max=max(b_max,r);
            r=arr[j];
            int small = min(l,r);
            if(b_max<small) c++;
            else break;
        }
        cout<<" i = "<<i<<"   c = "<<c<<endl;
        sum+=c;
    }

    if(sum>0) return sum;

    return -1;
}

int main(){
   int n;
   cin >> n;
   vector<int> values(n);
   for (int i = 0; i < n; ++i) {
        cin >> values[i];
   }
	int answer = totalPairs(n, values);
    // Do not remove below line
    cout << answer << endl;
    // Do not print anything after this line
        
    return 0;
}
