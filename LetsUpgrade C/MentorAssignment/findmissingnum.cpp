#include <iostream>
using namespace std;
int
main ()
{
  int s, *p;
  cout << "Enter the size of array:"<<endl;
  cin >> s;
  p = new int[s];
  cout << "enter the elements:"<<endl;
  for (int i = 0; i < (s - 1); i++)
    {
      cin >> p[i];
    }
  int temp;
  for (int i = 0; i < (s - 1); i++)
    {
      for (int j = 0; j < (s - 1); j++)
	{
	  if (p[i] < p[j])
	    {
	     temp= p[i] ;
	      p[i] = p[j];
	      p[j] = temp;
	    }
	}
    }
    
     

    for (int i = 0; i < s; i++)
    {
      if ((p[i] + 1) == (p[i + 1]))
	{
     //	cout << "number in array:"<<p[i]<<endl;
	}
      else
	{
	cout << "missing number:" << (p[i] + 1)<<endl;
	break;
    }

}


  return 0;
}