#include <iostream>
#include <string.h>
#include <stdlib.h>
using namespace std;

class HumanResourceManager
{
public:
    int option,option1,option2,option3;
    int i,n,counter;
    double deposit,cost,change,businessmoney,realbusinessmoney,expenseP,eggsB,eggsL,makeggsL,broeggsL,bapeggsL,makchicken,brochicken,bapchicken,chickenB,makchickenB,brochickenB,bapchickenB,chickenS,makchickenS,brochickenS,bapchickenS,chickenD,makchickenD,brochickenD,bapchickenD;
    string name,surname,statement,password;
    void newEmployee ()
    {
        cout<<"                      ***Add Employee***"<<endl;
        cout<<""<<endl;
        cout<<""<<endl;
        for(i=0;i<4;i++)
        {
            if(prop[i].name=="")
            {
                cout<<"Enter Employee Full Name's'"<<endl;
                cin>>prop[i].name;
                cout<<"Enter Employee Surname"<<endl;
                cin>>prop[i].surname;
                cout<<"Enter Employee ID"<<endl;
                cin>>prop[i].id;
                cout<<"Enter Employees AGE"<<endl;
                cin>>prop[i].age;
                cout<<""<<endl;
                cout<<""<<endl;
                cout<<" EMPLOYEE ADDED SUCCESSFULLY"<<endl;
            }
        }
        system("PAUSE");
        system("CLS");
    }
    void removeEmployee ()
    {
        cout<<"                      ***Remove Employee***"<<endl;
        cout<<""<<endl;
        cout<<"Enter Employee Full Name's'"<<endl;
        cin>>name;
        cout<<"Enter Employee Surname"<<endl;
        cin>>surname;
        for(i=0;i<4;i++)
        {
            if(name==prop[i].name)
            {
                cout<<"Reason for removal..."<<endl;
                getline(cin,statement);
                prop[i].name="";
                prop[i].surname="";
                prop[i].id="";
                prop[i].age="";
                cout<<""<<endl;
                cout<<""<<endl;
                cout<<" EMPLOYEE REMOVED SUCCESSFULLY"<<endl;
            }
        }
        system("PAUSE");
        system("CLS");
    }
    void seeEmployee ()
    {
        cout<<"                      ***Employees***"<<endl;
        cout<<""<<endl;
        cout<<" Currently Available Employees                   <99> Go back"<<endl;
        cout<<""<<endl;
        for(i=0;i<4;i++)
        {
            cout<<"NAME :"<<prop[i].name<<"                   WEEKLY SALARY :R"<<prop[i].weeklyProfit<<endl;
            cout<<"SURNAME :"<<prop[i].surname<<endl;
            cout<<"ID :"<<prop[i].id<<"                   MONTHLY SALARY :R"<<prop[i].monthlyProfit<<endl;
            cout<<"AGE :"<<prop[i].age<<"                   NO. OF CARS WASHED :"<<prop[i].counter<<" cars"<<endl;
            cout<<""<<endl;
            cout<<""<<endl;
            cout<<""<<endl;
        }
        cout<<""<<endl;
        cout<<""<<endl;
        do
        {
            cin>>option1;
        }
        while(option1!=99);
        system("PAUSE");
        system("CLS");
    }
    void empPortal ()
    {
        do
        {
            cout<<"                      ***Employee Portal***"<<endl;
            cout<<""<<endl;
            cout<<" SELECT                                              <99> Go back"<<endl;
            cout<<""<<endl;
            cout<<"  #1 RECRUIT EMPLOYEE(S)                    #2 REMOVE EMPLOYEE(S)"<<endl;
            cout<<""<<endl;
            cout<<""<<endl;
            cout<<"                        #3 SHOW EMPLOYEES"<<endl;
            cout<<""<<endl;
            cout<<""<<endl;
            cin>>option;
            system("PAUSE");
            system("CLS");
            switch(option)
            {
            case 1:
                newEmployee();
                break;
            case 2:
                removeEmployee();
                break;
            case 3:
                seeEmployee();
                break;
            default:
                break;
            }
        }while(option!=99);
        system("PAUSE");
        system("CLS");
    }
    void complaints ()
    {
    }
    void businessPlans ()
    {
    }
    void contractDetails ()
    {
        cout<<"                      ***Employee Contract Details***"<<endl;
        cout<<""<<endl;
        cout<<"                                                 <99> Go back"<<endl;
        cout<<""<<endl;
        cout<<"  Thank you all Employees this business is your platform "<<endl;
        cout<<"  to work in a very progressive environment"<<endl;
        cout<<"  as we offer an exclusive contract that :"<<endl;
        cout<<""<<endl;
        cout<<"  ::employee receives minimum wage of 16.25% of money made per week,"<<endl;
        cout<<"   prior to that the employee's' washes 1 car per day."<<endl;
        cout<<""<<endl;
        cout<<"  ::employee will receive full responsibility for loss/theft/damage of any particular"<<endl;
        cout<<"   product or incident regarding"<<endl;
        cout<<"   customer services offered by the rightful employee's'"<<endl;
        cout<<""<<endl;
        cout<<"  ::employee will not recieve compensation for absent days, thus will be deducted"<<endl;
        cout<<"   from money made at end of week."<<endl;
        cout<<""<<endl;
        cout<<""<<endl;
        cout<<"                      ***Manager Contract Details***"<<endl;
        cout<<""<<endl;
        cout<<"  Thank you as a Manager this business is your platform "<<endl;
        cout<<"  to work in a very progressive environment"<<endl;
        cout<<"  as we offer an exclusive contract that :"<<endl;
        cout<<""<<endl;
        cout<<"  ::manager receives minimum wage of 16.25% of money made per week,"<<endl;
        cout<<"   prior to that the manager supervises employee's' productivity,incoming transactions,"<<endl;
        cout<<"   replacement of depleted products and business expenses"<<endl;
        cout<<""<<endl;
        cout<<"  ::manager will receive full responsibility for loss/theft/damage of any particular"<<endl;
        cout<<"   product or incident regarding"<<endl;
        cout<<"   customer services offered by the rightful employee's'"<<endl;
        cout<<""<<endl;
        cout<<"  ::manager will not recieve compensation for absent days, thus will be reprimanded"<<endl;
        cout<<"   as absenteeism will not be tolerated as a manager."<<endl;
        cout<<"   in his/her line of duty."<<endl;
        cout<<""<<endl;
        cout<<""<<endl;
        do
        {
            cin>>option1;
        }
        while(option1!=99);
        system("PAUSE");
        system("CLS");
    }

private:
    struct Farm
    {
        string name,surname,id,age;
        int counter;
        double deposit,cost,income,dailyProfit,weeklyProfit,monthlyProfit;
    };
    struct Farm prop[4];
    struct Farm lab[4];
};










