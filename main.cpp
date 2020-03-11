#include "windows.h"
#include "stdlib.h"
#include "stdio.h"
#include "conio.h"
#include "iostream"

using namespace std;

int main()
{
int a; string array[44] = {"/", "A","B","C","D","E","F","G","H","I","J","K","L","M","N", "O","P","Q","R","S","U","V","T","Y","W","Z","0","1","2","3","4","5","6","7","8","9","@"," ","!","#","?","*", "\\"};
system("color A");
while (1)
   {
        Sleep(0); 
        for (int i=0; i<20; i++)
   {
a=rand()%44; 
cout << " " << array[a];
cout << " ";
    }
       cout << endl;
    }
getch();

return 0;

}
