#include <iostream>
using namespace std;

const int Arsize = 10;
void strcount(const char *str);

int main(){
    char input[Arsize];
    char next;

    cout<<"Enter a line:\n";
    cin.get(input,Arsize);
    while (cin)
    {
        cin.get(next);
        while (next !='\n')
        {
           cin.get(next);
        }
        strcount(input);
        cout <<"enter next line(empty line to quit) \n";
        cin.get(input,Arsize);
        
    }
    cout<<"Bye\n";
    return 0;
    
}

void strcount(const char *str){
    static int total = 0;
    int count = 0;
    cout<<"\"" << str <<"\" contains"<<endl;
    while (*str++)
    {
        /* code */
        count++;
    }
    total += count;
    cout<<count<< "characters"<<endl;
    cout<<"total: " << total <<" characters"<<endl;
}