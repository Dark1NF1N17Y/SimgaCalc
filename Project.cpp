#include <iostream>
#include <math.h>
#include <stdio.h>
#include <string.h>
#include <iomanip>

using namespace std;

int main(){

    //inputs

    double input1;
    double input2;
    double input3;
    double input4;
    double input5;
    cout<<"Input 1 : "<<endl;
    cin>>input1;
    cout<<"Input 2 : "<<endl;
    cin>>input2;
    cout<<"Input 3 : "<<endl;
    cin>>input3;
    cout<<"Input 4 : "<<endl;
    cin>>input4;
    cout<<"Input 5 : "<<endl;
    cin>>input5;

    //xbar

    double part1xbar = input1+input2+input3+input4+input5;
    double part2xbar = part1xbar/5;

    //x - xbar

    double input1xxbar = input1-part2xbar;
    double input2xxbar = input2-part2xbar;
    double input3xxbar = input3-part2xbar;
    double input4xxbar = input4-part2xbar;
    double input5xxbar = input5-part2xbar;

    //( x - xbar )^2

    double input1xxbar2 = input1xxbar*input1xxbar;
    double input2xxbar2 = input2xxbar*input2xxbar;
    double input3xxbar2 = input3xxbar*input3xxbar;
    double input4xxbar2 = input4xxbar*input4xxbar;
    double input5xxbar2 = input5xxbar*input5xxbar;

    //sigma

    double rootpart1 = input1xxbar2+input2xxbar2+input3xxbar2+input4xxbar2+input5xxbar2;
    double rootpart2 = rootpart1/5;
    double sigma = sqrt(rootpart2);

    //output


    const char separator = ' ';
    const int xWidth = 6;
    const int xbarWidth = 8;
    const int xxbarWidth = 8;
    const int xxbar2Width = 8;
    const int sigmawidth = 8;

    system("cls");

    cout<<"============================================"<<endl;
    cout<<left<<setw(xWidth)<<setfill(separator)<<"X";
    cout<<left<<setw(xbarWidth)<<setfill(separator)<<"Xbar";
    cout<<left<<setw(xxbarWidth)<<setfill(separator)<<"X-Xbar";
    cout<<left<<setw(xxbar2Width)<<setfill(separator)<<"(X-Xbar)^2"<<endl;

    cout<<left<<setw(xWidth)<<setfill(separator)<<input1;
    cout<<left<<setw(xbarWidth)<<setfill(separator)<<part2xbar;
    cout<<left<<setw(xxbarWidth)<<setfill(separator)<<input1xxbar;
    cout<<left<<setw(xxbar2Width)<<setfill(separator)<<input1xxbar2<<endl;

    cout<<left<<setw(xWidth)<<setfill(separator)<<input2;
    cout<<left<<setw(xbarWidth)<<setfill(separator)<<part2xbar;
    cout<<left<<setw(xxbarWidth)<<setfill(separator)<<input2xxbar;
    cout<<left<<setw(xxbar2Width)<<setfill(separator)<<input2xxbar2<<endl;

    cout<<left<<setw(xWidth)<<setfill(separator)<<input3;
    cout<<left<<setw(xbarWidth)<<setfill(separator)<<part2xbar;
    cout<<left<<setw(xxbarWidth)<<setfill(separator)<<input3xxbar;
    cout<<left<<setw(xxbar2Width)<<setfill(separator)<<input3xxbar2<<endl;

    cout<<left<<setw(xWidth)<<setfill(separator)<<input4;
    cout<<left<<setw(xbarWidth)<<setfill(separator)<<part2xbar;
    cout<<left<<setw(xxbarWidth)<<setfill(separator)<<input4xxbar;
    cout<<left<<setw(xxbar2Width)<<setfill(separator)<<input4xxbar2<<endl;

    cout<<left<<setw(xWidth)<<setfill(separator)<<input5;
    cout<<left<<setw(xbarWidth)<<setfill(separator)<<part2xbar;
    cout<<left<<setw(xxbarWidth)<<setfill(separator)<<input5xxbar;
    cout<<left<<setw(xxbar2Width)<<setfill(separator)<<input5xxbar2<<endl;

    cout<<endl;

    cout<<left<<setw(sigmawidth)<<setfill(separator)<<"Sigma = "<<sigma<<endl;

    cout<<"============================================"<<endl;
    cout<<endl;

   cout<<"CopyRight 2023 - 1NF1N17Y"<<endl;
   cout<<endl;

}