void addLoan ()
{
cout<<"                      ***Add Customer Loans***"<<endl;
cout<<""<<endl;
cout<<""<<endl;
   for(int i=0;i<4;i++)
    {
        if(prop[i].name=="")
        {
            cout<<"Enter Customer Full Name's'"<<endl;
            cin>>lab[i].name;
            cout<<"Enter Customer Surname"<<endl;
            cin>>lab[i].surname;
            cout<<"Enter Customer ID"<<endl;
            cin>>lab[i].id;
            cout<<"Enter Customer AGE"<<endl;
            cin>>lab[i].age;
            cout<<""<<endl;
            cout<<""<<endl;
            cout<<" Customer ADDED SUCCESSFULLY"<<endl;
        }
    }
system("PAUSE");
system("CLS");
}

void removeLoan ()
{
cout<<"                     ***Remove Customer Loans***"<<endl;
cout<<""<<endl;
cout<<"Enter Customer Full Name's'"<<endl;
cin>>name;
cout<<"Enter Customer Surname"<<endl;
cin>>surname;
   for(i=0;i<4;i++)
    {
        if(name==prop[i].name)
        {
            lab[i].name="";
            lab[i].surname="";
            lab[i].id="";
            lab[i].age="";
            cout<<""<<endl;
            cout<<""<<endl;
            cout<<" Customer REMOVED SUCCESSFULLY"<<endl;
        }
    }
system("PAUSE");
system("CLS");
}

void allLoan ()
{
cout<<"                      ***SHOW ALL LOANS***"<<endl;
cout<<""<<endl;
cout<<" Currently OWING CUSTOMERS                     <99> Go back"<<endl;
cout<<""<<endl;
for(i=0;i<4;i++)
{
    cout<<"NAME :"<<lab[i].name<<endl;
    cout<<"SURNAME :"<<lab[i].surname<<endl;
    cout<<"ID :"<<lab[i].id<<endl;
    cout<<"AGE :"<<lab[i].age<<endl;
    cout<<""<<endl;
    cout<<""<<endl;
    cout<<""<<endl;
}
cout<<""<<endl;
cout<<""<<endl;
do
{
cin>>option1;
}
while(option1!=99);
system("PAUSE");
system("CLS");
}

