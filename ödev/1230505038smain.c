#include <stdio.h>

struct Teklif {
  int teklifverenno;
  double teklif;
};

int main() {
  // Teklif veren sayısını alın.
  int teklifsayisi;
  printf("Teklif veren sayisini girin: ");
  scanf("%d", &teklifsayisi);

  // Teklifleri saklamak için bir dizi oluşturun.
  struct Teklif teklifler[teklifsayisi];
int i=0;
  // Her teklifi girin.
  for (i; i < teklifsayisi; i++) {
    printf("Teklif veren %d, teklifinizi girin: ", i + 1);
    scanf("%lf", &teklifler[i].teklif);
  }

  // Kazanan teklifi bulun.
  int j=1;
  double enyuksekteklif = teklifler[0].teklif;
  int kazananteklifverenno = teklifler[0].teklifverenno;
  for (j; i < teklifsayisi; j++) {
    if (teklifler[j].teklif > enyuksekteklif) {
      enyuksekteklif = teklifler[j].teklif;
      kazananteklifverenno = teklifler[j].teklifverenno;
    }
  }

  // Kazananı ve ödemeyi yazdırın.
  printf("Kazanan teklif veren: %d\n", kazananteklifverenno);
  printf("Ödeme: %.2f TL\n", enyuksekteklif);

  // Teklifleri serbest bırakın.
 
  free(teklifler);

  return 0;
}
