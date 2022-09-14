#include <iostream>
using namespace std;

int main(){

    const int passingmarks=55;
    int marks;

    knowresult:
    cout<<"Please enter your marks"<<endl;
    cin>>marks;

    if(marks >= passingmarks)
    {
        if(marks >= 85)
        {
            cout<<"Congratulations, You have passed the exam with "<<marks<<" marks and got A+ grade"<<endl;
            goto knowresult;
        }
        else
            cout<<"Congratulations, You have passed the exam with "<<marks<<" marks."<<endl;
            goto knowresult;
    }
    else
        cout<<"We are really sorry, You have failed the exam because you got "<<marks<<" marks and to pass this exam you need "<<passingmarks<<" marks."<<endl;
        goto knowresult;

    return 0;

}