void loans ()
{
 cout<<"                      ***LOANS***"<<endl;
cout<<""<<endl;
cout<<"Select                                              <99> Go back"<<endl;
cout<<""<<endl;
cout<<""<<endl;
cout<<"       <1> ADD CUSTOMER LOAN                    <2> REMOVE CUSTOMER LOAN"<<endl;
cout<<""<<endl;
cout<<""<<endl;
cout<<"                         <3> SHOW ALL CUSTOMER LOANS "<<endl;
cout<<""<<endl;
cout<<""<<endl;
cin>>option2;
system("PAUSE");
system("CLS");
    switch(option1)
    {
    case 1:
        addLoan();
        system("PAUSE");
        system("CLS");
        break;
    case 2:
        removeLoan();
        system("PAUSE");
        system("CLS");
        break;
    case 3:
        allLoan();
        system("PAUSE");
        system("CLS");
        break;
    }
while(option1!=99);
system("PAUSE");
system("CLS");
}

void chickenFood ()
{
do
{
cout<<"                      ***FARM Food & Expenses***"<<endl;
cout<<""<<endl;
cout<<"Select Stock-Out Products :                      <99> Go back"<<endl;
cout<<""<<endl;
cout<<""<<endl;
cout<<" <1> R8,50  baby chickens                 <2> R360  vaccination  "<<endl;
cout<<""<<endl;
cout<<" <3> R278  Starter pack                   <4> R260  Grower pack"<<endl;
cout<<""<<endl;
cout<<" <5> R250  Finisher pack                  <6> R25  Shavings"<<endl;
cout<<""<<endl;
cout<<" <7> R220  1L Vira kill                   <8> R45 Stress pack"<<endl;
cout<<""<<endl;
cout<<""<<endl;
cout<<" Total :R"<<expenseP<<endl;
cout<<""<<endl;
cin>>option2;
    switch(option2)
    {
    case 1:
        cout<<"How many baby chickens purchased ?"<<endl;
        cin>>n;
        expenseP=expenseP+8.50*n;
        break;
    case 2:
        cout<<"How many vaccination purchased ?"<<endl;
        cin>>n;
        expenseP=expenseP+360*n;
        break;
    case 3:
        cout<<"How many Starter pack purchased ?"<<endl;
        cin>>n;
        expenseP=expenseP+278*n;
        break;
    case 4:
        cout<<"How many Grower pack purchased ?"<<endl;
        cin>>n;
        expenseP=expenseP+260*n;
        break;
    case 5:
        cout<<"How many Finisher pack purchased ?"<<endl;
        cin>>n;
        expenseP=expenseP+250*n;
        break;
    case 6:
        cout<<"How many Shavings purchased ?"<<endl;
        cin>>n;
        expenseP=expenseP+25*n;
        break;
    case 7:
        cout<<"How many 1L Vira kill purchased ?"<<endl;
        cin>>n;
        expenseP=expenseP+220*n;
        break;
    case 8:
        cout<<"How many Stress pack purchased ?"<<endl;
        cin>>n;
        expenseP=expenseP+45*n;
        break;
    }
}
while(option2!=99);
system("PAUSE");
system("CLS");
}


void allExpenses ()
{
    realbusinessmoney=businessmoney-expenseP-0;
do
{
cout<<"                      ***ALL EXPENSES & INCOME***"<<endl;
cout<<""<<endl;
cout<<"                                                     <99> Go back"<<endl;
cout<<""<<endl;
cout<<""<<endl;
cout<<"   Total Farm Food :R"<<expenseP<<"               Total Farm Equipment :R"<<"0,00"<<endl;
cout<<""<<endl;
cout<<"            Available Balance :R"<<businessmoney<<endl;
cout<<""<<endl;
cout<<"            Current Balance :R"<<realbusinessmoney<<endl;
cout<<""<<endl;
cout<<""<<endl;
cin>>option2;
}
while(option2!=99);
system("PAUSE");
system("CLS");
}

