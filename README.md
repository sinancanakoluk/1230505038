en yüksek bahisi verenin kazandığı bir acık artırma uygulaması 
for (i; i < teklifsayisi; i++) kulanıcını maxımum teflifi belirlemesi için üst sınırı giriniz.
scanf("%lf", &teklifler[i].teklif); teklifleri giriniz.

  for (j; i < teklifsayisi; j++) {
    if (teklifler[j].teklif > enyuksekteklif) {
      enyuksekteklif = teklifler[j].teklif;
      kazananteklifverenno = teklifler[j].teklifverenno;
    }  printf("Kazanan teklif veren: %d\n", kazananteklifverenno);
  printf("ödeme: %.2f TL\n", enyuksekteklif);
  yazılım en yüksek teklifi veren kullanıcıyı ve teklifini yazdırır.
