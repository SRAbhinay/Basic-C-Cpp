#include<iostream>
using namespace std;
class FOODCOURT
{
    string name;
    int id;
    int vc;

    public:
    void getdetails()
    void printdetails()
    void vbal()
};

void getdetails()
{
    string name;
    int id;
    int vc;
   cout<<"Enter name:\n";
   cin>>name;
   cout<<"Enter Voucher id.no:\n";
   cin>>id;
   cout<<"Enter Voucher amount:\n";
   cin>>vc;
}

void printdetails()
{
    string name;
    int id;
    int vc;
    cout<<name<<"\t"<<id<<"\n"<<vc<<endl;
}

void vbal()
{
    string name;
    int id;
    int vc;
    int vcbal;
    int cst;
    cout<<"enter the cost of the dish: \n";
    cin>>cst;
    vc - cst =  vcbal;
    cout<<"the remaining amount in voucher is "<<vcbal<<"."<<endl;

}

int main()
{
    getdetails();
    printdetails();
    vbal();

    return(0);
}