# Orange-Pi-Zero-2-H616-Python
A modified version of Jeremie-C/OrangePi.GPIO library which is based on the original raspberry pi library. 

I added a class for the h616 Orange Pi Zero 2 in the following files:

-Boards.c

-Boards.h

-Common.h

-Constants.c

-Constants.h

-Py_gpio.c

In 'c.gpio.h' i changed:

-GPIO_BASE_OPI

-SUNXI_GPIO_BASE

-MAP_SIZE




GPIO.setboard(GPIO.H616) # Orange Pi Zero 2 board
