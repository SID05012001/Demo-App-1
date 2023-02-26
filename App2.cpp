#include <cpp_api/navigation_bridge.h>

Navigation nav;
int main(int argc, char *argv[])
{
    nav.take_off(10.0);            
    nav.position_set(10,0,-10,1.0472,1.0, false, false, true, false);      
    nav.position_set(0,10,-10,2.0944,1.0, false, false, true, false);
    nav.position_set(0,0,-10,2.0944,1.0, false, false, true, false);
    nav.land(true);                  
}
