## Arduino for nrf52840(MDBT50Q)

  Raytac nrf52840モジュール(MDBT50Q)を使用したArduino Uno　Norduino用のArduinoライブラリになります。
  
  
## ArduinoIDEへAdafruit nrf52 for Adafruitを追加
### 追加のボードマネージャーURL
https://www.adafruit.com/package_adafruit_index.json 

### ツール⇒ボード⇒ボードマネージャー
Adafruit nrf52 for Adafruitをインストールします。

## boards.txtの追加

  C:\ユーザー名\AppData\Local\Arduino15\packages\adafruit\hardware\nrf52\バージョン名\boards.txt

## ハードウェアファイル追加

  C:\ユーザー名\AppData\Local\Arduino15\packages\adafruit\hardware\nrf52\バージョン名\variants\uno_nrf52840\
  
-variant.h

-variant.cpp
