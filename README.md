# ghost-julialabs

PCI para o desafio de halloween 2022 do canal [julialabs na Twitch](https://www.twitch.tv/julialabs).

Layout baseado na skin básica de fantasma do jogo Among Us.


## Hardware

### Placa de Circuito Impresso

![placa de circuito impresso - frente](/images/pcb-front.jpg)
![placa de circuito impresso - verso](/images/pcb-back.jpg)
![placa de circuito impresso - modelo 3d frente](/images/pcb-3d-front.png)
![placa de circuito impresso - modelo 3d verso](/images/pcb-3d-back.png)

#### Produção

Arquivo `.zip` com Gerbers disponivel [aqui](/pcb/gerber/). Para produzir as placas basta fazer upload do zip no site da [PCBWay](https://www.pcbway.com/) ou similar.

### Esquemático

![esquemático](/images/schematics.png)

### Lista de Materiais

ID     | Description                   | Mouser No.
------ | ----------------------------- | ------------------------------------------------------------------------------
U1     | Microcontrolador ATtiny85-20S | [556-ATTINY85-20SF](https://www.mouser.de/ProductDetail/556-ATTINY85-20SF)
D1     | LED SMD Verde "Side View"     | [710-155060VS75300](https://www.mouser.de/ProductDetail/710-155060VS75300)
D2     | LED SMD Vermelho "Side View"  | [710-155060SS75300](https://www.mouser.de/ProductDetail/710-155060SS75300)
R1, R2 | Resistor SMD 47R 0603         | [603-RC0603FR-0747RL](https://www.mouser.de/ProductDetail/603-RC0603FR-0747RL)
C1     | Capacitor SMD 100nF 0603      | [810-C0603X7S1A104K](https://www.mouser.de/ProductDetail/810-C0603X7S1A104K)
BT1    | Suporte para bateria CR2032   | [534-1058](https://www.mouser.de/ProductDetail/534-1058)
SW1    | Chave SPDT ON-ON              | [611-PCM12SMTR](https://www.mouser.de/ProductDetail/611-PCM12SMTR)


## Software

A ser desenvolvido.


## License

Original work is released under the BSD 3-Clause (firmware) and CERN Open Hardware Licence Version 2 - Strongly Reciprocal (pcb).

This project is based on Among Us game artwork, and should be covered by the [Innersloth Fan Creation Policy](https://www.innersloth.com/fan-creation-policy/). Based on drawing from [xcolorings.com (via Pinterest)](https://www.pinterest.com/pin/584834701606097283/).

