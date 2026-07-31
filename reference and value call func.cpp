// call/pass by pointer:

// #include <bits/stdc++.h>
// using namespace std;
//     void increment(int *x) {
//         *x=*x+1;
//     }
//     void decrement(int *x) {
//         *x=*x-1;
//     }
// int main() {
//     // your code goes here
//     int a=5;  
//     increment(&a);
//     cout<<a<<" ";
//     decrement(&a);
//     cout<<a<<" ";
//     return 0;
// }




// call/pass by value:

// #include <bits/stdc++.h>
// using namespace std;
//     void increment(int x) {
//         x=x+1;
//     }
//     void decrement(int x) {
//         x=x-1;
//     }
// int main() {
//     // your code goes here
//     int a=5;   
//     increment(a);
//     cout<<a<<" ";
//     decrement(a);
//     cout<<a<<" "; 
//     return 0;
// }




// call/pass by reference:

// #include <bits/stdc++.h>
// using namespace std;
//     void increment(int &x) {
//         x=x+1;
//     }
//     int decrement(int &x) {
//         x=x-1;
//         return x;
//     }
// int main() {
//     // your code goes here
//     int a=5;
//     // increment(a);
//     // cout<<a<<" ";
//     decrement(a);
//     cout<<a<<" ";
//     return 0;
// }