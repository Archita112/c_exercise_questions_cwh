//we have to make an html parser which will remove the html tag and then
//it will return the strings on which the the tags were used
#include<stdio.h>
#include<string.h>

void parser(char string[]){
    int a=strlen(string);
    printf("%d\n", a);

    for(int i=5;i<a-6;i++)
    {
        printf("%c",string[i]);
    }
}

int main(){

    char string[] = "<h1> Hello World </h1>";
    parser(string);

    return 0;
}