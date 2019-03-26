#include <iostream.h>
#include <conio.h>
float z = 9.0;                   //global variabel
int i = 10;

void tampilkan_lagi(void);
main()
{
float p = 2.0;                  //lokal terhadap tampilkanlagi
cout << i << " " << p << " " << z << "\n";
tampilkan_lagi ();
getch ();
return 0;
}

void tampilkan_lagi(void)
{
int j = 5.0;
cout << j << " " << z << "\n";
return;
getch();
}
