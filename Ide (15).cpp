
#include <iostream>

using namespace std;

class Manufacturer{ // manufacturer class
    private:
        string name;
        
        public:
        
        Manufacturer(string name){ // constructor
            this->name=name;
        }
        Manufacturer(){ // empty constructori this constructor help to see and acces name field in vehicle class
            
        }
        
        string getName(){ // get method to see field
            return name;
        }
        void setName(string name){ //  set method to see field
            this->name=name;
        }
        void info (){ // info method to see in console
            cout << "Manufacturer name is "<< name << endl;
        }
}; // must be termianted with a semicoln // end of the Manufacturer class

class Vehicle{ // vehicle class
    private:
    Manufacturer manufacturer; // has a realaiton 
    double price;
    
    public:
    
    Vehicle(Manufacturer manufacturer, double price){ // constructor
         this->manufacturer.setName(manufacturer.getName()); // to help setName
        this->price=price;
    }
   /*  Vehicle( double price){ // constuctor with just one parameter
        
        this->price=price;
    }*/
     void setManufacturer(Manufacturer manufacturer){ //  set method to see field
           this->manufacturer.setName(manufacturer.getName());
     }
      string getManufacturer(){ // get method to see field
          return manufacturer.getName();
      }
    
    void setPrice (double price){
        this->price = price;
    }
       double getPrice (){ // get method to see field
           return price;
       }
       double getDiscountPrice(double dicountPrice){ // discound method to help amount of discount
           double discount = 0.0;
           discount =this->price- ((price *dicountPrice)/100);
           return discount;
       }
       void move(){
           
       };
       
       void info(){ // info method to see in console
           cout<<"Manufacturer is : "<< manufacturer.getName()<<endl;
           cout<< "price is "<< price;
       }
      
}; // end of the vehicle class

class Ship: public Vehicle{ // ship class extend vehicle (public vehicle help to extend) (ıs a relation)
    private :
    string propellerType;
    public :
    Ship(Manufacturer manufacturer, double price,string propellerType):Vehicle( manufacturer,price){
        this->propellerType=propellerType;
    }
        void setPropellerType (string propellerType){
            this->propellerType=propellerType;
        }
         string getPropellerType(){
             return propellerType;
         }
         void info(){ // info method to see in console
             Vehicle ::info(); // this line help to acces vehicles class info method
             cout << "[ship] propellerType is "<< propellerType<<endl;
             
         }
         void move(){
             cout<<"Saiiling"<<endl;
         }
         
    
};// end of the vehicle class

class Car:public Vehicle{ // car class "public vehicles" helps to acces vehicles class method and fields (is a relation) 
    private :
     string engineType;
    public :
    Car(Manufacturer manufacturer, double price, string engineType):Vehicle (manufacturer,price){
        this->engineType=engineType;
    }
    void setEngineType(string engineType){ //  set method to see field
        this->engineType=engineType;
    }
     string getEngineType(){ // get method to see field
         return engineType;
     }
     void info(){ // info method to see in console
         Vehicle::info(); // this line help to acces to vehicles class info method
         cout<< "[Car] Engine type is " << engineType<<endl;
     }
     void move(){
         cout<<"riding"<<endl;
     }
}; // end of the car class

class Airplane : public Vehicle{ // airplane class , "public vehicles" help to acces vehicle class methods and fiedl (is a realtion)
    private :
     int wingspan;
     public :
     Airplane( Manufacturer manufacturer,  double price, int wingspan):Vehicle(manufacturer,price){
         this->wingspan=wingspan;
     }
     void setWingspan(int wingspan){ //  set method to see field
         this->wingspan = wingspan;
     }
     int getWingspan(){ // get method to see field
         return wingspan;
     }
     void info(){ // info method to see in console
         Vehicle::info();// this line help to acces to vehicles class info method
         cout<<"[Airplane] wingspan is : " << wingspan<<endl;  
     }
     void move(){
         cout <<"flying"<<endl;
     }
};

int main() {
	Manufacturer m1("Airbus");  // Manufacturer object
	m1.info();// test Manufacturer class
	
	cout<<"Ship part ------------------"<<endl;
	Ship s1(m1,3.50,"ship"); // ship object
	s1.info(); // to see properties of ship object
	cout << "price is with dicount is :  "<< s1.getDiscountPrice(30)<<endl;
	s1.move(); 
	
	cout<<"Car part-----------"<<endl;
	Car c1(m1,5.00,"TDI"); // car object
	c1.info();
	cout<<"price with dicount is :"<<c1.getDiscountPrice(50)<<endl;
	c1.move();
	
	cout<<"Airplane part---------"<<endl;
	Airplane a1(m1,3.00 ,50); // airplane object
	a1.info();
	cout<<"price with discount is : "<<a1.getDiscountPrice(50)<<endl;
	a1.move();
	
	//Vehicle v1 (m1,3.5);
	//v1.info();
	return 0;
}


