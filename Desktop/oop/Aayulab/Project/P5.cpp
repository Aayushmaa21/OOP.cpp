//Shape management system
#include<iostream>
using namespace std;


class Shape{
	public:
		//Area of circle
		int calculate(int radius){
			return radius*radius;
		}
		
		//Area of Rectangle
		int calculate(int length,int breadth){
			return length*breadth;
		}
		
		//Area of square
		int calculate(float length){
			return length * length;
		}
		
		virtual void display()= 0;
};

class Circle : public Shape{
	public:
	void display(){
		cout<<"Area of circle is"<<" "<<calculate(7)<<endl;
	}
	
};

class Rectangle : public Shape{
	public:
	void display(){
		cout<<"Area of rectangle is"<<" "<<calculate(8,12)<<endl;
	}
	
};
class Square : public Shape{
	public:
	void display(){
		cout<<"Area of square is"<<" "<<calculate(12.5f)<<endl;
	}
	
};

int main(){
	Shape *s;
	Circle c;
	Rectangle r;
	Square sq;
	
	s = &r;
	s->display();

	s = &sq;
	s->display();

	s = &c;
	s->display();

	
	
	return 0;
}


