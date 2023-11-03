#include"simple_random.h"

static unsigned long long state0 = 0xe70cf3e946d9e55d;
static unsigned long long state1 = 0x2023110519260817;

void set_seed(unsigned long long seed){
    state0 = seed;
    state1 = seed * seed + seed;
}

void feed_randomness(unsigned long long randomness){
    randomness ^= 0x8dc3abc1fcd3c8be;
    randomness = randomness * randomness + randomness;
    state0 ^= (randomness >> 32);
    state1 ^= (randomness << 32);
}

unsigned int get_random(){

    state0 = (state0 << 7) | (state0 >> 57);
    state0 += 0x74ab890eacb10f8d;
    state0 = (state0 << 17) | (state0 >> 47);
    state0 ^= 0x7a593c0bcfa70331;

    state1 = (state1 << 37) | (state1 >> 27);
    state1 += 0x1edfcafe81248cab;
    state1 = (state1 << 19) | (state1 >> 45);
    state1 ^= 0x8cb2608874839739;
    
    return (state0 ^ state1) >> 32;
}