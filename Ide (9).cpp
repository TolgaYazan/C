#include <iostream>
#include <string>

using namespace std;

class Shape{
  
    public : 
    double perimeter;
    double area;
    Shape(){ 
        this->area=34;
        this->perimeter=35;
    }
    
        
    
    void info(){
        cout << " area is : " << area << " perimeter is : " <<perimeter<<endl;
    }
};
 
class Rectangle : public Shape{
    private:
    int Width;
    int height;
    
    public : // constructor
    Rectangle (int Width, int height){
  

        this->Width = Width;
        this-> height = height;
       area =Width*height;
    perimeter=(Width+height)*2;
    }
         
     

   
    void info(){
       Shape::info();
       cout <<"Width is : "<< Width << " height is : "<< height<< endl;
    }
    
    
}; // end of the class

class  Square :public Shape{
    private :
    int EdgeLength;
    public :
    Square(int EdgeLength){
        this->EdgeLength=EdgeLength;
        area= (EdgeLength*EdgeLength)*6;
        perimeter= 12*EdgeLength;
    }
    void info(){
        Shape::info();
        cout<< "EdgeLength is :"<<EdgeLength<<endl;
    }
};

class Circle :public Shape{
    private :
    int radius;
    
    public :
    double PI = 3.14159;
    Circle (int radius){
       
        this->radius =radius;
        area = PI*2*radius;
        perimeter =PI*(radius*radius);
    }
    void info (){
        Shape::info();
        cout<< " radius is : " << radius<<endl;
    }
};

int main() {
	Rectangle rec1(30,40);
	Rectangle rec2(80,70);
	cout<<"Rectangles"<<endl;
	rec1.info();
	rec2.info();
	cout<<"Squares"<<endl;
	Square s1 (5);
	Square s2 (3);
	s1.info();
	s2.info();
	cout<<"Circles"<< endl;
	Circle c1 (5);
	Circle c2 (3);
	c1.info();
	c2.info();
	return 0;
}
