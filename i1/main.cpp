#include <iostream>
#include <stdio.h>
using namespace std;
FILE *f;
FILE *g;
char temp;
int main()
{
    f=fopen("C:\\Users\\BOBOC\\Desktop\\probleme info\\tema10\i1\\file1.txt", "r");
    if(f == NULL)
       cout<<"Error opening file"<<" "<<;
    g = fopen("C:\\Users\\BOBOC\\Desktop\\probleme info\\tema10\i1\\file2.txt", "w");
    while(feof(f) == 0)
    {
        temp = fgetc(f);
        if(temp >= 'a' && temp <= 'z')
            temp += 'A' - 'a';
        fputc(temp, g);
    }
    fclose(f);
    fclose(g);
    return 0;
}
