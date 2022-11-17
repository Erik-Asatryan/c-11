#include<iostream>
#include<string>
using namespace std;

class  CoffeeMachine //Նկարագրել CoffeeMachine դաս, որը ստեղծման պահին կընդունի երկու նույնաչափ զանգված,
{
    public:
        string m_sCoffee[9]={"espresso","lungo","rissreto","amerikano","capuchino","latte","moka","glasse","frapuchino",};
        int i=0,m_nMoney[9]={  1000,     1100,     900,     1100,         1400,      1600, 1800,   1500,      1200      };
/////////////////////////////////////////////////////////////////////////////////////////////////


    void printPriceList()//։ Դասը պետք է ունենա գնացուցակը տպելու "printPriceList" անդամ ֆունկցիա (member function):
        {              
         for (int j = 0;j<9;)
           {
                cout << m_sCoffee[j] <<" "<<m_nMoney[j]<<" dram\n";
                j++;
           }
        }
    void sale(){
        cout << "entor name Coffee:  ";
/*Դասի հիմնական գործունեությունը լինելու է ընդունել 
պատվեր, ստուգել պատվերի համապատասխանությունը 
(ապրանքը գոյություն ունի, գումարը բավարարում է թե ոչ)
և վերադարձնել ապրանքն ու մանրը*/
        string m_sInputDrink;
        int m_nInputMoney;
        cin >> m_sInputDrink;
        cout << "entr Money:";
        cin >>m_nInputMoney;
        for (;i<= 9 ;i++){
            if (m_sInputDrink != m_sCoffee[i]&& i == 9){//&&m_nInputMoney==m_nMoney[i]){
                   // cout<< "we don't have such a coffee";
                    break;
                    cout<< "we don't have such a coffee";
            }
            if (m_sInputDrink == m_sCoffee[i]&&m_nInputMoney==m_nMoney[i]){
                cout << m_sInputDrink <<"  was sold  "<< m_nMoney[i]<<"  dram\n";
                
            }else if (m_sInputDrink == m_sCoffee[i]&&m_nInputMoney >m_nMoney[i]){
                m_nInputMoney = m_nInputMoney - m_nMoney[i];
                 cout << m_sInputDrink <<"  was sold  "<< m_nMoney[i]<<"  drams\n"\
                 <<"your dime "<<m_nInputMoney<<" dram\n";
            }else if (m_sInputDrink == m_sCoffee[i]&&m_nInputMoney < m_nMoney[i]){
                        cout <<"you don't have enough money to buy  "<< m_sCoffee[i] <<"  coffee\n";
            }
        }
        }

    };
   


int main (){
    CoffeeMachine print;
    print.printPriceList();
    print.sale();
   // CoffeeMachine vacharq;
   // vacharq.vacharq();
}