// incert , delete, search,insertion.
#include<iostream>
using namespace std;
class array
{
      private:
	        int a[10],b;
			int size=0;
	  public:
		    int get(int index)
			{
				return a[index];
			}
		   void insert(int value, int index )
		   {
               a[index]=value;  
			   size++;
		   }
		   int getsize()
		   {
			   return  size;
		   }
		   void deleteA(int index)
		   {
                
				for(int i=index; i<getsize()-1;i++)
				{
					a[i]=a[i+1];
				}
				a[getsize()-1]=0;
				size--;
		   }
		   int  search(int value)
		   {
			   
			   for(int i=0;i<getsize();i++)
			   {
				    if(a[i]==value)
					{
						return 1;
					}

			   }
			   return 0;
		   }
		 //  inseration(int index);
		//   for()
};
int main()
{
	 array arr,obj2;
     int x,num,ind,sear,flag;
	 cout<<"Enter array size=";
	 cin>>x;
	 for(int i=0;i<x;i++)
	 {
		 cin>>num;
		 arr.insert(num,i);
	 }
	 for(int i=0;i<arr.getsize();i++)
	 {
		cout<<arr.get(i)<<" ";
	 }
	 cout<<endl;
	 cout<<"Enter number search=";
	 cin>>sear;
	 flag=arr.search(sear);
	 if(flag==1)
	   cout<<"value is found\n";
	 else
	 cout<<"value is not found\n";
	 
	 cout<<"inter Delete index=";
	 cin>>ind;
	 arr.deleteA(ind);
	 cout<<"\n";
	 for(int i=0; i<arr.getsize(); i++)
	 {		
		 cout<<arr.get(i)<<" ";
	 }
	 cout<<"inseration"<<endl;
	 cout<<"Enter number=";
	 //arr.inseration();
	// for(int i=0;)
	 return 0;
}