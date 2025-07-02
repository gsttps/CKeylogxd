# Keylogger en C para Windows (esto lo hice solo con fines de aprendizaje)

Esto es un **keylogger simple en lenguaje C** hecho para Windows

## ⚠️ Advertencia ética

Este codigo solo es para aprender o si se usa es para entornos seguros y controlados, **no uses esto en sistemas ajenos sin consentimiento.**

## 📦 Estructura

- `src/`: Código fuente.
- `include/`: Cabeceras opcionales.
- `logs/`: Logs generados al ejecutar el keylogger.
- `build/`: Carpeta local para binarios compilados.

## 🚀 Compilación

1. Abre **PowerShell** o **CMD** en la carpeta raíz del proyecto.
2. Compila con:

   ```bash
   gcc src/keylogger.c -o build/keylogger.exe -mwindows
- si  lo ejecutas, para cerrarlo abre el admin de tareas busca keylogger.exe y listo
