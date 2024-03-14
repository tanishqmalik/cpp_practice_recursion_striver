// print n to 1 by backtracking

#include <iostream>
using namespace std;

void printbacktracking(int i, int n){
    if(i<1){
        return;
    }
    
    printbacktracking(i-1,n);
    cout<<i<<endl;
}
int main(){
    int i;
    int n;
    cin>>n;
    i=n;

    printbacktracking(i,n);
}