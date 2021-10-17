#include <stdio.h>
void hexa(int decn){
    long int rmd,q,dn=0,m,l;
	int i=1,j,tmp;
    char s;
    q = decn;
    for(l=q;l>0;l=l/16){
	tmp = l % 16;
	if(tmp<10)
	tmp =tmp + 48; else
	tmp = tmp + 55;
    dn=dn*100+tmp;
	 }
    for(m=dn;m>0;m=m/100)
    {
     s=m % 100;
    switch(s) {
     case 'A' :
         printf("%c",'a');
         break;
      case 'B' :
        printf("%c",'b');
        break;
      case 'C' :
         printf("%c",'c');
        break;
      case 'D' :
         printf("%c",'d');
        break;
      case 'E' :
         printf("%c",'e');
            break;
        case 'F' :
        printf("%c",'f');
        break;
      default :
         printf("%c",s);
        break;
   }
    }
        
}
void Octal(int Num) {
  int octalNum = 0, i = 1;
  while (Num != 0) {
    octalNum += (Num % 8) * i;
    Num /= 8;
    i *= 10;
  }

  printf("%d",octalNum);
}
void main() 
        {
	long int num;
	scanf("%ld",&num);
	printf("This is Decimal to Octal converted answer:");
	Octal(num);
	printf("\n");
	printf("This is Decimal to Hexadecimal converted answer:");
	hexa(num);
	
}