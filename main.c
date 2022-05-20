#include <stdio.h>
#include <string.h>


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

void fillCharac(char words[500], char x, int y, int rl) {
    char wordss[500] ;
    char aux[1];
    int cont=0;
    aux[0]=x;
    if(y>strlen(words))y=strlen(words)-1;
    y=rl!=0?strlen(words)-(y+1):y-1;
    for (int i=0; i < strlen(words); i++) {
        if(y==i){
            wordss[i]=aux[0];
            cont++;
        }
        wordss[i+cont]=words[i];
    }
    printf("\n\nAl texto: %sSe le insertara el caracter |%c| en la posicion %d de %s quedando de la siguiente manera:%s\n\n",words,x,y,rl==1?"derecha a izquierda":"izquierda a derecha",wordss);
}

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

int main() {
    int opc=0;
    while(opc!=11){
        char words[500];
        char words2[500];
        char x;
        char x1[10];
        int y;
        printf("\n-------------------- MENU --------------------\n"
               "1. Convertir en nombre propio el contenido de una cadena.\n"
               "2. Buscar cadenas de caracteres.\n"
               "3. Contar vocales.\n"
               "4. A%co nuevo.\n"
               "5. Llenar caracteres.\n"
               "6. Borrar caracteres.\n"
               "7. Interseccion.\n"
               "8. Eliminar repetidos.\n"
               "9. Dezplazamiento.\n"
               "10. Validar direccion de correo electronico.\n"
               "11. Salir\n", 164);
        scanf("%d",&opc);
        fflush(stdin);
        switch (opc) {
            case 1:
                break;
            case 2:
                break;
            case 3:
                printf("\n HA SELECCIONADO LA OPCION 3: contar vocales \n\nIngrese una palabra u oracion para contar las vocales\n");
                fgets(words,500,stdin );
                countVowels(words);
                break;
            case 4:
                break;
            case 5:
                printf("\n HA SELECCIONADO LA OPCION 5: llenar caracteres \n\nIngrese u oracion una palabra para insertarle un caracter\n");
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
                printf("\n HA SELECCIONADO LA OPCION 6: borrar caracteres \n\nIngrese una palabra u oracion para eliminarle un caracter especifico\n");
                fgets(words,500,stdin );
                printf("\nIngrese el caracter que quiere eliminar en la cadena\n");
                scanf("%c",&x);
                deleteCharac(words,x);
                break;
            case 7:
                printf("\n HA SELECCIONADO LA OPCION 7: interseccion \n\nIngrese una palabra u oracion para ver que letras tienen en comun con otra cadena\n");
                fgets(words,500,stdin );
                printf("\nIngrese la otra palabra u oracion\n");
                fgets(words2,500,stdin );
                intersect(words,words2);
                break;
            case 8:
                break;
            case 9:
                break;
            case 10:
                break;
            case 11:
                break;
            default:
                printf("\n\nERROR OPCION ERRONEA INTENTE NUEVAMENTE\n\n");
                break;
        }

    }
    return 0;
}
