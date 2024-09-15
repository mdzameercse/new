#include <iostream>
using namespace std;
void p1(int n)
{
  /*
***********
****  ****
***    ***
**      **
*        *
*        *
**      **
***    ***
****  ****
**********
*/ 
 for(int i=1;i<=n;i++)
  {
  for(int a=1;a<=n-i+1;a++)
  {
   cout<<"*";
  }
  for(int a=1;a<=2*i-2;a++)
  {
   cout<<" ";
  }
  for(int a=1;a<=n-i+1;a++)
  {
   cout<<"*";
  }
   cout<<"\n";
  }
  
  for(int i=1;i<=n;i++)
  {
  for(int a=1;a<=i;a++)
  {
   cout<<"*";
  }
  for(int a=1;a<=2*n-2*i;a++)
  {
   cout<<" ";
  }
  for(int a=1;a<=i;a++)
  {
   cout<<"*";
  }
   cout<<"\n";
  }
}
void p2(int n)
{
  /*
*******
 *****
  ***
   *
*/
  for (int i = 1; i <=n; i++)
  {
     for(int a=1;a<i;a++)
    {
      cout<<" ";
    }
    for(int a=1;a<=2*n-2*i-1;a++)
    {
      cout<<"*";
    }
    cout<<endl;
  }
  
}
void p3(int n)
{
  /*
    *
   ***
  *****
 *******
*********


  */
  for (int i = 1; i <=n; i++)
  {
    for(int a=1;a<=n-i;a++)
    {
      cout<<" ";
    }
    for(int a=1;a<=2*i-1;a++)
    {
        //cout<<a;
        cout<<"*";
    }
    cout<<endl;
  }
  
}
void p4(int n)
{
  /*
    A
   ABA
  ABCBA
 ABCDCBA
ABCDEDCBA

  */
  for (int i = 1; i <=n; i++)
  {
    for(int a=1;a<=n-i;a++)
    {
      cout<<" ";
    }
    char x='A';
    for(int a=1;a<=2*i-1;a++)
    {
        //cout<<a;
        cout<<x;
      if(i>a)
         x++;
      else
         x--;
    }
    cout<<endl;
  }
  
}
void p5(int n)
{
  /*
1 
0 1 
1 0 1 
0 1 0 1 
1 0 1 0 1 
*/
int c=1;
  for (int i = 1; i <=n; i++)
  {
  if(i%2==0)c=0;
  else c=1;
    for(int a=1;a<=i;a++)
    {
      cout<<c<<" ";
      c=1-c;
    }
    cout<<endl;
  }
  
}
void p6(int n)
{
  /*
1        1
12      21
123    321
1234  4321
1234554321

  */
  for(int i=1;i<=n;i++)
  {
  for(int a=1;a<=i;a++)
  {
   cout<<a;
  }
  for(int a=1;a<=2*n-2*i;a++)
  {
   cout<<" ";
  }
  for(int a=i;a>=1;a--)
  {
   cout<<a;
  }
   cout<<"\n";
  }
}
void p7(int n)
{
  /*
*        *
**      **
***    ***
****  ****
**********
****  ****
***    ***
**      **
*        *
          

*/ 
 for(int i=1;i<=n;i++)
  {
  for(int a=1;a<=i;a++)
  {
   cout<<"*";
  }
  for(int a=1;a<=2*n-2*i;a++)
  {
   cout<<" ";
  }
  for(int a=1;a<=i;a++)
  {
   cout<<"*";
  }
   cout<<"\n";
  }
  for(int i=1;i<=n;i++)
  {
  for(int a=1;a<n-i+1;a++)
  {
   cout<<"*";
  }
  for(int a=1;a<=2*i;a++)
  {
   cout<<" ";
  }
  for(int a=1;a<n-i+1;a++)
  {
   cout<<"*";
  }
   cout<<"\n";
  }
  
}
void p8(int n)
{
  /*
* * * * * 
*       * 
*       * 
*       * 
* * * * * 
  */
  for(int i=1;i<=n;i++)
  {
  for(int a=1;a <=n;a++)
  {
  if(i==1||i==n||a==1||a==n)
   cout<<"* ";
   else 
   cout <<"  ";
  }
   cout<<"\n";
  }
}
void p9(int n)
{
  /*    imp problem 
5 5 5 5 5 5 5 5 5 
5 4 4 4 4 4 4 4 5 
5 4 3 3 3 3 3 4 5 
5 4 3 2 2 2 3 4 5 
5 4 3 2 1 2 3 4 5 
5 4 3 2 2 2 3 4 5 
5 4 3 3 3 3 3 4 5 
5 4 4 4 4 4 4 4 5 
5 5 5 5 5 5 5 5 5
*/ 
int size=2*n-1;
// int start=0,end=size-1;
// int a[size][size];
// while (n!=0)
// {

//  for(int i=start;i<=end;i++){
//  for(int j=start;j<=end;j++){
//      if(j==start||i==start||j==end||i==end){
//         a[i][j]=n;
//         // cout<<n;
//        }
//     }
//     //  cout<<"\n";
//   }
//   //  cout<<"\n";
//  start++;
//  end--;
//   n--;
//  }
//  for(int i=0;i<size;i++)
//   {
//   for(int j=0;j<size;j++)
//     {
//      cout<<a[i][j]<<" ";
//      }
//      cout<<"\n";
//    }
for(int i=0;i<size;i++)
  {
  for(int j=0;j<size;j++)
    {
     cout<<n-min(min(i,j),min(size-i-1,size-j-1))<<" ";
     }
     cout<<"\n";
  }
}
int main() {
  int n=5;
   p9(n);
} 
