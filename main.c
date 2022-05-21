#include <stdio.h>
#include <string.h>
//MENU
void askMenu(){
    printf("\n-------------------- MENU TALLER COLABORATIVO --------------------\n"
           "ELIJA LA OPCION DESEADA\n"
           "1. Convertir en nombre propio el contenido de una cadena\n"
           "2. Buscar cadenas de caracteres\n"
           "3. Contar vocales\n"
           "4. A%co nuevo\n"
           "5. Llenar caracteres\n"
           "6. Borrar caracteres\n"
           "7. Interseccion\n"
           "8. Eliminar repetidos\n"
           "9. Dezplazamiento\n"
           "10. Validar direccion de correo electronico\n"
           "11. Salir\n", 164);
}
//
//1. NAME
void propName() {
    int num;
    char chain[250];
    char *p = chain;
    printf("HA SELECCIONADO LA OPCION 1 : Convertir en nombre propio una cadena\n");
    printf("Digite la cadena a convertir\n");
    fflush(stdin);
    fgets(chain, 250, stdin);
    num = strlen(chain);
    while (*p != 0) {
        if (p == chain || (*p != ' ' && *(p - 1) == ' '))
            if (*p >= 'a' && *p <= 'z')
                *p = *p - ('a' - 'A');
        p++;
    }
    printf("\nSalida: %s ", chain);
}
//------

//2. SEARCH CHAINS
void searchChains() {

    char cr[80] = "";
    char pt[80] = "";
    char aux[80];
    short int cont = 0;
    short int a = 0;
    short int b = 0;

    printf("HA SELECCIONADO LA OPCION 2 : Buscar cadena de caracteres\n");
    printf("\nBuscar cadena de caracteres\n");
    printf("Inserte una cadena de caracteres separada:\n");
    gets(cr);
    printf("Inserte la palabra a buscar:\n");
    gets(aux);

    while (cr[a] != 0) {
        if (cr[a] == ' ' || cr[a] == ',' || cr[a] == '.') {
            if (strcmp(pt, aux) == 0) {
                ++cont;
            }
            for (b = 0; b < 80; b++) {
                pt[b] = 0;
            }
            b = 0;
        } else {
            pt[b] = cr[a];
            ++b;
        }
        a++;
    }
    if (strcmp(pt, aux) == 0) {
        cont++;
    }
    if (cont == 0) {
        printf("La palabra %s no existe.", aux);
    } else {
        printf("La palabra %s se encuentra %d veces.\n", aux, cont);
    }

}
//-------------

//3.COUNT VOWELS
void countVowels(char words[500]) {
    char wordss[500] ;
    strcpy(wordss,words);
    int vowels =0, vowel_a=0, vowel_e=0, vowel_i=0, vowel_o=0, vowel_u=0;
    strlwr(wordss);
    for (int i = 0; i < strlen(wordss); ++i) {
        char w=wordss[i];
        if(w == 'a')vowels++, vowel_a++;
        if(w == 'e')vowels++, vowel_e++;
        if(w == 'i')vowels++, vowel_i++;
        if(w == 'o')vowels++, vowel_o++;
        if(w == 'u')vowels++, vowel_u++;
    }
    printf("\n\nEl texto: %sTiene en TOTAL.\nVocales: %d\n#a: %d\n#e: %d\n#i: %d\n#o: %d\n#u: %d \n\n",words,vowels,vowel_a,vowel_e,vowel_i,vowel_o,vowel_u);

}
//--------

