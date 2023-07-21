cmake_minimum_required(VERSION 3.25)
project(Heroes)

set(CMAKE_CXX_STANDARD 17)

add_executable(Heroes main.cpp lib/ConfigGame.h lib/Hero.h lib/Armor.h lib/armors/LightArmor.h lib/armors/HeavyArmor.h lib/heroes/Zerg.h lib/heroes/Protos.h lib/heroes/HeroType.h lib/armors/ArmorType.h lib/HeroBuilder.h)
