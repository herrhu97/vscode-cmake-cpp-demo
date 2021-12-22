#include "Gun.h"
#include "Soldier.h"
#include <iostream>

void test()
{
    Solider sanduo("xusanduo");
    sanduo.addGun(new Gun("AK47"));
    sanduo.addBulletToGun(20);

    sanduo.fire();
}

int main()
{
    std::cout << "vscode debug ... " << std::endl;
    test();
    return 0;
}