//4.NEW YEAR
void newYear(){
    printf("HA SELECCIONADO LA OPCION 4 : Anho nuevo\n");
    int n;
    int d;
    int i;
    int tr;
    int res;
    int days[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };

    tr = 0;
    res = 0;

    do
    {
        printf ("\nDigite un mes del 1 al 12: " );
        scanf ( "%d", &n );
    } while ( n < 1 || n > 12 );

    do
    {
        printf ( "Elige un dia del 1 al 31: " );
        scanf ( "%d", &d );
    } while ( ((n==1||n==3||n==5||n==7||n==8||n==10||n==12))&&(d>31)||(n==4||n==6||n==9||n==11)&&(d>30)||((n==2)&&(d>28))||(d<1) );

    for ( i = 0; i < (n - 1); i++ )
    {
        tr += days[i];
    }

    tr += d;
    res = (365 - tr);
    int horas = res*(24/1);
    int minutos = res*(24/1)*(60/1);

    printf("Restan:\n");
    printf("Dias: %d horas : %d Minutos : %d ", res,horas,minutos);
    printf("para anio nuevo.");


}
//------

//5.FILL CHARAC
void fillCharac(char words[500], char x, int y, int rl) {
    char wordss[500] ;
    char aux[1];
    int cont=0;
    aux[0]=x;
    if(y>strlen(words))y=strlen(words)-1;
    y=rl==1?strlen(words)-(y+1):y-1;
    for (int i=0; i < strlen(words); i++) {
        if(y==i){
            wordss[i]=aux[0];
            cont++;
        }
        wordss[i+cont]=words[i];
    }
    printf("\n\nAl texto: %sSe le insertara el caracter |%c| en la posicion %d de %s quedando de la siguiente manera:%s\n\n",words,x,rl==1?-y+strlen(words)-1:y+1,rl==1?"derecha a izquierda":"izquierda a derecha",wordss);
}
//---------

//6.DELETE CHARAC
void deleteCharac(char words[500], char x) {
    char wordss[500] = {} ;
    char x1[]={x};
    strlwr(x1);
    x==x1[0]? strupr(x1):x1;
    strcpy(wordss,words);
    for (int i = 0; i < strlen(wordss); ++i) {
        if(x==wordss[i]){
            wordss[i]=("%c",32);
        }
        if(x1[0]==wordss[i]){
            wordss[i]=("%c",32);
        }
    }
    printf("\n\nEl texto: %sSe le retiraron todos los caracteres |%c|, quedando de la siguiente manera:%s\n\n",words,x,wordss);

}
//--------

//7.INTERSECT
void intersect(char words[500], char words2[500]) {
    char wordss[500];
    strlwr(words);
    strlwr(words2);
    int au1 = strlen(words)>=strlen(words2)?strlen(words):strlen(words2);
    int au2 = strlen(words) <= strlen(words2) ? strlen(words2) : strlen(words);
    for (int i = 0; i < au1; ++i) {
        for (int j = 0; j < au2; ++j) {
            if (words[i] == words2[j]) {
                for (int k = 0; k < strlen(wordss); ++k) {
                    if((words2[j] == wordss[k])){
                        break;
                    }
                    else if ((words2[j] != wordss[k]) && (k == strlen(wordss) - 1)) {
                        wordss[k + 1] = words2[j];
                    }
                }
            }
        }
    }
    if(strlen(wordss)>4){
        printf("\n\nEn los textos:\n1.%s2.%sTienen varias letras en comun, dichas letras son: ",words,words2);
        for (int i = 3; i < strlen(wordss)-1; ++i) {
            if((wordss[i]!=("%c",32))&&(wordss[i]!=("%c", 1))) {
                printf("||%c||, ", wordss[i]);
            }
        }
    }else{
        printf("\n\nEn los textos: \n1.%s 2.%sNo tienen letras en comun",words,words2);
    }

}
//--------

