// Bank management system 
// Hangzhou Bank , China
//code : hasnat jani rafin
//Copyright ©2000-2021 [ All Rights Reserved ] - Hangzhou Bank

#include<iostream>
#include<string.h>
#include<fstream>
using namespace std ;

class bank 
{
    private :
        char name [30] ;
        char accname [30];
        string acctype ;

        float ibalance ;
        float deposit ;
        float withd ;

        string pass ;
    public :
        void menu(void) ;
    //1
        void getdata(void) ;
    //2
        void deposite (void) ;
    //3
        void checkbalance (void) ;
    //4
        void withdraw (void) ;
    //5
        void info (void) ;
     //6
        void quite(void) ;   
        
};

void bank :: menu()
{
    cout<< " \n\n\t*******  Hangzhou Bank  *******" ;
    cout <<"\n Welcome sir/mam  " <<endl ;

    cout <<"\nBank Menu" <<endl ;
    cout <<"\n 1. Create an account \n  " ;
    cout <<"\n 2. Deposite money \n  " ;
    cout <<"\n 3. Check balance  \n   " ;
    cout <<"\n 4. Withdraw money \n  " ;
    cout <<"\n 5. See your bank information \n " ;
    cout <<"\n 6. Quite \n" <<endl;

    cout<<"\n\t*****Copyright ©2000-2021 [ All Rights Reserved ] HANGZHOU BANK *****\t\n";


    int num ;
    cout <<" Press Number [1-6] for go : " ;
    cin >>num ;

    switch (num)
    {
    case 1 :
        getdata() ;
        break;
    case 2:
        deposite () ;
        break ;
    case 3:
        checkbalance () ;
        break;
    case 4 :
        withdraw () ;
        break ;
    case 5 :
        info () ;
        break;
    case 6 :
        quite ();
        break ;
    default:
        return menu() ;
        break;
    }

};

//1
void bank :: getdata()
{

    cout<<"\n 1. your name : ";
    cin>>name ;
    cout<<"\n 2. your Account name : ";
    cin>>accname ;
    cout<<"\n 3. Account password : " ;
    cin>>pass;
    cout<<"\n 4. your acount type : ";
    cin>>acctype ;
    cout<<"\n 5. Deposite the Initial Balance [USD] : ";
    cin>>ibalance ;

    cout<<"\n\t***** Congratulation ! Your bank account is successfully Created *******\n" ;
    cout<<"\n\t*****Copyright ©2000-2021 [ All Rights Reserved ] HANGZHOU BANK *****\t\n";
    int go;
    cout<<"\n Press '0' for go to menu : ";
    cin>>go;
    if (go==0)
    {
    menu();
    }
    else {
    cout <<" You Press wrong number !! \n Thank you , You successfully Exit " ;
    cout<<"\n\t*****Copyright ©2000-2021 [ All Rights Reserved ] HANGZHOU BANK *****\t\n";
    }
    

};

//2
void bank ::deposite()
{
    /*  float ibalance ;    float deposit ;     float withd ;*/
    string passcode ;
    cout <<" Entter your password : ";
    cin>>passcode;

    if (pass==passcode) 
    {
        cout<<"Your deposite amount : " ;
        cin>>deposit;
        ibalance+=deposit ;
        cout<<"\n Your new balance is [USD] : " <<"$ " <<ibalance <<endl  ;
        cout<<"\n\t*****Copyright ©2000-2021 [ All Rights Reserved ] HANGZHOU BANK *****\t\n";

        int go;
        cout<<"\n Press '0' for go to menu : ";
        cin>>go;
            if (go==0)
            {
            menu();
            }
        else {
        cout <<" You Press wrong number !! \n Thank you , You successfully Exit " ;
        cout<<"\n\t*****Copyright ©2000-2021 [ All Rights Reserved ] HANGZHOU BANK *****\t\n";
        }

    }
    else {
    cout <<"\n*****Your password is wrong !!" ;


        int go;
        cout<<"\n Press '0' for go to menu : ";
        cin>>go;
            if (go==0)
            {
            menu();
            }
        else {
        cout <<" You Press wrong number !! \n Thank you , You successfully Exit " ;
        cout<<"\n\t*****Copyright ©2000-2021 [ All Rights Reserved ] HANGZHOU BANK *****\t\n";
        }
}
};
//3

