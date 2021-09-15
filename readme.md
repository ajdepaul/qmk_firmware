# Custom 14x5 Keyboard QMK Fork

Forked from: https://github.com/qmk/qmk_firmware

I followed [this](https://github.com/ruiqimao/keyboard-pcb-guide) guide to design the PCB.

- KiCad PCB files can be found in the [pcb](pcb) directory.
- KiCad PCB files for a switch plate can found in the [plate](plate) directory.
- Laser cut case files can be found in the [case](case) directory.

Notes:
- I did not originally design the PCB with holes for screws. I ended up drilling
  holes in the PCB in safe locations for screws. The screw holes in the acrylic
  case cutouts line up with the holes that I drilled personally. If you want to
  rebuild the board, I recommend adding holes to the PCB and changing the hole
  placements in the acrylic case cutouts to match.
- I did not originally design the PCB with RGB LED strips in mind. The LED strip
  I am using is soldered directly onto some pins of the MCU. If you want RGB LED
  strip support, I recommend adding some soldering points to the PCB.
- I did not fill the PCB for the switch plate with copper, so it flexes a good
  amount. If you want to rebuild the board, I recommend modifying the PCB plate
  and filling it with copper to give a sturdier feel.

## Personal Keyboard Specs

- Switches: Lubed Cherry MX Clear with 62g springs
- Keycaps:
  - [KPrepublic Japanese Root base](https://kprepublic.com/collections/pbt-dye-sub-keycaps/products/kprepublic-139-japanese-root-japan-black-font-language-cherry-profile-dye-sub-keycap-pbt-for-gh60-xd60-xd84-cospad-tada68-87-104)
  - [Muted Copper Koi Fish artisan](https://www.etsy.com/shop/DreamKaps?ref=from_order_confirm_drawer_receipt_modal)
  - Some cheap PBT black & gray blanks for modifiers

## Pictures

TODO
