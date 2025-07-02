# Keylogger en C para Windows (esto lo hice solo con fines educativos)

Este proyecto es un **keylogger simple en lenguaje C** para Windows, desarrollado con fines **educativos y de laboratorio de ciberseguridad**.

## ⚠️ Advertencia ética

Este software solo debe ser usado en entornos controlados, con fines de aprendizaje o para revisar su codigo. **Nunca uses esto en sistemas ajenos sin consentimiento explícito.**

## 📦 Estructura

- `src/`: Código fuente.
- `include/`: Cabeceras opcionales.
- `logs/`: Logs generados al ejecutar el keylogger.
- `build/`: Carpeta local para binarios compilados.

## 🚀 Compilación

Con MinGW:

```bash
gcc src/keylogger.c -o build/keylogger.exe

- si  lo ejecutas, desde el admin de tareas busca keylogger.exe y listo
```
