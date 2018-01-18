#include <stdio.h>

void wyswietlanie(const int *histogram) {
    for( int x = 0; x<26; ++x){
        printf("%c -> %d, \n", 'a' + x, histogram[x]);
    }
}
void  male( char znak, int *histogram){
    if((znak >= 'a') && (znak <= 'z')){
        ++histogram [znak - 'a'];
    }
}

void  duze( char znak, int *histogram){
    if((znak >= 'A') && (znak <= 'Z')){
        ++histogram [znak - 'A'];
    }
}


int main(){

    const char ciag_zn[] = "Wlazł Kotek NA Płotek I MRUGA, ŁAdna To PIOSENKA";
    int histogram[26] = {0};
    char znak;

    int licznik = 0;

    while( (znak = ciag_zn[licznik]) != 0){

        male(znak, histogram);

        duze(znak, histogram);

        ++licznik;
    }

    wyswietlanie(histogram);

    return 0;

}

