/*
 1- Başla
 2-Klavyeden asal sayı alın.
 Asal sayının 2 ve 6 eklenerek oluşturulan sayıların asal olup olmadığını kontrol edin.
 3-Eğer her iki sayı da asal ise "asal üçüz" olduğunu, aksi halde "asal üçüz değil" olduğunu ekrana yazdırın.
 4-Bitir

 */

#include <stdio.h>
#include <stdbool.h>

// Bir sayının asal olup olmadığını kontrol etme işlevi
bool asal_sayı(int n)
{
    if (n <= 1)
        return false;
    
    for (int i = 2; i < n; i++)
    {
        if (n % i == 0)
            return false;
    }
    
    return true;
    
}

int main(void)
{
    int a;
    printf("bir sayı giriniz: ");
    scanf("%d", &a);

    // a'nın bir asal üçlünün parçası olup olmadığını kontrol edin
    if (asal_sayı(a) && asal_sayı(a + 2) && asal_sayı(a + 6))
        printf("%d, %d, ve %d bir asal üçlü oluşturur.\n", a, a + 2, a + 6);
    else
        printf("%d bir asal üçlü değildir.\n", a);

    return 0;
    }
