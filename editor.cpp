#include <iostream>
#include <fstream>
#include <conio.h>
#include <string>
using namespace std;

string line;

string name;
int lnum=1;
int main(){
    cout<<"enter file name(along with extension):     "; 
    cin>>name;
    cout<<"your file name is :  "<<name<<"\n";
    fstream file;
    file.open(name,ios::out);
    file.close();
    cout<<" type exit_ to escape editor.\n note exit_ will have to be the only statement in the line.\ntype your text:\n";
    file.open(name,ios::out|ios::app);
    while (line!="exit_")
    {  
    getline(cin,line);
    
    if (line=="exit_"){
        break;}
    cout<<lnum<<":";
    

    //cout<<"you wrote:   "<<line<<"\n";
    file<<line<<"\n";
    lnum++;

    }
    file.close();
    if (!file){
        cout<<"file creation/writing error.";
    }else{
        cout<<"file created in program's folder\n";
    }
    cout<<"Press any key to close-";
   getch();
   //cin>>x;
}
