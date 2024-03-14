// print sum of first n numbers

// functional method
// #include <iostream>
// using namespace std;


// int sumnumbers(int i,int n){
//     // int result=0;
//     if(i==0){
//         return 0;
//     }
//     else{
//         return i=i+sumnumbers(i-1,n);
//     }
// }


// int main(){
//     int i;
//     int n;
//     cin>>n;
//     i=n;

//     int result=sumnumbers(i,n);

//     cout<<result <<endl;

//     sumnumbers(i,n);
// }

// functional method

#include <iostream>
using namespace std;

int sumnumbers(int n){
    if(n==0){
        return 0;
    }
    return n+sumnumbers(n-1);
}

int main(){
    int n;
    cin>>n;
    int result= sumnumbers(n);
    cout<<result<<endl;

}