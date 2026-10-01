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

        if(bn::keypad::a_held()){
             bn::backdrop::set_color(bn::color(31,21,22));
        }
        if(bn::keypad::b_held()){
            bn::backdrop::set_color(bn::color(24,25,30));
        }

        if(bn::keypad::any_held()==false){
             bn::backdrop::set_color(bn::color(10,20,25));

        }
         

        bn::core::update();
    }
}