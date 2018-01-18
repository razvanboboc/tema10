#include <iostream>
#include <stdio.h>
using namespace std;
FILE *f;
int LongestLineLength(FILE *f);
int main()
{
    f=fopen("C:\\Users\\BOBOC\\Desktop\\probleme info\\tema10\i5\\file1.txt", "r");
    if(f==NULL)
        cout<<"Error opening file";
    cout<<"The longest line contained within the file is: "<<LongestLineLength(f);
    return 0;
}
int LongestLineLength(FILE *f){
    int max=0;
    char c;
    int nr=1;
    while(feof(f)==0){
        c=fgetc(f);
        if(c!='\n'&&c!=EOF)
        nr++;
            else{
                if(nr>max)
                    max=nr;
                nr=1;
                }
}
return max;
}
