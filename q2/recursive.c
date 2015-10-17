#include <stdio.h>
#include <time.h>

char smallest_character(char str[],char c)
{
    if(str[0]==127) {
        return 127;
    } else if(str[0]>c) {
        return str[0];
    } else {
        char x=smallest_character(++str,c);
        str--;
        if(x==127){
            return str[0];
	}
        else if(x>c)
            return x;
        else{
            return str[0];
	}
    }
}

int main(int argc,char *argv[])
{
    char array[]= {'a','c','e','d','e','f','g','h','k','m','o','q','s','t','w','x'};
    char c='y';
    char result_c;
    clock_t start,end;

    start = clock();
    result_c = smallest_character(array,c);
    end = clock();

    printf("%c\n",result_c);
    printf("%lf\n", (end-start)/(double)(CLOCKS_PER_SEC));

    return 0;
}


