# Fenix A320 — QNH / STD display

Проект панели для **Microsoft Flight Simulator 2024 + Fenix A320 V2 + MobiFlight 11.2.0**.

## Рабочая конфигурация MAX7219

- Arduino Mega 2560
- MobiFlight firmware 3.1.4
- Рабочая плата: **COM6**
- MAX7219: 8 digits
- DIN: 51
- CS: 53
- CLK: 52
- Device: `QNH_Display`
- Intensity: 8

### QNH

Fenix source:

```
(L:E_FCU_EFIS1_BARO, Number)
```

Transform:

```
$+1013
```

### SET / STD

BARO mode source:

```
(L:S_FCU_EFIS1_BARO_STD, Number)
```

- SET QNH condition: `=0`
- STD QNH condition: `=1`

STD transform:

```
if($=1,'Std',' Std')
```

Эта формула убирает оставшуюся ведущую цифру при переходе с числового QNH на STD.

## TFT

Экспериментальная TFT-плата подключается отдельно на **COM5**. Рабочую конфигурацию MAX7219 на COM6 при экспериментах с TFT не изменять.

## Структура проекта

- `mobiflight/QNH_STD.md` — настройка MobiFlight
- `arduino/max7219_test/max7219_test.ino` — аппаратный тест MAX7219
- `tft/` — отдельная часть проекта TFT
