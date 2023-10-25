#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
int tree(int n,int k)
{
    if(n==1&&k<=1){
        return 0;
    }
    if(k<=1){
        return 0;
    }
    int val1=k/2;
    if(k%2!=0){
        val1=(k+1)/2;
    }
    int val=tree(n-1,val1);
    if(val==0){
        if(k%2!=0){
            return 0;
        }
        else{
            return 1;
        }
    }
    if(k%2!=0){
        return 1; 
    }
    else{
        return 0;
    }
}
    int kthGrammar(int n, int k) {
        // vector<
        return tree(n, k);
    }
};
int main()
{
    Solution object;
    cout<<object.kthGrammar(5,2);
}