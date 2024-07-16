/*write a program to read an alphabet and print if the alphabet is a consonant or a vowel
Kanta G. Vaingankar              22CO24*/
#include<iostream>
using namespace std;

int main()
{
    char alphabet;
    cout<<"Enter The Alphabet: \n";
    cin>>alphabet;
    if(alphabet=='a' || alphabet=='e' || alphabet=='i'
       ||alphabet=='o' || alphabet=='u')
    {
        cout<<"The alphabet is a vowel"<<endl;
    }
    else
    {
        cout<<"The alphabet is a consonant"<<endl;
    }
    return 0;
}