void bank::checkbalance()
{
    string passcode ;
    cout <<" Enter your password : " ;
    cin>>passcode;

    if (pass==passcode) 
        {
        cout<<"\n Your total balance is [USD] : " <<"$ " <<ibalance <<endl ;
        cout<<"\n\t*****Copyright ©2000-2021 [ All Rights Reserved ] HANGZHOU BANK *****\t\n";

            int go;
            cout<<"\n Press '0' for go to menu : ";
            cin>>go;
            if (go==0)
            {
            menu();
            }
            else {
            cout <<" You Press wrong number !! \n Thank you , You successfully Exit " ;
            cout<<"\n\t*****Copyright ©2000-2021 [ All Rights Reserved ] HANGZHOU BANK *****\t\n";
            }
        }
    else 
    {
    cout <<"\n*****Your password is wrong !!" ;


        int go;
        cout<<"\n Press '0' for go to menu : ";
        cin>>go;
        if (go==0)
            {
            menu();
            }
        else
        {
            cout <<" You Press wrong number !! \n Thank you , You successfully Exit " ;
            cout<<"\n\t*****Copyright ©2000-2021 [ All Rights Reserved ] HANGZHOU BANK *****\t\n";
        }
    }


};

//4

void bank ::withdraw()
{
    string passcode ;
    cout <<" Entter your password : ";
    cin>>passcode;

    if (pass==passcode) 
    {
        cout <<" Your Current balance is :" <<ibalance <<endl;

        cout<<"Your withdraw amount : " ;
        cin>>withd;
        ibalance-=withd ;
        cout<<"\n Your new balance is [USD] : " <<"$ " <<ibalance <<endl ;
        cout<<"\n\t*****Copyright ©2000-2021 [ All Rights Reserved ] HANGZHOU BANK *****\t\n";
            int go;
            cout<<"\n Press '0' for go to menu : ";
            cin>>go;
            if (go==0)
            {
            menu();
            }
            else {
            cout <<" You Press wrong number !! \n Thank you , You successfully Exit " ;
            cout<<"\n\t*****Copyright ©2000-2021 [ All Rights Reserved ] HANGZHOU BANK *****\t\n";
            }

    }
    else {
    cout <<"\n*****Your password is wrong !!"<<endl ;
    cout<<"\n\t*****Copyright ©2000-2021 [ All Rights Reserved ] HANGZHOU BANK *****\t\n";


    int go;
    cout<<"\n Press '0' for go to menu : ";
    cin>>go;
    if (go==0)
{
    menu();
}
    else {
    cout <<" You Press wrong number !! \n Thank you , You successfully Exit " ;
    cout<<"\n\t*****Copyright ©2000-2021 [ All Rights Reserved ] HANGZHOU BANK *****\t\n";
}
}


};

//5
void bank ::info()
{
    string  passcode;
    cout <<"Enter your password :" ;
    cin>>passcode;

    if (pass==pass){
    cout <<" welcome "<<name<<endl ;
    cout <<"\n\t ***** see your all information *******\n\n " ;

    cout<<"\n 1. your name : " <<name ;
    cout<<"\n 2. your Account name : " <<accname ;
    cout<<"\n 3. Account password : " <<pass;
    cout<<"\n 4. your acount type : " <<acctype ;
    cout<<"\n 5. Deposite the Initial Balance [USD] : " <<"$" <<ibalance   ;
    cout<<endl ;
    cout<<"\n\t*****Copyright ©2000-2021 [ All Rights Reserved ] HANGZHOU BANK *****\t\n";

    int go;
    cout<<"\n Press '0' for go to menu : ";
    cin>>go;
    if (go==0)
    {
    menu();
    }
    else {
    cout <<" You Press wrong number !! \n Thank you , You successfully Exit " ;
    cout<<"\n\t*****Copyright ©2000-2021 [ All Rights Reserved ] HANGZHOU BANK *****\t\n";
    }

    }
    else {
    cout <<"\n*****Your password is wrong !!" ;


    int go;
    cout<<"\n Press '0' for go to menu : ";
    cin>>go;
    if (go==0)
    {
    menu();
    }
    else {
    cout <<" You Press wrong number !! \n Thank you , You successfully Exit " ;
    cout<<"\n\t*****Copyright ©2000-2021 [ All Rights Reserved ] HANGZHOU BANK *****\t\n";
    }
    
    }
};
//6
void bank ::quite()
{
    cout <<"\n\n You successfully Logout from bank server" <<endl ;
    cout <<"\n\t********* Hangzhou Bank *********\t\n" ;
     cout<<"\n\t***** Copyright ©2000-2021 [ All Rights Reserved ] *****\t\n" <<endl;
}

int main ()
{
    bank obj ;
    obj.menu();
}
