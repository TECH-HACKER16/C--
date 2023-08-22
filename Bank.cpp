#include<iostream>
using namespace std;

class bank
{
    private: char name[30];

            int Account_No,Balance;

    public: void getdata(int i)
{
                cout<<"\nEnter Name: ";
                cin>>name;
                cout<<"Enter balance: ";
                cin>>Balance;
                Account_No=i;
}
            void credit(int x)
{
                Balance += x;
}
             void debit(int x)
{
                Balance -= x;
}
            void display()
{
                cout<<Account_No<<"\t\t"<<name<<"\t\t"<<Balance<<endl;
}
            void getname(){
                    cout<<"\nYou have selected "<<name<<endl;
}

};

int main()
{
    int i,x,ch,z;
    char n[30];
    bank a[100],b;

    cout<< "Enter the number of accounts to be saved :";
    cin>>z;
    for(int i=1;i<=z;i++)
{
        a[i].getdata(i);
}
    cout<<"\nAccount No        Name      Balance\n";
    for(int i=1;i<=z;i++)
{
        a[i].display();
}

    cout<<"\nEnter Account_No: ";
    cin>>i;
    a[i].getname();
    cout<<"\nInput 1 for credit\n";
    cout<<"Input 2 for debit\n\n";
    cout<<"Enter your choice";
    cin>>ch;
    cout<<"\nEnter your amount: ";
    cin>>x;
    if(ch==1)
{
        a[i].credit(x);
        a[i].display();
        cout<< "\nSuccessfully credited "<<x\n;
}
    else if(ch==2)
{
        a[i].debit(x);
        a[i].display();
        cout<< "\nSuccefully debited "<<x\n;
}
    else
{
        cout<<"Incorrect choice";
}
    return 0;
}
