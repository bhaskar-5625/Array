// #include<stdio.h>

// int main() {
//     int arr[5]={2,4,6,8,1};
//     arr[4]=100;             //value update
//     printf("%d",arr[4]);  //if we go out of index--> index out of bound error
//     return 0;
// }

// #include<stdio.h>

// int main() {
//     int arr[5];
//     arr[0]=2;            
//     arr[1]=4;            
//     arr[2]=6;            
//     arr[3]=8;            
//     arr[4]=1;            
//     printf("%d",arr[4]);  
//     return 0;
// }

// #include<stdio.h>

// int main() {
//     float arr[3]={1.2,2.4,6.8};            
//     printf("%f",arr[2]);  
//     return 0;
// }

// #include<stdio.h>

// int main() {
//     char arr[4]={'a','n','Y','%'};            
//     printf("%c",arr[3]);  
//     return 0;
// }

//taking input
// #include<stdio.h>

// int main() {
//     int arr[4];
//     printf("Enter first element : ");
//     scanf("%d",&arr[0]);
//     printf("Enter second element : ");
//     scanf("%d",&arr[1]);
//     printf("Enter third element : ");
//     scanf("%d",&arr[2]);
//     printf("Enter fourth element : ");
//     scanf("%d",&arr[3]);
//     printf("%d",arr[2]);
//     return 0;
// }

// printing array by loop
// #include<stdio.h>

// int main() {
//     int arr[5]={2,5,8,3,9};
//     for(int i=0;i<=4;i++){
//         printf("%d\n",arr[i]);
//     }
//     return 0;
// }

// taking input by loop
// #include<stdio.h>

// int main() {
//     int arr[5];
//     for(int i=0;i<=4;i++){
//         printf("Enter element number %d:\n",i+1);
//         scanf("%d",&arr[i]);
//     }
//     printf("%d",arr[2]);
//     return 0;
// }

// #include<stdio.h>

// int main() {
//     int arr[5];
//     for(int i=0;i<=4;i++){
//         printf("Enter element number %d:\n",i+1);
//         scanf("%d",&arr[i]);
//     }
//     for(int i=0;i<=4;i++){
//         printf("%d ",arr[i]);
//     }
//     return 0;
// }

// #include<stdio.h>

// int main() {
//     int arr[5];
//     for(int i=0;i<=4;i++){
//         printf("Enter element number %d:\n",i+1);
//         scanf("%d",&arr[i]);
//     }
//     for(int i=4;i>=0;i--){
//         printf("%d ",arr[i]);
//     }
//     return 0;
// }


// int main() {
//     int marks[10];
//     for(int i=0;i<=9;i++){
//         printf("Enter marks of %d student:\n",i+1);
//         scanf("%d",&marks[i]);
//     }
//     for(int i=0;i<=9;i++){
//         if(marks[i]<35) printf("%d ",i);
//     }
    
//     return 0;
// }

// #include<stdio.h>

// int main() {
//     int size = 10,b[size];          //this is right
//     printf("%d ",size);               // it means int size=10;
//     b[0]=2;                                //           int b[10];
//     printf("%d",b[0]);
//     return 0;
// }

// int c={2,4,7}   this declaration is wrong as it does not make dabba

// address

// #include<stdio.h>

// int main() {
//     int arr[5]={1,1,2,1,1};
//     printf("%p\n",&arr[0]);
//     printf("%p\n",&arr[1]);
//     printf("%p\n",&arr[2]);
//     printf("%p\n",&arr[3]);
//     printf("%p\n",&arr[4]);
//     return 0;
// }

// #include<stdio.h>

// int main() {
//     int sub[50],i;
//     for(i=0;i<=48;i++);
//     {
//         sub[i]=i;
//         printf("%d",sub[i]);
//     }
//     return 0;
// }

//garbage value
// #include<stdio.h>

// int main() {
//     int arr[4];
//     printf("%d",arr[0]);
//     return 0;
// }

// #include<stdio.h>

// int main() {
//     int x;
//     printf("%d",x);
//     return 0;
// }

// #include<stdio.h>

// int main() {
//     int i,a=2,b=3;
//     int arr[2+3];
//     for(i = 0 ; i <a+b ; i++){
//         scanf("%d",&arr[i]);
//         printf("%d \n",arr[i]);

//     }
//     return 0;
// }

// calculate the sum of all the elements in the given array

// #include<stdio.h>

// int main() {
//     int arr[5]={1,2,3,4,5};
//     int sum=0;
//     for(int i=0;i<=4;i++){
//         sum=sum+arr[i];
//     }
//     printf("%d",sum);
//     return 0;
// }

