#include <stdio.h>
void welcomingDisplay()
{
    void welcomingDisplayTop();
    welcomingDisplayTop();
    void welcomingDisplayMiddle();
    welcomingDisplayMiddle();
    void welcomingDisplayBottom();
    welcomingDisplayBottom();
}
void welcomingDisplayTop()
{
    for (int i = 0; i < 40; i++)
        printf(" ");
    for (int i = 0; i < 110; i++)
        printf("-");
    printf("\n");
    for (int i = 0; i < 80; i++)
        printf(" ");
    printf("*WELCOME TO HSTU ONLINE LIBRARY*\n");
    for (int i = 0; i < 40; i++)
        printf(" ");
    for (int i = 0; i < 110; i++)
        printf("-");
    printf("\n\n\n");
}
void welcomingDisplayMiddle()
{
    for (int i = 0; i < 76; i++)
        printf(" ");
    printf("\"***When in doubt go to the library***\"");
    printf("\n\n\n\n\n\n");
}
void welcomingDisplayBottom()
{
    for (int i = 0; i < 40; i++)
        printf(" ");
    printf("Here You can get Various INFO about Various Books...\n\n");
    for (int i = 0; i < 90; i++)
        printf(" ");
    printf("Enter N for Next Steps--> ");
}
void OptionHead()
{
    char Next;
    scanf(" %c", &Next);
    printf("\n\n\n\n");
    while (Next != 'N')
    {
        printf("Please Enter N in UPPER-CASE correctly--> ");
        scanf(" %c", &Next);
    }

    if (Next == 'N')
    {
        printf("\n\n\n\n\n\n");
        for (int i = 0; i < 50; i++)
            printf("-");
        printf("\n");
        for (int i = 0; i < 10; i++)
            printf(" ");
        printf("OPTIONS FOR EXPLORING-->");
        printf("\n");
        for (int i = 0; i < 50; i++)
            printf("-");
    }
    printf("\n\n\n\n");
    void OptionsBody();
    OptionsBody();
}
void OptionsBody()
{
    printf("There are various categories of Books are AVAILABLE! \n\n");
    printf("Please Enter C to See Book Categories-->");
    char BookC;
    scanf(" %c",&BookC);
    while (BookC!='C')
    {
        printf("Please Enter C in UPPER-CASE correctly-->");
        scanf(" %c",&BookC);
    }
    
    
}

int main()
{

    welcomingDisplay();
    OptionHead();

    return 0;
}