#include<iostream>
#include<string.h>
#include<ctype.h>
using namespace std;
#define MAX 50
class Stack{
    private:
        char str1[MAX];//array to store character
        char str[MAX]; //original input string
        int top; //top of the stack
        int length;//length of the string
        int count;//counter for palindrome check
    public:
        Stack(){
            top=-1;//empty satck
            length=0;//initialize length to 0
            count=0;//counter for palindrome check
        }
    void getstring(){//function to get input string
        cout<<"\nEnter a string:";
        cin.getline(str,MAX);//to read an entire line therefore getline function is used
        length=strlen(str);
    }
    void extractstring(){
        char temp[MAX];//temporay array
        int j=0;//index for the new string
        for(int i=0;i<length;i++)//copy original string to temporary string
        {
            temp[i]=str[i];
        }
        for(int i=0;i<length;i++){//check if character is an alphabet
            if(isalpha(temp[i])){
                str[j++]=tolower(temp[i]);
            }
        }
        length=j; //update length with the new string length
    }
    //function to push character onto the stack
    void pushstr(char ch){
        if(top==MAX-1)
        {
            cout<<"\nsatck overflow";
            return;
        }
        str[++top]=ch;//increment top before assigning
    }
    //function to pop a character from the stack
    char popstr(){
        if(top==-1){
            cout<<"\nstack underflow";
            return '\n';
        }
        return str[top--];//decrement top after retreiving
    }
    void checkpalindrome(){
        for(int i=0;i<length;i++)
        {
            pushstr(str[i]);//push each character in stack
        }
     for (int i=0;i<length;i++)
    {
        if(str[i]==popstr())
        {//compare characters with popped characters
            count++;//increment counter if they match
        }
    }
    if(count==length){
        cout<<"\nThe entered string is a palindrome ";
    }
    else{
        cout<<"\nthe entered string is not a palindrome";
    }

}
//function to display the string in reverse order
void displayreverse(){
    cout<<"\nstring in reverese order";
    for(int i=length-1;i>=0;i--){
        cout<<str[i];//print characters starting from the last
    }
    cout<<endl;
}
};
int main(){
    Stack obj;
    obj.getstring();
    obj.extractstring();
    cout<<"\nstring after removing punctuations and symbols:"<<endl;
    obj.displayreverse();
    obj.checkpalindrome();
    return 0;

}