// user input size
// #include<stdio.h>

// int main() {
//     int n;
//     printf("Enter the size of array: ");
//     scanf("%d",&n);
//     int arr[n];
//     for(int i=0;i<=n-1;i++){
//         scanf("%d",&arr[i]);
//     }
//     for(int i=0;i<=n-1;i++){
//         printf("%d ",arr[i]);
//     }
//     return 0;
// }

// cal prod of all elem in array
// #include<stdio.h>

// int main() {
//     int arr[5]={1,2,3,4,5};
//     int product=1;
//     for(int i=0;i<=4;i++){
//         product=product*arr[i];
//     }
//     printf("%d",product);
//     return 0;
// }

// searching the maximum element in the array
// #include<stdio.h>

// int main() {
//     int arr[7]={1,4,2,8,19,5,12};
//     int max=-1;   //sabse chota number for comparison
//     for(int i=0;i<=6;i++){
//         if(max<arr[i]){
//             max=arr[i];
//         }
//     }
//     printf("%d",max);
//     return 0;
// }

// second method
// #include<stdio.h>
// int main() {
//     int arr[7]={-10,-40,-200,-80,-19,-5,-12};
//     int max=arr[0];   //array ka phla element dedo aur usase comparison karo   
//     for(int i=1;i<=6;i++){
//         if(max<arr[i]){
//             max=arr[i];
//         }
//     }
//     printf("%d",max);
//     return 0;
// }

// minimmum value
// #include<stdio.h>
// int main() {
//     int arr[7]={-10,-40,-200,-80,-19,-5,-12};
//     int min=arr[0];   //array ka phla element dedo aur usase comparison karo   
//     for(int i=1;i<=6;i++){
//         if(min>arr[i]){
//             min=arr[i];
//         }
//     }
//     printf("%d",min);
//     return 0;
// }

//array pass by reference
// #include<stdio.h>
// void func(int arr[]){
//     arr[0]=10;
//     return;
// }
// int main() {
//     int arr[5]={1,2,3,4,5};
//     printf("%d\n",arr[0]);
//     func(arr);
//     printf("%d\n",arr[0]);
//     return 0;
// }

// #include<stdio.h>
// void func(int x[]){
// int temp=x[0];
// x[0]=x[1];
// x[1]=temp;
// return;
// }
// int main() {
//     int arr[2]={2,9};
//     printf("%d %d\n",arr[0],arr[1]);
//     func(arr);
//     printf("%d %d\n",arr[0],arr[1]);
//     return 0;
// }

// #include<stdio.h>

// int main() {
//     int arr[8]={1,2,3,4,5,6,7,8};
//     for(int i=0;i<=7;i++){
//         if(i%2!=0){
//             arr[i]*=2;
//         }
//         if(i%2==0){
//             arr[i]+=10;
//         }
        
//     }
//     for(int i=0;i<=7;i++){
//         printf("%d ",arr[i]);
//     }
//     return 0;
// }

// count the number of elements in the given array greater than a given number

// #include<stdio.h>
// int main(){
//     int arr[7]={1,2,3,4,5,6,7};
//     int x=3;
//     int count=0;
//     for(int i=0;i<=6;i++){
        
//         if(arr[i]>x)  count++;
           
        
//     }
//     printf("%d",count);
//     return 0;
// }

//difference b/w sum of elements at even indices and odd indices

// #include<stdio.h>
// int main() {
//     int arr[6]={1,3,5,7,9,11};
//     int sumeven=0;
//     int sumodd=0;
//     for(int i=0;i<=5;i++){
//         if(i%2==0) sumeven=sumeven+arr[i];
//         else sumodd=sumodd+arr[i];
//     }
//     int difference=sumeven-sumodd;
//     printf("%d",difference);
//     return 0;
// }

//find total number of pairs in the array whose sum is equal to the given value x

// #include<stdio.h>
// int main() {
//     int arr[8]={1,2,3,4,5,6,7,8};
//     int x=12;
//     int count=0;
//     for(int i=0;i<=7;i++){
//         for(int j=i+1;j<=7;j++){
//             if((arr[i]+arr[j])==x){
//                 count++;
//                 printf("(%d,%d)\n",arr[i],arr[j]);
//             } 
            
//         }
//     }
//     printf("%d",count);
//     return 0;
// }

