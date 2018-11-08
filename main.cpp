#include <iostream>
using namespace std;

// <-- ADD YOUR FUNCTION PROTOTYPE HERE
void sort( int &a, int &b, int &c);

int main()
{
  //DO NOT CHANGE WITHIN THIS AREA...
  int red, blue, green;
  cout<<"Enter Red, Green, and Blue values: ";
  cin>>red>>green>>blue;

  //...END OF "DO NOT CHANGE" AREA


  // <-- ADD YOUR FUNCTION CALL HERE

  sort(red,blue,green);

  //DO NOT CHANGE WITHIN THIS AREA...
  cout<<"Rearranged....\n";
  cout<<"RGB: "<<red<<","<<green<<","<<blue<<endl;
  return 0;
  //...END OF "DO NOT CHANGE" AREA
}

// <-- ADD YOUR FUNCTION DEFINITON HERE

void sort( int &a, int &b, int &c)
{

  if(a<c)
  { 
    int tmp;
    tmp = a;
    a = c;
    c = tmp;
  }
  if (a<b)
  {
    int tmp;
    tmp = a;
    a = b;
    b = tmp;
  }
  if (b>c)
  {
    int tmp;
    tmp = b;
    b = c;
    c = tmp;
  }
}
