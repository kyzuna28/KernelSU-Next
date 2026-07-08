#ifndef __MANAGER_LIST_H
#define __MANAGER_LIST_H

#include <linux/types.h>

struct manager_identity {
    const char *name;           // Hanya untuk label/dokumentasi (pengganti package_name)
    const char *hash;           // SHA-256 dari sertifikat APK
    const uint32_t sig_size;    // Ukuran signature (Wajib Hex!)
};

// Daftar semua Manager yang diizinkan
static const struct manager_identity allowed_managers[] = {
    { .name = "KernelSU Official", .hash = "c371061b19d8c7d7d6133c6a9bafe198fa944e50c1b31c9d8daa8d7f1fc2d2d6", .sig_size = 0x33b },
    { .name = "KernelSU-Next", .hash = "79e590113c4c4c0c222978e413a5faa801666957b1212a328e46c00c69821bf7", .sig_size = 0x3e6 },
    { .name = "Next Manager", .hash = "1ab6077099505a4f5ff851732d5d965a4908af7f60c871f23b4b3a58e80e6cd3", .sig_size = 0x31c },
    { .name = "KOWX712/KernelSU", .hash = "484fcba6e6c43b1fb09700633bf2fb4758f13cb0b2f4457b80d075084b26c588", .sig_size = 0x375 },
    { .name = "rsuntk/KernelSU", .hash = "f415f4ed9435427e1fdf7f1fccd4dbc07b3d6b8751e4dbcec6f19671f427870b", .sig_size = 0x396 },
    { .name = "RapliVx / 5ec1cff", .hash = "a9462b8b98ea1ca7901b0cbdcebfaa35f0aa95e51b01d66e6b6d2c81b97746d8", .sig_size = 0x384 },
    { .name = "WildKernels/Wild_KSU", .hash = "52d52d8c8bfbe53dc2b6ff1c613184e2c03013e090fe8905d8e3d5dc2658c2e4", .sig_size = 0x381 },
    { .name = "dummy.keystore", .hash = "4359c171f32543394cbc23ef908c4bb94cad7c8087002ba164c8230948c21549", .sig_size = 0x363 }
};

#define ALLOWED_MANAGER_COUNT (sizeof(allowed_managers) / sizeof(allowed_managers[0]))

#endif
