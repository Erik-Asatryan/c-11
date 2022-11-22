#include <iostream>
#include <math.h>
using namespace std;
class  Figure
{
public :
  virtual float  area()=0;
  virtual float perimeter()=0;
  

};
class  Triangel :public Figure
{
private:
  int a,b,c;
public:
  Triangel (int a,int b,int c)
  {
    //if a+b > c
    this -> a = a;
    this -> b = b;
    this -> c = c;

  }

  float area()
  {
      float res, p;
       p = (a + b + c)/2;
       res =sqrt(p*(p-a) * (p-b) *(p-c)) ;
       return res;
  }
  float perimeter()
  {
    float res = a+b+c;
    cout << res;
    return res;
  }

};
class  Rectangel
{
private:
    float a,b;
public:
    Rectangel (float a,float b)
    {
        this -> a = a;
        this -> b = b;
    };
  float area()
  {
        float res = (a * b);
        cout <<"\nughankjan  makeres ->\t " <<res<< endl;
        return res;
  }


  float perimeter ()
  {
        float res = 2 *(a+b);
        cout <<"\nughankyan  paragic -> \t" <<res<< endl;
        cout << "============================="<<endl; 
        return res;
  }
};

class  Squer : public Rectangel
{

  public:
      Squer (float a)
     :Rectangel(a,a)
    {  

    };

};
class Elipse : public Figure//elips
{
  
private:
  float b;
protected:
  const float pi =3.14;
  float a;

public:
    Elipse(float a,float b)
    {
      this -> a = a;
      this -> b = b;
    };
// S = pi *a*b makeres // P = 4(((pi*a*b)+((a-b)^2))/(a+b))
  float area ()
  {
   
  float  res = pi * a * b;
    cout <<"Elips  area  ->\t " <<res<< endl;
    return res;
  }

  float perimeter()
  // P = 4(((pi*a*b)+((a-b)^2))/(a+b))
  {
    float res;
    res = 4 *(((pi * a* b)+(pow((a-b),2)))/(a+b));
    cout <<"Elips  primetr ->\t " <<res<< endl;
    cout << "============================="<<endl; 

    return res; 

  }
};
class Circle :public Elipse //shrjan
 // P = 2*pi*r  r = \aravighna//
 // s= (piR)^2
{
public:

      Circle(float r)
      :Elipse(r,r)
    {
    };
    float perimeter()
    {
        float res;
        res = 2* pi * a;
        cout <<"circle  primetr ->\t " <<res<< endl;
        return res;
    }
    float area ()
    {
        float res;
        res = pow((pi* a),2);
        cout <<"circle  area ->\t " <<res<< endl;
        cout << "============================="<<endl; 
        return res ;
    }
};

int main ()
{
  Figure *k = new Triangel(2,3,4);
  k -> perimeter();

}