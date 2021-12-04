#include "hw/arm/stm32.h"
#include "hw/sysbus.h"
#include "hw/arm/arm.h"
#include "hw/devices.h"
#include "ui/console.h"
#include "sysemu/sysemu.h"
#include "hw/boards.h"

static void stm32f7_disco_init(MachineState* machine)
{
  /* Null */
}

static QEMUMachine stm32f7_disco_machine = {
  .name = "stm32f7-disco",
  .desc = "STM32 F769 Discovery board",
  .init = stm32f7_disco_init,
};

static void stm32f7_disco_machine_init(void)
{
  qemu_register_machine(&stm32f7_disco_machine);
}

machine_init(stm32f7_disco_machine_init);
