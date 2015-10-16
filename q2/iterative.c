#include <stdio.h>

char smallest_character(char str[],char c)
{
    int i = 0;
    while(str[i]!='\0') {
        if(str[i]>c) {
            return str[i];
        }
        i++;
    }
    return str[0];
}
int main(int argc,char *argv[])
{
    char array[]= {'a','c','e','k','s','t','u'};
    char c='t';
    char result_c;
    result_c = smallest_character(array,c);
    printf("%c\n",result_c);

    return 0;
}


