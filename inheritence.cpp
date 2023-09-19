#include <iostream>
using namespace std;
class chair {
 public:
 void display1() {
 cout<<"welcome for buying the chairs.\n";
 cout<<"Following are the type of chairs we have: .\n";

 }
};
class wooden_chair : public chair {
 public:
 void display2() {
 cout<<"welcome to; wooden chair's category.\n\tYou can find a wide range of wooden chairs from 9000- 50000 cost range\n";
 }
};
class dining_chair : public wooden_chair {
 public:
 void display() {
 cout<<"welcome to; dining chair's category.\n\tYou can find a wide range of dining chairs from 1000- 10000 cost range\n";
 }
};
int main() {
 dining_chair obj;
 obj.display1();
 obj.display2();
 obj.display();
 cout<<"THANK YOU, HOPE YOU VISIT AGAIN\n";
 return 0;
}
