#include "pxt.h"

using namespace pxt;


//% color=#E3008C weight=96 icon="\uf012"
namespace radioxx {
  
    //% help=radioxx/set-transmit-power
    //% weight=9 blockGap=8
    //% blockId=radioxx_set_transmit_power block="radioxx set transmit power %power"
    //% advanced=true
    void setTransmitPower(int power) {
        
        uBit.radio.setTransmitPower(power);
    }

}
