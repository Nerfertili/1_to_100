/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

int main()
{
    for(int a=1;a<=100;a++){
        if((a%3)==0 and (a%5)==0){
            cout << "\nfoobaa";
        }
        else if((a%5)==0){
            cout << "\nbaa";
        }
        else if((a%3)==0){
            cout<<"\nfoo";
        }
        else{
            cout<<"\n"<<a;
        }
    }
}
