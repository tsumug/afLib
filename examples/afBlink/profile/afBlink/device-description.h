/*
 * Afero Device Profile header file
 * Device Description:		e6f51cf7-c3cb-43b4-82f3-3ce948717087
 * Schema Version:	2
 */


#define ATTRIBUTE_TYPE_SINT8                                      2
#define ATTRIBUTE_TYPE_SINT16                                     3
#define ATTRIBUTE_TYPE_SINT32                                     4
#define ATTRIBUTE_TYPE_SINT64                                     5
#define ATTRIBUTE_TYPE_BOOLEAN                                    1
#define ATTRIBUTE_TYPE_UTF8S                                     20
#define ATTRIBUTE_TYPE_BYTES                                     21
#define ATTRIBUTE_TYPE_FIXED_16_16                                6
#define ATTRIBUTE_TYPE_FIXED_32_32                                7

//region Service ID 1
// Attribute Blink
#define AF_BLINK                                                  1
#define AF_BLINK_SZ                                               1
#define AF_BLINK_TYPE                        ATTRIBUTE_TYPE_BOOLEAN

// Attribute Modulo LED
#define AF_MODULO_LED                                          1024
#define AF_MODULO_LED_SZ                                          2
#define AF_MODULO_LED_TYPE                    ATTRIBUTE_TYPE_SINT16

// Attribute GPIO 0 Configuration
#define AF_GPIO_0_CONFIGURATION                                1025
#define AF_GPIO_0_CONFIGURATION_SZ                                8
#define AF_GPIO_0_CONFIGURATION_TYPE          ATTRIBUTE_TYPE_SINT64

// Attribute Modulo Button
#define AF_MODULO_BUTTON                                       1030
#define AF_MODULO_BUTTON_SZ                                       2
#define AF_MODULO_BUTTON_TYPE                 ATTRIBUTE_TYPE_SINT16

// Attribute GPIO 3 Configuration
#define AF_GPIO_3_CONFIGURATION                                1031
#define AF_GPIO_3_CONFIGURATION_SZ                                8
#define AF_GPIO_3_CONFIGURATION_TYPE          ATTRIBUTE_TYPE_SINT64

// Attribute Bootloader Version
#define AF_BOOTLOADER_VERSION                                  2001
#define AF_BOOTLOADER_VERSION_SZ                                  8
#define AF_BOOTLOADER_VERSION_TYPE            ATTRIBUTE_TYPE_SINT64

// Attribute Softdevice Version
#define AF_SOFTDEVICE_VERSION                                  2002
#define AF_SOFTDEVICE_VERSION_SZ                                  8
#define AF_SOFTDEVICE_VERSION_TYPE            ATTRIBUTE_TYPE_SINT64

// Attribute Application Version
#define AF_APPLICATION_VERSION                                 2003
#define AF_APPLICATION_VERSION_SZ                                 8
#define AF_APPLICATION_VERSION_TYPE           ATTRIBUTE_TYPE_SINT64

// Attribute Profile Version
#define AF_PROFILE_VERSION                                     2004
#define AF_PROFILE_VERSION_SZ                                     8
#define AF_PROFILE_VERSION_TYPE               ATTRIBUTE_TYPE_SINT64

// Attribute Command
#define AF_SYSTEM_COMMAND                                     65012
#define AF_SYSTEM_COMMAND_SZ                                      4
#define AF_SYSTEM_COMMAND_TYPE                ATTRIBUTE_TYPE_SINT32

// Attribute Hachi State
#define AF_SYSTEM_HACHI_STATE                                 65013
#define AF_SYSTEM_HACHI_STATE_SZ                                  1
#define AF_SYSTEM_HACHI_STATE_TYPE             ATTRIBUTE_TYPE_SINT8

// Attribute Low Battery Warn
#define AF_SYSTEM_LOW_BATTERY_WARN                            65014
#define AF_SYSTEM_LOW_BATTERY_WARN_SZ                             1
#define AF_SYSTEM_LOW_BATTERY_WARN_TYPE        ATTRIBUTE_TYPE_SINT8

// Attribute Reboot Reason
#define AF_SYSTEM_REBOOT_REASON                               65019
#define AF_SYSTEM_REBOOT_REASON_SZ                              100
#define AF_SYSTEM_REBOOT_REASON_TYPE           ATTRIBUTE_TYPE_UTF8S

// Attribute MCU Interface
#define AF_SYSTEM_MCU_INTERFACE                               65021
#define AF_SYSTEM_MCU_INTERFACE_SZ                                1
#define AF_SYSTEM_MCU_INTERFACE_TYPE         ATTRIBUTE_TYPE_BOOLEAN
//endregion
