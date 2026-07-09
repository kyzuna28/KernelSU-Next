#ifndef __MANAGER_LIST_H
#define __MANAGER_LIST_H

struct manager_identity {
    const char *package_name;
    const char *hash;
    const uint32_t sig_size;
};

static const struct manager_identity allowed_managers[] = {
    {
        .package_name = "com.rifsxd.ksunext", // KernelSU-Next
        .hash = "79e590113c4c4c0c222978e413a5faa801666957b1212a328e46c00c69821bf7", 
        .sig_size = 0x3e6
    },
    {
        .package_name = "vctsrt.cntgtj.uqfwgg", // KernelSU-Next Spoof
        .hash = "79e590113c4c4c0c222978e413a5faa801666957b1212a328e46c00c69821bf7", 
        .sig_size = 0x3e6
    },
    {
        .package_name = "id.i.bi", // Next Manager Spoof
        .hash = "1ab6077099505a4f5ff851732d5d965a4908af7f60c871f23b4b3a58e80e6cd3",
        .sig_size = 0x31c
    },
    {
        .package_name = "com.rapli.mambosu", // RapliVx/KernelSU
        .hash = "a9462b8b98ea1ca7901b0cbdcebfaa35f0aa95e51b01d66e6b6d2c81b97746d8",
        .sig_size = 0x384
    },
    {
        .package_name = "com.kowx712.supermanager", // KOWX712/KernelSU
        .hash = "484fcba6e6c43b1fb09700633bf2fb4758f13cb0b2f4457b80d075084b26c588",
        .sig_size = 0x375
    },
    {
        .package_name = "me.weishu.kernelsu", // rsuntk/KernelSU
        .hash = "f415f4ed9435427e1fdf7f1fccd4dbc07b3d6b8751e4dbcec6f19671f427870b",
        .sig_size = 0x396
    },
    {
        .package_name = "com.twj.wksu", // WildKernels/Wild_KSU
        .hash = "52d52d8c8bfbe53dc2b6ff1c613184e2c03013e090fe8905d8e3d5dc2658c2e4",
        .sig_size = 0x381
    },
    {
        .package_name = "id.next.manager", // Next Manager
        .hash = "1ab6077099505a4f5ff851732d5d965a4908af7f60c871f23b4b3a58e80e6cd3",
        .sig_size = 0x31c
    }
};

#endif
