// #include<iostream>

// using namespace std;

// int main(){
  
//    string s= "hello";
// //    or char s [10]="hello";
//     cout<<s<<endl;
//     char name[20];
//     cout<<"enter your name ";
//     cin.get(name,20);
//     cout<<" Your entered name is "<< name;   
//     return 0;
// }

// string functions  using cstring header file

// #include<iostream>
// #include<cstring>
// using namespace std;

// int main()
// {
    // char s[23];
    // cout<<"Enter your name or any string ";
    // cin.getline(s,23);
    // cout<<"your entered string is "<<s<<endl;
    // cout<<"the length of your entered string is = "<<strlen(s)<<endl;

    // return 0;

// using pointer

//     char *s;
//     cout<<"enter your string";
//     cin.getline(s,100);

//     cout<<"length"<<strlen(s)<<endl;

//     return 0;

// }

// String_Functions

// #include<iostream>
// #include<cstring>

// using namespace std;

// int main()
//{
// copy function in string
    // char s1[20]="Hello";
    // char s2[20]="World";

    // cout<<strcpy(s2,s1)<<endl;

// strstr function in string
    // char s1[20]="Programing";
    // char s2[10]="a";
    //     if(strstr(s2,s2)!=NULL)
    //         cout<<strstr(s1,s2)<<endl;
    //     else
    //         cout<<"Not found"<<endl;

// strchr and strrchr(start from right hand side) in string
    // char s1[20]="programming";
    // cout<< strchr(s1,'m')<<endl;
    // cout<< strrchr(s1,'m')<<endl;

// strcmp in string 
    // char s1[20]="Hello";
    // char s2[20]="hello";

    // cout<<strcmp(s1,s2)<<endl;

//  string to long or float 
    // char s1[20]="235";
    // char s2[20]="123.45";

    // long int x= strtol(s1,NULL,10);
    // float y= strtof(s2,NULL);

    // cout<<x<<"\n"<<y<<endl;

// string tokenizer

// char s1[50]="bharat=20;sahil=32;rohit=19";
// char *token= strtok(s1,";=");
//     //  while(token!=NULL)
//         cout<<strtok(NULL,";=")<<endl;

// return 0;

// }

// String Class

// #include<iostream>
// #include<string>

// using namespace std;

// int main()
// {
    // string a="Programming";
    // string b="Markup";

    // a.resize(25);
    // cout<<a.length()<<endl;
    // cout<<a.capacity()<<endl;
    // cout<<a.max_size()<<endl;
    // a.clear();
    // if(a.empty())
    //     cout<<"string is empty";
    // else
    //     cout<<a<<endl;
    // cout<<a<<endl;
    

    // a.append(" Languages");
    // cout<<a<<endl;
    // a.insert(4,"kk");
    // a.replace(3,5,"aa");
     // a.erase();
    // a.push_back('z');
    // cout<<a<<endl;
    // a.pop_back();
    // cout<<a<<endl;
    // a.swap(b);
    // cout<<a<<endl;

    // string s="Welcome";
    // char v[10];
    // // copy function
    // s.copy(v,s.length());
    // v[s.length()]=0;
    // cout<<v<<endl;

    // find function
    // string str="Hoow are you";
    // cout<<str.find("are")<<endl;
    // cout<<str.find('k')<<endl;
    // cout<<str.rfind('k')<<endl;
    // cout<<str.find_first_of('o',2)<<endl;
    // cout<<str.find_last_of('o')<<endl;

    // substring function
    // string str1="Programming";
    // string str2="Hello";
    // cout<<str1.substr(3,4)<<endl;
    // cout<<str1.compare(str2)<<endl;
  

    // string operators at(), front(), back(), + ,=,[]
    // cout<<str1.at(4)<<endl;
    // cout<<str2[3]<<endl;
    // cout<<str1.back()<<" "<<str1.front()<<endl;
    // str2 += " World";
    // cout<<str1 +" "+ str2<<endl;

    // iterator in string

    // string str="Today";

    // string::iterator it;
    // string::reverse_iterator rt;

    // for(it=str.begin();it!=str.end();it++)
    // {
    //     cout<<*it;
    // }
    // cout<<endl;
    // for(rt=str.rbegin();rt!=str.rend();rt++)
    // {
    //     cout<<*rt;
    // }

    // for(int i=0; str[i]!=0;i++)
    // {
        // cout<<str[i];
        // str[i]=str[i]-32;
    // }
    // cout<<str;
//   return 0;
// }

// converting upper case to lower case
// #include<iostream>
// #include<cstring>

// using namespace std;

// int main()
// {
//     // string str="WELCOME";
//     string str2="WelComE9";
//     // for(int i=0;str[i]!=0;i++)
//     // {
//     //     str[i]= str[i]+32;
//     // }

//     for(int i=0; str2[i]!=0;i++)
//     {
//         if(str2[i]>=97 && str2[i]<=122)
//         {
//             str2[i]-=32;
//         }
//     }
//     cout<<str2<<endl;

// return 0;
// }

// count no of vowels consonents and words in string
// #include<iostream>
// #include<cstring>

// using namespace std;

// int main()
// {
//     string str;
//     cout<<"enter any string or paragraph " <<endl;
//     getline(cin,str);
//     int vowel=0,space=0,consonemt=0,num=0;

//     for(int i=0;str[i]!='\0';i++)
//     {
//         if(str[i]== 'A' || str[i]== 'E' || str[i]== 'I' || str[i]== 'O' || str[i]== 'U' || 
//         str[i]== 'a' ||str[i]== 'e' ||str[i]== 'i' ||str[i]== 'o' || str[i]== 'u')
//             vowel++;
//          else if(str[i]==' ')
//              space++;
//         // else if (str[i]>=0 && str[i]<=9)
//             // num+=1;
//         else
//         consonemt++;
//     }
// cout<<"the no of vowel is "<<vowel<<endl;
// cout<<"the no of words are "<<space+1<<endl;
// cout<<"the no of consonent are "<<consonemt<<endl;
// // cout<<"the no of numeric no are "<<num<<endl;
// cout<<"total no of alphabets are "<<vowel + consonemt<<endl;

// return 0;
// }


// int main()
// {
//     string str,rev;
//     cout<<"enter your string"<<endl;
//     getline(cin,str);
//     int len=(int)str.length();
//     rev.resize(len);

//     for(int i=0,j=len-1;i<len;i++,j--)
//     {
//         rev[i]=str[j];
//     } 
//     rev[len]=0;
// if(rev==str)
//     cout<<"Your string is palindrome"<<endl;
// else
//     cout<<"String is not a palendrome"<<endl;  OR

// if(str.compare(rev)==0)
//     cout<<"palindrome"<<endl;
// else
// {
//     cout<<"Not Palindrom"<<endl;
// }


// return 0;
// }

