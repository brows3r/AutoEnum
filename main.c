/*
AutoEnum
5/19/21
Made by: https://github.com/0x1CA3
*/

#include <stdio.h>
#include <stdlib.h>


void red() {
  printf("\033[0;35m");
}


void color1() {
  printf("\033[1;33m");
}


void normal() {
  printf("\033[0m");
}


int terminalz()
{
    char ques[100];                        
    printf("\nEnter the command you want to execute > ");
    scanf("%s", ques);
    system(ques);
    terminalz();
    return 0;
}

int outputt()
{
    char outtfile[100];

    return 0;
}


int main(int argc, char **argv)
{
    color1();
    printf("\n╔═══╗       H       ╔═══╗\n║╔═╗║    ___H___    ║╔══╝\n║║─║║╔╗╔╗|__O__|╔══╗║╚══╦═╗╔╗╔╦╗╔╗\n║╚═╝║║║║║  [']  ║╔╗║║╔══╣╔╗╣║║║╚╝║\n║╔═╗║║╚╝║  [.]  ║╚╝║║╚══╣║║║╚╝║║║║\n╚╝─╚╝╚══╝  [.]  ╚══╝╚═══╩╝╚╩══╩╩╩╝\n            V\nMade by https://github.com/0x1CA3 \nUsage: ./main [-h]\n");
    normal();
    char argsss;

    for (argsss = 0; argsss < argc; argsss++)
    {
        char const *userinput = argv[argsss];
        if (userinput[0] == '-')
        {
            switch (userinput[1])
            {
                case 'h':
                    red();
                    printf("\nCommands        Description");
                    printf("\n--------        -----------");
                    printf("\n-h              Prints out available commands.");
                    printf("\n-e              Enumerates the machine.");
                    printf("\n-c              Execute a system command.");
                    normal();
                    break;
                case 'e':
                    system("echo ");
                    system("\necho Enumerating machine.......");
                    system("echo ");
                    red();
                    system("\necho User account information");
                    system("echo -----------------------------------");
                    normal();
                    system("whoami");
                    system("id");
                    system("");
                    break;
                case 'c':
                    terminalz();
                    break;
                case '-':
                    printf("");
                default:
                    red();
                    printf("\nError! [%s] was not found.", userinput);
                    break;
            }
        }
        else
        {   
            printf("");
        }
     }
  return 0;
}