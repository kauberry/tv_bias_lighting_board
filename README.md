## Controller for Television Bias Lighting with LED strips ##

### Background ###
I wanted to have a bias lighting system for my wall mounted TV's such that the lights would be controlled by the TV itself through one of its built-in USB ports, but still be actually powered from a 12v power adapter, so as not to overrun the USB port's current ratings.

The whole show is being run by an ATTiny85 AVR chip that is listening to the USB port on the TV (through an optocoupler), waiting for the set to power up/down, and fading the lights up or down as appropriate.

### Availability ###
I've made the project available on OSHPark, for anyone who is interested. The version up right now is currently untested in physical form, so order at your own risk. Once I get my boards back, I'll update.

https://oshpark.com/shared_projects/4CxVxJLe

#### Bill of Materials
Quantity | Item                         | Part Number / Identifier
:--------: | -------------------------- | -------------------
  1    | ATTiny85 8-pin SOIC AVR Chip | ATTiny85
  1    | 5.5mm Power Jack             | DCJ0202
  1    | MicroUSB SMD Jack            | *
  1    | 2 Position Terminal Block    | *
  3    | 10kΩ 1206 Chip Resistor      | *
  1    | 1kΩ 1206 Chip Resistor       | *
  1    | 150Ω 1206 Chip Resistor      | *
  1    | 0.1µF 1206 Chip Capacitor    | *
  1    | SMA-form factor Schottky Diode | *
  1    | Single-channel Optocoupler   | Sharp EL817
  1    | LDO 5V Regulator (SOT-223)   | *
  1    | N-channel MosFET Transistor  | IRLML2502


#### Prototype Board Images
These are the pre-production renders of the board proper, straight from [OSH Park](http://oshpark.com)

![Prototype Board Front Image](/images/bias_lighting_board_v2_front.png)

![Prototype Board Back Image](/images/bias_lighting_board_v2_back.png)
