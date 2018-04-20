./test da come risultato 4 risultato dell'operazione 2 + ( 40 / 20 ), è un'operazione tra interi come decritto nel file divide.h "int divide(int a, int b)" e l'operazione alla quale si fa riferimento al momento di chiamare la funzione divide è "divide(int a, int b)"

//Descrivere brevemente le differenze tra gli output sul file eseguibile `test` e sul file oggetto `divide.a`.//
************************************************
test:     formato del file elf32-i386

DYNAMIC SYMBOL TABLE:
00000000      DF *UND*	00000000  GLIBC_2.0   printf
00000000  w   D  *UND*	00000000              __gmon_start__
00000000      DF *UND*	00000000  GLIBC_2.0   __libc_start_main
080484dc g    DO .rodata	00000004  Base        _IO_stdin_used


*************************************************
objdump: divide.a: non è un oggetto dinamico

SYMBOL TABLE:
00000000 l    df *ABS*	00000000 divide.c
00000000 l    d  .text	00000000 .text
00000000 l    d  .data	00000000 .data
00000000 l    d  .bss	00000000 .bss
00000000 l    d  .note.GNU-stack	00000000 .note.GNU-stack
00000000 l    d  .eh_frame	00000000 .eh_frame
00000000 l    d  .comment	00000000 .comment
00000000 g     F .text	0000000c divide


Come si può notare, la differenza tra gli output sul file eseguibile `test` e sul file oggetto `divide.a` variano a seconda che gli elementi dentro i file siano dinamici o statici, nel primo caso sono dinamici, vale a dire seguono una sequenza, indicata dal programma, nel caso di divide.a contiene soltanto file che non hanno una sequenza di comandi da eseguire.

*****************************************************************
//Spiegare come si interpreta la tabella dei simboli dinamici data dall’ultimo comando.//

printf..

__gmon_start__
 La funzione call_gmon_start trova l'ultima voce nella tabella offset globale (anche conosciuta come __gmon_start__) e, se non NULL, passerà il controllo all'indirizzo specificato. L'elemento 

La funzione __libc_start_main () inizializza il processo, chiama la funzione principale e gestisce il ritorno da main ()

IO_stdin_used è un simbolo interno utilizzato da libio.h (che stdio.h
include)

*****************************************************************
//Spiegare come si interpreta la presenza di simboli che non sono nel proprio codice (ad esempio, `__libc_start_main`).//

sono comandi interni al compilatore, i quali effettuano delle operazioni in linguaggio a basso livello, linguaggio macchina






















