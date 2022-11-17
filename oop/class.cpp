#include<iostream>
#include<string>
using namespace std;
struct myNevType{
   string coffe1;
   int gin ; 
} ;
class  CoffeeMachine{
    public:
        string m_sCoffee[9]={"espresso","lungo","rissreto","amerikano","capuchino","latte","moka","glasse","frapuchino",};
        int i=0,m_nMoney[9]={  1000,     1100,     900,     1100,         1400,      1600,  1800,   1500,      1200      };

    void printPriceList()
        {              
         for (int j = 0;j<9;)
           {
                cout << m_sCoffee[j] <<" "<<m_nMoney[j]<<" dram\n";
                j++;
           }
        }
    void sale (myNevType input ){

       	    for (;i<= 9 ;i++){
                if (input.coffe1 != m_sCoffee[i] && i == 9)
	            {                   // break;
                    cout<< "we don't have such a coffee\n";
                                    break;
                }
	                else if (input.coffe1 == m_sCoffee[i]&&input.gin >=m_nMoney[i])
	                {
                        input.gin -= m_nMoney[i];
                        cout << input.coffe1 <<"  was sold  "<< m_nMoney[i]<<"  drams\n"\
                                <<"your dime "<<input.gin<<" dram\n";
                    }
	                else if (input.coffe1 == m_sCoffee[i]&&input.gin < m_nMoney[i])
	                {
                        cout <<"you don't have enough money to buy  "<< m_sCoffee[i] <<"  coffee\n";
                    }
            }
    }

};
   
int main (){
 myNevType kofe{"moka" ,1800};
    //kofe.gin = 39;
    CoffeeMachine print;
   print.printPriceList();
   print.sale(kofe);
}
