#include <stdio.h>

char smallest_character(char str[],char c)
{
    if(str[0]=='\0') {
        return '\0';
    } else if(str[0]>c) {
        return str[0];
    } else {
        char x=smallest_character(++str,c);
        str--;
        if(x=='\0')
            return str[0];
        else if(x>c)
            return x;
        else
            return str[0];
    }
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


