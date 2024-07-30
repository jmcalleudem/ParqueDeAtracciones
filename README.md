## Proyecto de Simulación de Parque de Atracciones

### Descripción

Este proyecto contiene una estructura básica para una simulación de un parque de atracciones. Dentro del repositorio encontrarás un archivo "parque.drawio" que incluye el diagrama de clases inicial. El objetivo principal de esta tarea es refactorizar el código existente, analizando las clases que sobran, las que faltan, y eventualmente llevar estos cambios a la implementación en C#.

### Contenido del Repositorio

- **README.md**: Este archivo con la descripción del proyecto y las instrucciones.
- **XXX.cs**: Archivo que contiene la implementación básica de las clases en C# para el modelo inicial planteado.
- **parque.drawio**: Archivo con el diagrama de clases inicial.

### Tarea

1. **Refactorización del Código**:
    - Analizar y determinar qué clases sobran y cuáles faltan.
    - Implementar los cambios necesarios en la estructura de las clases.

2. **Implementación en C#**:
    - Reflejar los cambios propuestos en la implementación en C#.
    - Asegurarse de que el código esté correctamente organizado y funcional.

3. **Actualización del Diagrama**:
    - Actualizar el archivo "parque.drawio" para reflejar los cambios realizados en la estructura de clases.
    - Asegurarse de que el diagrama final sea coherente con la implementación en código.

### Herramientas y Tecnologías

- **Lenguaje de Programación**: C#
- **Diagrama de Clases**: draw.io
- **Refactorización**: Puedes utilizar herramientas como ChatGPT o similares para traducir las estructuras básicas o crear nuevas desde cero.
- **Python (opcional)**: Si decides usar Python, recuerda utilizar type hints para mejorar la legibilidad y mantenimiento del código.

### Instrucciones

1. Clona este repositorio en tu máquina local.
    ```sh
    git clone <URL-del-repositorio>
    cd <nombre-del-repositorio>
    ```

2. Abre el archivo `parque.drawio` en draw.io para visualizar el diagrama de clases inicial.

3. Revisa la implementación en `XXX.cs` y realiza los cambios necesarios.

4. Actualiza el diagrama de clases en `parque.drawio` para reflejar los cambios realizados en el código.

5. Si decides usar Python, asegúrate de incluir type hints en tus definiciones de funciones y métodos.

### Ejemplo de Type Hints en Python

```python
class Atraccion:
    def __init__(self, nombre: str, capacidad: int, estado_operativo: bool = True) -> None:
        self.nombre = nombre
        self.capacidad = capacidad
        self.estado_operativo = estado_operativo

    def cambiar_estado(self, nuevo_estado: bool) -> None:
        self.estado_operativo = nuevo_estado

    def verificar_estado(self) -> bool:
        return self.estado_operativo
```

### Contribuciones

Las contribuciones son bienvenidas. Si tienes sugerencias o mejoras, por favor abre un issue o envía un pull request.

### Licencia

Este proyecto está licenciado bajo la Licencia MIT. Ver el archivo LICENSE para más detalles.

---

¡Buena suerte y feliz codificación!
