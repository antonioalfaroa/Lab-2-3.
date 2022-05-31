#include <iostream>
using namespace std;

class Rectangle{
private:
  float lenght;
  float width;

public:

void setlength(float);
void setwidth(float);
float area(void);
void show(void);
int sameArea(Rectangle);
float perimeter(void);

};

void Rectangle::setlength(float len){
  lenght = len;
  
}
void Rectangle::setwidth(float wid){
  width = wid;
  
}
float Rectangle::perimeter(void){
  float perimeter;
  perimeter = (lenght * 2) + (width * 2);
  cout<<perimeter<<endl;
  return perimeter;
}
float Rectangle::area(void){
  float area;
  area = lenght * width;
  cout<<area<<endl;
  return area;
}

void Rectangle::show(void){
  cout<<"The lenght is : "<<lenght<<endl;
  cout<<"The width is : "<<width<<endl;
  
}








int main(void){
  float a, b;
  Rectangle rec;
  Rectangle ric;
  Rectangle roc;
  rec.setlength(5);
  rec.setwidth(2.5);
  ric.setlength(5);
  ric.setwidth(18.9);
  cout<<"First Rectangle Lenght and width "<<endl;
  rec.show();
  cout<<"Second Rectangle Lenght and width "<<endl;
  ric.show();
  cout<<"First Rectangle Perimeter "<<endl;
  rec.perimeter();
  cout<<"Second Rectangle Perimeter "<<endl;
  ric.perimeter();
  cout<<"First Rectangle Area "<<endl;
  rec.area();
  cout<<"Second Rectangle Area "<<endl;
  ric.area();

  
  
  
  cout<<endl<<endl<<"Changing first rectangle values : "<<endl;
  rec.setlength(15);
  rec.setwidth(6.3);
   cout<<"First Rectangle Lenght and width "<<endl;
  rec.show();
  cout<<"Second Rectangle Lenght and width "<<endl;
  ric.show();
  cout<<"First Rectangle Perimeter "<<endl;
  rec.perimeter();
  cout<<"Second Rectangle Perimeter "<<endl;
  ric.perimeter();
  cout<<"First Rectangle Area "<<endl;
  rec.area();
  cout<<"Second Rectangle Area "<<endl;
  ric.area();
  cout<<endl<<endl;
   

  if(rec.area()==ric.area()){
    cout<<"The area of the two rectangles is the same "<<endl;
  }else{
    cout<<"The area of the two rectangles is not the same "<<endl; 
  }
  
  

 



}