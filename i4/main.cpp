#include <iostream>
#include <stdio.h>
using namespace std;
FILE *f;
int CharacterCounter(FILE *f);
int main()
{
    f=fopen("C:\\Users\\BOBOC\\Desktop\\probleme info\\tema10\i4\\file1.txt", "r");
    if(f==NULL)
        cout<<"Error opening file";
    cout<<"The number of characters contained within the file is: "<<CharacterCounter(f);
    return 0;
}
int CharacterCounter(FILE *f){
    int nr=0;
    char c;
    while(feof(f)==0){
        c=fgetc(f);
         if (c!=' ' &&c!='\n')
            nr++;
}
return nr;
}
