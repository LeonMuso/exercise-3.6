
#include <stdio.h>

int main(void) {
    int quantità;
    float prezzoU, totale, sconto, importoS;
    printf("Inserisci il numero di prodotti acquistati: ");
    scanf("%d", &quantità);
    printf("Inserisci il prezzo unitario del prodotto: ");
    scanf("%f", &prezzoU);
    totale = quantità * prezzoU;
    if (totale > 50) {
        sconto = (totale - 50) * 0.2 + 40 * 0.1;
    } else if (totale > 10) {
        sconto = (totale - 10) * 0.1;
    }
    importoS = totale - sconto;
    printf("Importo totale senza sconto: %.2f euro\n", totale);
    printf("Sconto applicato: %.2f euro\n", sconto);
    printf("Importo totale scontato: %.2f euro", importoS);

    return 0;
}
