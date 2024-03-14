// revrese the array

// #include <iostream>
// using namespace std;

// int main(){
//     int arr[1000];
//     int limit;
//     cin>>limit;

//     for(int i=0; i<limit; i++){
//         cin>>arr[i];
//     }

//     for(int i=0; i<limit/2; i++){
//         int temp=arr[i];
//         arr[i]=arr[limit-1-i];
//         arr[limit-1-i]=temp;
//     }

//     for(int i=0; i<limit; i++){
//         cout<<arr[i]<<endl;
//     }
// }


// #include <iostream>
// using namespace std;


// int resversenumber(int arr[], int i, int j){
//     if(i>=j){
//         return 0;
//     }
//     swap(arr[i],arr[j]);
//     resversenumber(arr,i+1,j-1);
// }

// int main(){
//     int arr[]={1,2,3,4,5};
//     int i;
//     int j;
//     i=0;
//     j=4;
//     resversenumber(arr,i,j);

//     for(i=0; i<5; i++){
//         cout<<arr[i]<<endl;
//     }
// }


// #include <iostream>
// using namespace std;

// void reversenumber(int i,int arr[],int n){
//     if(i>=n/2){
//         return;
//     }
//     swap(arr[i],arr[n-1-i]);
//     reversenumber(i+1,arr,n);
// }
// int main(){
//     int arr[100];
//     int n;
//     cin>>n;
//     for(int i=0;i<n; i++){
//         cin>>arr[i];
//     }
//     int i=0;

//     reversenumber(i,arr,n);

//     for(i=0;i<n; i++){
//         cout<<arr[i]<<endl;
//     }
// }

