
#include <bits/stdc++.h>
using namespace std;

class coffee
{
private:
    int espresso[3];
    int capp[3];
    int Latte[3];
    int n;
     int total_bill;
public:
    coffee()
    {
        total_bill=0;
        n = 3;
        espresso[0]=60;
        espresso[1]=75;
        espresso[2]=100;
        capp[0]=80;
        capp[1]=90;
        capp[2]=125;
        Latte[0]=100;
        Latte[1]=125;
        Latte[2]=150;

    }
    void customer();
    void display_list();

};

void coffee::customer(){
    display_list();
    cout<<"please place your order:";
    int a;
    
}
void coffee::display_list(){
   cout<< "Product/Add-on"<<"\t"<<"Milk"<<"\t"<<"Cream"<<"\t"<<"Latte"<<endl;
   cout<<"Espresso"<<"\t"<<espresso[0]<<"\t"<< espresso[1]<< "\t"<< espresso[2]<<endl;
   cout<<"cappuccino"<<"\t"<<capp[0]<<"\t"<< capp[1]<< "\t"<< capp[2]<<endl;
   cout<<"Latte"<<"\t\t"<<Latte[0]<<"\t"<< Latte[1]<< "\t"<< Latte[2]<<endl;
}

int main()
{
    coffee c;
    c.display_list();
    return 0;
}
