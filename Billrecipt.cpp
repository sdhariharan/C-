#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    cout<<setfill('=')<<setw(10)<<""<<"Student Fee RECEIPT"<<setw(10)<<""<<endl;
    cout <<setfill(' ')<<setw(10)<<left<<"Name"<<":"<<"Hariharan"<<endl;
    cout <<setfill(' ')<<setw(10)<<left<<"Register No"<<":"<<"25CS064"<<endl;
    cout <<setfill(' ')<<setw(10)<<left<<"Course"<<":"<<"CSE"<<endl;
    
    return 0;
}
