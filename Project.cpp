#include <iostream>
#include <math.h>
#include <stdio.h>
#include <string.h>
#include <iomanip>

using namespace std;

int main(){

    //inputs

    double input[5];
    double xbar = 0;
    for(int i = 0; i < 5; i++){
        printf("Input %d : \n", i + 1);
        cin>>input[i];
        xbar += input[i];
    }

    //xbar

    xbar /= 5;

    //x - xbar

    double input1xxbar = input[0]-xbar;
    double input2xxbar = input[1]-xbar;
    double input3xxbar = input[2]-xbar;
    double input4xxbar = input[3]-xbar;
    double input5xxbar = input[4]-xbar;

    //( x - xbar )^2

    double input1xxbar2 = pow(input1xxbar,2);
    double input2xxbar2 = pow(input2xxbar,2);
    double input3xxbar2 = pow(input3xxbar,2);
    double input4xxbar2 = pow(input4xxbar,2);
    double input5xxbar2 = pow(input5xxbar,2);

    //sigma

    double sigma = sqrt((input1xxbar2+input2xxbar2+input3xxbar2+input4xxbar2+input5xxbar2)/5);

    //output


    const char separator = ' ';
    const char xWidth = 6;
    const char xbarWidth = 8;
    const char xxbarWidth = 8;
    const char xxbar2Width = 8;
    const char sigmawidth = 8;

    system("clear");

    cout<<"============================================"<<endl;
    cout<<left<<setw(xWidth)<<setfill(separator)<<"X";
    cout<<left<<setw(xbarWidth)<<setfill(separator)<<"Xbar";
    cout<<left<<setw(xxbarWidth)<<setfill(separator)<<"X-Xbar";
    cout<<left<<setw(xxbar2Width)<<setfill(separator)<<"(X-Xbar)^2"<<endl;

    cout<<left<<setw(xWidth)<<setfill(separator)<<input[0];
    cout<<left<<setw(xbarWidth)<<setfill(separator)<<xbar;
    cout<<left<<setw(xxbarWidth)<<setfill(separator)<<input1xxbar;
    cout<<left<<setw(xxbar2Width)<<setfill(separator)<<input1xxbar2<<endl;

    cout<<left<<setw(xWidth)<<setfill(separator)<<input[1];
    cout<<left<<setw(xbarWidth)<<setfill(separator)<<xbar;
    cout<<left<<setw(xxbarWidth)<<setfill(separator)<<input2xxbar;
    cout<<left<<setw(xxbar2Width)<<setfill(separator)<<input2xxbar2<<endl;

    cout<<left<<setw(xWidth)<<setfill(separator)<<input[2];
    cout<<left<<setw(xbarWidth)<<setfill(separator)<<xbar;
    cout<<left<<setw(xxbarWidth)<<setfill(separator)<<input3xxbar;
    cout<<left<<setw(xxbar2Width)<<setfill(separator)<<input3xxbar2<<endl;

    cout<<left<<setw(xWidth)<<setfill(separator)<<input[3];
    cout<<left<<setw(xbarWidth)<<setfill(separator)<<xbar;
    cout<<left<<setw(xxbarWidth)<<setfill(separator)<<input4xxbar;
    cout<<left<<setw(xxbar2Width)<<setfill(separator)<<input4xxbar2<<endl;

    cout<<left<<setw(xWidth)<<setfill(separator)<<input[4];
    cout<<left<<setw(xbarWidth)<<setfill(separator)<<xbar;
    cout<<left<<setw(xxbarWidth)<<setfill(separator)<<input5xxbar;
    cout<<left<<setw(xxbar2Width)<<setfill(separator)<<input5xxbar2<<endl;

    cout<<endl;

    cout<<left<<setw(sigmawidth)<<setfill(separator)<<"Sigma = "<<sigma<<endl;

    cout<<"============================================"<<endl;
    cout<<endl;

   cout<<"CopyRight 2023 - 1NF1N17Y"<<endl;
   cout<<endl;

}
