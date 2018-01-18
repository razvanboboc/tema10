#include <iostream>
#include <stdio.h>
using namespace std;
FILE *f;
int LineCounter(FILE *f);
int main()
{
    f = fopen("C:\\Users\\BOBOC\\Desktop\\probleme info\\tema10\i3\\file1.txt", "r");

    if(f==NULL)
        cout<<"Error opening file";

    cout<<"Line count is: "<<LineCounter(f);

    fclose(f);
    return 0;
}
int LineCounter(FILE *f)
{
    char c;
    int cnt = 1;
    while(feof(f) == 0)
    {
        c = fgetc(f);
    if (c == '\n')
        cnt++;
    }
    return cnt;
}
