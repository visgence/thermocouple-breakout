The K-Type thermocouple conditioner is an easy way to use a K-Type thermocouple with an Arduino or other microcontrollers. At its heart is a AD595 thermocouple conditioner IC. The AD595 is laser trimmed for accuracy and performs automatic cold-junction compensation, which means you can just drop it into a project and get accurate results right away.

We created the K-Type Thermocouple Conditioner board while rebuilding our reflow toaster oven. The original controller used an AD595 and we were happy with its results. Since the toaster oven is a semi-permanent setup, we gave the board screw terminals and holes for robust mounting.

#### Specs
- [AD595A](http://www.analog.com/static/imported-files/data_sheets/AD594_595.pdf) laser trimmed for K-type thermocouple and 3 degree C basic accuracy
- 10mV / K output, easy to read with any ADC
- K-type input fits standard probes
- Alarm output and LED signals that probe is disconnected
- Screw terminals and mounting holes for easy long-term mounting

#### Use with an Arduino
We built our thermocouple conditioner specifically to use with Arduino and compatible boards. See the [example sketch](https://github.com/visgence/thermocouple-breakout/tree/master/example_code/thermocouple_conditioner_arduino) for a simple example.

