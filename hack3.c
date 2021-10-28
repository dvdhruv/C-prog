#include<stdio.h>
void main()
{
    char s[150];
    scanf("%s",&s);
    char L,R,D,U;
    int X=0,Y=0,i;
        for(i=0;s[i]!='\0';i++)
            {if(s[i]=='L')
                {X--;
                }

            if(s[i]=='R')
                {X++;
                }

            if(s[i]=='D')
                {Y--;
                }

            if(s[i]=='U')
                {Y++;
                }
            }
                    printf("%d %d",X,Y);
}
