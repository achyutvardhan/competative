
#include <bits/stdc++.h>
using namespace std;

class Coffee
{

public:
    int milk;
    int cream;
    int latte;
    string name;
    int total;
    int addOn[3];
    string add_On_name[3] = {"MIlk", "Cream", "Latte"};
    Coffee()
    {
        total = 0;
        addOn[0] = addOn[2] = addOn[1] = 0;
    }
    void display_list();
    void add_on()
    {
        int val = 0;
        cout << "enter your choice" << endl;
        while (val != 4)
        {
            display_list();
            cin >> val;
            switch (val)
            {
            case 1:
                addOn[0]++;
                total += milk;
                break;
            case 2:
                addOn[1]++;
                total += cream;
                break;
            case 3:
                addOn[2]++;
                total += latte;
                break;
            case 4:
                break;
            default:
                cout << "invalid input";
                break;
            }
        }
    }
};
void Coffee::display_list()
{
    cout << "Product/Add-on"
         << "\t"
         << "1.Milk"
         << "\t"
         << "2.Cream"
         << "\t"
         << "3.Latte"
         << "\t"
         << "4.Exit" << endl;
    cout << name << "\t" << milk << "\t" << cream << "\t" << latte << endl;
}

class Expresso : public Coffee
{
private:
public:
    Expresso()
    {
        milk = 60;
        cream = 75;
        latte = 100;
        name = "Espresso";
    }
};
class Cappuccino : public Coffee
{
private:
public:
    Cappuccino()
    {
        milk = 80;
        cream = 90;
        latte = 125;
        name = "Cappuccino";
    }
};

class Latte : public Coffee
{
private:
public:
    Latte()
    {
        milk = 100;
        cream = 125;
        latte = 150;
        name = "Latte";
    }
};

void bill(vector<Coffee> &l)
{

    int total_amount = 0;
    cout << "*************** BILL ***************\n"
         << endl;
    cout << "Name\t\t\t"
         << "Quantity" << endl;
    for (auto &coffee : l)
    {
        cout << coffee.name << ":" << endl;
        for (int i = 0; i < 3; i++)
        {
            if (coffee.addOn[i] > 0)
            {
                if (i == 0)
                    cout << "\t" << coffee.add_On_name[i] << ":"
                         << "\t\t" << coffee.addOn[i] * coffee.milk << endl;

                else if (i == 1)

                    cout << "\t" << coffee.add_On_name[i] << ":"
                         << "\t\t" << coffee.addOn[i] * coffee.cream << endl;

                else
                    cout << "\t" << coffee.add_On_name[i] << ":"
                         << "\t\t" << coffee.addOn[i] * coffee.latte << endl;
            }
        }
        total_amount += coffee.total;
    }
    cout << "Final Amount"
         << ":\t\t" << total_amount;
}

void select_coffee()
{
    int a = 0;
    vector<Coffee> l;
    while (a != 4)
    {
        cout << "1. Expresso\n"
             << "2. Cappuccino\n"
             << "3. Latte\n"
             << "4.Exit\n"
             << "enter your choice" << endl;
        cin >> a;
        switch (a)
        {
        case 1:
        {
            Expresso obj;
            obj.add_on();
            l.push_back(obj);
        }
        break;
        case 2:
        {
            Cappuccino obj;
            obj.add_on();
            l.push_back(obj);
        }
        break;
        case 3:
        {
            Latte obj;
            obj.add_on();
            l.push_back(obj);
        }
        break;
        case 4:
            bill(l);
            exit(0);
            break;

        default:
            cout << "invalid input";
            break;
        }
    }
}

int main()
{
    select_coffee();
    return 0;
}
