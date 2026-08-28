# Espacio de trabajo de Conker

Este directorio contiene el proyecto anfitrión y las continuaciones recuperadas
para **Conker: Live & Reloaded**. Los archivos originales del juego no forman
parte del repositorio y nunca se modifican.

## Estado actual

- Compila un ejecutable nativo de Windows de 64 bits.
- Carga las 27 secciones del XBE y alcanza la rutina principal del juego.
- Inicializa el dispositivo D3D/NV2A y procesa el rollover del push-buffer.
- Conserva correctamente la pila en los caminos recuperados de D3D.
- Implementa bridges del kernel y TLS/TIB compatible con las rutinas CRT que
  usa Conker.
- Recupera continuaciones faltantes de D3D, metadatos y contenedores, y evita
  ciclos y copias sin límite durante la carga de recursos.
- Usa un pool de compatibilidad de 128 MiB para completar las reservas del
  bring-up, incluida una reserva contigua adicional de 10 MiB.
- Todavía no es jugable: llega al allocator de recursos, pero no crea ventana.
  El bloqueo reproducible actual es memoria interna sin inicializar marcada
  con `0xEEEEEEEE`.

## Preparar el juego

Se necesita una copia extraída de un disco que poseas legalmente. La carpeta
debe contener `default.xbe`; el lanzador no abre una ISO directamente.

Puedes colocarla en `work/conker/game_files/Conker` (ignorada por Git) o pasar
su ruta explícitamente:

```powershell
.\work\conker\run_conker.ps1 -GameDirectory "D:\Juegos\Conker"
```

Si omites el argumento, el script también busca `Downloads\Conker` dentro del
perfil actual de Windows.

## Compilar

Desde una consola de Visual Studio configurada para x64:

```powershell
cmake -S work/conker/project -B work/conker/project/build -G Ninja
cmake --build work/conker/project/build --parallel 4
```

Después ejecuta:

```powershell
.\work\conker\run_conker.ps1
```

`seed_functions.json` documenta los puntos de entrada recuperados. Los
directorios `recomp_single_*` contienen los fragmentos recompilados que se
integran desde `project/src/recomp/gen/recomp_seeded_continuations.c`.

## Diagnóstico

La última ejecución y compilación quedan en `last_run.log` y
`last_build.log`; ambos se ignoran en Git. El XBE, la ISO, los datos extraídos
y el ejecutable compilado tampoco se publican.
