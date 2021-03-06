# Afero Secure Radio Library #

**Version 0.9.217**

## Welcome ##

This library implements the SPI protocol used to communicate with the Afero Radio Module on development boards such as the Modulo. It provides a simple API for reading and writing attribute values from an Arduino sketch.

This version of the library support both the Arduino and Linux platforms.

### Supported Arduino Platforms ###

This version of the library has been tested against *UNO*, *Teensy*, *ATmega2560* and *Raspberry PI*.

### Arduino Installation ###

* To install afLib for the first time, follow the instructions for *Importing a .zip Library* on the <http://arduino.cc> site.
* To update an existing installation with a new version, follow the instructions for *Manual installation*.

### More Information ###

<http://developer.afero.io>

### Release Notes ###

afLib 2/23/17 Release Notes

* Renamed some dubiously-named methods for clarity:
  onAttrSet -> attrSetHandler
  onAttrSetComplete -> attrNotifyHandler

* Renamed a bunch of also dubiously-named internal methods and variable names
* Miscellaneous code formatting changes
* MOST developer applications should not require any changes, if you implement onAttrSet and onAttrSetComplete you'll need to change to the new names (see forum.afero.io for some code change notes)

afLib 5/26/16 Release Notes

* Retry the initial sync operation if it fails.
* Remove the old "Collision" message as it was just confusing.
* Print all attribute names and values at startup.
* Switch away from using the String object for debug printing to reduce memory.
* Use the "!Serial" trick to wait for Serial to startup.
* Fix a bug with bool types.
* Remove a bunch of used cargo code.
* Add some comments and rename some methods to make them more clear.

afLib 4/21/16 Release Notes

* Restore a missing paren in boebot_tank example.
* Move the example profiles back to the released version of the profile editor.

afLib 4/20/16 Release Notes

* Add two new examples that demonstrate how attributes can be manipulated either directly or through a transform.
* Fix a problem with initializing the `spi_ioc_transfer` structure under Linux that was causing errors for ceratin kernels.

afLib 3/24/16 Release Notes

* The library now supports a String of any length. In the previous releases, String support was unreliable. 
* The library was extended to support both Arduino and Raspberry Pi using a common code base.
* The library now always calls onSetAttributeComplete for an associated setAttribute call, regardless of where the attribute lives. Previously this function was not called for MCU attributes.
* The library now only allows one set/get attribute call to execute at any one time. Other calls are queued until they can be serviced.
* The setAttribute method names were changed to reflect the associated attribute type. C was not resolving the previous method signatures correctly.
* The Arduino board definitions were cleaned up, plus support was added for the ATMega2560.
