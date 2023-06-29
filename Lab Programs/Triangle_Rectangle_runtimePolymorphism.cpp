#include<iostream>
using namespace std;

class Shape
{
protected:
float area, perimeter; 
public:
Shape();
virtual void initialize()=0; 
virtual float computeArea()=0;
virtual float computePerimeter()=0; 
virtual ~Shape();
};
Shape::Shape()
{
    area=0;
    perimeter=0;
}

Shape::~Shape()
{
    cout<<"Shape Destroyed"<<endl;
}

class Triangle: public Shape
{
private:
    int base,height;
public:
    Triangle(int h=0,int b=0){ height=h; base=b;} 
    void initialize()
    {
        cout<<"Enter the height of the triangle"<<endl;
        cin>>height;
        cout<<"Enter the base of the triangle"<<endl;
        cin>>base;
    }
    float computeArea()
    {
        return 0.5*base*height;
    }
    float computePerimeter()
    {
        return 3.0*base;   //Equilateral Triangle
    }
};

class Rectangle: public Shape
{
    private:
    int breadth,length;
public:
    Rectangle(int l=0,int b=0){ length=l; breadth=b;} 
    void initialize()
    {
        cout<<"Enter the length of the rectangle"<<endl;
        cin>>length;
        cout<<"Enter the breadth of the rectangle"<<endl;
        cin>>breadth;
    }
    float computeArea()
    {
        return length*breadth;
    }
    float computePerimeter()
    {
        return 2*(length+breadth);   //Equilateral Triangle
    }
};

int main()
{
    Triangle t;
    Rectangle r;
    Shape* s = &t;
    s->initialize();
    cout<<"Area of triangle = "<<s->computeArea()<<endl;
    cout<<"Perimeter of triangle = "<<s->computePerimeter()<<endl;
    
    s = &r;
    s->initialize();
    cout<<"Area of rectangle = "<<s->computeArea()<<endl;
    cout<<"Perimeter of rectangle = "<<s->computePerimeter()<<endl;
    return 0;
}
