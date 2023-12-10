#include<iostream>
using namespace std;
class stack
{
    public:
    int top;
    char a[20];
    stack()
    {
        top=-1;
    }

    void push(char x)
    {
        top=top+1;
        a[top]=x;

    }
    char pop()
    {   char s;
        s = a[top];
        top=top-1;
        return s;

    }

    int isempty()
    {
        if (top==-1) 
        {return 1;
        }
        else 
        {
            return 0;
        }

    }
};

int main()
{
    stack s1;
    char exp[20],ch;
    cout<<"Enter expression";
    cin>>exp;
    int i=0,X;
    while(exp[i]!='\0')
    {
            ch = exp[i];
            switch (ch)
            {
            case '(':
                s1.push(ch);
                break;
            case '[':
                s1.push(ch);
                break;
            case '{':
                s1.push(ch);
                break;
            case ')':
                s1.pop();
                break;
            case ']':
                s1.pop();
                break;
            case '}':
                s1.pop();
                break;
            }
            i = i + 1; // 5
        }
     if (s1.isempty())
    {
        cout << "\nExpression is well parenthesis...\n";
    }
    else
    {
        cout << "\nSorry !!! Invalid Expression or not in well parenthesized. .. \n";
    }
    return 0;
    
}