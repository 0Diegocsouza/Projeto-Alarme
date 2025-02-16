<h1>Sistema de Alarme com Arduino no Tinkercad</h1>

Este projeto consiste em um sistema de alarme desenvolvido no Tinkercad utilizando Arduino, sensor PIR de movimento, botões para acionamento do alarme e uma tela LED. O sistema foi programado utilizando a linguagem C# (C++ para Arduino).

<h2>Componentes Utilizados:</h2>

Arduino Uno: Microcontrolador principal.

Sensor PIR: Detecta movimento no ambiente.

Botões: Utilizados para simular a abertura de janelas e portas.

Tela LED (LCD 16x2 com I2C): Exibe mensagens sobre o estado do alarme.

Buzzer: Emite um som de alerta quando o alarme é acionado.

Sensor de Luz (LDR): Detecta a luminosidade do ambiente para armar ou suspender o alarme.

<h2>Funcionamento do Sistema:</h2>

O sistema de alarme opera com base na luminosidade do ambiente e na detecção de movimento:

Armado: Quando a luminosidade é alta (ValorLuz > 700), o alarme é armado e a mensagem "ALARME ARMADO!" é exibida no LCD.

Suspenso: Quando a luminosidade é baixa (ValorLuz < 700), o alarme é suspenso e a mensagem "ALARME SUSPENSO!" é exibida no LCD.

Detecção de Movimento: Se o sensor PIR detectar movimento enquanto o alarme estiver armado, a mensagem "TEM ALGUEM AI CUIDADO!" é exibida e o buzzer é acionado.

Abertura de Janela/Porta: Se um dos botões for pressionado (simulando a abertura de uma janela ou porta) enquanto o alarme estiver armado, a mensagem correspondente é exibida e o buzzer é acionado.

<h2>Codigo Fonte:</h2>

https://www.tinkercad.com/things/3LWOi0WnxlR-alarme/editel?returnTo=%2Fthings%2F3LWOi0WnxlR-alarme&sharecode=ydPFH8S-45sOV0Sa4ydRGxZbYwbKWNOjy4fImv3kqiA

<img src="https://github.com/0Diegocsouza/Projeto-Alarme/blob/main/ALARME.png">
