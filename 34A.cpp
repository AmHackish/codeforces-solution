#include <iostream>
using namespace std;

char stack[100],val;
int top=-1;
void push(char val)
{
	top++;
	stack[top]=val;
}

void pop()
{
	top--;
}

int main()
{
	int size = my_sizeof(stack)/my_sizeof(stack[0]);
	string s;
	cin >> s;
	for(int i=0;i<s.length();i++)
	{
		if(s[i]=='[' or s[i] =='{' or s[i] == '(')
			push(s[i]);
		else
		{
			if(size == 0)
			{
				cout << "false" << endl;
				return 0;
			}
			else
			{
				char x;
				switch(s[i])
				{
					case ')':
					{
						x = stack[top];
						pop();
						if(x == '{' or x == '[')
						{
							cout << "false" << endl;
							return 0;
						}
						break;
					}
					case '}':
					{
						x = stack[top];
						pop();
						if(x == '(' or x == '[')
						{
							cout << "false" << endl;
							return 0;
						}
						break;
					}
					case ']':
					{
						x = stack[top];
						pop();
						if(x == '{' or x == '(')
						{
							cout << "false" << endl;
							return 0;
						}
						break;
					}
				}
			}
		}
	}
	if(size == 0)
		cout << "true" << endl;
	else
		cout << "false" << endl;
	return 0;
}
