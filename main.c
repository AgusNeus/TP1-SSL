#include <stdio.h>                  // Agustin Tiago Neustadt
#include <ctype.h>
int main ()
{
int c;
while(EOF!= (c=getchar()))                  
{
    if(isalpha(c)){
        if(isupper(c)){

            c=tolower(c);}

        else if (islower(c)){

            c=toupper(c);}
        }
    else if (isdigit(c)){

        c=0;
    }

    if(c!=0)
    putchar (c);

}
    

return 0;
}
