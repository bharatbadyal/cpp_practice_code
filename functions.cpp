
//simple function
// #include <iostream>
// using namespace std;

// void display(){
//     cout<<"Hello";
// }
// int main(){

// display();
// return 0;
// }

//function with arguments
// #include <iostream>
// using namespace std;

// float add(float x, float y){
//     float z;
//     z=x+y;
//     return z;
// }

// int main()
// {
//     float x=2.3, y=7.9,z;
//     z=add(x,y);
//     cout<<z<<endl;

//     return 0;

// }

//example of function to find maximum of three no.
// #include <iostream>
// using namespace std;

// int max(int a, int b, int c)
// {
//     if(a>b && a>c)
//     return a;

//     else if(b>c)
//     return b;

//     else
//     return c;
// }

// int main()
// {
//     int a,b,c,d;
//     cout<<"enter any three numbers"<<endl;
//     cin>>a>>b>>c;

//     d=max(a,b,c);
//     cout<<"maximum no. is "<<d<<endl;

//     return 0;
// }


//  #include<iostream>
//  using namespace std;


// // 1 write a Min() function here to Min of 2 integers
//  int Min(int a, int b)
//  {
//     if(a<b)
//      return a;
//     else 
//      return b;
//  }
// //2 write a Min() function here to Min of 3 integers
//  int Min(int a, int b,int c)
//  {
//    if(a<b && a<c)
//      return a;
//      else if(b<c)
//     return b;
//     else
//     return c;
//  }
// //3 write a Min() function here to Min of 2 floats

//  float Min(float a, float b)
//  {
//      if(a<b)
//      return a;
//      else
//      return b;
//  }

//  int Main()
//  {
//      cout<<Min(10,5)<<endl;
//      cout<<Min(12,7,9)<<endl;
//      cout<<Min(18.0f,9.0f)<<endl;
//  return 0;
//  }


//Program to Demonstrate Function Overloading using Sum function
// #include<iostream>
// using namespace std;
// int sum(int a,int b)
// {
// return a+b;
// }
// float sum(float a,float b)
// {
// return a+b;
// }
// int sum(int a,int b,int c)
// {
// return a+b+c;
// }
// int main()
// {
//  cout<<sum(10,5)<<endl;
//  cout<<sum(12.5f,3.4f)<<endl;
//  cout<<sum(10,20,3)<<endl;
// return 0;
// }

// Example of function template
// #include <iostream>
// using namespace std;

// template<class T>
// T maxim(T a, T b){
//     return a>b?a:b;
// }

// int main(){
//     cout<<maxim(24,45)<<endl;
//     cout<<maxim(12.2,12.3)<<endl;
//     cout<<maxim(2.3f,4.6f)<<endl;

//     return 0;
// }


// #include<iostream>
// using namespace std;


//sum of two
// int sum(int a, int b, int c=0){
//     return a+b+c;
// }

// int main(){

//     cout<<sum(12,34,47)<<endl;
//     cout<<sum(2,3)<<endl;
//     return 0;

// }

// maximum of three
// int maxim(int a=0, int b=0, int c=0){
//     return a>b && a>c ? a: b>c?b:c;
// }

// int main(){

//     cout<<maxim(12,34,5)<<endl;
//     cout<<maxim(45667,52342)<<endl;
//     cout<<maxim(2)<<endl;

//     return 0;
// }


// parameter passing methods
// call by value

// #include<iostream>
// using namespace std;

// void swap(int a, int b){
//     int temp;
//     temp=a;
//     a=b;
//     b=temp;
// }

// int main()
// {
//     int x=10,y=20;
//     swap(x,y);
//     cout<<x<<" "<<y;

//     return 0;
// }

// call by address

// #include<iostream>
// using namespace std;

// int swap(int *a,int *b)
// {
//     int temp;
//     temp= *a;
//     *a=*b;
//     *b=temp;
// }

// int main()
// {
//     int a=10, b=20;
//     swap(&a,&b);
//     cout<<a<<' '<<b<<endl;

//     return 0;
// }

// call by reference

// #include<iostream>
// using namespace std;

// int swap(int &a,int &b)
// {
//     int temp;
//     temp= a;
//     a= b;
//     b= temp;
// }

// int main()
// {
//     int a=10, b=20;
//     swap(a,b);
//     cout<<a<<" "<<b<<endl;

//     return 0;
// }

// linear search
// #include <iostream>
// using namespace std;

// int search(int A[],int n, int k){
//     for(int i=0;i>n;i++)
//         if(k==A[i])
//             return i;
//     return 0;
// }
//  int main()
//  {
//      int A[]{21,23,45,43,44,23,56};
//      int k;
//      cout<<"enter the no which to be searched"<<endl;
//      cin>>k;
//      int index= search(A,7,k);
//      cout<<"element found at "<<index<<endl;

//      return 0;
//  }


