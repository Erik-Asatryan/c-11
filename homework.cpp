#include<iostream>

class Animals
{
    public:
    Animals(){}
    ~Animals(){std::cout << "\ncoll ~Anilals\t"<<this<<std::endl;}
    virtual void Disply(){}
    virtual void toFeed(){}
    virtual void makeSound(){}
    
    // Ֆունկցիամների անունները հիմնականում պետք է նկարագրեն գործողություններ
    // getID(), setId(), ոչ թե getterID և այլն
    virtual int GeterId (){ return id;}
    virtual std::string GeterName (){ return this->name;}
    virtual void SeterId (int id){ this->id = id; }
    
    // Երբ որ parameter֊ը պարզ տիպի չէ (bool,char, int)
    // parameter֊ի պատճենումից պետք է խուսափել
    virtual void SeterName (std::string name ){ this->name = name; }

private:
    // Փոփոխականների անունը սկսել m_ ով 
       std::string name;
       int id;
};

class Dog : public Animals
{
public:
    Dog(){}
    ~Dog(){std::cout << "coll ~Dat\t"<<this<<std::endl;}  // կարամ կանստրուկտոր և դեստրեւքտոր չկանչեմ ;
    void Disply()
    {
       // ՆԵՐՔ֏ՈՒՄ ԳՐԱԾԸ ԿԱՐԴԱԼ ՊԱՐՏԱԴԻՐ
       // Խնդրումեմօպերատորներիցևգործողություններիցհետոդնելբացատներայլապեսինչպեստեսնումեսկարդալըշատդժվարէ !!!
        std::cout << "id is Dog-->\t"
        <<this->GeterId()<<"\nname is -->\t"
        <<this->GeterName()
        <<"\nBreed is dog \t"<<this->GeterBreed()
        <<"\ncolor is Dog\t" 
        << this->GeterColor()<<std::endl; 
        
    }
    void toFeed()
    {
        std::cout << "he  eats meat\n";
    }
   void makeSound()
    {

        std::cout << "the dog barks"<<std::endl;
    }
public:
    // Եթե Animal դասի բոլոր ժառանգները ունեն որևէ գործողություն, ապա այդ գործողությունը պետք է հայտարարված լինի
    // ծնողում (Animal), որպեսզի հնարավոր լինի կանչել նաև ներքնշյալ obj֊ի վրա
    // Animal* obj = new Cat(); 
    std::string GeterColor (){ return color;}
    std::string GeterBreed (){ return breed;}
    void SeterColor (std::string color){ this->color = color; }
    void SeterBreed (std::string breed){ this->breed = breed; }
private:
    std::string color,breed;
    
};

class Cat : public Animals
{
public:
    // Այսպիսի բարդ օբյեկտենրը նկարագրելիս ցանկալի է գրել պարամետրավորված կառուցիչ,
    // Որպեսզի օգտագործողը main֊ից կամ ուրիշ տեղից կանչելիս, մի տողով ամբողջական օբյեկտը ստեղծի և սկզբնարժեքավորի
    // Ոչ թե օբյեկտը ստեղծելուց հետո էլ մի քանի տող արժեքները տա
     Cat(){}// կարամ կանստրուկտոր և դեստրեւքտոր չկանչեմ ;
    ~Cat(){std::cout << "coll ~cat\t"<<this<<std::endl;}
    void Disply()
        {
        std::cout << "id is Cat-->\t"
        <<this->GeterId()<<"\nname is -->\t"
        <<this->GeterName()
        <<"\nBreed is Cat \t"<<this->GeterBreed()
        <<"\ncolor is Cat\t" 
        << this->GeterColor()<<std::endl;  
        }
       void makeSound()
    {
        std::cout << "the cat is meowing" << std::endl;
       // std::cout << 
    }
public:
    std::string GeterColor (){ return color;}
    std::string GeterBreed (){ return breed;}
    void SeterColor (std::string color){ this->color = color; }
    void SeterBreed (std::string breed){ this->breed = breed; }
private:
    std::string color,breed;

};



int main ()
{
Cat bengal;
bengal.SeterId(199);
bengal.SeterName("Libi");
bengal.SeterColor("zebra");
bengal.SeterBreed("Bengal");
bengal.makeSound();
bengal.toFeed();
bengal.Disply();
std:: cout << "---------------------\n";
Cat Chartreux ;
Chartreux .SeterId(1222);
Chartreux .SeterName("Marusj");
Chartreux .SeterColor("gray");
Chartreux .SeterBreed("chartreux");
Chartreux .makeSound();
Chartreux .toFeed();
Chartreux .Disply();
std:: cout << "---------------------\n";
Dog shpic;
shpic.SeterId(122);
shpic.SeterName("chalo");
shpic.SeterBreed("shpic");
shpic.SeterColor("white");
shpic.toFeed();
shpic.makeSound();
shpic.Disply();


    return 0;
}