void busExpenses ()
{
do
{
cout<<"                      ***FARM Expenses***"<<endl;
cout<<""<<endl;
cout<<"Select                                              <99> Go back"<<endl;
cout<<""<<endl;
cout<<""<<endl;
cout<<"       [1] FARM FOOD                       [2] FARM EQUIPMENT"<<endl;
cout<<""<<endl;
cout<<""<<endl;
cout<<"                         [3] SHOW ALL EXPENSES "<<endl;
cout<<""<<endl;
cout<<""<<endl;
cin>>option1;
system("PAUSE");
system("CLS");
    switch(option1)
    {
    case 1:
        chickenFood();
        system("PAUSE");
        system("CLS");
        break;
    case 2:

        system("PAUSE");
        system("CLS");
        break;
    case 3:
        allExpenses();
        system("PAUSE");
        system("CLS");
        break;
    }
}
while(option1!=99);
system("PAUSE");
system("CLS");
}

void empSalary ()
{
cout<<"                     ***Employee Salaries Report***"<<endl;
cout<<""<<endl;
cout<<"                                                  <99> Go back"<<endl;
cout<<""<<endl;
for(i=0;i<4;i++)
{
    cout<<"NAME :"<<prop[i].name<<"                   DAILY SALARY :R"<<prop[i].dailyProfit<<endl;
    cout<<"SURNAME :"<<prop[i].surname<<"            WEEKLY SALARY :R"<<prop[i].weeklyProfit<<endl;
    cout<<""<<endl;
    cout<<"                                          MONTHLY SALARY :R"<<prop[i].monthlyProfit<<endl;
    cout<<""<<endl;
    cout<<""<<endl;
    cout<<""<<endl;
}
cout<<""<<endl;
cout<<""<<endl;
do
{
cin>>option1;
}
while(option1!=99);
system("PAUSE");
system("CLS");
}

void empProgress ()
{
cout<<"                      ***Employee Progress Report***"<<endl;
cout<<""<<endl;
cout<<"                                                  <99> Go back"<<endl;
cout<<""<<endl;
for(i=0;i<4;i++)
{
    cout<<"NAME :"<<prop[i].name<<"                   WEEKLY SALARY :R"<<prop[i].weeklyProfit<<endl;
    cout<<"SURNAME :"<<prop[i].surname<<endl;
    cout<<"ID :"<<prop[i].id<<"                    NO. OF CHICKENS SLAUGHTERD :"<<prop[i].counter<<" chickens"<<endl;
    cout<<"AGE :"<<prop[i].age<<endl;
    cout<<""<<endl;
    cout<<""<<endl;
    cout<<""<<endl;
}
cout<<""<<endl;
cout<<""<<endl;
do
{
cin>>option1;
}
while(option1!=99);
system("PAUSE");
system("CLS");
}


void businessSalary ()
{
cout<<"                      ***Business Salaries Report***"<<endl;
cout<<""<<endl;
cout<<"                                                  <99> Go back "<<endl;
cout<<"                DAY SALARY :R"<<businessmoney<<endl;
cout<<"            WEEKLY SALARY :R"<<businessmoney<<endl;
cout<<""<<endl;
cout<<"             MONTHLY SALARY :R"<<businessmoney<<endl;
cout<<""<<endl;
cout<<""<<endl;
cout<<"            Actual Business Salary :R"<<realbusinessmoney<<endl;
cout<<""<<endl;
cout<<""<<endl;
do
{
cin>>option1;
}
while(option1!=99);
system("PAUSE");
system("CLS");
}


void buyEggs ()
{
cout<<"                     ***BUY EGGS***"<<endl;
cout<<""<<endl;
cout<<" SELECT                                                 <99> Go back"<<endl;
cout<<""<<endl;
cout<<""<<endl;
cout<<"                    <1> buy EGGS"<<endl;
cout<<""<<endl;
cout<<""<<endl;
cin>>option2;
system("PAUSE");
system("CLS");
switch(option2)
{
case 1:
do
{
cout<<" HOW MANY EGGS TO BUY..."<<endl;
cin>>eggsB;
cout<<" Enter PASSWORD"<<endl;
cin>>password;
}
while(password!="1234");
    eggsB=eggsB+eggsB;
cout<<""<<endl;
cout<<""<<endl;
cout<<" UPDATED SUCCESSFULLY..."<<endl;
cout<<""<<endl;
cout<<""<<endl;
do
{
cin>>option2;
}
while(option2!=99);
break;
}
}

