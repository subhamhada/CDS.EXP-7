//subham
//entc B2
//23070123132
//experiment 7
#include <iostream>
using namespace std;
int main()
{
    int array1[2] = {1, 2}; 
    int array2[2] = {2, 4}; 
    int array3[2] = {1, 3};
    for (int i = 0; i < 2; i++) 
    { 
        cout << array1[i] << " ";
    }
         cout << endl; 
         for (int value : array2) 
         { 
             cout << value << " "; 
             
         } cout << endl;
    return 0;
}