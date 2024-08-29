# ***Point 1 - Questions.***

   ### 1. Enumerate the milestones in the evolution of computer systems. ###
---------------------------------------------------------
     + primera generación: tubo al vacio.
     
     + segunda generación: transistores.
     
     + tercera generación el circuito integrado.
     
     + cuarta generación: la computadora personal.

   ### 2. What are the four components of a computer system? Describe each one.
----------------------------------------------------------
     + Según la arquitectura de von Neumann, un computador se define por los siguientes elementos:
     
       - CPU (Unidad Central de Procesamiento): Es el componente encargado de procesar la información que proporciona el programa. La CPU realiza operaciones de cálculo y toma decisiones, lo que permite ejecutar las instrucciones de los programas.
       
       - Memoria: Su función principal es almacenar la información accesible para la CPU. La memoria permite que la CPU lea o escriba datos en diferentes posiciones, generalmente se divide en memoria RAM y memoria ROM.
       
       - Controlador de Entradas y Salidas (I/O): Este componente gestiona el flujo de información entre la CPU y los periféricos del sistema. Los periféricos de entrada incluyen dispositivos como el teclado y el ratón, mientras que los periféricos de salida abarcan elementos como el monitor o la impresora.
       
       - Bus del Sistema: Actúa como la vía de comunicación que permite el intercambio de información entre todos los componentes del sistema.

### 3. What is the difference between a monolithic kernel and a microkernel?.
---------------------------------------------------------------
     Según los libros y la explicación dada en clase, el kernel monolítico se puede entender como un núcleo que integra todos los servicios del sistema operativo. En este tipo de kernel, se combinan todas las funcionalidades del sistema, y todas las operaciones se ejecutan en modo kernel, lo que permite una comunicación rápida entre los componentes. Además, el kernel monolítico se carga en memoria, y las aplicaciones interactúan con él mediante llamadas al sistema, también en modo kernel.
     
     En cambio, el microkernel es más minimalista. Solo incluye las funciones básicas, como la gestión de procesos y recursos, mientras que el resto de las funcionalidades del sistema, como los controladores y la gestión de archivos, se dejan a procesos de usuario. Estos procesos no están cargados en la memoria, lo que puede producir cierta latencia en la comunicación entre el kernel y los servicios del sistema. 

### 4. Define an Operating System from two different perspectives.
---------------------------------------------------------------
     Una primera perspectiva del sistema operativo es que puede considerarse como una extensión que permite ejecutar múltiples programas simultáneamente, proporcionando abstracciones del hardware. Esta perspectiva se conoce como top-down y se centra en cómo el sistema operativo facilita la ejecución de aplicaciones.
     
     La segunda perspectiva se refiere al manejo de recursos y se conoce como bottom-up. Este enfoque se centra en la gestión y asignación eficiente de los recursos del sistema. En este contexto, el sistema operativo administra los recursos compartidos de manera que permita la concurrencia. Además, el sistema permite que compartan recursos de manera ordenada y eficiente.

### 5. What is the purpose of system calls?.
---------------------------------------------------------------
     El propósito de las llamadas al sistema (system calls) es permitir que los programas de usuario (es decir, los clientes) le pidan al sistema operativo que realice ciertas tareas. A través de estas llamadas, el sistema operativo ofrece una interfaz que permite a los programas interactuar con el hardware y otros recursos del sistema de manera segura y controlada.
     
     Algunas de las llamadas al sistema más comunes son:
     
     - Llamadas de programas: Para ejecutar programas y gestionar.
     - Acceso a la memoria: Para solicitar y liberar memoria.
     - Acceso a dispositivos: Para interactuar con dispositivos de hardware.

### 6. What is a multiprogrammed operating system?.
---------------------------------------------------------------
     Cuando una computadora está multiprogramada, frecuentemente tiene múltiples procesos o subprocesos compiten por la CPU al mismo tiempo. Esta situación ocurre siempre que dos o más de ellos están simultáneamente en estado listo. Si solo hay una CPU disponible, se debe elegir qué proceso ejecutar a continuación.

### 7. What is a process?.
---------------------------------------------------------------
     es una instancia en ejecución de un programa. En otras palabras, es un programa que está siendo ejecutado por la CPU, incluyendo su código, sus datos, su estado actual y los recursos que utiliza. Gestión de procesos, en un instante particular de tiempo, la CPU puede tener varios procesos que están en estado listo. Pero a la vez, sólo un proceso puede ser procesado por un procesador.

### 8. What are the states of a process?.
---------------------------------------------------------------
     1. (Running) Ejecutando (en realidad usando la CPU en ese instante).
     
     2. (Ready) Listo (ejecutable; detenido temporalmente para permitir que se ejecute otro proceso).
     
     3. (Blocked) Bloqueado (no se puede ejecutar hasta que ocurra algún evento externo).


### 9. What information is stored in the Process Control Block (PCB) associated with a process?
---------------------------------------------------------------
     Esta entrada contiene importantes información sobre el estado del proceso, incluido su contador de programa, puntero de pila, asignación de memoria, el estado de sus archivos abiertos, su información de contabilidad y programación, y todo lo demás sobre el proceso que debe guardarse cuando el proceso se cambia del estado en ejecución al estado listo o bloqueado para que pueda reiniciarse más tarde como si nunca lo hubieran detenido.

### 10. What are the main activities of an operating system in relation to process management?
---------------------------------------------------------------
     - Creación y terminación de procesos.
     - Planificación de procesos.
     - Sincronización y comunicación entre procesos.
     - Manejo de estados de procesos.
     - Asignación de recursos.
     - Manejo de bloqueos y seguridad de procesos.