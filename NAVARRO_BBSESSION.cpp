#include <iostream>
#include <conio.h>
using namespace std;

int main() 
{
   
   float d,y;
   int m;
   
  cout<< "INPUT NUMBERS ONLY\n ";
   
   cout<< "Enter DAY: ";
   cin>> d;
   
   cout<< "Enter MONTH: ";
   cin>> m;
   
   cout<< "Enter YEAR: ";
   cin>> y;
   
   switch(m)
   {
   	case 1: if (m=1)
  	cout<< "JANUARY " << d << "," << y << endl;	
    break;
 
   case 2: if (m=2)
   {
   
	cout<< "FEBRUARY " << d << ", " << y << endl;
	break;
}
	case 3: if (m=3)
   {
   
	cout<< "MARCH " << d << ", " << y << endl;
	break;
}
	case 4: if (m=4)
   {
   
	cout<< "APRIL " << d << ", " << y << endl;
	break;
}
	case 5: if (m=5)
   {
   
	cout<< "MAY " << d << ", " << y << endl;
break;
}
	case 6: if (m=6)
   {
   
	cout<< "JUNE " << d << ", " << y << endl;
break;
}
	case 7: if (m=7)
   {
   
	cout<< "JULY " << d << ", " << y << endl;
break;
}
	case 8: if (m=8)
   {
   
	cout<< "AUGUST " << d << ", " << y << endl;
break;
}
	case 9: if (m=9)
   {
   
	cout<< "SEPTEMBER " << d << ", " << y << endl;
break;
}
	case 10: if (m=10)
   {
   
	cout<< "OCTOBER " << d << ", " << y << endl;
break;
}
	case 11: if (m=11)
   {
   
	cout<< "NOVEMBER " << d << ", " << y << endl;
break;
}
	case 12: if (m=12)
   {
   
	cout<< "DECEMBER " << d << ", " << y << endl;
break;
}
default: 

cout<< "INVALID DATE";
}

	_getch();
   return 0;
}
