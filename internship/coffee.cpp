
#include <bits/stdc++.h>
using namespace std;

class Coffee
{
protected:
    int milk;
    int cream;
    int latte;
    string name;
     int total_bill;
     int addOn[3];
public:
    Coffee()
    {
        total_bill=0;
        addOn[0]=addOn[2]=addOn[1] = 0;
    }
    void display_list();
    void add_on(){
        int val=0;
        cout<<"enter your choice"<<endl;
        while (val!=4)
        {
            display_list();
            cin>>val;
            switch (val)
            {
            case 1:
                addOn[0]++;
                total_bill+=milk;
                break;
            case 2:
                addOn[1]++;
                total_bill+=cream;
                break;
            case 3:
                addOn[2]++;
                total_bill+=latte;
                break;
            case 4:
                break;
            default:
            cout<<"invalid input";
                break;
            }
        }
        
    }

};
void Coffee::display_list(){
      cout<< "Product/Add-on"<<"\t"<<"1. Milk"<<"\t"<<"2. Cream"<<"\t"<<"3. Latte"<<endl;
      cout<<name<<"\t"<<milk<<"\t"<< cream<< "\t"<< latte<<endl;
}

class Expresso : public Coffee
{
private:
  
public:
    Expresso (){
       milk = 60;
       cream = 75;
       latte = 100;
       name  = "Espresso";
    }
   

};
class Cappuccino : public Coffee
{
private:
  
public:
    Cappuccino (){
       milk = 80;
       cream = 90;
       latte = 125;
       name  = "Cappuccino";
    }
  
};

class Latte : public Coffee
{
private:
  
public:
    Latte (){
       milk = 100;
       cream = 125;
       latte = 150;
       name = "Latte";
    }
   
    
};

void bill(vector<Coffee> &l){

}

 void select_coffee(){
       int a=0;
       cout<<"1. Expresso\n"<<"2. Cappuccino\n"<<"3. Latte\n"<<"4.Exit\n"<<"enter your choice"<<endl;
       vector<Coffee> l;
      while (a!=4)
      {
        cin>>a;
        switch (a)
        {
        case 1:{ Expresso obj; 
        obj.add_on();
        }
            break;
        case 2:{ Cappuccino obj; 
        obj.add_on();
        }
            break;
        case 3:{ Latte obj; 
        obj.add_on();
        }
            break;
        case 4:
        bill(l);
        exit(0);
        break;
        
        default:
        cout<<"invalid input";
            break;
        }
      }
      
    }

int main()
{
    Coffee c;
    c.display_list();
    return 0;
}
