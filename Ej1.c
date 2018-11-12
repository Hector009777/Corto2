#include <stdio.h>


int fibonacci(int n) {
   if(n == 0){
      return 0;
   } else if(n == 1) {
      return 1;
   } else {
      return (fibonacci(n-1) + fibonacci(n-2));
   }
}

int main() {
   int n ;
   int i;
	
	printf("Hasta qué numero desea saber el fibonacci: ");
	scanf("%d",&n);
   printf("La secuencia fibonacci hasta la posicion 9 es %d: " , n);
	
   for(i = 0;i<n;i++) {
      printf("%d ",fibonacci(i));            
   }
}
