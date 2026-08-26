// #include<iostream>
// using namespace std;

// int main () {
//     int day = 3;
//     switch (day) {
//         case 1:
//         cout << "Monday" << endl;
//         break;
//         case 2:
//         cout << "Tuesday" << endl;
//         break;
//         case 3:
//         cout << "Wednesday" << endl;
//         break;
//         case 4:
//         cout << "Thursday" << endl;
//         break;
//         case 5:
//         cout << "Friday" << endl;
//         break;
//         default:
//         cout << "weekend" << endl;
//     }

//     return 0;
// }



#include<iostream>
using namespace std;

int decimalToBinaryMthod1(int n){
    //division method 
    while (n > 0) {
    int bit = n % 2;
    cout << bit << endl;
    n =n / 2;
} 
return 0;
} int main (){
    int n;
    cin>>n;
 int binary = decimalToBinaryMthod1(n);