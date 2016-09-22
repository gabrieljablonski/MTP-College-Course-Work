#include <stdio.h>
#include <ctype.h>

#define NCHAR 256
#define QUAL_TIPO(vt) vt.tipo
#define RECEBE_INTEIRO(vt) ({ 			\
      scanf("%d", &vt.dado.i);			\
      vt.tipo = INTEGER; 			\
    })
#define RECEBE_STRING(vt) ({ 			\
      fgets(vt.dado.s, sizeof(vt.dado.s),	\
	    stdin);				\
      vt.tipo = STRING; 			\
    }) 
#define RECEBE_REAL(vt) ({ 			\
      scanf("%f", &vt.dado.f);			\
      vt.tipo = FLOAT;				\
    })
#define MOSTRA_DADO(vt) ({ 			\
      switch(vt.tipo) { 			\
      case INTEGER:				\
	printf("%d\n", vt.dado.i);		\
	break;					\
      case STRING:				\
	printf("%s\n", vt.dado.s);		\
	break;					\
      case FLOAT:				\
	printf("%g\n", vt.dado.f);		\
	break;					\
      default:					\
	printf("Vazio.\n");			\
      } })

typedef enum { 
  INTEGER = 1, 
  STRING = 2, 
  FLOAT = 3 
} tipos_aceitos;

typedef struct {
  tipos_aceitos tipo;
  union { 
    int i; 
    char s[NCHAR]; 
    float f; 
  } dado;
} VAR_t;

inline void pgetchar(char * character) {
  // Getchar "protegido", recebe apenas um 
  // caractere e descarta o resto do STDIN
  int c;
  *character = getchar();
  while((c = getchar()) != EOF && c != '\n');	
}

int main() {
  char opcao;
  VAR_t meuDado;
  do {
    printf("%s %s", "Qual o tipo de dado a armazenar?",
	   "(I)nteiro, (S)tring ou (R)eal: ");
    pgetchar(&opcao);
    opcao = toupper(opcao);
  } while(opcao != 'I' && opcao != 'S' && opcao != 'R');
  printf("Entre com o dado ");
  switch(opcao) {
  case 'I':
    printf("inteiro: ");
    RECEBE_INTEIRO(meuDado);
    break;
  case 'S':
    printf("string: ");
    RECEBE_STRING(meuDado);
    break;
  case 'R':
    printf("real: ");
    RECEBE_REAL(meuDado);
  }
  printf("Você armazenou a seguinte informação:\n");
  MOSTRA_DADO(meuDado);
  return 0;
}