//find total number of triplets in the array whose sum is equal to the given value x
// #include<stdio.h>
// int main() {
//     int arr[8]={1,2,3,4,5,6,7,8};
//     int x=12;
//     int count=0;
//     for(int i=0;i<=7;i++){
//         for(int j=i+1;j<=7;j++){
//            for(int k=j+1;k<=7;k++){
//             if(arr[i]+arr[j]+arr[k]==x){
//                 count++;
//                 printf("(%d,%d,%d)\n",arr[i],arr[j],arr[k]);
//             }
//            } 
            
//         }
//     }
//     printf("%d",count);
//     return 0;
// }

//find the second largest element in the given array
// #include<stdio.h>
// int main() {
//     int arr[7]={-10,-40,-200,-80,-19,-5,-12};
//     int max=arr[0];   //array ka phla element dedo aur usase comparison karo  
//     int smax=arr[0]; 
//     for(int i=1;i<=6;i++){
//         if(max<arr[i]){
//             max=arr[i];
//         }
//     }
//     for(int i=0;i<=6;i++){
//         if(smax<arr[i] && arr[i]!=max);
//     }
//     printf("%d",smax);
//     return 0;
// }

//write a programme to copy the contents of one array into another in the reverse order
// #include<stdio.h>
// int main() {
//     int arr[8]={1,2,3,4,5,6,7,8};
//     int brr[7];
//     for(int i=0;i<=7;i++){
//         brr[i]=arr[7-i];
//     }
//     for(int i=0;i<=7;i++){
//         printf("%d ",brr[i]);
//     }
    
//     return 0;
// }

//second metod
// #include<stdio.h>
// int main() {
//     int arr[8]={1,2,3,4,5,6,7,8};
//     int brr[8];
//     for(int i=0;i<=7;i++){
//         brr[i]=arr[i];
//     }
//     for(int i=7;i>=0;i--){
//         printf("%d ",brr[i]);
//     }
    
//     return 0;
// }

//write a programme to reverse the array without using any extra array
// #include<stdio.h>
// void reverse(int arr[]){
//     int i=0;
//     int j=7;     //these  are for index
//     while(i<j){
//         int temp=arr[i];
//         arr[i]=arr[j];
//         arr[j]=temp;
//         i++;
//         j--;
//     }
// }
// int main() {
//     int arr[8]={1,2,3,4,5,6,7,8};
//     reverse(arr);
//     for(int i=0;i<=7;i++){
//         printf("%d ",arr[i]);
//     }
    
//     return 0;
// }

//second method by for loop
// #include<stdio.h>
// void reverse(int arr[]){
//     for(int i=0,j=7;i<j;i++,j--){
//         int temp=arr[i];
//         arr[i]=arr[j];
//         arr[j]=temp;
//     }
        
// }
// int main() {
//     int arr[8]={1,2,3,4,5,6,7,8};
//     reverse(arr);
//     for(int i=0;i<=7;i++){
//         printf("%d ",arr[i]);
//     }
    
//     return 0;
// }

// given an array and a number x. find id x lies in array or not if yes then print the index
// #include<stdio.h>
// int main() {
//     int arr[7]={11,45,3,45,5,67,7};
//     int x=45;
//     for(int i=0;i<=6;i++){
//         if(arr[i]==x){
//             printf("%d is present in the array and its index is %d\n",x,i);
//             // break;  break lagane per kewal pahle wale 45 ka information dega
//         }
//     }
//     return 0;
// }


//given an array from 1 to 100 except one element in this range. find that missing element
//uper jaise her number check karne se accha hum iss array ka sum aur 1 to 100 ka sum nikal k isme se ghata denge to wo number mil jayega

// #include<stdio.h>
// int main() {
//     int n;
//     printf("Enter the size of an array : ");
//     scanf("%d",&n);
//     int arr[n-1];
//     for(int i=0;i<=n-2;i++){
//         printf("Enter elements here :");
//         scanf("%d",&arr[i]);
//     }
//     int sum=0;
//     for(int i=0;i<=n-2;i++){
//         sum=sum+arr[i];
//     }
//     int sum2=(n*(n+1))/2;
//     printf("The missing number is:%d",sum2-sum);
//     return 0;
// }

//wap to find a duplicate element from a given array of intefers
// #include<stdio.h>
// int main() {
//     int arr[]={1,2,7,4,5,6,7};
//     for(int i=0;i<=6;i++){
//         for(int j=i+1;j<=6;j++){   //like pairs
//             if(arr[i]==arr[j]){
//                 printf("%d is duplicate number",arr[i]);
//                 break;
//             }
//         }
//     }
//     return 0;
// }

