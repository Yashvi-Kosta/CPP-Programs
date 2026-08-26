// #include<iostream>
// using namespace std;

// int main() {

    // int budget;
    // cout << "enter your budget: " << endl;

    // //input
    // cin >> budget;

    // if (budget > 2000000) {
    //     cout << " your can buy scorpio" <<endl;
    // }
    // else {
    //     cout << " you cannot buy scorpio" <<endl;
    //      }

//     

// int marks = 100;
// if (marks>90) {
//     cout<<"A";
// }
// else if(marks > 80) {
// cout << "B";
// }
// else if (marks > 70) {
//     cout << "c";
// }
// else if (marks > 60) {
// cout << "D";
// 
// int height;
// cout << "Enter height in feet" << endl;
// cin >> height;

// int weight;
// cout << "Enter your weight; " << endl;
// cin >> weight;

// if(weight > 70) 
//     cout << "you got a good BMI" << endl;

// else {
//     cout << "bhai tujhse na ho paega";
//     }
//     cout << "complan dila du" << endl;
// return 0;
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
}