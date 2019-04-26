/* Read input from STDIN. Print your output to STDOUT*/
#include<iostream>
using namespace std;
int main()
{
	//Write code here
	int testCase,i,j,num;int evenMax,oddMax;
	cin>>testCase;
	for(i=0;i<testCase;i++)
	{
		cin>>num;
		int *villain = new int[num];
		for(j=0;j<num;j++)
		{
			cin>>villain[j];
		}
    evenMax=0;oddMax=0;
		for(j=0;j<num;j++)
		{
			if(j%2==0 && villain[j]>=0)
			{
				evenMax+=villain[j];
			}
			else if(villain[j]>=0&& j%2!=0)
			{
				oddMax+=villain[j];
			}
			else
			{}
		}
		if(evenMax>oddMax)
    {
      for(j=num-1;j>=0 ;j--)
      {
        if(villain[j]>0 && j%2==0)
          cout<<villain[j];
      }
      cout<<"\n";
    }

		else if(evenMax<oddMax)
		{
			for(j=num-1;j>=0;j--)
      {
        if (villain[j]>0 && j%2!=0)
          cout<<villain[j];
      }
      cout<<"\n";
		}
    else
    {
      if(villain[num-1]>villain[num-2])
      {
          for(j=num-1;j>=0 ;j=j-2)
          {
            if(villain[j]>0)
              cout<<villain[j];
          }
          cout<<"\n";
      }
      else
      {
  			for(j=num-2;j>=0;j=j-2)
        {
          if (villain[j]>0)
            cout<<villain[j];
        }
        cout<<"\n";
    }
	}

}
return 0;
}
