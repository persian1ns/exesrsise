#include <stdio.h>

int main()
{
    int name[] = {65, 98, 111, 108, 102, 97, 122, 108};
    int last_name[] = { 78, 97, 115, 105, 114, 105};

    printf("name: ");
    for (int i = 0; i < sizeof(name) / sizeof(name[0]); i++)
    {

        printf("%c", name[i]);
    }
    printf("\n");

    printf("last name: ");
    for (int i = 0; i < sizeof(last_name) / sizeof(last_name[0]); i++)
    {
        printf("%c", last_name[i]);
    }
    printf("\n");
   

   return 0;
}