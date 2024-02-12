#include <stdio.h>
#include <windows.h>
#include <stdbool.h>

// function ProtoType
int entryPrompt();
int entryCheck();
int timeVlue();
int pasSinG();
void exiT();
// function ProtoType

int main()
{
    system("cls");
    entryPrompt();
}

// <----------------------entry start or exit Prompt functon;_1--------------------->

int entryPrompt()
{
    int check=0;
    
    

    printf("\t\tEnter 1 to start the TIMER");
    printf("\t\tEnter 2 to exit the TIMER");
    scanf("%d", &check);
    printf("\n\n%d",check);
    entryCheck(check);
}

// <----------------------entry start or exit checking functon;_2--------------------->

int entryCheck(int a)
{
    if(a==1){
            timeVlue();
    }else if (a==0)
    {
      exiT();
    }else{

    }
    
}

// <----------------------geting the time value functon;_3--------------------->

int timeVlue()
{
    // first part of the code to make the infity loop to run the program again and again:
    short int FirstVlue;
    while (1) // loop test pass:
    {

        printf("Enter the time :\n "); // test pass getting the value;
        scanf("%hd", &FirstVlue);      // test passed storing value

        if (FirstVlue != 0)
        { // if condition for determin in or out loop
            printf("test the condition");
        }
        else
        {
          pasSinG();
        }
    }
}
    

// <----------------------EXIT  functon;_...n...--------------------->

void exiT(){
    system("exit");
}

int pasSinG()
    {
        entryPrompt();
    }
