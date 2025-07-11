PROGRAM Algoritmo_Fermat 

FUNCTION potencia(base, exponente)
    INTEGER :: resultado, i
    resultado = 1;
    DO i = 1, exponente
        resultado = resultado * base;
    ENDDO
    RETURN resultado
ENDFUNCTION

INTEGER :: n, total, x, y, z

WRITE('Ingrese el valor de n:')
READ(*,*) n; 

total = 3;

DO
    DO x = 1, total - 2
        DO y = 1, total - x - 1
            z = total - x - y;

        IF potencia(x, n) + potencia(y, n) == potencia(z, n) THEN
                WRITE('hola mundo')
            ENDIF
        ENDDO
    ENDDO
    total = total + 1;
ENDDO


END PROGRAM Algoritmo_Fermat 