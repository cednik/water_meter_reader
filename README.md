# water_meter_reader

Device for reading water meter using hall sensor and maybe gas meter using the same principle in future.

## First test

Connect hall sensor [AH49E](https://www.diodes.com/assets/Datasheets/AH49E.pdf)
to [LilyGO TTGO-T-Display](https://github.com/Xinyuan-LilyGO/TTGO-T-Display)
(ESP32 with LCD display and USB-C connector)
and put it near to the supposed readout area of water meter and gas meter.

Nothing, just background noise.
According to [some e-shop](https://www.kapka-vodomery.cz/e-shop/vodomery/domovni-vodomery/sensus-system-hri)
and [datasheet](https://www.cevak.cz/file/edee/2017/05/420_mid-cz.pdf),
watermeter Sensus 420 use inductive system, not magnetic.

But gas meter Gallus 2000 G4 should has magnetic pulse output, according to [this](https://mederco.com/pdf/actaris_medidor_gallus2000.pdf).
