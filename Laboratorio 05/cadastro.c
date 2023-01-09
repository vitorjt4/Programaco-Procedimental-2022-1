/*
 * Arquivo: cadastro.c
 * Autor: Victor José Teixeira da Silva
 * Criado em: 08/ JAN/ 2023
 * 
*/

struct Nome {
    char nome[30];
};

struct Data {
    int dia;
    int mes;
    int ano;
};

struct Altura {
    int metros;
    int centimetros;
};

struct Peso {
    float peso;
};


typedef     
    struct Pessoa {
        struct Nome Nome;
        struct Altura Altura;
        struct Peso Peso;
        struct Data Data;
    }
    Pessoa;

const char strmes[13][4] = {
    "", "JAN", "FEV", "MAR", "ABR", "MAI", "JUN",
    "JUL", "AGO", "SET", "OUT", "NOV", "DEZ"
};


int main() {
    Pessoa *ptr;
    int noOfRecords;
    printf("Quantas pessoas deseja cadastrar?: ");
    scanf("%d", &noOfRecords);


    ptr = (Pessoa*)malloc(noOfRecords * sizeof(Pessoa));
    printf("Digite o nome da pessoa, sua data de nascimento, altura e peso:\n");
    for (int i = 0; i < noOfRecords; ++i) {

    scanf("%s %d/%d/%d %f %f ", (ptr + i)->Nome, &(ptr + i)->Data.dia, &(ptr + i)->Data.mes, &(ptr + i)->Data.ano, &(ptr + i)->Altura, &(ptr + i)->Peso);
    }

    printf("Cadastros:\n");
    for (int i = 0; i < noOfRecords; ++i) {
        printf("%s; %02d%s%04d; %f; %f ", (ptr + i)->Nome, (ptr + i)->Data.dia, strmes[data.mes], (ptr + i)->Data.ano, (ptr + i)->Altura, (ptr + i)->Peso);
  
  
    }

    free(ptr);

    return 0;
}
