#include "conio.h"//C++检测键盘输入
//程序执行到kbhit()时，等待输入，但是不会停止而是继续运行，有输入时kbhit()才就返回一个非零值，否则返回0。下面是一个例子。
//程序执行到getch()，会保持等待状态，请求用户输入。按下一次按键后，读取一个字符，然后程序继续执行。这个字符可以赋值给其它变量。
int mainss()
{
	int a=0, b=0,c=0,d=0;
	/*
	c=getchar();
	d=getchar();	
	while(c)
	{
		c=getchar();
		system("cls");	
		for(b;b<=a;b++)
		{
			printf(" ");
			
		}
		printf("OO");Sleep(1000);	a++;
		
	}*/
    while(!kbhit())
    {
        cout<<"Now input now!\n";Sleep(1000);
    }

    return 0;

}