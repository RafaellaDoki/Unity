
#include "payment.h"

int payment(float value, char status[15]){
    //Teste do status com todas as possibilidades
    if (strcmp("regular", status) == 0 
    || strcmp("estudante", status) == 0 
    || strcmp("aposentado", status) == 0 
    || strcmp("VIP", status) == 0){
    //Teste do value pelo intervalo de valores possiveis
        if((value > 0) && (value < 10000)){
            return 0;
        }else{
            return 1;
        }
    }else{
        return 2;
    }
}

