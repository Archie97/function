#include <stdio.h>
#include<string.h>

unsigned int FindFunctionDefn( const char* strFunctionName, const char* strSourceCode ){
int l,i,j;
   for (l = 0; strFunctionName[l] != '\0'; l++);
int res=0;
    for (i = 0, j = 0; strSourceCode[i] != '\0' && strFunctionName[j] != '\0'; i++)
    {
        
        if (strSourceCode[i] == strFunctionName[j])
        {
            j++;
        }
        else
        {
        	if(strSourceCode[i]==92&&strSourceCode[i+1]=='n')
        	res++;
            j = 0;
        }
    }

    if (j == l)
    {
        printf("Function is at line %d",res+1);
    }else return 0;
   
    return res+1;
}
int main()
{
    char str1[80], str2[80];
    int l, i, j;

    printf("Enter first string: ");
    gets(str1);

    printf("Enter second string: ");
    gets(str2);

    //finding length of second string
 unsigned int res=FindFunctionDefn( str2, str1 );
    return 0;
}
