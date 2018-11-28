## Controller for Television Bias Lighting with LED strips ##

### Background ###
I wanted to have a bias lighting system for my wall mounted TV's such that the lights would be controlled by the TV itself through one of its built-in USB ports, but still be actually powered from a 12v power adapter, so as not to overrun the USB port's current ratings.

The whole show is being run by an ATTiny85 AVR chip that is listening to the USB port on the TV (through an optocoupler), waiting for the set to power up/down, and fading the lights up or down as appropriate.

### Prototype Board Images
These are the pre-production renders of the board proper, straight from [OSH Park](http://oshpark.com)

![Prototype Board Front Image](/images/bias_lighting_board_v2_front.png)

![Prototype Board Back Image](/images/bias_lighting_board_v2_back.png)
