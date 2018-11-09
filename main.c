#include <stdio.h>
#include <stdlib.h>

int main() {
	int x, y,n, sonuc;

	printf("Birinci sayiyi giriniz:"); scanf("%d", &x);
	printf("ikinci sayiyi giriniz:"); scanf("%d", &y);
		printf("Istediðiniz islemi seciniz:\n 1-toplam\n 2-cikarma \n 3-carpma \n 4-bolme \n 5-mod alma"); 
		scanf("%d" ,&n);
		if (n==1)
		{ printf("sonuc=%d" ,x+y);
		}
		if (n==2)
		{ printf("sonuc=%d" ,x-y);
		}
		if (n==3)
		{ printf("sonuc=%d" ,x*y);
		}
		if (n==4)
		{ printf("sonuc=%d" ,x/y);
		}
       else if(n==5)
	 
		{ sonuc=x%y;
		printf("sonuc=%d" ,sonuc);
		}
	
	   else
          {printf("lutfen 1 ile 5 arasinda deger giriniz" );
         	}	

	return 0;
}
