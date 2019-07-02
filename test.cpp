#include <bits/stdc++.h>
using namespace std;

#define REP(i, m, n) for(int i = (int)m; i < (int)n; i++)
#define rep(i, n) REP(i, 0, n)
typedef long long ll;
typedef pair<int,int> pint;
typedef pair<ll,int> pli;
const int inf = 1e9+7;
const ll longinf = 1LL<<60;
const ll mod = 1e9+7;
int dx[4] = {1,0,-1,0}, dy[4] = {0,1,0,-1};
typedef vector<vector<pli> > wgraph;

class Solution {
public:
    bool Find(int target, vector<vector<int> > array) {
        int m,n;
        int i,j;

        m=array.size();
        if(m<=0){
            return false;
        }
        n=array[0].size();

        i=0;
        j=n-1;
        while(i<m && j>=0){
            if(array[i][j]>target){
                j--;
            }
            else if(array[i][j]<target){
                i++;
            }
            else{
                return true;
            }
        }
        return false;
    }
};

int main()
{
    int myints[] = {1,2,3};
    vector<vector<int> > v;
    Solution s;
    cout << v.size() << endl;
    cout << s.Find(1,v);
    return 0;
}

