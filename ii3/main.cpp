#include <iostream>
#include <stdio.h>
using namespace std;
FILE *f;
int WordCounter(FILE *f);
int main()
{
    f=fopen("C:\\Users\\BOBOC\\Desktop\\probleme info\\tema10\i4\\file1.txt", "r");
        if(f==NULL)
            cout<<"Error opening file";
    cout<<"The number of words contained within the file is: "<<WordCounter(f);
    return 0;
}
int WordCounter(FILE *f){
    int nr=0;
    char c;
    while(feof(f)==0){
        c=fgetc(f);
    if(c==' '||c=='\n')
        nr++;
}
return nr;
}
