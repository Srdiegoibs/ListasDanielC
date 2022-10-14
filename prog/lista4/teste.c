// 10) Construa um programa que seja capaz de concluir qual dentre os animais seguintes
// foi escolhido através de perguntas e respostas. Animais possíveis: leão, cavalo, homem,
// macaco, baleia, avestruz, pingüim, pato, águia, tartaruga, crocodilo e cobra.
// Exemplo:
// É mamífero: Sim
// É quadrúpede: Sim
// É carnívoro: Não
// É herbívoro: Sim
// Então o animal escolhido foi o cavalo.
// Utilize as seguintes classificações:
#include <stdio.h>
#include <string.h>

int verifica () {
	
    char letra = '\0';
    char c;
    letra = getch ();
    while ((letra != 's' && letra != 'S') && (letra != 'n' && letra != 'N')) {
        printf ("\tEntrada incorreta, digite (S) ou (N)");
        letra = getch ();
    }

    if (letra == 's' || letra == 'S') return 1;
    else return 0;
}

int main () {
    printf ("Digite (s) ou (n) para responder");
    if(printf("\n\nE mamifero?") && (verifica())) {
        if(printf("\nE quadrupede? ") && (verifica())) {
            if(printf("\nE carnivoro?") && (verifica()))printf ("\nR: Leao");
            else if(printf("\nherbivoro?") && (verifica())) printf ("\nR: Cavalo");
            else printf ("\nAnimal nao disponivel");
        }

        else if(printf("\nBipede?") && (verifica())) {
            if(printf("\nonivero?") && (verifica())) printf ("\neh homem");
            else if(printf("\nfrutifero?") && (verifica())) printf ("\neh macaco");
            else printf ("\nanimal nao disponivel");

        }
        else if(printf("\nVoador?") && (verifica())) printf ("\nR: Morcego");

        else if(printf("\nAquatico?") && (verifica())) printf ("\nR: Baleia");
        else printf ("\nAnimal nao disponivel");
    }
    else if(printf("\nAve?") && (verifica())) {
        if(printf("\nNao voadora?") && (verifica())) {
            if(printf("\nTropical?") && (verifica())) printf ("\nR: Avestruz");
            else if(printf("\nPolar?") && (verifica())) printf ("\nR: Pinguim");
        }
        else if(printf("\nNadadora?") && (verifica())) printf ("\nR: Pato");
        else if(printf("\nDe rapina?") && (verifica())) printf ("\nR: Águia");
        else printf ("\nAnimal nao disponivel");
    }
    else if (printf("\nReptil?") && (verifica())) {
        if (printf("\nCom casco?") && (verifica())) printf ("\nR: Tartaruga");
        else if (printf("\nCarnivoro?") && (verifica())) printf ("\nR: Crocodilo");
        else if (printf("\nSem patas?") && (verifica())) printf ("\nR: Cobra");
        else printf ("\nAnimal nao disponivel");
    }
    else printf ("\nAnimal nao disponivel\n");
	
    return 0;
}