//8.DELETE REPEATS
void deleteRepeats(){
    int size;//TAMANHO DEL TEXTO
    char chainWords[20],aux;
    printf("HA SELECCIONADO LA OPCION 8 : Eliminar repetidos\n");
    printf("Por favor, ingrese una cadena\n");
    fflush(stdin);
    fgets(chainWords, 20, stdin);
    size = strlen(chainWords);//DEVUELVE LA LONGITUD DE UNA CADENA DE TEXTO

    for (int i = 0; i < size; ++i) {//RECORREMOS EL TAMANHO DE LA CADENA
        for (int j = 0; j < size - 1; ++j) {//RECORREMOS EL TAMANHO DE LA CADENA MENOS UNO
            if(i != j){//COMPARAMOS SI LA PRIMERA POSICION Y LA SEGUNDA SON DIFERENTES
                if(chainWords[i] == chainWords[j]){//COMPARAMOS SI EL CARACTER EN LA POSICION J ES IGUAL AL DE LA POSICION I
                    //SE "VACIA" LA CADENA EN ESA POSICION"
                    chainWords[j] = ' ';
                }
            }
        }

    }
    for (int i = 0; i < size ; ++i) {
        printf("%c", chainWords[i]);
    }

}
//------

//9. DISPLACEMENT
void displaceCharac(char words[500], int y, int y1, int rl) {
    char wordss[500];
    int cont=0;
    int cont2=0;
    int aux;
    int ind=y1;
    printf("1hola");
    if(((strlen(words)-1)>=y)&&(y>=0)){
        while(ind>=(strlen(words)-1)){
            ind=ind-(strlen(words)-1);
        }
        printf("2hola");
        if(rl==1){
            aux=y>=ind?y-ind:((strlen(words)-1)-(ind-y));
        }else{
            aux=ind+y<(strlen(words)-1)?y+ind:((strlen(words)-1)-(ind+y));
        }
        printf("%d",aux);
        printf("3hola");
        for (int i = 0; i < strlen(words); ++i) {
            if(i==aux){
                wordss[i]=words[y];
                cont++;
            }
            if(i==y){
                cont2++;
            }
            wordss[i+cont]=words[i+cont2];
        }
        printf("\n\nAl texto: %sSe le desplazo el caracter |%c|, que estaba en el indice %d, y tras moverlo de %d veces de %s quedo de la siguiente manera: %s\n\n",words,words[y],y,y1,rl==1?"derecha a izquierda":"izquierda a derecha",wordss);
    }else{
        printf("\n\nEl indice de la cadena es INVALIDO, ESTA FUERA DE RANGO\n");
    }

}
//----

//10.VALIDATE MAIL
int validateFirstParams(char chainWords[20]) {
    int z = strlen(chainWords);
    char atSing;
    char dot;
    int eval=0;
    for (int i = 0; i < z; i++) {
        dot = strchr(chainWords, '@');
        if (dot != NULL) {
            eval = 1;
        }
    }
    for (int i = 0; i < z; i++) {
        atSing = strchr(chainWords, '.');
        if (atSing != NULL) {
            eval = 1;
        }
    }
    return eval;
}
int validateParams(char chainWords[20]){
    int z = strlen(chainWords);
    char letterC;
    char letterO;
    char letterM;
    int eval=0;
    for (int i = 0; i < z; i++) {
        letterC = strchr(chainWords, 'c');
        if (letterC != NULL) {
            letterO = strchr(chainWords, 'o');
            if (letterO != NULL) {
                letterM = strchr(chainWords, 'm');
                if (letterM != NULL) {
                    eval=1;
                }
            }
        }
    }
    char letterU;
    char letterS;
    for (int i = 0; i < z; i++) {
        letterU = strchr(chainWords, 'u');
        if (letterU != NULL) {
            letterS = strchr(chainWords, 's');
            if (letterS != NULL) {
                eval =1;
            }
        }
    }
    char letterCO;
    char letterOL;
    char letterL;
    for (int i = 0; i < z; i++) {
        letterCO = strchr(chainWords, 'c');
        if (letterCO != NULL) {
            letterOL = strchr(chainWords, 'o');
            if (letterOL != NULL) {
                letterL = strchr(chainWords, 'l');
                if (letterL != NULL) {
                    eval=1;
                }
            }
        }
    }
    return eval;
}
void validateMail(){
    char chainWords[20];
    printf("HA SELECCIONADO LA OPCION 10 : Validar correo electronico\n");
    printf("Por favor ingrese una cadena de caracteres\n");
    printf("EL CORREO DEBE CONTENER\n"
           "\n1. UN @"
           "\n2.UN PUNTO '.'"
           "\n3.LA PALABRA 'com' - 'us' - 'col'"
           "\n FORMATO "
           "\n ####@####.com\n");
    fflush(stdin);
    char *aux = fgets(chainWords, 20, stdin);
    if (validateFirstParams(aux) == 1){
        if (validateParams(aux) == 1){
            printf("CORREO VALIDO");
        }else{
            printf("ERROR");
        }
    }else{
        printf("ERROR");
    }
}
//---

