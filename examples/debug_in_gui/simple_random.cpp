#include"simple_random.h"

static unsigned long long state0 = 0xe70c'f3e9'46d9'e55d;
static unsigned long long state1 = 0x2023'1105'1926'0817;

void set_seed(unsigned long long seed){
    state0 = seed;
    state1 = seed * seed + seed;
}

void feed_randomness(unsigned long long randomness){
    randomness ^= 0x8dc3'abc1'fcd3'c8be;
    randomness = randomness * randomness + randomness;
    state0 ^= (randomness >> 32);
    state1 ^= (randomness << 32);
}

unsigned int get_random(){

    state0 = (state0 << 7) | (state0 >> 57);
    state0 += 0x74ab'890e'acb1'0f8d;
    state0 = (state0 << 17) | (state0 >> 47);
    state0 ^= 0x7a59'3c0b'cfa7'0331;

    state1 = (state1 << 37) | (state1 >> 27);
    state1 += 0x1edf'cafe'8124'8cab;
    state1 = (state1 << 19) | (state1 >> 45);
    state1 ^= 0x8cb2'6088'7483'9739;
    
    return (state0 ^ state1) >> 32;
}