#include <stdio.h>
//cuente el numero de veces que ahorras y nos diga el acumulado ahorrado//
int main()
    {
        int banco; //Este sera mi acumulador//
        int monto;// Esta indica el monto a ahorrar por el evento//
        int numerodepositos; //las veces que fuimos al banco//
        char respuesta;
        
        numerodepositos=0;
        banco=0;
        monto=0;
        respuesta= 's';
        
        do
        {
            printf("\n\n monto a depositar");
            scanf("%d", &monto);
            banco=banco+ monto; //Empieza a trabajar el acumulador//
            numerodepositos= numerodepositos+1 //trabaja el contador//
            printf("¿Quieres realizar otro deposito (s/n)?");
            scanf("%s",&respuesta);

        } while (respuesta!='n');
    printf("dinero que tienes en el banco %d\n", banco);
    printf("numero de depositos %d", numerodepositos);
    
    return 0;
        
    
    }
