// rotating_octagonal_plat.inc.c

const Collision *sOctagonalPlatformCollision[] = {
    bits_seg7_collision_0701AA84,
    rr_seg7_collision_07029508,
};

s16 sOctagonalPlatformAngularVelocities[] = { 300, -300, 600, -600 };

void bhv_rotating_octagonal_plat_init(void) {
    o->collisionData = segmented_to_virtual(sOctagonalPlatformCollision[(o->oBhvParams >> 16) & 0xFF]);
    o->oAngleVelYaw = sOctagonalPlatformAngularVelocities[(o->oBhvParams >> 24) & 0xFF];
}

void bhv_rotating_octagonal_plat_loop(void) {
    o->oFaceAngleYaw += o->oAngleVelYaw;
}
