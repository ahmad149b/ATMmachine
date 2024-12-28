#include<iostream>
#include<iomanip>

void showBalance(double balance);
double deposit();
double withdraw(double balance);
int main(){
    
    double balance = 0;
    int choice = 0;

    

    do
    {
        std::cout<<"\n*******************\n";
        std::cout<<"Enter Your Choice:\n";
        std::cout<<"1.Show Balance\n";
        std::cout<<"2.Withdraw Money\n";
        std::cout<<"3.Deposit Money\n";
        std::cout<<"4.Exit\n";
        std::cin>>choice;

        std::cin.clear();
        fflush(stdin);
        
        switch (choice)
    {
    case 1:
    showBalance(balance);
    break;
    
    case 2:
    balance -= withdraw(balance);
    showBalance(balance);
    break;

    case 3:
    balance += deposit();
    showBalance(balance);
    break;

    case 4:
    std::cout<<"Thanks for using our ATM!";
    break;
    
    default:
    std::cout<<"Invalid Operation";
    
    }
    } while (choice != 4);
    

    
    return 0;
}
void showBalance(double balance){
    std::cout<<"Your balance is: "<<std::setprecision(2)<<std::fixed<<balance<<"RS"<<'\n';

}
double deposit(){
    double amount;
    std::cout<<"Enter the amount to Deposit: ";
    std::cin>>amount;
    if (amount < 0)
    {
        std::cout<<"Invalid Amount!\n";
        return 0;
    }
    else{
        return amount;
    }

}
double withdraw(double balance){
    double amount;
    std::cout<<"Enter the amount you want to withdraw: ";
    std::cin>>amount;
    if(amount > balance){
        std::cout<<"Insufficeint Balance!\n";
        return 0;
    }
    else if(amount < 0){
        std::cout<<"Invalid Amount!\n";
        return 0;
    }
    else{
        return amount;
    }
return 0;
}