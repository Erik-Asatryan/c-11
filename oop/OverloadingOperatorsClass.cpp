#include<iostream>
using namespace std;


class Complex {
private:
    int real, imag;
public:
    Complex(int r = 0, int i = 0) 
	{real = r;   imag = i;
	}
	
	//poerator ==
	bool operator == (const Complex &obj) 
		{
			return  this->real == obj.real &&this->imag == obj.imag;
		}
	//operator !=
	bool operator != (const Complex &obj) 
   		{
			return  this->real != obj.real &&this->imag != obj.imag;
		}
	//operator=
    void  operator = (const Complex &obj) 
	{
         real =  obj.real;
         imag =  obj.imag;
    }
	
     
    //operator +
    Complex operator + (Complex const &obj) 
		{
         Complex res;
         	res.real = real + obj.real;
         	res.imag = imag + obj.imag;

         	return res;
    	}
	Complex operator += (const Complex &obj)
		{
        
			imag += obj.imag;
			real += obj.real;
            return *this;
    	}
	//operator ++
    void operator ++ ()
	 	{  
			imag +=1;
			real +=1;
    	}
    void printdiv () { cout << real << " + " << imag <<"i"<< '\n'; }
};
 
int main()
{
    Complex c1(1,2), c2(3,4),c3(5,6),c4;
	c3 += c2;
	c1 =  c3;
	c4 == c2;
	++  (c2);
	c4   =  c1  + c2;
	c1.operator=(c2);
	
	c1.printdiv();
	c3.printdiv();
    c2.printdiv();
	c4.printdiv();
}
