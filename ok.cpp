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
  int sideA,sideB,sideC;
public:
  Triangel (int sideA,int sideB,int sideC)
  {
    //if sideA+sideB > sideC
    this -> sideA = sideA;
    this -> sideB = sideB;
    this -> sideC = sideC;

  }

  float area()
  {
      float res, perimetrTran;
       perimetrTran = (sideA + sideB + sideC)/2;
       res =sqrt(perimetrTran*(perimetrTran-sideA) * (perimetrTran-sideB) *(perimetrTran-sideC)) ;
       return res;
  }
  float perimeter()
  {
    float res = sideA+sideB+sideC;
    cout << res;
    return res;
  }

};
class  Rectangel
{
private:
    float sideA,sideB;
public:
    Rectangel (float sideA,float sideB)
    {
        this -> sideA = sideA;
        this -> sideB = sideB;
    };
  float area()
  {
        float res = (sideA * sideB);
        cout <<"\nughankjan  makeres ->\t " <<res<< endl;
        return res;
  }


  float perimeter ()
  {
        float res = 2 *(sideA+sideB);
        cout <<"\nughankyan  paragic -> \t" <<res<< endl;
        cout << "============================="<<endl; 
        return res;
  }
};

class  Squer : public Rectangel
{

  public:
      Squer (float sideA)
     :Rectangel(sideA,sideA)
    {  

    };

};
class Elipse : public Figure//elips
{
  
private:
  float radiusB;
protected:
  const float pi =3.14;
  float radiusA;

public:
    Elipse(float radiusA)
    {
      this -> radiusA = radiusA;
    };
// S = pi *a*b makeres // P = 4(((pi*a*b)+((a-b)^2))/(a+b))
  float area ()
  {
   
  float  res = pi * (pow(radiusA,2));
    cout <<"Circle  area  ->\t " <<res<< endl;
    return res;
  }

  float perimeter()
  // P = 4(((pi*a*b)+((a-b)^2))/(a+b))
  {
    float res;
    res = 4 *(((pi * radiusA * radiusB)+(pow((radiusA-radiusB),2)))/(radiusA+radiusB));
    cout <<"Circle   primetr ->\t " <<res<< endl;
    cout << "============================="<<endl; 

    return res; 

  }
};
class Circle :public Elipse //shrjan
 // P = 2*pi*r  r = \aravighna//
 // s= (piR)^2
{
public:

      Circle(float radiusA)
      :Elipse(radiusA)
    {
    };

};

int main ()
{
  Figure *k = new Triangel(2,3,4);
  k -> perimeter();
  Figure *h = new Elipse(22);
  h->perimeter();
  h->area();
  Rectangel ok(2,3);
  ok.area();

}