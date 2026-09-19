# MobiFlight QNH / STD

Проверенная конфигурация:

- MSFS 2024
- Fenix A320 V2
- MobiFlight 11.2.0
- Arduino Mega 2560 — COM6
- MobiFlight firmware 3.1.4
- MAX7219 — 8 digits
- DIN 51 / CS 53 / CLK 52
- Device: QNH_Display
- Intensity: 8

## QNH

Source:

```
(L:E_FCU_EFIS1_BARO, Number)
```

Transform:

```
$+1013
```

## BARO MODE / STD

Source:

```
(L:S_FCU_EFIS1_BARO_STD, Number)
```

Conditions:

- SET QNH: =0
- STD QNH: =1

STD transform:

```
if($=1,'Std',' Std')
```

Рабочую плату COM6 не менять при экспериментах с TFT.
