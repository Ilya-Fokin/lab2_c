#include <iostream>
#include <string>
#include "class.h"

using namespace std;

int main()
{
setlocale(LC_ALL,"RUS");
Product cloth, cloth1, cloth2;


cout<<"\t"<<"Standart constructor: "<<endl;
cloth1.print();
cout<<endl;


Product Copy(cloth1);
cout<<"\t"<<"Copy constructor: "<<endl;
cout<<Copy;


cout<<endl<<"\t"<<"setName: "<<endl;
cloth.setName("Trousers");
cloth.setSize(34);
cloth.setColor("Black");
cout<<cloth<<endl;


cout<<endl<<"\t"<<"getName: "<<endl<<"Name product: "<<cloth.getName()<<endl<<"Size product: "<<cloth.getSize()<<endl<<"Color product: "<<cloth.getColor()<<endl<<endl<<endl;


string Name;
int Size;
string Color;

cout<<"\t"<<"Enter name, size, color: "<<endl;
cin>>cloth;
cout<<"\n"<<cloth<<endl;


cout<<"\t"<<"++"<<endl;
++cloth;
cout<<cloth<<endl;
cloth2=cloth;

cout<<"\t"<<"!="<<endl;
if(cloth!=cloth1)
   {cout<<"Not same"<<endl;}
   else {cout<<"The same"<<endl;}

cout<<"\t"<<"--"<<endl;
--cloth;
cout<<cloth<<endl;

cout<<"\t"<<"="<<endl;
cloth=Copy;
cout<<cloth<<endl;

cout<<"\t"<<"=="<<endl;
if(cloth==cloth1)
   {cout<<"The same"<<endl;}
   else {cout<<"Not same"<<endl;}


cout<<"\t"<<">"<<endl;
if(cloth>cloth2)
   {cout<<"More"<<endl;}
   else {cout<<"Not more"<<endl;}

cout<<"\t"<<">="<<endl;
if(cloth>=cloth2)
   {cout<<"More or same"<<endl;}
   else {cout<<"Less"<<endl;}

cout<<"\t"<<"<"<<endl;
if(cloth2<cloth)
   {cout<<"Less"<<endl;}
   else {cout<<"More or same"<<endl;}

cout<<"\t"<<"<="<<endl;
if(cloth2<cloth)
   {cout<<"Less or same"<<endl;}
  else {cout<<"More"<<endl;}





}
