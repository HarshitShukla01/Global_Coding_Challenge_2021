/*
A customer comes to withdraw money from a bank. 
Unfortunately, that day the bank only has two types of currency notes to give: 1 unit and 2 unit. 
The manager, being amused by the incident, tried to have some fun and decided to create a challenge for the cashier team. 
She asked the team to minimize the difference between the number of the two types of currency notes. The manager also asked you to give her your solution.
You decided to use computational power.What would be your solution?

input = 1000
output = 667

*/



#include<bits/stdc++.h>
using namespace std;


int solution(int n){
    // code here
    int one=0,two=0;
   // if(n%2!=0){one++; n=n-1;}
  //  int m=one;
   // two=n/2;
    // while(two>0)
    // {
    //     int a=one,b=two;
    //     a+=2;
    //     b--;
    //     cout<<"1 = "<<one<<"  2 = "<<two;
    //     int t1= b-a;
    //     cout<<"  diff = "<<t1<<endl;
    //     if(t1>=0)
    //       {one=a;two=b;}
    //     else
    //     break; 
    // }
    // int k = (n-one)/2;
    // cout<<"m = "<<m<<" k = "<<k<<endl;
    // return one+k;
    // while(n>0)
    // {   if(n==0) break;
    //     if(n>=3)
    //     {one++; two++; n-=3;}
    //     else if(n==2){
    //         two++; n=0;
    //     }
    //     else if(n==1) {
    //         one++; n=0;
    //     }
    //      cout<<"1 = "<<one<<"  2 = "<<two<<"  n = "<<n<<endl;
    // }
    
    int r = n/3;
    one=two=r;
    n=n-(r*3);
    if(n==2) two++;
    else one++;
    return one+two;
}

/*  Do not edit below code */
int main() {
	int n;
	cin >> n;	
    int answer=solution(n);
	cout << answer << endl;	
}
