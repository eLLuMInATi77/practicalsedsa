#include<iostream>
#include<string.h>
#include<ctype.h>
using namespace std;
#define MAX 50

class Stack
{
public:
    char temp[MAX],str[MAX],data[MAX],i,j;
    int top=-1,length=0,count=0;
    

    void pushData(char);
    char popData();
	void getString();
    void checkPalindrome();
    void extractString();
    void displayReverse();
};
 
int main()
{
    Stack obj;
    obj.getString();
    cout<<"\n Extracted string: ";
    obj.extractString();
    cout<<"\n Reverse of entered string: ";
    obj.displayReverse();
    obj.checkPalindrome();
    return 0;
}

void Stack::getString()
{
    cout<<"\n Enter a String: ";
    cin.getline(str,MAX);

    length=strlen(str);
}

void Stack::extractString()
{
    char temp[MAX];
    int i,j;
    for(i=0; i<length; i++)
    {
        temp[i]=str[i];
    }
    j=0;
    for(i=0; i<length; i++ )
    {
        if(isalpha(temp[i]))
        {
            str[j]=tolower(temp[i]);
            j++;
        }
    }

    length=j;   //update length with new str length
  
		    i=0;
            for(int j=0; j<length; j++)
            {
            str[i]=str[j];
             i++;
            }

         for(int i=0; i<length; i++)   
         {
            cout<<str[i];  
}
}

void Stack::checkPalindrome()
{
    for(int i=0; i<length; i++)
        pushData(str[i]);

    for(int i=0; i<length; i++)
    {
        if(str[i]==popData())
            count++;
    }

    if(count==length) 
    
    {     for(i=0;i<length;i++)
         {
          if(str[i]==temp[i]);  
        }
        cout<<"\n Entered string is a Palindrome. \n";
    }
    else  cout<<"\n Entered string is not a Palindrome. \n";
}

void Stack::displayReverse()
{   //cout<<"Reverse String: ";
    for(int i=length-1; i>=0; i--)
{
        cout<<str[i];
}
}

void Stack::pushData(char temp)
{
    if(top==MAX-1)
    { 
        cout<<"\n Stack Overflow!!!";
        return;
    }

    top++;
    data[top]=temp;

}

char Stack::popData()
{
    if(top==-1)
    {
        cout<<"\n Stack Underflow!!!";
        return 0;
    }
    char temp=data[top];
    top--;
    return temp;
}

       
