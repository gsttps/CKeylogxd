# Keylogger en C para Windows (esto lo hice solo con fines educativos)

Este proyecto es un **keylogger simple en lenguaje C** para Windows, desarrollado con fines **educativos y de laboratorio de ciberseguridad**.

## ⚠️ Advertencia ética

Este codigo solo es para aprender o si se usa es para entornos seguros y controlados, **Nunca uses esto en sistemas ajenos sin consentimiento.**

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
- si  lo ejecutas, desde el admin de tareas busca keylogger.exe y listo
```
