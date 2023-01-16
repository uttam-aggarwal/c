 #include <stdio.h>
 int main(){
   //  int a = 1.89700000;
   //  printf("%d",a);
   //  return 0;

   int age=33;
   //*ptr means the value at ptr i.e at that address , * is for value 
   int *ptr=&age;//pointer=address of s variable... using int here because that is the type of variable  
   int _age=*ptr; //the thing stored at that address , here 33
   printf("%d\n",_age);
   printf("%p\n",&age);//%p use to print address
   printf("%u\n",&age);//%u use to convert that into a more readable integer
   printf("%u\n",ptr);/////
   printf("%u\n",&ptr);
   printf("%u\n",&_age);

   
   }
