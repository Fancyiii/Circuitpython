USB_VID = 0x1209
USB_PID = 0xc051
USB_PRODUCT = "Simmel"
USB_MANUFACTURER = "Betrusted"

MCU_CHIP = nrf52833

# SPI_FLASH_FILESYSTEM = 1
# EXTERNAL_FLASH_DEVICES = "MX25R1635F"

INTERNAL_FLASH_FILESYSTEM = 1

CIRCUITPY_ALARM = 0
CIRCUITPY_AESIO = 1
CIRCUITPY_AUDIOMP3 = 0
CIRCUITPY_BITMAPTOOLS = 0
CIRCUITPY_BUSDEVICE = 0
CIRCUITPY_BUSIO = 1
CIRCUITPY_COUNTIO = 0
CIRCUITPY_DISPLAYIO = 0
CIRCUITPY_ERRNO = 0
CIRCUITPY_FRAMEBUFFERIO = 0
CIRCUITPY_GETPASS = 0
CIRCUITPY_KEYPAD = 0
CIRCUITPY_MSGPACK = 0
CIRCUITPY_NEOPIXEL_WRITE = 0
CIRCUITPY_NVM = 0
CIRCUITPY_PIXELBUF  = 0
CIRCUITPY_PULSEIO = 0
CIRCUITPY_PWMIO = 1
# Deliberately excluded for other reasons than code space, see #5534
CIRCUITPY_RAINBOWIO = 0
CIRCUITPY_RGBMATRIX = 0
CIRCUITPY_ROTARYIO = 0
CIRCUITPY_RTC = 1
CIRCUITPY_SDCARDIO = 0
CIRCUITPY_SYNTHIO = 0
CIRCUITPY_TOUCHIO = 0
CIRCUITPY_ULAB = 0
CIRCUITPY_USB_CDC = 0
CIRCUITPY_USB_MIDI = 0
CIRCUITPY_WATCHDOG = 1

# Enable micropython.native
#CIRCUITPY_ENABLE_MPY_NATIVE = 1

# Override optimization to keep binary small
OPTIMIZATION_FLAGS = -Os
SUPEROPT_VM = 0
SUPEROPT_GC = 0
