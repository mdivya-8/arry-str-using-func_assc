1.#include <stdio.h>

int main()
{
    int i=0,n=5;
  char arr[]={'a','b','c','d','e'};//type 1
  //char arr[5]={'a','b','c','d','e'};//type 2
 /* char arr[5];//type 3
  arr[0]='a';
  arr[1]='b';
  arr[2]='c';
  arr[3]='d';
  arr[4]='e';
 // int arr_[10]={0};//type-4
//for(int i=0;i<5;i++){
   // scanf("%d",&arr[i]);
    printf("%u",&arr[i]);*/
  printf("%p",&arr[0]);// base address
   printf("%p\n",arr[0]);
  printf("%p\n",arr[1]);
    printf("%p\n",arr[2]);
  printf("%p\n",arr[3]);
   printf("%p\n",arr[4]);
   while(i<n){
       printf("%c",arr[i]);
       i++;
   }
}
2.#include <stdio.h>
#define n 10
int main()
{
    char ch[n]={'a','A','c','d','e','f','g','h','i','j'};
    int index=0,i=0;
    for(i=0;i<n;i++)
    {
        index++;
        switch(ch[i])
        {
        case 'a':
            printf("a is found at %d\n",index);
            printf("Address is:%p ",&ch[i]);
            break;
        case 'A':
            printf("\nA is found at %d\n",index);
            printf("Address is:%p ",&ch[i]);
            break;
        case 'e':
            printf("\ne is found at %d\n",index);
            printf("Address is:%p ",&ch[i]);
            break;
        case 'E':
            printf("\nE is found at %d\n",index);
            printf("Address is:%p ",&ch[i]);
            break;
        case 'i':
            printf("\ni is found at %d\n",index);
            printf("Address is:%p ",&ch[i]);
            break;
        case 'I':
            printf("\nI is found at %d\n",index);
            printf("Address is:%p ",&ch[i]);
            break;
        case 'o':
            printf("\no is found at %d\n",index);
            printf("Address is:%p ",&ch[i]);
            break;
        case 'O':
            printf("\nO is found at %d\n",index);
            printf("Address is:%p ",&ch[i]);
            break;
        case 'u':
            printf("\nu is found at %d\n",index);
            printf("Address is:%p ",&ch[i]);
            break;
        case 'U':
            printf("\nU is found at %d\n",index);
            printf("Address is:%p ",&ch[i]);
            break;
        }
    }
    return 0;
}
3.#include <stdio.h>
#define N 10
int sort(int a[]);
int main()
{
   int a[N],i,j;
   printf("Enter the array elements");
   for(i=0;i<N;i++)
   scanf("%d",&a[i]);
   printf("The descending order is:");
   sort(a);
}
int sort(int a[])
{
    for(int i=0;i<N;i++)
    {
        for(int j=i+1;j<N;j++)
        {
            if(a[i]<a[j])
            {
            int temp=a[i];
            a[i]=a[j];
            a[j]=temp;
            }
        }
          printf(" %d ",a[i]);
    }
}
4.#include <stdio.h>
#define N 10
int reverse(int a[]);
int main()
{
   int a[N],i,j;
   printf("Enter the array elements");
   for(i=0;i<N;i++)
   scanf("%d",&a[i]);
   printf("The reverse order is:");
   reverse(a);
}
int reverse(int a[])
{
    for(int i=N-1;i>=0;i--)
    {
     printf(" %d ",a[i]);
    }
}
5.#include <stdio.h>
#define SIZE 5
int sec_lar(int arr[],int n);
int main(){
    int arr[SIZE],n,i;
    printf("enter the elements");
    for(i=0;i<SIZE;i++){
        scanf("%d",&arr[i]);
    }
    //printf("%d",sec_lar(arr,n));
 return sec_lar(arr,n);
   
}
int sec_lar(int arr[],int n){
    int i,l=0,s=0;
    for(i=0;i<SIZE;i++){
        if(arr[i]>l){
            s=l;
            l=arr[i];
        }
        else if(arr[i]>s){
            s=arr[i];
        }
    }
    printf("the second largest is %d",s);
}
6./*#include <stdio.h>
#include <string.h>
int main()
{
    int i;
    char arr[]="hello";
        int n=sizeof(arr)/sizeof(arr[0]);
    for(i=0;i<n;i++)
    printf("%c\n",arr[i]);
    for(i=0;i<n;i++){
    printf("%p\n",&arr[i]);
    }
    printf("length of the string arr=%d\n",strlen(arr));
}*/
#include<stdio.h>
int len(char arr[]);
int main(){
    char arr[]="hello";
    int n=sizeof(arr)/sizeof(arr[0]);
    return len(arr);
}
int len(char arr[]){
    int i=0;
    while(arr[i]!='\0')
    i++;
    printf("%d",i);
}
7.#include<stdio.h>
void  mystrrev(char s[10]);
int main()
{

 char s[10];
 printf("enter the string name:");
 scanf("%s",s);
 mystrrev(s);
}
void  mystrrev(char s[10])
{
        int n;
        char ch;
        for(n=0;s[n]!='\0';n++);
        n=n-1;
        int i=0;
        while(n>i)
        {
         ch= s[i];
         s[i]=s[n];
         s[n]=ch;
         n--;
         i++;
      }
        printf("%s",s);
}
8.#include<stdio.h>
int  main()
{
char a[20],ch;
int i,count=0;
printf("enter a string:\n");
scanf("%s",a);
printf("enter the character to determine the frequency:\n"); //l
scanf(" %c",&ch);
for(i=0;a[i]!='\0';i++) // h e l l o
{  
if(a[i]==ch)
count++;
}
printf("frequency of %s=%d",a,count);
}