void buyChickens ()
{
cout<<"                     ***BUY CHICKENS***"<<endl;
cout<<""<<endl;
cout<<" SELECT                                                 <99> Go back"<<endl;
cout<<""<<endl;
cout<<" <1>  mkokoroshi CHICKEN                              <2>  broiller CHICKEN"<<endl;
cout<<""<<endl;
cout<<""<<endl;
cout<<"                        <3>  baphanye CHICKEN"<<endl;
cout<<""<<endl;
cout<<""<<endl;
cin>>option2;
system("PAUSE");
system("CLS");
switch(option2)
{
case 1:
do
{
cout<<" HOW MANY CHICKENS TO BUY..."<<endl;
cin>>chickenB;
cout<<" Enter PASSWORD"<<endl;
cin>>password;
}
while(password!="1234");
    makchickenB=makchickenB+chickenB;
cout<<""<<endl;
cout<<""<<endl;
cout<<" UPDATED SUCCESSFULLY..."<<endl;
cout<<""<<endl;
cout<<""<<endl;
do
{
cin>>option2;
}
while(option2!=99);
break;
case 2:
do
{
cout<<" HOW MANY CHICKENS TO BUY..."<<endl;
cin>>chickenB;
cout<<" Enter PASSWORD"<<endl;
cin>>password;
}
while(password!="1234");
    brochickenB=brochickenB+chickenB;
cout<<""<<endl;
cout<<""<<endl;
cout<<" UPDATED SUCCESSFULLY..."<<endl;
cout<<""<<endl;
cout<<""<<endl;
do
{
cin>>option2;
}
while(option2!=99);
break;
case 3:
do
{
cout<<" HOW MANY CHICKENS TO BUY..."<<endl;
cin>>chickenB;
cout<<" Enter PASSWORD"<<endl;
cin>>password;
}
while(password!="1234");
    bapchickenB=bapchickenB+chickenB;
cout<<""<<endl;
cout<<""<<endl;
cout<<" UPDATED SUCCESSFULLY..."<<endl;
cout<<""<<endl;
cout<<""<<endl;
do
{
cin>>option2;
}
while(option2!=99);
break;
}
while(option2!=99);
system("PAUSE");
system("CLS");
}


void managerPortal ()
{
do
{
cout<<"                      ***Manager Portal***"<<endl;
cout<<""<<endl;
cout<<"SELECT                                              <99> Go back"<<endl;
cout<<""<<endl;
cout<<""<<endl;
cout<<"  1)BUY CHICKENS                                2)BUY EGGS"<<endl;
cout<<""<<endl;
cout<<"  3)FARM SALARY                                 4)SEE EMPLOYEE PROGRESS"<<endl;
cout<<""<<endl;
cout<<"  5)FARM EXPENSES                               6)SEE EMPLOYEE SALARIES"<<endl;
cout<<""<<endl;
cout<<"  7)SEE EMPLOYEE CONTRACT DETAILS               8)LOANS"<<endl;
cout<<""<<endl;
cout<<"  9)COMPLAINTS"<<endl;
cout<<""<<endl;
cout<<"  11)Bussiness plans"<<endl;
cout<<""<<endl;
cout<<""<<endl;
cin>>option;
system("PAUSE");
system("CLS");
    switch(option)
    {
    case 1:
        buyChickens();
        break;
    case 2:
        buyEggs();
        break;
    case 3:
        businessSalary();
        break;
    case 4:
        empProgress();
        break;
    case 5:
        busExpenses();
        break;
    case 6:
        empSalary();
        break;
    case 7:
        contractDetails();
        break;
    case 8:
        loans();
        break;
    case 9:
        complaints();
        break;
    case 11:
        businessPlans();
        break;
    }
}
while(option!=99);
}

void displayPurchase ()
{
cout<<"                      ***Purchased***"<<endl;
cout<<""<<endl;
cout<<""<<endl;
cout<<" Total Amuont :R"<<deposit<<"          Cost :R"<<cost<<endl;
cout<<""<<endl;
cout<<""<<endl;
cout<<" Change :R"<<change<<endl;
cout<<""<<endl;
cout<<""<<endl;
cout<<"                  Thank you......"<<endl;
do
{
cin>>option3;
}
while(option3!=99);
system("PAUSE");
system("CLS");
}

