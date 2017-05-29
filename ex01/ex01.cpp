// ex01.cpp : 定义控制台应用程序的入口点。
//这个主要是用来测试vs2017与github的链接的
#include "stdafx.h"//这个代码一定要在其他include的前面
#include <iostream>
using namespace std;
void swap(int x,int y)
{
	int t; t = x; x = y; y = t;
}

int main()
{
	int a, b;
	cin >> a >> b; swap(a, b);
	cout << "a=" << ",b=" << endl;
    return 0;
}

