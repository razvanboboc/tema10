#include <iostream>
#include <stdio.h>
using namespace std;
FILE *f;
void display(FILE *f);
int main()
{
    f = fopen("C:\\Users\\BOBOC\\Desktop\\probleme info\\tema10\i2\\file1.txt", "r");

    if(f == NULL)
        cout<<"Error opening file";

    while(feof(f) == 0)
    {
        display(f);
    }
    fclose(f);
    return 0;
}
void display(FILE *f)
{
    char c;
    while(c != EOF)
    {
        c=fgetc(f);
        cout<< c;
    }
}