void getchickensSlaughtered ()
{
cout<<"                     ***Chickens Slaughterd***"<<endl;
cout<<""<<endl;
cout<<" SELECT                                                 <99> Go back"<<endl;
cout<<""<<endl;
cout<<" <1>  mkokoroshi CHICKEN                              <2>  broiller CHICKEN"<<endl;
cout<<""<<endl;
cout<<""<<endl;
cout<<"                        <3>  baphanye CHICKEN"<<endl;
cout<<""<<endl;
cout<<""<<endl;
cin>>option3;
system("PAUSE");
system("CLS");
switch(option3)
{
case 1:
do
{
cout<<" HOW MANY CHICKENS SLAUGHTERED..."<<endl;
cin>>chickenS;
cout<<" Enter EMPLOYEES Name"<<endl;
cin>>password;
}
while(password!="1234");
    makchickenS=makchickenS+chickenS;
cout<<""<<endl;
cout<<""<<endl;
cout<<" UPDATED SUCCESSFULLY..."<<endl;
cout<<""<<endl;
cout<<""<<endl;
do
{
cin>>option3;
}
while(option3!=99);
break;
case 2:
do
{
cout<<" HOW MANY CHICKENS SLAUGHTERED..."<<endl;
cin>>chickenS;
cout<<" Enter EMPLOYEES Name"<<endl;
cin>>password;
}
while(password!="1234");
    brochickenS=brochickenS+chickenS;
cout<<""<<endl;
cout<<""<<endl;
cout<<" UPDATED SUCCESSFULLY..."<<endl;
cout<<""<<endl;
cout<<""<<endl;
do
{
cin>>option3;
}
while(option3!=99);
break;
case 3:
do
{
cout<<" HOW MANY CHICKENS SLAUGHTERED..."<<endl;
cin>>chickenS;
cout<<" Enter EMPLOYEES Name"<<endl;
cin>>password;
}
while(password!="1234");
    bapchickenS=bapchickenS+chickenS;
cout<<""<<endl;
cout<<""<<endl;
cout<<" UPDATED SUCCESSFULLY..."<<endl;
cout<<""<<endl;
cout<<""<<endl;
do
{
cin>>option3;
}
while(option3!=99);
break;
}
system("PAUSE");
system("CLS");
}

void getchickensWasted ()
{
cout<<"                     ***Chickens Wasted***"<<endl;
cout<<""<<endl;
cout<<" SELECT                                                 <99> Go back"<<endl;
cout<<""<<endl;
cout<<" <1>  mkokoroshi CHICKEN                              <2>  broiller CHICKEN"<<endl;
cout<<""<<endl;
cout<<""<<endl;
cout<<"                        <3>  baphanye CHICKEN"<<endl;
cout<<""<<endl;
cout<<""<<endl;
cin>>option3;
system("PAUSE");
system("CLS");
switch(option3)
{
case 1:
do
{
cout<<" HOW MANY CHICKENS wasted..."<<endl;
cin>>chickenD;
cout<<" Enter EMPLOYEES Name"<<endl;
cin>>password;
}
while(password!="1234");
    makchickenD=makchickenD+chickenD;
cout<<""<<endl;
cout<<""<<endl;
cout<<" UPDATED SUCCESSFULLY..."<<endl;
cout<<""<<endl;
cout<<""<<endl;
do
{
cin>>option3;
}
while(option3!=99);
break;
case 2:
do
{
cout<<" HOW MANY CHICKENS wasted..."<<endl;
cin>>chickenD;
cout<<" Enter EMPLOYEES Name"<<endl;
cin>>password;
}
while(password!="1234");
    brochickenD=brochickenD+chickenD;
cout<<""<<endl;
cout<<""<<endl;
cout<<" UPDATED SUCCESSFULLY..."<<endl;
cout<<""<<endl;
cout<<""<<endl;
do
{
cin>>option3;
}
while(option3!=99);
break;
case 3:
do
{
cout<<" HOW MANY CHICKENS wasted..."<<endl;
cin>>chickenD;
cout<<" Enter EMPLOYEES Name"<<endl;
cin>>password;
}
while(password!="1234");
    bapchickenD=bapchickenD+chickenD;
cout<<""<<endl;
cout<<""<<endl;
cout<<" UPDATED SUCCESSFULLY..."<<endl;
cout<<""<<endl;
cout<<""<<endl;
do
{
cin>>option3;
}
while(option3!=99);
break;
}
system("PAUSE");
system("CLS");
}

