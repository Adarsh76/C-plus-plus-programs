//WAP to demonstrate of public inheritance (diff member function)
#include<iostream.h>
#include<conio.h>
class base
 { int x,y ; //by default private
   public :
    void get()
	 { cout<<"\n Enter X and Y :";
	   cin>>x>>y;
	 }
    void show()
	 { cout<<"\nX="<<x<<"  Y="<<y;
	 }
 };
class derived : public base
 { int l,m ; //by default private
   public :
    void getdata()
	 { cout<<"\n Enter L and M :";
	   cin>>l>>m;
	 }
    void showdata()
	 { cout<<"\nL="<<l<<"  M="<<m;
	 }
 };
void main()
  { 
    clrscr();
    derived d1;
    d1.get();
    d1.getdata();
    d1.show();
    d1.showdata();
    getch();
  }
