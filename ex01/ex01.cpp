// ex01.cpp : �������̨Ӧ�ó������ڵ㡣
//�����Ҫ����������vs2017��github�����ӵ�
#include "stdafx.h"//�������һ��Ҫ������include��ǰ��
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

