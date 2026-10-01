// You will write all your code for this tutorial here!
#include <bn_backdrop.h>
#include <bn_color.h>
#include <bn_core.h>
#include <bn_keypad.h>
int main(){
    bn::core::init();
    bn::backdrop::set_color(bn::color(0,15,20));

    //if A button is pressed, change backup color to pastel pink
    //inside the while loops makes sure we do this in each frame
    while(true) {

        if(bn::keypad::a_pressed()){
             bn::backdrop::set_color(bn::color(31,21,22));
        }
        if(bn::keypad::b_pressed()){
            bn::backdrop::set_color(bn::color(24,25,30));
        }
        

        bn::core::update();
    }
}