void geteggsLaid ()
{
cout<<"                     ***Chicken Eggs Laid***"<<endl;
cout<<""<<endl;
cout<<" SELECT                                                 <99> Go back"<<endl;
cout<<""<<endl;
cout<<" <1>  mkokoroshi CHICKEN                              <2>  broiller CHICKEN"<<endl;
cout<<""<<endl;
cout<<""<<endl;
cout<<"                        <3>  baphanye CHICKEN"<<endl;
cout<<""<<endl;
cout<<""<<endl;
cin>>option3;
system("PAUSE");
system("CLS");
switch(option3)
{
case 1:
do
{
cout<<" HOW MANY EGGS LAID..."<<endl;
cin>>eggsL;
cout<<" Enter EMPLOYEES Name"<<endl;
cin>>password;
}
while(password!="1234");
    makeggsL=makeggsL+eggsL;
cout<<""<<endl;
cout<<""<<endl;
cout<<" UPDATED SUCCESSFULLY..."<<endl;
cout<<""<<endl;
cout<<""<<endl;
do
{
cin>>option3;
}
while(option3!=99);
break;
case 2:
do
{
cout<<" HOW MANY EGGS LAID..."<<endl;
cin>>eggsL;
cout<<" Enter EMPLOYEES Name"<<endl;
cin>>password;
}
while(password!="1234");
    broeggsL=broeggsL+eggsL;
cout<<""<<endl;
cout<<""<<endl;
cout<<" UPDATED SUCCESSFULLY..."<<endl;
cout<<""<<endl;
cout<<""<<endl;
do
{
cin>>option3;
}
while(option3!=99);
break;
case 3:
do
{
cout<<" HOW MANY EGGS LAID..."<<endl;
cin>>eggsL;
cout<<" Enter EMPLOYEES Name"<<endl;
cin>>password;
}
while(password!="1234");
    bapeggsL=bapeggsL+eggsL;
cout<<""<<endl;
cout<<""<<endl;
cout<<" UPDATED SUCCESSFULLY..."<<endl;
cout<<""<<endl;
cout<<""<<endl;
do
{
cin>>option3;
}
while(option3!=99);
break;
}
system("PAUSE");
system("CLS");
}

void computechickenSale()
{
cin>>option2;
switch(option2)
{
case 1:
cout<<" HOW MANY Chickens..."<<endl;
cin>>n;
do
{
cout<<" DEPOSIT CASH..."<<endl;
cin>>deposit;
}
while(deposit<50*n);
cost=50*n;
change=deposit-cost;
counter++;
businessmoney=businessmoney+cost;
displayPurchase();
break;
case 2:
cout<<" HOW MANY Chickens..."<<endl;
cin>>n;
do
{
cout<<" DEPOSIT CASH..."<<endl;
cin>>deposit;
}
while(deposit<50*n);
cost=50*n;
change=deposit-cost;
counter++;
businessmoney=businessmoney+cost;
displayPurchase();
break;
case 3:
cout<<" HOW MANY Chickens..."<<endl;
cin>>n;
do
{
cout<<" DEPOSIT CASH..."<<endl;
cin>>deposit;
}
while(deposit<50*n);
cost=50*n;
change=deposit-cost;
counter++;
businessmoney=businessmoney+cost;
displayPurchase();
break;
}
}

void computeeggSale()
{
cin>>option2;
switch(option2)
{
case 1:
cout<<" HOW MANY TRAYS OF EGGS..."<<endl;
cin>>n;
do
{
cout<<" DEPOSIT CASH..."<<endl;
cin>>deposit;
}
while(deposit<50*n);
cost=50*n;
change=deposit-cost;
counter++;
businessmoney=businessmoney+cost;
displayPurchase();
break;
}
}


void computechickenMaintainance ()
{
cin>>option2;
switch(option2)
{
case 1:
getchickensSlaughtered();
break;
case 2:
getchickensWasted();
break;
case 3:
geteggsLaid();
break;
case 7:
cout<<"                     ***Chickens Alive/Dead***"<<endl;
cout<<""<<endl;
cout<<" makokoroshi CHICKEN             broiller CHICKEN          baphanye CHICKEN"<<endl;
cout<<""<<endl;
cout<<" ALIVE :"<<makchicken<<"                ALIVE :"<<brochicken<<"               ALIVE :"<<bapchicken<<endl;
cout<<" PACKAGED :"<<makchickenS<<"                PACKAGED :"<<brochickenS<<"               PACKAGED :"<<bapchickenS<<endl;
cout<<" DEAD :"<<makchickenD<<"                DEAD :"<<brochickenD<<"               DEAD :"<<bapchickenD<<endl;
cout<<""<<endl;
cout<<""<<endl;
do
{
cin>>option2;
}
while(option2!=99);
break;
case 8:
cout<<"                     ***Chickens Laid Eggs***"<<endl;
cout<<""<<endl;
cout<<" makokoroshi CHICKEN             broiller CHICKEN          baphanye CHICKEN"<<endl;
cout<<""<<endl;
cout<<" EGGS LAID :"<<makeggsL<<"eggs                EGGS LAID :"<<broeggsL<<"eggs               EGGS LAID :"<<bapeggsL<<"eggs"<<endl;
cout<<""<<endl;
cout<<""<<endl;
do
{
cin>>option2;
}
while(option2!=99);
break;
}
}

