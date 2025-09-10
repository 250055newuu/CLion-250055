#include <iostream>
using namespace std;

//problem 11
// int main() {
//     double a, b;
//     cout << "Enter a number: ";
//     cin >> a;
//     cout << "Enter another number: ";
//     cin >> b;
//     cout <<  a  <<"\t"<<  b<<endl;
// }

// problem 12
// int main() {
//     int students;
//     cout << "Enter number of students: ";
//     cin >> students;
//     int group1 = students / 11;
//     int group2 = students % 11;
//     cout << "In first group: " << group1 << endl;
//     cout << "In last group: " << group2 << endl;
// }

//problem 13
// int main() {
//     double a;
//     cout << "Enter a number: ";
//     cin >> a;
//     double area = (3*1.73)/2 *a*a;
//     cout << "Area = " << area << endl;
// }

//problem 14
// int main() {
//     int num = 31;
//     int result = ((((((num+1)*3)-14)/4)-1)%9);
//     num = result;
//     cout << num << endl;
// }

//problem 15
// int main() {
//     char first = 'A';
//     char l1 = 'A'+7;
//     char l2 = 'A'+4;
//     char l3 = 'A'+11;
//     char l4 = 'A'+14;
//     char c = 'A'-32;
//     cout <<l1<<l2<<l3<<l3<<l4<<c;

//problem 16
// int main() {
//     float x = 17;
//     float y = 1;
//     float result = (x+(x+y))/((y*3)*(y*2));
//     cout << result << endl;
// }

//problem 17
// int main() {
//     double x,y;
//     cout << "Press any key: ";
//     cin >> x;
//     cout << "Press another key: ";
//     cin >> y;
//     bool result = (x==y);
//     cout << result << endl;
// }

//problem 18
// int main() {
//     double a,b;
//     cout << "Enter a value of a: ";
//     cin >> a;
//     cout << "Enter a value of b: ";
//     cin >> b;
//     bool result = (a<b);
//     cout << result << endl;

//problem 19
// int main() {
//     double a,b,c;
//     cout << "Enter a value of a: ";
//     cin >> a;
//     cout << "Enter a value of b: ";
//     cin >> b;
//     cout << "Enter a value of c: ";
//     cin >> c;
//     bool result = (a>b && a>c);
//     cout << result << endl;
// }

//problem 20
// int main() {
//     int a,b,c,d,e;
//     cout << "Enter the value of a: ";
//     cin >> a;
//     cout << "Enter the value of b: ";
//     cin >> b;
//     cout << "Enter the value of c: ";
//     cin >> c;
//     cout << "Enter the value of d: ";
//     cin >> d;
//     cout << "Enter the value of e: ";
//     cin >> e;
//     bool result = (a==0 || b==0 || c==0 || d==0 || e==0);
//     cout << result;
// }

//problem 21
// int main() {
//     int a,b;
//     cout << "Enter the value of a: ";
//     cin >> a;
//     cout << "Enter the value of b: ";
//     cin >> b;
//     bool result1 = (a+b>30 && a*b>30);
//     bool result2 = ((a+(b-10))>30 && (a*(b-10))>30);
//     bool result3 = (a>30 || b>30);
//     cout << result1 << " " << result2 << " " << result3 << endl;
// }

//problem 22
// int main() {
//     int a,b;
//     cout << "Enter Sardor's height (cm): ";
//     cin >> a;
//     cout << "Enter Mike's height (ft): ";
//     cin >> b;
//     b=30.48*a;
//     if (b>a) {
//         cout<<1;
//     }
//     else {
//         cout<<0;
//     }
// }