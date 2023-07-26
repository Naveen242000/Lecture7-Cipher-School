#include<bits/stdc++.h>
using namespace std;
class student{
string passcode;
friend class bestfriend;
protected;
int age;
public:
string name;
int id;
student(){
}
student(int id,string name,string passcode,int age){
  this->passcode=passcode;
  this->age=age;
  this->name=name;
  this->id=id;
}
//void into(){
  //cout<<"My name is"<<name<<" ,my id is"<<id<<"passcode is"<<passcode<<endl;
//}
//void setter(string s,int a,string n,int i){
  //passcode=s;
  //age=a;
  //name=n;
  //id=i;
//}
  
friend void hacker(student s);
};
void hacker(student s){
  cout<<s.passcode<<" "<<s.age<<endl;
}
class bestfriend{
public:
void sharingSecret(student s){
  cout<<s.passcode<<" "<<s.age<<endl;
}
};
int main(){
  student s1(1,"Mohit","0001",10);
  
return 0;
}
