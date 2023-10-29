#include <stdio.h>
#include <math.h>

// questo è il mio programma in C

// esempio di calcolatrice che chiede all'utente di
// inserire un numero, scelgiere un operazione,
// inserire un'altro numero e effettuare l'operazione scelto.

int main() {

	int x,y,valore;
	float divisione;

	// chiediamo all'utente di inserire il primo numero intero
	printf("inserisci un numero intero: ");
	scanf("%d",&x);

	// chiediamo all'utente di scegliere un operazione
	char c;
	printf("scelgi un operazione (+, -, *, /): ");
    scanf(" %c", &c);

	// chiediamo all'utente di inserire il secondo numero intero
    printf("inserisci l'altro intero: ");
    scanf("%d",&y);

	// se l'operazione scelto è +, fai la somma tra i due numeri
    if (c == '+'){
    	valore = x+y;
    	printf("la somma vale: %d\n", valore);

    } else if (c == '-'){
		// se l'operazione scelto è -, fai la differenza tra i due numeri
    	valore = x-y;
    	printf("la differenca vale: %d\n", valore);

    } else if (c=='*'){
		// se l'operazione scelto è *, fai il prodotto tra i due numeri
    	valore=x*y;
    	printf("il prodotto vale: %d\n", valore);
    }else if (c=='/'){
		// se l'operazione scelto è /, fai la divisione tra i due numeri
		// in questo caso è necessario fare il casting in float perché la
		// divisione dei due numeri interi x e y può dare come output
		// un numero reale (float)
    	divisione = (float) x/y;
    	printf("la divisione vale %.02f\n", divisione);
    }else {
		// avvisa l'utente che ha scelto un operazione non supportato.
    	printf("l'operazione scelto non e' supportato\n");
    }
 }