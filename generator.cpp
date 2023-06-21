#include "testlib.h"
#include <bits/stdc++.h>
 
using namespace std;
 
int main(int argc, char* argv[]) {
    registerGen(argc, argv, 1);
    int min_n = atoi(argv[1]);
    int max_n = atoi(argv[2]);
    int n = rnd.next(min_n, max_n);
    cout <<n<<endl;
    for(int i=0;i<n;i++){
        cout <<rnd.next(0,1);
        if(i!=n-1){
            cout <<" ";
        }
    }
    cout <<endl;
}