void getchickenSales ()
{
cout<<"                     ***Chicken Sales***"<<endl;
cout<<""<<endl;
cout<<" SELECT                                                 <99> Go back"<<endl;
cout<<""<<endl;
cout<<" <1>  mkokoroshi CHICKEN                              <2>  broiller CHICKEN"<<endl;
cout<<""<<endl;
cout<<""<<endl;
cout<<"                        <3>  baphanye CHICKEN"<<endl;
cout<<""<<endl;
cout<<""<<endl;
do
{
computechickenSale();
}
while(option1!=99);
system("PAUSE");
system("CLS");
}

void geteggSales ()
{
cout<<"                      ***Egg Sales***"<<endl;
cout<<""<<endl;
cout<<" SELECT                                                  <99> Go back"<<endl;
cout<<""<<endl;
cout<<""<<endl;
cout<<"         <1>  R50  EGGS SINGLE TRAY"<<endl;
cout<<""<<endl;
cout<<""<<endl;
do
{
computeeggSale();
}
while(option1!=99);
system("PAUSE");
system("CLS");
}

void getchickenMaintainance ()
{
cout<<"                     ***Chicken Maintainance***"<<endl;
cout<<""<<endl;
cout<<" SELECT                                                 <99> Go back"<<endl;
cout<<""<<endl;
cout<<" <1>  CHICKENS SLAUGHTERD"<<endl;
cout<<"                                                    <7>  VIEW CHICKENS alive/dead"<<endl;
cout<<" <2>  CHICKENS WASTED/ROTTEN"<<endl;
cout<<"                                                    <8>  VIEW CHICKENS laid eggs"<<endl;
cout<<""<<endl;
cout<<""<<endl;
cout<<"      <3>  CHICKENS LAID EGGS"<<endl;
cout<<""<<endl;
cout<<""<<endl;
do
{
computechickenMaintainance();
}
while(option1!=99);
system("PAUSE");
system("CLS");
}

void displayMenu ()
{
do
{
cout<<"                      ***FARM MENU***"<<endl;
cout<<""<<endl;
cout<<"SELECT                                            <99> Go back"<<endl;
cout<<""<<endl;
cout<<""<<endl;
cout<<" [ 5 ]   CHICKEN SALES                                      [ 7 ]  EGG SALES "<<endl;
cout<<""<<endl;
cout<<""<<endl;
cout<<"                             [ 9 ]CHICKEN MAINTAINANCE"<<endl;
cout<<""<<endl;
cout<<""<<endl;
cin>>option1;
system("PAUSE");
system("CLS");
    switch(option1)
    {
    case 5:
        getchickenSales();
        break;
    case 7:
        geteggSales();
        break;
    case 9:
        getchickenMaintainance();
        break;
    }
}
while(option1!=99);
system("PAUSE");
system("CLS");
}

void displayPortal ()
{
do
{
cout<<"                        ***RATSHI'S FARM***"<<endl;
cout<<""<<endl;
cout<<"SELECT"<<endl;
cout<<""<<endl;
cout<<""<<endl;
cout<<"  ( 7 ) New Employee's' /                   ( 9 ) Manager Access"<<endl;
cout<<"          Remove Employee's'"<<endl;
cout<<""<<endl;
cout<<""<<endl;
cout<<"                       ( 1 ) Ratshi's Farm"<<endl;
cout<<""<<endl;
cout<<""<<endl;
cin>>option;
system("PAUSE");
system("CLS");
    switch(option)
    {
    case 7:
        empPortal();
        break;
    case 9:
        managerPortal();
        break;
    case 1:
        displayMenu();
        break;
    }
}
while(1);
}

int main ()
{
displayPortal();
return 0;
}