int main() {
    int opc=0;
    while(opc!=11){
        char words[500];
        char words2[500];
        char x;
        char x1[10];
        int y;
        int y1;
        askMenu();
        scanf("%d",&opc);
        fflush(stdin);
        switch (opc) {
            case 1:
                break;
                propName();
            case 2:
                searchChains();
                break;
            case 3:
                printf("\n HA SELECCIONADO LA OPCION 3: Contar vocales \n\nIngrese una palabra u oracion para contar las vocales\n");
                fgets(words,500,stdin );
                countVowels(words);
                break;
            case 4:
                newYear();
                break;
            case 5:
                printf("\n HA SELECCIONADO LA OPCION 5: Llenar caracteres \n\nIngrese una palabra u oracion una palabra para insertarle un caracter\n");
                fgets(words,500,stdin );
                printf("\nIngrese el caracter que quiere ingresar en la cadena\n");
                scanf("%c",&x);
                printf("\nIngrese cuantas posiciones se pasaran para insertar el caracter\n");
                scanf("%i",&y);
                fflush(stdin);
                printf("\nIngrese hacia donde va a insertar el caracter (izquierda o derecha)\n");
                scanf("%s",&x1);
                fillCharac(words,x,y,strcmp("derecha",x1)==0?1:0);
                break;
            case 6:
                printf("\n HA SELECCIONADO LA OPCION 6: Borrar caracteres \n\nIngrese una palabra u oracion para eliminarle un caracter especifico\n");
                fgets(words,500,stdin );
                printf("\nIngrese el caracter que quiere eliminar en la cadena\n");
                scanf("%c",&x);
                deleteCharac(words,x);
                break;
            case 7:
                printf("\n HA SELECCIONADO LA OPCION 7: Interseccion \n\nIngrese una palabra u oracion para ver que letras tienen en comun con otra cadena\n");
                fgets(words,500,stdin );
                printf("\nIngrese la otra palabra u oracion\n");
                fgets(words2,500,stdin );
                intersect(words,words2);
                break;
            case 8:
                deleteRepeats();
                break;
            case 9:
                printf("\n HA SELECCIONADO LA OPCION 9: desplazamiento \n\nIngrese u oracion una palabra para desplazar un elemento de este\n");
                fgets(words,500,stdin );
                printf("\nIngrese el indice del caracter que desea desplazar (el indice empieza a contar desde 0 de izquierda a derecha)\n");
                scanf("%i",&y);
                printf("\nIngrese cuantas posiciones se desplazara el caracter\n");
                scanf("%i",&y1);
                fflush(stdin);
                printf("\nIngrese hacia donde va a insertar el caracter (izquierda o derecha)\n");
                scanf("%s",&x1);
                displaceCharac(words,y,y1,strcmp("derecha",x1)==0?1:0);
                break;
            case 10:
                validateMail();
                break;
            case 11:
                printf("GRACIAS POR UTILIZAR NUESTRO PROGRAMA\n");
                break;
            default:
                printf("\n\nERROR OPCION ERRONEA, INTENTE NUEVAMENTE\n\n");
                break;
        }

    }
    return 0;
}
