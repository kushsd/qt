
int32_t malloc = 0xe79a;

void** fun_64948f0c(void** a1) {
    goto malloc;
}

void** fun_64947a30(void** a1, void* a2, void* a3) {
    return a1;
}

int32_t _amsg_exit = 0xe6da;

void fun_64948f14(int32_t a1) {
    goto _amsg_exit;
}

void** fun_64947a20(void** a1) {
    return a1;
}

int32_t free = 0xe77e;

void fun_64948f1c(void** ecx, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7, void** a8, void** a9, void** a10, void** a11, void** a12, void** a13) {
    goto free;
}

void** g6494b068;

uint32_t fun_64948560();

int32_t fun_64948e80(void** ecx);

void** g6494b06c;

struct s0 {
    void** f0;
    signed char[3] pad4;
    void** f4;
    signed char[3] pad8;
    void** f8;
    signed char[3] pad12;
    void* f12;
};

struct s2 {
    signed char[8] pad8;
    void** f8;
    signed char[3] pad12;
    uint32_t f12;
    signed char[20] pad36;
    int32_t f36;
};

struct s1 {
    void** f0;
    signed char[3] pad4;
    void** f4;
    signed char[3] pad8;
    struct s2* f8;
};

struct s1* g6494b070;

struct s4 {
    signed char[1687420928] pad1687420928;
    void* f1687420928;
};

struct s3 {
    int32_t f0;
    void** f4;
    signed char[3] pad8;
    void** f8;
    signed char[3] pad12;
    struct s4* f12;
};

void** g6494aa28 = reinterpret_cast<void**>(0);

void** g6494aa2c = reinterpret_cast<void**>(0);

int32_t g6494aa30 = 0;

struct s5 {
    int32_t f0;
    void** f4;
    signed char[3] pad8;
    void** f8;
    signed char[3] pad12;
    void** f12;
    signed char[3] pad16;
    int32_t f16;
    void** f20;
    signed char[3] pad24;
    void** f24;
    signed char[3] pad28;
    void** f28;
    signed char[3] pad32;
    void** f32;
    signed char[3] pad36;
    void** f36;
    signed char[3] pad40;
    void** f40;
};

void fun_64947aa0(void** ecx);

void** fun_64947a40(void** ecx, void** a2, void** a3, void** a4, int32_t a5, void** a6, void** a7, void** a8, void** a9, void** a10, void** a11);

struct s6 {
    int32_t f0;
    int32_t f4;
};

/* (image base) */
struct s6* image_base_ = reinterpret_cast<struct s6*>(0x64948ff0);

struct s7 {
    struct s4* f0;
    int32_t f4;
    unsigned char f8;
};

void** VirtualQuery = reinterpret_cast<void**>(0x8c);

int32_t VirtualProtect = 0xe67a;

void** fun_64947ce0(void** ecx) {
    void** eax2;
    void* esp3;
    void* ebp4;
    int32_t eax5;
    struct s0* esp6;
    void** eax7;
    struct s3* ebx8;
    int32_t edi9;
    void** v10;
    void** v11;
    struct s5* esp12;
    struct s5* esp13;
    struct s0* esp14;
    struct s6* eax15;
    int32_t eax16;
    struct s0* esp17;
    struct s5* esp18;
    struct s6* eax19;
    struct s7* ebx20;
    struct s4* edx21;
    int32_t edi22;
    void** eax23;
    void* v24;
    void** ecx25;
    uint32_t ecx26;
    void* edi27;
    struct s5* esp28;
    struct s5* esp29;
    uint32_t ecx30;
    void* edi31;
    struct s5* esp32;
    void** ebx33;
    struct s1* eax34;
    void*** esi35;
    void* edi36;
    struct s5* esp37;
    int32_t eax38;
    struct s0* esp39;
    struct s1* eax40;
    void** v41;
    struct s5* esp42;
    int1_t less43;
    struct s1* ecx44;
    void** eax45;
    struct s5* esp46;
    struct s5* esp47;

    eax2 = g6494b068;
    if (eax2) {
        return eax2;
    }
    esp3 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4);
    ebp4 = esp3;
    g6494b068 = reinterpret_cast<void**>(1);
    fun_64948560();
    eax5 = fun_64948e80(ecx);
    g6494b06c = reinterpret_cast<void**>(0);
    esp6 = reinterpret_cast<struct s0*>(reinterpret_cast<int32_t>(esp3) - 4 - 4 - 4 - 76 - 4 + 4 - 4 + 4 - eax5);
    g6494b070 = reinterpret_cast<struct s1*>(reinterpret_cast<uint32_t>(reinterpret_cast<int32_t>(esp6) + 31) & 0xfffffff0);
    eax7 = reinterpret_cast<void**>(0);
    if (1) 
        goto addr_64947de1_4;
    if (1) {
        ebx8 = reinterpret_cast<struct s3*>(0x6494aa28);
    } else {
        eax7 = g6494aa28;
        if (eax7 || (eax7 = g6494aa2c, !!eax7)) {
            ebx8 = reinterpret_cast<struct s3*>(0x6494aa28);
            goto addr_64947dee_9;
        } else {
            edi9 = g6494aa30;
            ebx8 = reinterpret_cast<struct s3*>(0x6494aa34);
            if (edi9) {
                ebx8 = reinterpret_cast<struct s3*>(0x6494aa28);
                goto addr_64947d80_12;
            }
        }
    }
    if (ebx8->f0) {
        addr_64947dee_9:
        if (reinterpret_cast<uint32_t>(ebx8) >= 0x6494aa28) {
            addr_64947de1_4:
            return eax7;
        } else {
            v10 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(ebp4) + 0xffffffcc);
            do {
                ebx8 = reinterpret_cast<struct s3*>(&ebx8->f8);
                v11 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(*reinterpret_cast<void**>(ebx8->f4 + 0x64940000)) + reinterpret_cast<uint32_t>(*reinterpret_cast<void**>(reinterpret_cast<uint32_t>(ebx8) - 8)));
                esp12 = reinterpret_cast<struct s5*>(reinterpret_cast<int32_t>(esp6) - 4);
                esp12->f0 = 0x64947e25;
                fun_64947aa0(4);
                esp6 = reinterpret_cast<struct s0*>(&esp12->f4);
            } while (reinterpret_cast<uint32_t>(ebx8) < 0x6494aa28);
        }
    } else {
        ecx = ebx8->f4;
        if (!ecx) {
            addr_64947d80_12:
            eax7 = ebx8->f8;
            if (!reinterpret_cast<int1_t>(eax7 == 1)) {
                addr_64947fa3_17:
                esp6->f4 = eax7;
                esp6->f0 = reinterpret_cast<void**>("  Unknown pseudo relocation protocol version %d.\n");
                esp13 = reinterpret_cast<struct s5*>(reinterpret_cast<int32_t>(esp6) - 4);
                esp13->f0 = 0x64947fb3;
                fun_64947a40(ecx, esp13->f4, esp13->f8, esp13->f12, esp13->f16, esp13->f20, esp13->f24, esp13->f28, esp13->f32, esp13->f36, esp13->f40);
                esp14 = reinterpret_cast<struct s0*>(&esp13->f4);
                eax15 = image_base_;
                eax16 = eax15->f0;
                if (eax16) {
                    esp17 = reinterpret_cast<struct s0*>(reinterpret_cast<int32_t>(esp14) - 12);
                    do {
                        esp18 = reinterpret_cast<struct s5*>(reinterpret_cast<int32_t>(esp17) - 4);
                        esp18->f0 = 0x64947fd2;
                        eax16();
                        esp17 = reinterpret_cast<struct s0*>(&esp18->f4);
                        eax19 = image_base_;
                        eax16 = eax19->f4;
                        image_base_ = reinterpret_cast<struct s6*>(&eax19->f4);
                    } while (eax16);
                    esp14 = reinterpret_cast<struct s0*>(&esp17->f12);
                    goto addr_64947fea_21;
                }
            } else {
                ebx20 = reinterpret_cast<struct s7*>(&ebx8->f12);
                if (reinterpret_cast<uint32_t>(ebx20) >= 0x6494aa28) 
                    goto addr_64947de1_4;
                do {
                    edx21 = ebx20->f0;
                    edi22 = ebx20->f4;
                    eax23 = reinterpret_cast<void**>(edi22 + 0x64940000);
                    v24 = *reinterpret_cast<void**>(reinterpret_cast<uint32_t>(edx21) + 0x64940000);
                    ecx25 = reinterpret_cast<void**>(static_cast<uint32_t>(ebx20->f8));
                    if (ecx25 == 16) {
                        ecx26 = reinterpret_cast<uint16_t>(*reinterpret_cast<void**>(edi22 + 0x64940000));
                        edi27 = reinterpret_cast<void*>(static_cast<uint32_t>(*reinterpret_cast<uint16_t*>(&ecx26)));
                        if (*reinterpret_cast<int16_t*>(&ecx26) < reinterpret_cast<int16_t>(0)) {
                            edi27 = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(edi27) | 0xffff0000);
                        }
                        v10 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(ebp4) + 0xffffffcc);
                        v11 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(v24) + (reinterpret_cast<uint32_t>(edi27) - reinterpret_cast<uint32_t>(edx21) - 0x64940000));
                        esp28 = reinterpret_cast<struct s5*>(reinterpret_cast<int32_t>(esp6) - 4);
                        esp28->f0 = 0x64947f0d;
                        fun_64947aa0(2);
                        esp6 = reinterpret_cast<struct s0*>(&esp28->f4);
                        continue;
                    } else {
                        if (ecx25 == 32) {
                            v10 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(ebp4) + 0xffffffcc);
                            v11 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(v24) - (reinterpret_cast<uint32_t>(edx21) + 0x64940000) + reinterpret_cast<unsigned char>(*eax23));
                            esp29 = reinterpret_cast<struct s5*>(reinterpret_cast<int32_t>(esp6) - 4);
                            esp29->f0 = 0x64947f7c;
                            fun_64947aa0(4);
                            esp6 = reinterpret_cast<struct s0*>(&esp29->f4);
                            continue;
                        } else {
                            if (ecx25 != 8) 
                                goto addr_64947dca_30;
                            ecx30 = reinterpret_cast<unsigned char>(*eax23);
                            edi31 = reinterpret_cast<void*>(static_cast<uint32_t>(*reinterpret_cast<unsigned char*>(&ecx30)));
                            if (*reinterpret_cast<signed char*>(&ecx30) >= reinterpret_cast<signed char>(0)) 
                                goto addr_64947f34_32;
                        }
                    }
                    edi31 = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(edi31) | 0xffffff00);
                    addr_64947f34_32:
                    v10 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(ebp4) + 0xffffffcc);
                    v11 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(v24) + (reinterpret_cast<uint32_t>(edi31) - 0x64940000 - reinterpret_cast<uint32_t>(edx21)));
                    esp32 = reinterpret_cast<struct s5*>(reinterpret_cast<int32_t>(esp6) - 4);
                    esp32->f0 = 0x64947f57;
                    fun_64947aa0(1);
                    esp6 = reinterpret_cast<struct s0*>(&esp32->f4);
                    ebx20 = reinterpret_cast<struct s7*>(reinterpret_cast<uint32_t>(ebx20) + 12);
                } while (reinterpret_cast<uint32_t>(ebx20) < 0x6494aa28);
                goto addr_64947f1c_35;
            }
        } else {
            goto addr_64947dee_9;
        }
    }
    addr_64947e2d_37:
    eax7 = g6494b06c;
    ebx33 = reinterpret_cast<void**>(0);
    if (!reinterpret_cast<uint1_t>(reinterpret_cast<uint1_t>(reinterpret_cast<signed char>(eax7) < reinterpret_cast<signed char>(0)) | reinterpret_cast<uint1_t>(eax7 == 0))) {
        do {
            eax34 = g6494b070;
            esi35 = reinterpret_cast<void***>(ebx33 + reinterpret_cast<unsigned char>(ebx33) * 2);
            edi36 = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(esi35) * 4);
            eax7 = reinterpret_cast<void**>(reinterpret_cast<uint32_t>(eax34) + reinterpret_cast<uint32_t>(edi36));
            if (*reinterpret_cast<void***>(eax7)) {
                esp6->f8 = reinterpret_cast<void**>(28);
                esp6->f4 = v10;
                esp6->f0 = *reinterpret_cast<void***>(eax7 + 4);
                esp37 = reinterpret_cast<struct s5*>(reinterpret_cast<int32_t>(esp6) - 4);
                esp37->f0 = 0x64947e7d;
                eax38 = reinterpret_cast<int32_t>(VirtualQuery());
                esp39 = reinterpret_cast<struct s0*>(&esp37->f4 - 12);
                if (!eax38) 
                    break;
                esp39->f12 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(ebp4) - 56);
                eax40 = g6494b070;
                esp39->f8 = *reinterpret_cast<void***>(reinterpret_cast<uint32_t>(eax40) + reinterpret_cast<uint32_t>(esi35) * 4);
                esp39->f4 = v41;
                esp39->f0 = v11;
                esp42 = reinterpret_cast<struct s5*>(reinterpret_cast<int32_t>(esp39) - 4);
                esp42->f0 = 0x64947eae;
                eax7 = reinterpret_cast<void**>(VirtualProtect());
                esp6 = reinterpret_cast<struct s0*>(&esp42->f4 - 16);
            }
            ++ebx33;
            less43 = reinterpret_cast<signed char>(ebx33) < reinterpret_cast<signed char>(g6494b06c);
        } while (less43);
        goto addr_64947de1_4;
    } else {
        goto addr_64947de1_4;
    }
    ecx44 = g6494b070;
    ecx = reinterpret_cast<void**>(reinterpret_cast<uint32_t>(ecx44) + reinterpret_cast<uint32_t>(edi36));
    esp39->f8 = *reinterpret_cast<void***>(ecx + 4);
    eax45 = *reinterpret_cast<void***>(*reinterpret_cast<void***>(ecx + 8) + 8);
    esp39->f0 = reinterpret_cast<void**>("  VirtualQuery failed for %d bytes at address %p");
    esp39->f4 = eax45;
    esp46 = reinterpret_cast<struct s5*>(reinterpret_cast<int32_t>(esp39) - 4);
    esp46->f0 = 0x64947fa3;
    eax7 = fun_64947a40(ecx, esp46->f4, esp46->f8, esp46->f12, esp46->f16, esp46->f20, esp46->f24, esp46->f28, esp46->f32, esp46->f36, esp46->f40);
    esp6 = reinterpret_cast<struct s0*>(&esp46->f4);
    goto addr_64947fa3_17;
    addr_64947fea_21:
    goto esp14->f0;
    addr_64947f1c_35:
    goto addr_64947e2d_37;
    addr_64947dca_30:
    esp6->f4 = ecx25;
    esp6->f0 = reinterpret_cast<void**>("  Unknown pseudo relocation bit size %d.\n");
    esp47 = reinterpret_cast<struct s5*>(reinterpret_cast<int32_t>(esp6) - 4);
    esp47->f0 = 0x64947de1;
    eax7 = fun_64947a40(ecx25, esp47->f4, esp47->f8, esp47->f12, esp47->f16, esp47->f20, esp47->f24, esp47->f28, esp47->f32, esp47->f36, esp47->f40);
    goto addr_64947de1_4;
}

int32_t fun_64948ee0(void** a1, int32_t a2, void** a3) {
    return 1;
}

struct s8 {
    signed char[4] pad4;
    int32_t f4;
};

struct s8* g18;

int32_t Sleep = 0xe5f0;

int32_t g6494b3ec;

int32_t g6494b000;

int32_t g6494b3f0;

void fun_64948f24(int32_t a1, int32_t a2);

/* (image base) */
int32_t image_base_ = 0x64947990;

void** g6494b3e8;

void** g6494b3e4;

int32_t fun_64941040(void** ecx, void** a2, int32_t a3, void** a4) {
    void** v5;
    void** v6;
    void** ebp7;
    void** v8;
    void** edi9;
    void** v10;
    void** esi11;
    void** v12;
    void** ebx13;
    int32_t eax14;
    struct s8* eax15;
    int32_t ebx16;
    int32_t edi17;
    int1_t zf18;
    int32_t tmp32_19;
    int32_t eax20;
    int32_t esi21;
    int1_t zf22;
    int32_t eax23;
    int32_t ebx24;
    int32_t eax25;
    int32_t eax26;
    int32_t eax27;
    int32_t eax28;
    int32_t tmp32_29;
    void** eax30;
    void** eax31;
    void** esi32;
    void** eax33;
    void** v34;
    void** eax35;
    void** ebx36;
    void** edx37;
    void** v38;
    void** v39;
    void** v40;
    void** v41;
    void** v42;
    void** v43;

    v5 = reinterpret_cast<void**>(__return_address());
    v6 = ebp7;
    v8 = edi9;
    v10 = esi11;
    v12 = ebx13;
    if (a3) {
        eax14 = 1;
        if (a3 != 1) {
            addr_649410ae_3:
            return eax14;
        } else {
            eax15 = g18;
            ebx16 = eax15->f4;
            edi17 = Sleep;
            while (1) {
                zf18 = g6494b3ec == ebx16;
                if (zf18) {
                    tmp32_19 = g6494b3ec;
                    g6494b3ec = ebx16;
                    ebx16 = tmp32_19;
                }
                if (!0) 
                    break;
                if (!ebx16) 
                    goto addr_649411e5_9;
                edi17(0x3e8);
            }
        }
    } else {
        eax20 = g6494b000;
        if (reinterpret_cast<uint1_t>(eax20 < 0) | reinterpret_cast<uint1_t>(eax20 == 0)) {
            eax14 = 0;
            goto addr_649410ae_3;
        }
        esi21 = Sleep;
        g6494b000 = eax20 - 1;
        while (1) {
            zf22 = g6494b3ec == 1;
            if (zf22) {
                g6494b3ec = 1;
            }
            if (!0) 
                break;
            esi21(0x3e8);
        }
        eax23 = g6494b3f0;
        if (eax23 == 2) 
            goto addr_64941170_19; else 
            goto addr_6494109d_20;
    }
    ebx24 = 0;
    addr_649410f9_22:
    eax25 = g6494b3f0;
    if (eax25 == 1) {
        fun_64948f14(31);
    } else {
        eax26 = g6494b3f0;
        if (!eax26) {
            g6494b3f0 = 1;
            fun_64948f24(0x6494f008, 0x6494f010);
        }
    }
    eax27 = g6494b3f0;
    if (eax27 == 1) {
        fun_64948f24(0x6494f000, 0x6494f004);
        g6494b3f0 = 2;
    }
    if (!ebx24) {
        g6494b3ec = ebx24;
    }
    eax28 = image_base_;
    if (eax28) {
        eax28(a2, 2, a4);
    }
    tmp32_29 = g6494b000 + 1;
    g6494b000 = tmp32_29;
    return 1;
    addr_649411e5_9:
    ebx24 = 1;
    goto addr_649410f9_22;
    addr_64941170_19:
    eax30 = g6494b3e8;
    eax31 = fun_64947a20(eax30);
    esi32 = eax31;
    if (eax31) {
        eax33 = g6494b3e4;
        v34 = eax33;
        eax35 = fun_64947a20(v34);
        ebx36 = eax35;
        while (ebx36 = ebx36 - 4, reinterpret_cast<unsigned char>(esi32) <= reinterpret_cast<unsigned char>(ebx36)) {
            do {
                edx37 = *reinterpret_cast<void***>(ebx36);
                if (!edx37) 
                    break;
                ebx36 = ebx36 - 4;
                edx37(v34);
            } while (reinterpret_cast<unsigned char>(esi32) <= reinterpret_cast<unsigned char>(ebx36));
            break;
        }
        fun_64948f1c(ecx, esi32, v38, v39, v40, v41, v42, v43, v12, v10, v8, v6, v5);
        g6494b3e4 = reinterpret_cast<void**>(0);
        g6494b3e8 = reinterpret_cast<void**>(0);
    }
    g6494b3f0 = 0;
    g6494b3ec = 0;
    return 1;
    addr_6494109d_20:
    fun_64948f14(31);
    eax14 = 1;
    goto addr_649410ae_3;
}

int32_t g6494b074;

int32_t g64948fe0 = -1;

int32_t fun_64947920(int32_t a1);

int32_t fun_64948040(void** a1, int32_t a2, void** a3) {
    int32_t ecx4;
    int32_t eax5;
    int32_t ebx6;
    int32_t eax7;
    int32_t eax8;

    ecx4 = g6494b074;
    if (ecx4) {
        return eax5;
    }
    g6494b074 = 1;
    ebx6 = g64948fe0;
    if (ebx6 != -1) 
        goto addr_64947fff_5;
    ebx6 = 0;
    while (eax7 = ebx6 + 1, !!*reinterpret_cast<int32_t*>(eax7 * 4 + 0x64948fe0)) {
        ebx6 = eax7;
    }
    addr_64947fff_5:
    if (ebx6) {
        do {
            *reinterpret_cast<int32_t*>(ebx6 * 4 + 0x64948fe0)();
            --ebx6;
        } while (ebx6);
    }
    eax8 = fun_64947920(0x64947fc0);
    return eax8;
}

int32_t fun_64948ef0(void** a1, int32_t a2, void** a3) {
    return 1;
}

int32_t g64949038 = -1;

int32_t fun_64941260(void** ecx, int32_t a2) {
    void** esi3;
    void** eax4;
    int32_t edx5;
    int32_t edx6;
    int32_t edx7;
    int32_t eax8;
    int32_t edx9;
    int32_t eax10;
    void** v11;
    int32_t eax12;
    int32_t eax13;
    int32_t eax14;
    int32_t eax15;
    int32_t eax16;
    int32_t eax17;

    esi3 = eax4;
    g64949038 = edx5;
    if (edx6) {
        fun_64947ce0(ecx);
        if (reinterpret_cast<uint32_t>(edx7 - 1) > 1) {
            addr_64941305_3:
            eax8 = fun_64948ee0(esi3, edx7, ecx);
            edx9 = eax8;
            if (eax8 || edx7 != 1) {
                addr_649412a0_4:
                if (edx7 == 3) 
                    goto addr_64941377_5;
            } else {
                fun_64948ee0(esi3, 0, ecx);
                fun_64948ef0(esi3, 0, ecx);
                fun_64941040(ecx, esi3, 0, ecx);
                edx9 = 0;
                if (edx7 == 3) 
                    goto addr_64941377_5;
            }
        } else {
            eax10 = fun_64941040(ecx, esi3, edx7, ecx);
            if (eax10) {
                v11 = esi3;
                eax12 = fun_64948ef0(v11, edx7, ecx);
                if (eax12) {
                    if (edx7 != 1) {
                        eax13 = fun_64948ee0(esi3, 2, ecx);
                        edx9 = eax13;
                        goto addr_649412a0_4;
                    } else {
                        esi3 = esi3;
                        fun_64948040(v11, edx7, ecx);
                        goto addr_64941305_3;
                    }
                } else {
                    if (edx7 == 1) {
                        fun_64941040(ecx, esi3, 0, ecx);
                        edx9 = eax12;
                        goto addr_649412b1_14;
                    }
                }
            } else {
                goto addr_649412f0_16;
            }
        }
    } else {
        eax14 = g6494b000;
        if (eax14) {
            fun_64947ce0(ecx);
            eax15 = fun_64948ee0(esi3, 0, ecx);
            edx9 = eax15;
            goto addr_649412a0_4;
        }
    }
    if (!edx7) {
        addr_64941377_5:
        eax16 = fun_64948ef0(esi3, edx7, ecx);
        eax17 = fun_64941040(ecx, esi3, edx7, ecx);
        edx9 = eax16;
        if (!eax17) {
            edx9 = 0;
        }
    } else {
        addr_649412b1_14:
        g64949038 = -1;
        return edx9;
    }
    goto addr_649412b1_14;
    addr_649412f0_16:
    edx9 = 0;
    goto addr_649412b1_14;
}

int32_t GetCurrentThreadId = 0xe38e;

int32_t LeaveCriticalSection = 0xe4b8;

void** pthread_spin_unlock(void** a1, void** a2, void** a3, void** a4, void** a5) {
    void** eax6;
    void** ebx7;
    void** esi8;
    void** eax9;

    eax6 = reinterpret_cast<void**>(22);
    if (a1 && (ebx7 = *reinterpret_cast<void***>(a1), !!ebx7)) {
        if (ebx7 == 0xffffffff || (esi8 = *reinterpret_cast<void***>(ebx7), eax9 = reinterpret_cast<void**>(GetCurrentThreadId()), esi8 != eax9)) {
            eax6 = reinterpret_cast<void**>(1);
        } else {
            *reinterpret_cast<void***>(ebx7 + 4) = *reinterpret_cast<void***>(ebx7 + 4) - 1;
            if (!*reinterpret_cast<void***>(ebx7 + 4)) {
                *reinterpret_cast<void***>(ebx7) = reinterpret_cast<void**>(0);
            }
            LeaveCriticalSection(ebx7 + 8);
            return 0;
        }
    }
    return eax6;
}

void** fun_64942b50();

int32_t ReleaseSemaphore = 0xe514;

void** pthread_spin_lock(void** a1, void** a2, void** a3, void** a4, void** a5);

struct s9 {
    signed char[32] pad32;
    void** f32;
    signed char[31] pad64;
    void** f64;
};

struct s9* _iob = reinterpret_cast<struct s9*>(0xe72a);

void fun_64948f2c(void** a1, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7, void** a8);

void fun_64948f34(int32_t a1);

int32_t g64949010 = 1;

void** pthread_mutex_unlock(void** ecx, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7, void** a8, void** a9, void** a10, void** a11, void** a12, void** a13, void** a14, void** a15, void** a16, void** a17, void** a18, void** a19, void** a20, void** a21, void** a22, void** a23, void** a24, void** a25) {
    void** eax26;
    void** esi27;
    void** edi28;
    void** eax29;
    void** eax30;
    void** eax31;
    int32_t eax32;
    void** edx33;
    void** eax34;
    void** v35;
    void** v36;
    struct s9* eax37;
    void** v38;
    void** v39;
    void** ebx40;
    void** eax41;
    void** v42;
    void** v43;

    eax26 = fun_64942b50();
    if (eax26) {
        return eax26;
    }
    esi27 = *reinterpret_cast<void***>(a2);
    if (*reinterpret_cast<void***>(esi27 + 8)) {
        edi28 = *reinterpret_cast<void***>(esi27 + 20);
        if (!edi28) {
            eax29 = esi27;
        } else {
            eax30 = reinterpret_cast<void**>(GetCurrentThreadId());
            if (edi28 == eax30) {
                if (!reinterpret_cast<int1_t>(*reinterpret_cast<void***>(esi27 + 8) == 2) || (*reinterpret_cast<void***>(esi27 + 12) = *reinterpret_cast<void***>(esi27 + 12) - 1, *reinterpret_cast<void***>(esi27 + 12) == 0)) {
                    addr_64942dee_8:
                    eax31 = *reinterpret_cast<void***>(esi27 + 24);
                    *reinterpret_cast<void***>(esi27 + 20) = reinterpret_cast<void**>(0);
                    if (!eax31 || (eax32 = reinterpret_cast<int32_t>(ReleaseSemaphore(eax31, 1, 0)), !!eax32)) {
                        edx33 = reinterpret_cast<void**>(0);
                    } else {
                        eax34 = reinterpret_cast<void**>(GetCurrentThreadId());
                        edx33 = reinterpret_cast<void**>(1);
                        *reinterpret_cast<void***>(esi27 + 20) = eax34;
                    }
                } else {
                    edx33 = reinterpret_cast<void**>(0);
                }
                eax29 = *reinterpret_cast<void***>(a2);
                goto addr_64942e20_13;
            } else {
                eax29 = *reinterpret_cast<void***>(a2);
            }
        }
    } else {
        edx33 = reinterpret_cast<void**>(1);
        eax29 = esi27;
        if (!*reinterpret_cast<void***>(esi27 + 20)) 
            goto addr_64942e20_13; else 
            goto addr_64942dee_8;
    }
    edx33 = reinterpret_cast<void**>(1);
    addr_64942c60_17:
    pthread_spin_lock(0x64949018, 1, 0, v35, v36);
    if (!reinterpret_cast<int1_t>(*reinterpret_cast<void***>(eax29) == 0xbab1f00d) || reinterpret_cast<uint1_t>(reinterpret_cast<signed char>(*reinterpret_cast<void***>(eax29 + 4)) < reinterpret_cast<signed char>(0)) | reinterpret_cast<uint1_t>(*reinterpret_cast<void***>(eax29 + 4) == 0)) {
        eax37 = _iob;
        fun_64948f2c(&eax37->f64, "Assertion failed: (%s), file %s, line %d\n", "(m_->valid == LIFE_MUTEX) && (m_->busy > 0)", "../../src/winpthreads-v3/src/mutex.c", 45, v38, v39, ebx40);
        fun_64948f34(1);
        g64949010 = reinterpret_cast<int32_t>("Assertion failed: (%s), file %s, line %d\n");
        goto 1;
    } else {
        eax41 = *reinterpret_cast<void***>(eax29 + 4);
        *reinterpret_cast<void***>(eax29 + 4) = eax41 - 1;
        pthread_spin_unlock(0x64949018, 1, 0, v42, v43);
        return edx33;
    }
    addr_64942e20_13:
    goto addr_64942c60_17;
}

void** fun_64943270(void** ecx, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7, void** a8, void** a9, void** a10, void** a11, void** a12, void** a13);

struct s10 {
    int32_t f0;
    signed char[4] pad8;
    int32_t f8;
    int32_t f12;
    signed char[8] pad24;
    void** f24;
};

int32_t CloseHandle = 0xe2c4;

void** pthread_mutex_destroy(void** ecx, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7, void** a8, void** a9, void** a10, void** a11) {
    void** v12;
    void** ebx13;
    void** ebx14;
    int32_t esi15;
    void** v16;
    void** v17;
    void** v18;
    void** v19;
    void** v20;
    void** v21;
    void** v22;
    void** v23;
    void** v24;
    void** v25;
    void** eax26;
    struct s10* v27;
    void** v28;
    void** v29;
    void** v30;
    void** v31;
    void** v32;
    void** v33;
    void** v34;
    void** v35;
    void** v36;
    void** v37;
    void** v38;
    void** v39;
    void** v40;
    void** v41;
    void** v42;
    void** v43;

    v12 = ebx13;
    ebx14 = a2;
    esi15 = Sleep;
    while (eax26 = fun_64943270(ecx, 0, v16, v17, v18, v19, v20, v21, v22, v23, v24, v25, v12), eax26 == 0xbeef) {
        esi15(0);
    }
    if (!eax26) {
        if (v27) {
            v28 = v27->f24;
            CloseHandle(v28);
            v27->f0 = 0xdeadbeef;
            v27->f8 = 0;
            v27->f12 = 0;
            fun_64948f1c(ecx, v29, v28, v30, v31, v32, v33, v34, v35, v36, v37, v38, v39);
            *reinterpret_cast<void***>(ebx14) = reinterpret_cast<void**>(0);
        }
        pthread_spin_unlock(0x64949018, v40, v41, v42, v43);
    }
    return eax26;
}

int32_t calloc = 0xe762;

void** fun_64948f3c(void** a1, void** a2) {
    goto calloc;
}

void** fun_64942bb0();

int32_t CreateSemaphoreA = 0xe2e2;

int32_t GetLastError = 0xe3bc;

void** pthread_mutex_init(void** ecx, void** a2, void** a3) {
    void** eax4;
    void** v5;
    void** eax6;
    void** eax7;
    void** eax8;
    int32_t eax9;
    void** edi10;
    void** ebx11;
    void** esi12;
    void** edi13;
    void** ebp14;

    eax4 = fun_64942bb0();
    if (eax4 || (v5 = reinterpret_cast<void**>(28), eax6 = fun_64948f3c(1, 28), eax4 = reinterpret_cast<void**>(12), eax6 == 0)) {
        addr_64942ea7_2:
        return eax4;
    } else {
        *reinterpret_cast<void***>(eax6 + 8) = reinterpret_cast<void**>(0);
        *reinterpret_cast<void***>(eax6 + 12) = reinterpret_cast<void**>(0);
        if (!a3 || (eax7 = *reinterpret_cast<void***>(a3), *reinterpret_cast<void***>(eax6 + 8) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(eax7) & 3), !(*reinterpret_cast<unsigned char*>(&eax7) & 4))) {
            v5 = reinterpret_cast<void**>(1);
            eax8 = reinterpret_cast<void**>(CreateSemaphoreA(0, 1, 0x7fffffff, 0));
            *reinterpret_cast<void***>(eax6 + 24) = eax8;
            if (!eax8) {
                eax9 = reinterpret_cast<int32_t>(GetLastError());
                edi10 = reinterpret_cast<void**>(12);
                if (eax9 == 5) {
                    edi10 = reinterpret_cast<void**>(1);
                }
            } else {
                *reinterpret_cast<void***>(eax6) = reinterpret_cast<void**>(0xbab1f00d);
                eax4 = reinterpret_cast<void**>(0);
                *reinterpret_cast<void***>(a2) = eax6;
                goto addr_64942ea7_2;
            }
        } else {
            edi10 = reinterpret_cast<void**>(40);
        }
    }
    *reinterpret_cast<void***>(eax6) = reinterpret_cast<void**>(0xdeadbeef);
    fun_64948f1c(ecx, eax6, v5, 0x7fffffff, 0, 0, 1, 0x7fffffff, ebx11, esi12, edi13, ebp14, __return_address());
    *reinterpret_cast<void***>(a2) = reinterpret_cast<void**>(0);
    return edi10;
}

int32_t _errno = 0xe70a;

void** pthread_mutex_lock(void** ecx, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7, void** a8, void** a9, void** a10, void** a11, void** a12, void** a13);

int32_t sem_destroy(void** ecx, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7, void** a8, void** a9, void** a10, void** a11, void** a12, void** a13) {
    void** v14;
    void** edi15;
    void** v16;
    void** esi17;
    void** v18;
    void** ebx19;
    void** edi20;
    void** v21;
    int32_t* eax22;
    int32_t eax23;
    void** ebx24;
    void** v25;
    void** v26;
    void** v27;
    void** v28;
    void** v29;
    void** v30;
    void** ebp31;
    void** eax32;
    void*** eax33;
    void** v34;
    void** v35;
    void** v36;
    void** v37;
    void** v38;
    void** v39;
    int32_t* eax40;
    int32_t eax41;
    void** v42;
    void** v43;
    void** v44;
    void** v45;
    void** v46;
    void** v47;
    void** v48;
    void** v49;
    void** v50;
    void** v51;
    void** v52;
    void** v53;
    int32_t esi54;
    void** v55;
    void** v56;
    void** v57;
    void** v58;
    void** v59;
    void** v60;
    void** eax61;
    void** v62;
    void** v63;
    void** v64;
    void** v65;
    void** v66;
    void** v67;

    v14 = edi15;
    v16 = esi17;
    v18 = ebx19;
    if (!a2 || (edi20 = *reinterpret_cast<void***>(a2), edi20 == 0)) {
        addr_64946928_2:
        eax22 = reinterpret_cast<int32_t*>(_errno(v21));
        *eax22 = 22;
        eax23 = -1;
    } else {
        ebx24 = edi20 + 12;
        eax32 = pthread_mutex_lock(ecx, ebx24, v25, v26, v27, v28, v29, v30, v18, v16, v14, ebp31, __return_address());
        if (eax32) {
            eax33 = reinterpret_cast<void***>(_errno(ebx24));
            *eax33 = eax32;
            return -1;
        }
        if (reinterpret_cast<signed char>(*reinterpret_cast<void***>(edi20 + 8)) < reinterpret_cast<signed char>(0)) 
            goto addr_6494693b_6; else 
            goto addr_64946898_7;
    }
    addr_649468fd_8:
    return eax23;
    addr_6494693b_6:
    pthread_mutex_unlock(ecx, ebx24, v34, v35, v36, v37, v38, v39, v18, v16, v14, ebp31, __return_address(), a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13);
    eax40 = reinterpret_cast<int32_t*>(_errno(ebx24));
    *eax40 = 16;
    eax23 = -1;
    goto addr_649468fd_8;
    addr_64946898_7:
    v21 = *reinterpret_cast<void***>(edi20 + 4);
    eax41 = reinterpret_cast<int32_t>(CloseHandle(v21));
    if (!eax41) {
        pthread_mutex_unlock(ecx, ebx24, v21, v42, v43, v44, v45, v46, v47, v18, v16, v14, ebp31, __return_address(), a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12);
        goto addr_64946928_2;
    } else {
        *reinterpret_cast<void***>(a2) = reinterpret_cast<void**>(0);
        *reinterpret_cast<void***>(edi20 + 8) = reinterpret_cast<void**>(0x7fffffff);
        pthread_mutex_unlock(ecx, ebx24, v21, v48, v49, v50, v51, v52, v53, v18, v16, v14, ebp31, __return_address(), a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12);
        esi54 = Sleep;
        esi54(0, v21);
        while (eax61 = pthread_mutex_destroy(ecx, ebx24, 0, v21, v55, v56, v57, v58, v59, v60, v18), eax61 == 16) {
            esi54(0, 0, v21);
        }
        *reinterpret_cast<void***>(edi20) = reinterpret_cast<void**>(0xdeadbeef);
        fun_64948f1c(ecx, edi20, 0, v21, v62, v63, v64, v65, v66, v67, v18, v16, v14);
        eax23 = 0;
        goto addr_649468fd_8;
    }
}

void** fun_64946650(void** ecx, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7, void** a8, void** a9, void** a10, void** a11, void** a12, void** a13);

struct s11 {
    signed char[4] pad4;
    void** f4;
    signed char[3] pad8;
    void** f8;
    signed char[3] pad12;
    void** f12;
};

struct s12 {
    signed char[8] pad8;
    int32_t f8;
    void** f12;
};

void** sem_post_multiple(void** a1, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7, void** a8, void** a9, void** a10, void** a11, void** a12) {
    void** v13;
    void** v14;
    int32_t* eax15;
    void** esi16;
    void** v17;
    void** v18;
    void** v19;
    void** v20;
    void** v21;
    void** v22;
    void** v23;
    void** v24;
    void** ebx25;
    void** esi26;
    void** ebp27;
    void** eax28;
    struct s11* edx29;
    struct s11* v30;
    void** ecx31;
    void** v32;
    void** v33;
    void** v34;
    void** v35;
    void** v36;
    void** v37;
    void** v38;
    int32_t* eax39;
    void** eax40;
    void** ecx41;
    void** v42;
    void** v43;
    void** v44;
    void** v45;
    void** v46;
    int32_t eax47;
    void** eax48;
    struct s12* v49;
    void** v50;
    void** v51;
    void** v52;
    void** v53;
    void** v54;
    void** v55;
    struct s11* v56;

    if (reinterpret_cast<uint1_t>(reinterpret_cast<signed char>(a2) < reinterpret_cast<signed char>(0)) | reinterpret_cast<uint1_t>(a2 == 0)) {
        addr_64946d56_2:
        eax15 = reinterpret_cast<int32_t*>(_errno(v13, v14, 0));
        esi16 = reinterpret_cast<void**>(0xffffffff);
        *eax15 = 22;
    } else {
        eax28 = fun_64946650(0, v17, v18, v19, v20, v21, v22, v23, v24, ebx25, esi26, ebp27, __return_address());
        esi16 = eax28;
        if (eax28) {
            esi16 = reinterpret_cast<void**>(0xffffffff);
        } else {
            edx29 = v30;
            ecx31 = edx29->f8;
            if (reinterpret_cast<signed char>(ecx31) > reinterpret_cast<signed char>(0x7fffffff - reinterpret_cast<unsigned char>(a2))) {
                esi16 = reinterpret_cast<void**>(0xffffffff);
                pthread_mutex_unlock(ecx31, &edx29->f12, v32, v33, v34, v35, v36, v37, v38, ebx25, esi26, ebp27, __return_address(), a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12);
                eax39 = reinterpret_cast<int32_t*>(_errno(&edx29->f12));
                *eax39 = 34;
            } else {
                eax40 = reinterpret_cast<void**>(-reinterpret_cast<unsigned char>(edx29->f8));
                ecx41 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(edx29->f8) + reinterpret_cast<unsigned char>(a2));
                edx29->f8 = ecx41;
                if (reinterpret_cast<uint1_t>(reinterpret_cast<signed char>(eax40) < reinterpret_cast<signed char>(0)) | reinterpret_cast<uint1_t>(eax40 == 0)) {
                    addr_64946d23_8:
                    pthread_mutex_unlock(ecx41, &edx29->f12, v14, 0, v42, v43, v44, v45, v46, ebx25, esi26, ebp27, __return_address(), a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12);
                } else {
                    if (reinterpret_cast<signed char>(a2) <= reinterpret_cast<signed char>(eax40)) {
                        eax40 = a2;
                    }
                    v14 = eax40;
                    v13 = edx29->f4;
                    eax47 = reinterpret_cast<int32_t>(ReleaseSemaphore(v13, v14, 0));
                    if (!eax47) 
                        goto addr_64946d40_12; else 
                        goto addr_64946d20_13;
                }
            }
        }
    }
    return esi16;
    addr_64946d40_12:
    eax48 = reinterpret_cast<void**>(&v49->f12);
    *reinterpret_cast<uint32_t*>(eax48 + 0xfffffffc) = v49->f8 - reinterpret_cast<unsigned char>(a2);
    pthread_mutex_unlock(ecx41, eax48, v50, 0x64946d19, v13, v14, 0, v51, v52, v53, v54, v55, ebx25, esi26, ebp27, __return_address(), a1, a2, a3, a4, a5, a6, a7, a8, a9);
    goto addr_64946d56_2;
    addr_64946d20_13:
    edx29 = v56;
    goto addr_64946d23_8;
}

int32_t fprintf = 0xe774;

void fun_64948f2c(void** a1, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7, void** a8) {
    goto fprintf;
}

void** _pthread_time_in_ms_from_timespec(void** a1) {
    void** ecx2;
    void* v3;

    ecx2 = *reinterpret_cast<void***>(a1 + 4);
    v3 = reinterpret_cast<void*>(0x3e8 * reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(a1)));
    __asm__("cdq ");
    return (__intrinsic() >> 18) - (reinterpret_cast<signed char>(ecx2) >> 31) + reinterpret_cast<uint32_t>(v3);
}

int32_t _ftime = 0xe714;

void** _pthread_time_in_ms(void** a1) {
    int32_t v2;
    uint16_t v3;

    _ftime(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4 - 40 + 20);
    return 0x3e8 * v2 + v3;
}

void** fun_64944990(void** ecx, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7, void** a8, void** a9, void** a10, void** a11, void** a12);

void** pthread_testcancel(void** ecx, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7, void** a8, void** a9, void** a10, void** a11, void** a12, void** a13, void** a14, void** a15, void** a16, void** a17, void** a18, void** a19, void** a20, void** a21);

void** WaitForSingleObject = reinterpret_cast<void**>(0xb6);

int32_t fun_64945a20(void** ecx, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7, void** a8, void** a9, void** a10, void** a11, void** a12, void** a13) {
    void** v14;
    void** v15;
    void** v16;
    void** v17;
    void** ebx18;
    void** esi19;
    void** ebp20;
    void** eax21;
    void** v22;
    void** v23;
    void** v24;
    void** v25;
    void** v26;
    void** v27;
    void** v28;
    void** v29;
    void** v30;
    void** v31;
    void** v32;
    void** eax33;
    void** v34;
    void** v35;
    void** v36;
    void** v37;
    void** v38;

    eax21 = fun_64944990(ecx, v14, v15, v16, v17, ebx18, esi19, ebp20, __return_address(), a2, a3, a4);
    if (!a2) {
        pthread_testcancel(ecx, v22, v23, v24, v25, ebx18, esi19, ebp20, __return_address(), a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13);
        Sleep(0);
        pthread_testcancel(ecx, 0x64945a72, 0, v26, v27, v28, ebx18, esi19, ebp20, __return_address(), a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12);
        return 0;
    } else {
        pthread_testcancel(ecx, v29, v30, v31, v32, ebx18, esi19, ebp20, __return_address(), a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13);
        eax33 = *reinterpret_cast<void***>(eax21 + 24);
        if (!eax33) {
            v34 = a2;
            v35 = reinterpret_cast<void**>(0x64945a8c);
            Sleep(v34);
        } else {
            v36 = a2;
            v34 = eax33;
            v35 = reinterpret_cast<void**>(0x64945a4f);
            WaitForSingleObject(v34, v36);
        }
        pthread_testcancel(ecx, v35, v34, v36, v37, v38, ebx18, esi19, ebp20, __return_address(), a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12);
        return 0;
    }
}

void** pthread_self(void** ecx, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7, void** a8) {
    void** v9;
    void** v10;
    void** v11;
    void** eax12;

    eax12 = fun_64944990(ecx, v9, v10, v11, __return_address(), a2, a3, a4, a5, a6, a7, a8);
    if (!eax12) {
        return 0;
    } else {
        return *reinterpret_cast<void***>(eax12 + 0xb0);
    }
}

void** __pth_gpointer_locked(void** ecx, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7, void** a8, void** a9, void** a10, void** a11, void** a12, void** a13, void** a14, void** a15, void** a16, void** a17);

void** pthread_getevent(void** ecx, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7, void** a8, void** a9) {
    void** v10;
    void** v11;
    void** v12;
    void** v13;
    void** v14;
    void** v15;
    void** eax16;
    void** eax17;

    eax16 = __pth_gpointer_locked(ecx, a2, v10, v11, v12, v13, v14, v15, __return_address(), a2, a3, a4, a5, a6, a7, a8, a9);
    if (!eax16) {
        eax17 = reinterpret_cast<void**>(0);
    } else {
        eax17 = *reinterpret_cast<void***>(eax16 + 24);
    }
    return eax17;
}

void** g6494b050;

int32_t ResetEvent = 0xe528;

unsigned char _pthread_invoke_cancel(void** ecx, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7, void** a8);

void** pthread_testcancel(void** ecx, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7, void** a8, void** a9, void** a10, void** a11, void** a12, void** a13, void** a14, void** a15, void** a16, void** a17, void** a18, void** a19, void** a20, void** a21) {
    void** v22;
    void** v23;
    void** v24;
    void** v25;
    void** ebx26;
    void** esi27;
    void** ebp28;
    void** eax29;
    void** ebx30;
    void** esi31;
    void** v32;
    void** v33;
    void** v34;
    uint32_t eax35;
    void** edx36;
    void** v37;
    void** v38;
    void** v39;
    void** eax40;
    void** edx41;
    uint32_t eax42;
    void** eax43;
    void** v44;
    void** v45;
    void** v46;
    void** v47;
    void** v48;
    void** v49;
    void** v50;
    void** v51;
    void** v52;
    void** v53;
    void** v54;
    void** v55;
    void** v56;
    void** v57;
    void** v58;
    void** eax59;
    void** v60;
    void** v61;
    void** v62;
    void** v63;
    void** v64;
    void** v65;
    void** eax66;
    void** ebx67;
    void** esi68;
    void** v69;
    void** v70;
    void** v71;
    void** v72;
    void** v73;
    void** v74;
    void** eax75;
    void** v76;
    void** v77;
    void** v78;
    void** v79;
    void** v80;
    void** v81;
    void** edx82;
    void** v83;
    void** v84;
    void** v85;
    void** v86;
    void** v87;
    void** v88;
    void** v89;
    void** v90;
    void** v91;
    void** v92;
    void** v93;
    void** v94;
    void** v95;
    void** v96;
    void** v97;
    void** v98;
    void** v99;
    void** v100;
    void** v101;
    void** v102;

    eax29 = fun_64944990(ecx, v22, v23, v24, v25, ebx26, esi27, ebp28, __return_address(), a2, a3, a4);
    ebx30 = eax29;
    if (!eax29 || (*reinterpret_cast<unsigned char*>(eax29 + 32) & 12 || (eax29 = g6494b050, !eax29))) {
        return eax29;
    }
    esi31 = ebx30 + 28;
    pthread_mutex_lock(ecx, esi31, v32, v33, v34, ebx26, esi27, ebp28, __return_address(), a2, a3, a4, a5);
    eax35 = *reinterpret_cast<unsigned char*>(ebx30 + 32);
    if (!(*reinterpret_cast<unsigned char*>(&eax35) & 3) || ((edx36 = *reinterpret_cast<void***>(ebx30 + 36), (*reinterpret_cast<unsigned char*>(&edx36) & 1) == 0) || (ecx = *reinterpret_cast<void***>(ebx30 + 16), !(reinterpret_cast<uint1_t>(reinterpret_cast<signed char>(ecx) < reinterpret_cast<signed char>(0)) | reinterpret_cast<uint1_t>(ecx == 0))))) {
        eax40 = pthread_mutex_unlock(ecx, esi31, v37, v38, v39, ebx26, esi27, ebp28, __return_address(), a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15, a16, a17);
        return eax40;
    }
    edx41 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(edx36) & 0xfffffffe);
    eax42 = eax35 & 0xfffffff3 | 4;
    *reinterpret_cast<unsigned char*>(ebx30 + 32) = *reinterpret_cast<unsigned char*>(&eax42);
    eax43 = *reinterpret_cast<void***>(ebx30 + 24);
    *reinterpret_cast<void***>(ebx30 + 36) = edx41;
    if (eax43) {
        ResetEvent(eax43);
    }
    pthread_mutex_unlock(ecx, esi31, v44, v45, v46, ebx26, esi27, ebp28, __return_address(), a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15, a16, a17);
    _pthread_invoke_cancel(ecx, esi31, v47, v48, v49, ebx26, esi27, ebp28);
    if (v50) 
        goto addr_6494598f_8;
    fun_64944990(ecx, v51, v52, v53, v54, ebx30, esi31, reinterpret_cast<int32_t>(__zero_stack_offset()) - 4, esi31, v55, v56, v57);
    goto addr_649459e4_10;
    addr_6494598f_8:
    v58 = v50;
    eax59 = _pthread_time_in_ms_from_timespec(v58);
    if (reinterpret_cast<unsigned char>(edx41) > reinterpret_cast<unsigned char>(0) || reinterpret_cast<unsigned char>(eax59) > reinterpret_cast<unsigned char>(0xfffffffe)) {
        eax66 = fun_64944990(ecx, v58, v60, v61, v62, ebx30, esi31, reinterpret_cast<int32_t>(__zero_stack_offset()) - 4, esi31, v63, v64, v65);
        ebx67 = reinterpret_cast<void**>(0xffffffff);
        esi68 = eax66;
        goto addr_649459a8_12;
    } else {
        ebx67 = eax59;
        eax75 = fun_64944990(ecx, v58, v69, v70, v71, ebx30, esi31, reinterpret_cast<int32_t>(__zero_stack_offset()) - 4, esi31, v72, v73, v74);
        esi68 = eax75;
        if (ebx67) {
            addr_649459a8_12:
            pthread_testcancel(ecx, v58, v76, v77, v78, ebx30, esi31, reinterpret_cast<int32_t>(__zero_stack_offset()) - 4, esi31, v79, v80, v81, ebx26, esi27, ebp28, __return_address(), a2, a3, a4, a5, a6);
            edx82 = *reinterpret_cast<void***>(esi68 + 24);
            if (!edx82) {
                v83 = ebx67;
                v84 = reinterpret_cast<void**>(0x64945a19);
                Sleep(v83);
            } else {
                v85 = ebx67;
                v83 = edx82;
                v84 = reinterpret_cast<void**>(0x649459c1);
                WaitForSingleObject(v83, v85);
            }
        } else {
            addr_649459e4_10:
            pthread_testcancel(ecx, v58, v86, v87, v88, ebx30, esi31, reinterpret_cast<int32_t>(__zero_stack_offset()) - 4, esi31, v89, v90, v91, ebx26, esi27, ebp28, __return_address(), a2, a3, a4, a5, a6);
            Sleep(0);
            pthread_testcancel(ecx, 0x649459f6, 0, v92, v93, v94, ebx30, esi31, reinterpret_cast<int32_t>(__zero_stack_offset()) - 4, esi31, v95, v96, v97, ebx26, esi27, ebp28, __return_address(), a2, a3, a4, a5);
            goto esi31;
        }
        pthread_testcancel(ecx, v84, v83, v85, v98, v99, ebx30, esi31, reinterpret_cast<int32_t>(__zero_stack_offset()) - 4, esi31, v100, v101, v102, ebx26, esi27, ebp28, __return_address(), a2, a3, a4, a5);
        goto esi31;
    }
}

uint32_t fun_649457c0(void** ecx, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7, void** a8, void** a9) {
    void** eax10;
    void** v11;
    void** v12;
    void** v13;
    void** eax14;
    uint32_t eax15;

    eax10 = g6494b050;
    if (eax10) {
        eax14 = fun_64944990(ecx, v11, v12, v13, __return_address(), a2, a3, a4, a5, a6, a7, a8);
        eax15 = 0;
        if (eax14 && (reinterpret_cast<uint1_t>(reinterpret_cast<signed char>(*reinterpret_cast<void***>(eax14 + 16)) < reinterpret_cast<signed char>(0)) | reinterpret_cast<uint1_t>(*reinterpret_cast<void***>(eax14 + 16) == 0) && *reinterpret_cast<unsigned char*>(eax14 + 32) & 3)) {
            eax15 = reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax14 + 36)) & 1;
        }
        return eax15;
    } else {
        return 0;
    }
}

int32_t EnterCriticalSection = 0xe320;

void** fun_64941f60(void** ecx, void** a2, void** a3, void** a4);

void** fun_64942260(void** ecx, void** a2, void** a3, void** a4, void** a5) {
    int32_t esi6;
    int32_t ebx7;
    void** edi8;
    void** eax9;
    void** edx10;
    void** eax11;

    esi6 = EnterCriticalSection;
    esi6(a2);
    *reinterpret_cast<void***>(a3) = *reinterpret_cast<void***>(a3) - 1;
    ebx7 = LeaveCriticalSection;
    edi8 = *reinterpret_cast<void***>(a3);
    ebx7(a2, a2);
    if (reinterpret_cast<signed char>(edi8) < reinterpret_cast<signed char>(0)) {
        eax11 = fun_64941f60(ecx, eax9, edx10, ecx);
        esi6(a2, edx10, ecx);
        if (eax11) {
            *reinterpret_cast<void***>(a3) = *reinterpret_cast<void***>(a3) + 1;
        }
        ebx7(a2, a2, edx10, ecx);
        return eax11;
    } else {
        return 0;
    }
}

void** fun_64941a50(void** ecx, void** a2, void** a3, void** a4, void** a5) {
    void** v6;
    void** tmp32_7;
    void** edx8;
    uint32_t edx9;
    int32_t edx10;
    void** ecx11;
    void** eax12;
    int32_t eax13;

    v6 = ecx;
    EnterCriticalSection(v6);
    __asm__("cdq ");
    tmp32_7 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(a2)) + reinterpret_cast<unsigned char>(edx8));
    edx9 = edx10 + (reinterpret_cast<signed char>(edx8) >> 31) + reinterpret_cast<uint1_t>(reinterpret_cast<unsigned char>(tmp32_7) < reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(a2)));
    if (reinterpret_cast<int32_t>(edx9) < reinterpret_cast<int32_t>(0) || reinterpret_cast<int32_t>(edx9) <= reinterpret_cast<int32_t>(0) && reinterpret_cast<unsigned char>(tmp32_7) <= reinterpret_cast<unsigned char>(0x7fffffff)) {
        ecx11 = reinterpret_cast<void**>(-reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(a2)));
        *reinterpret_cast<void***>(a2) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(a2)) + reinterpret_cast<unsigned char>(edx8));
        if (!(reinterpret_cast<uint1_t>(reinterpret_cast<signed char>(ecx11) < reinterpret_cast<signed char>(0)) | reinterpret_cast<uint1_t>(ecx11 == 0))) {
            if (reinterpret_cast<signed char>(ecx11) > reinterpret_cast<signed char>(edx8)) {
                ecx11 = edx8;
            }
            v6 = ecx11;
            eax13 = reinterpret_cast<int32_t>(ReleaseSemaphore(eax12, v6, 0));
            if (!eax13) {
                *reinterpret_cast<void***>(a2) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(a2)) + -reinterpret_cast<unsigned char>(edx8));
                LeaveCriticalSection(ecx);
                return 22;
            }
        }
        LeaveCriticalSection(ecx, v6, 0);
        return 0;
    } else {
        LeaveCriticalSection(ecx, v6);
        return 34;
    }
}

void** pthread_getclean(void** ecx, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7, void** a8, void** a9, void** a10, void** a11, void** a12, void** a13) {
    void** v14;
    void** v15;
    void** v16;
    void** eax17;
    void** eax18;

    eax17 = fun_64944990(ecx, v14, v15, v16, __return_address(), a2, a3, a4, a5, a6, a7, a8);
    if (!eax17) {
        eax18 = reinterpret_cast<void**>(0);
    } else {
        eax18 = eax17 + 12;
    }
    return eax18;
}

int32_t WaitForMultipleObjects = 0xe69c;

void** fun_64941f60(void** ecx, void** a2, void** a3, void** a4) {
    void* ebp5;
    void** v6;
    void** edi7;
    void** v8;
    void** esi9;
    void** v10;
    void** ebx11;
    void** esi12;
    void** ebx13;
    void** eax14;
    void** v15;
    void** v16;
    void** v17;
    uint32_t eax18;
    void** ebx19;
    void** eax20;
    void** v21;
    void** v22;
    void** v23;
    void** v24;
    void** v25;
    void** v26;
    void** v27;
    void** v28;
    void** eax29;
    void** v30;
    void** v31;
    void** v32;
    void** v33;
    void** v34;
    void** v35;
    void** v36;
    void** eax37;
    void** v38;
    void** eax39;
    void** v40;
    int32_t eax41;
    void** v42;
    void** v43;
    void** v44;
    void** v45;
    void** v46;
    uint32_t eax47;
    void** eax48;
    void** edi49;
    void** v50;
    void** esi51;
    void** v52;
    int32_t eax53;
    void** ecx54;
    void** v55;
    void** v56;
    void** v57;
    void** v58;
    void** v59;
    void** v60;
    uint32_t eax61;
    void** v62;
    uint32_t eax63;
    void** v64;
    void** v65;
    void** v66;
    void** v67;
    void** v68;
    void** v69;
    void** v70;
    void** v71;
    void** v72;
    void** v73;
    void** v74;
    void** v75;
    void** v76;
    void** v77;
    void** v78;
    void** v79;
    void** v80;
    uint32_t eax81;
    void** v82;
    void** v83;
    void** v84;
    void** v85;
    void** v86;
    void** v87;
    void** v88;
    void** v89;
    void** v90;
    int32_t eax91;
    void** eax92;
    void** v93;
    int32_t eax94;
    void** v95;
    void** v96;
    void** v97;
    void** v98;
    void** v99;
    void** v100;
    void** v101;
    void** v102;
    void** v103;
    void** eax104;
    unsigned char al105;
    int32_t eax106;
    void** v107;
    uint32_t eax108;

    ebp5 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4);
    v6 = edi7;
    v8 = esi9;
    v10 = ebx11;
    esi12 = a2;
    ebx13 = a4;
    if (a3 == 1) {
        eax14 = WaitForSingleObject;
        v15 = ebx13;
        v16 = esi12;
        v17 = eax14;
        eax18 = reinterpret_cast<uint32_t>(eax14(v16, v15));
        if (eax18 == 0x80) {
            ebx19 = reinterpret_cast<void**>(1);
            goto addr_64942075_4;
        } else {
            if (eax18 == 0x102) {
                ebx19 = reinterpret_cast<void**>(0x8a);
                goto addr_64942075_4;
            } else {
                eax20 = reinterpret_cast<void**>(~(eax18 - (eax18 + reinterpret_cast<uint1_t>(eax18 < eax18 + reinterpret_cast<uint1_t>(eax18 < 1)))) & 22);
                goto addr_64942045_8;
            }
        }
    }
    v21 = esi12;
    eax29 = pthread_self(ecx, v22, v23, v24, v25, v26, v27, v28);
    eax37 = pthread_getevent(ecx, eax29, v30, v31, v32, v33, v34, v35, v36);
    v38 = eax37;
    if (!eax37) {
        if (ebx13 == 0xffffffff) {
            eax39 = WaitForSingleObject;
            v17 = eax39;
            do {
                v15 = reinterpret_cast<void**>(40);
                v16 = esi12;
                v40 = reinterpret_cast<void**>(0x6494220e);
                eax41 = reinterpret_cast<int32_t>(v17(v16, 40));
                if (eax41 == 0x80) 
                    break;
                if (eax41 != 0x102) 
                    goto addr_64942221_14;
                eax47 = fun_649457c0(ecx, v42, 0x6494220e, v16, 40, v43, v44, v45, v46);
            } while (!eax47);
            goto addr_649421de_16;
        } else {
            eax48 = WaitForSingleObject;
            edi49 = reinterpret_cast<void**>(20);
            v50 = eax48;
            esi51 = esi12;
            do {
                if (reinterpret_cast<unsigned char>(edi49) > reinterpret_cast<unsigned char>(ebx13)) {
                    edi49 = ebx13;
                }
                v52 = reinterpret_cast<void**>(0x649420ef);
                eax53 = reinterpret_cast<int32_t>(v50(esi51, edi49));
                if (eax53 == 0x80) {
                    ecx54 = reinterpret_cast<void**>(1);
                } else {
                    if (eax53 == 0x102) {
                        ecx54 = reinterpret_cast<void**>(0x8a);
                    } else {
                        if (!eax53) 
                            goto addr_64942171_25;
                        ecx54 = reinterpret_cast<void**>(22);
                    }
                }
                ebx13 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(ebx13) - reinterpret_cast<unsigned char>(edi49));
                if (!ebx13) 
                    goto addr_64942115_28;
                v55 = ecx54;
                eax61 = fun_649457c0(ecx54, v56, 0x649420ef, esi51, edi49, v57, v58, v59, v60);
                ecx54 = v55;
                if (eax61) 
                    goto addr_6494205d_30;
            } while (ecx54 == 0x8a);
            goto addr_6494216f_32;
        }
    } else {
        while (v62 = ebx13, v15 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(ebp5) + 0xffffffe0), v16 = reinterpret_cast<void**>(2), v40 = reinterpret_cast<void**>(0x64941fb4), eax63 = reinterpret_cast<uint32_t>(WaitForMultipleObjects(2, v15, 0, v62)), eax63 == 1) {
            v64 = v38;
            ResetEvent(v64);
            if (!reinterpret_cast<int1_t>(a3 == 2)) 
                goto addr_649421e8_35;
            pthread_testcancel(ecx, 0x649420ad, v64, v65, v66, 0x64941fb4, 2, v15, 0, v62, v67, v68, v69, v70, v71, v72, v21, v38, v73, v74, v75);
        }
        if (eax63 < 1) 
            goto addr_64942098_38; else 
            goto addr_64941fc6_39;
    }
    ebx19 = reinterpret_cast<void**>(1);
    goto addr_64942230_41;
    addr_64942221_14:
    eax20 = reinterpret_cast<void**>(0);
    ebx19 = reinterpret_cast<void**>(22);
    if (!eax41) {
        addr_64942045_8:
        return eax20;
    } else {
        addr_64942230_41:
        eax81 = fun_649457c0(ecx, v76, 0x6494220e, v16, 40, v77, v78, v79, v80);
        if (eax81) {
            addr_649421de_16:
            if (a3 == 2) {
                addr_6494205d_30:
                return 22;
            } else {
                addr_649421e8_35:
                pthread_testcancel(ecx, v82, v40, v16, v15, 0, v62, v83, v84, v85, v17, v86, v87, v21, v38, v88, v89, v90, v10, v8, v6);
                eax20 = reinterpret_cast<void**>(22);
                goto addr_64942045_8;
            }
        } else {
            eax20 = reinterpret_cast<void**>(22);
            if (!reinterpret_cast<int1_t>(ebx19 == 22)) {
                addr_64942075_4:
                eax91 = reinterpret_cast<int32_t>(v17(esi12, 0, v16, v15));
                if (eax91) {
                    addr_6494200b_43:
                    eax92 = ebx19;
                } else {
                    addr_6494208e_44:
                    return 0;
                }
            } else {
                goto addr_64942045_8;
            }
        }
    }
    addr_6494200d_46:
    return eax92;
    addr_64942115_28:
    if (reinterpret_cast<int1_t>(ecx54 == 0x8a)) {
        v55 = ecx54;
        v52 = reinterpret_cast<void**>(0);
        v93 = esi51;
        eax94 = reinterpret_cast<int32_t>(v50(v93, 0, esi51, edi49));
        ecx54 = v55;
        if (!eax94) 
            goto addr_6494208e_44; else 
            goto addr_6494213c_48;
    }
    addr_64942173_49:
    if (ecx54) {
        addr_6494213c_48:
        if (!reinterpret_cast<int1_t>(a3 == 2)) {
            pthread_testcancel(ecx54, v93, v52, esi51, edi49, v95, v96, v97, v98, v55, ecx54, v99, v100, v21, v38, v101, v102, v103, v10, v8, v6);
            eax20 = ecx54;
            goto addr_64942045_8;
        } else {
            eax104 = ecx54;
        }
    } else {
        eax104 = ecx54;
    }
    return eax104;
    addr_6494216f_32:
    goto addr_64942115_28;
    addr_64942171_25:
    ecx54 = reinterpret_cast<void**>(0);
    goto addr_64942173_49;
    addr_64942098_38:
    eax92 = reinterpret_cast<void**>(0);
    goto addr_6494200d_46;
    addr_64941fc6_39:
    if (eax63 == 0x80) {
        ebx19 = reinterpret_cast<void**>(1);
    } else {
        if (eax63 != 0x102) {
            ebx19 = reinterpret_cast<void**>(22);
            al105 = reinterpret_cast<uint1_t>(!reinterpret_cast<int1_t>(a3 == 2));
            goto addr_64942007_57;
        } else {
            ebx19 = reinterpret_cast<void**>(0x8a);
        }
    }
    v64 = v21;
    eax106 = reinterpret_cast<int32_t>(WaitForSingleObject(v64, 0));
    if (!eax106) 
        goto addr_6494208e_44;
    al105 = reinterpret_cast<uint1_t>(!reinterpret_cast<int1_t>(a3 == 2));
    addr_64942007_57:
    if (!al105) 
        goto addr_6494200b_43;
    eax108 = fun_649457c0(ecx, v64, 0, v107, 0x64941fb4, 2, v15, 0, v62);
    eax20 = ebx19;
    if (!eax108) 
        goto addr_64942045_8; else 
        goto addr_6494205d_30;
}

int32_t printf = 0xe7c2;

void fun_64948f44(int32_t a1, void** a2, int32_t a3, void** a4, void** a5, void** a6, void** a7, void** a8, void** a9, void** a10, void** a11) {
    goto printf;
}

struct s13 {
    int32_t f0;
    int32_t f4;
};

int32_t fun_64942c60(void** a1) {
    void** v2;
    void** v3;
    void** v4;
    void** v5;
    struct s13* eax6;
    struct s9* eax7;
    void** v8;
    void** v9;
    void** v10;
    int32_t eax11;
    void** v12;
    void** v13;
    void** v14;
    void** v15;
    int32_t edx16;

    pthread_spin_lock(0x64949018, v2, v3, v4, v5);
    if (eax6->f0 != 0xbab1f00d || reinterpret_cast<uint1_t>(eax6->f4 < 0) | reinterpret_cast<uint1_t>(eax6->f4 == 0)) {
        eax7 = _iob;
        fun_64948f2c(&eax7->f64, "Assertion failed: (%s), file %s, line %d\n", "(m_->valid == LIFE_MUTEX) && (m_->busy > 0)", "../../src/winpthreads-v3/src/mutex.c", 45, v8, v9, v10);
        fun_64948f34(1);
        g64949010 = reinterpret_cast<int32_t>("Assertion failed: (%s), file %s, line %d\n");
        goto 1;
    } else {
        eax11 = eax6->f4;
        eax6->f4 = eax11 - 1;
        pthread_spin_unlock(0x64949018, v12, v13, v14, v15);
        return edx16;
    }
}

struct s14 {
    int32_t f0;
    int32_t f4;
};

void** fun_64942f70(void** ecx, void** a2);

void** fun_64943000(void** ecx, void** a2, void** a3, void** a4) {
    void** v5;
    void** v6;
    void** v7;
    void** v8;
    struct s14** eax9;
    struct s14* edx10;
    void** v11;
    void** v12;
    void** v13;
    void** v14;
    void** v15;
    void** v16;
    void** v17;
    void** v18;
    void** eax19;
    void** v20;
    void** v21;
    void** v22;
    void** v23;
    void** v24;
    void** v25;
    void** v26;
    void** v27;
    void** eax28;
    void** ebx29;
    void** v30;
    void** v31;
    void** v32;
    void** v33;

    pthread_spin_lock(0x64949018, v5, v6, v7, v8);
    if (!eax9 || (edx10 = *eax9, edx10 == 0)) {
        pthread_spin_unlock(0x64949018, v11, v12, v13, v14);
        return 22;
    }
    if (reinterpret_cast<uint32_t>(reinterpret_cast<int32_t>(edx10) + 3) <= 2) {
        pthread_spin_unlock(0x64949018, v15, v16, v17, v18);
        eax19 = fun_64942f70(ecx, 0x64949018);
        pthread_spin_lock(0x64949018, v20, v21, v22, v23);
        if (reinterpret_cast<unsigned char>(eax19) & 0xffffffef) {
            pthread_spin_unlock(0x64949018, v24, v25, v26, v27);
            eax28 = eax19;
        } else {
            edx10 = *eax9;
            if (!edx10) 
                goto addr_6494302d_7;
            goto addr_64943025_9;
        }
    } else {
        addr_64943025_9:
        if (edx10->f0 == 0xbab1f00d) {
            ebx29 = reinterpret_cast<void**>(0);
            edx10->f4 = edx10->f4 + 1;
            goto addr_64943032_11;
        } else {
            addr_6494302d_7:
            ebx29 = reinterpret_cast<void**>(22);
            goto addr_64943032_11;
        }
    }
    addr_64943040_12:
    return eax28;
    addr_64943032_11:
    pthread_spin_unlock(0x64949018, v30, v31, v32, v33);
    eax28 = ebx29;
    goto addr_64943040_12;
}

int32_t InitializeCriticalSection = 0xe49c;

void** pthread_cond_init(void** ecx, void** a2, void** a3) {
    void** eax4;
    void** eax5;
    int32_t edi6;
    void** eax7;
    void** eax8;
    void** edx9;
    int32_t edi10;
    void** v11;
    uint32_t v12;
    void** v13;
    void** v14;

    eax4 = reinterpret_cast<void**>(22);
    if (!a2 || (a3 && (*reinterpret_cast<signed char*>(&eax4) = 40, *reinterpret_cast<void***>(a3) == 1) || (eax5 = fun_64948f3c(1, 0x6c), eax4 = reinterpret_cast<void**>(12), eax5 == 0))) {
        addr_64941ed0_2:
        return eax4;
    } else {
        edi6 = CreateSemaphoreA;
        *reinterpret_cast<void***>(eax5) = reinterpret_cast<void**>(0xc0deadbf);
        *reinterpret_cast<void***>(eax5 + 4) = reinterpret_cast<void**>(0);
        *reinterpret_cast<void***>(eax5 + 8) = reinterpret_cast<void**>(0);
        *reinterpret_cast<void***>(eax5 + 16) = reinterpret_cast<void**>(0);
        *reinterpret_cast<void***>(eax5 + 12) = reinterpret_cast<void**>(0);
        eax7 = reinterpret_cast<void**>(edi6(0, 0, 0x7fffffff, 0));
        *reinterpret_cast<void***>(eax5 + 100) = eax7;
        eax8 = reinterpret_cast<void**>(edi6(0, 0, 0x7fffffff, 0, 0, 0, 0x7fffffff, 0));
        edx9 = *reinterpret_cast<void***>(eax5 + 100);
        *reinterpret_cast<void***>(eax5 + 0x68) = eax8;
        if (!edx9) {
            addr_64941ee7_4:
            if (eax8) {
                CloseHandle(eax8);
            }
        } else {
            if (!eax8) {
                CloseHandle(edx9);
                eax8 = *reinterpret_cast<void***>(eax5 + 0x68);
                goto addr_64941ee7_4;
            } else {
                edi10 = InitializeCriticalSection;
                v11 = eax5 + 20;
                edi10(v11);
                v12 = reinterpret_cast<uint32_t>(eax5 + 72);
                edi10(v12, v11);
                edi10(eax5 + 44, v12, v11);
                eax4 = reinterpret_cast<void**>(0);
                *reinterpret_cast<uint32_t*>(eax5 + 68) = 0;
                *reinterpret_cast<void***>(eax5 + 96) = reinterpret_cast<void**>(1);
                *reinterpret_cast<void***>(eax5) = reinterpret_cast<void**>(0xc0bab1fd);
                *reinterpret_cast<void***>(a2) = eax5;
                goto addr_64941ed0_2;
            }
        }
    }
    fun_64948f1c(ecx, eax5, v13, v14, 0x64941e7e, 0, 0, 0x7fffffff, 0, 0, 0, 0x7fffffff, 0);
    eax4 = reinterpret_cast<void**>(11);
    *reinterpret_cast<void***>(a2) = reinterpret_cast<void**>(0);
    goto addr_64941ed0_2;
}

void** fun_64944170();

void** pthread_spin_lock(void** a1, void** a2, void** a3, void** a4, void** a5) {
    void** eax6;
    void** ebx7;
    void*** v8;
    void** eax9;

    eax6 = reinterpret_cast<void**>(22);
    if (a1 && (*reinterpret_cast<void***>(a1) && (eax6 = fun_64944170(), reinterpret_cast<signed char>(eax6) >= reinterpret_cast<signed char>(0)))) {
        ebx7 = *reinterpret_cast<void***>(a1);
        v8 = reinterpret_cast<void***>(ebx7 + 8);
        EnterCriticalSection(v8);
        eax9 = reinterpret_cast<void**>(GetCurrentThreadId(0x64944272, v8));
        *reinterpret_cast<void***>(ebx7 + 4) = *reinterpret_cast<void***>(ebx7 + 4) + 1;
        *reinterpret_cast<void***>(ebx7) = eax9;
        eax6 = reinterpret_cast<void**>(0);
    }
    return eax6;
}

struct s15 {
    signed char[20] pad20;
    void** f20;
};

struct s16 {
    signed char[24] pad24;
    void** f24;
};

void** fun_64943610(void** ecx, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7, void** a8, void** a9, void** a10, void** a11, void** a12, void** a13, void** a14, void** a15, void** a16, void** a17) {
    void** esi18;
    struct s15* eax19;
    void** v20;
    void** v21;
    void** v22;
    void** v23;
    void** ebx24;
    void** esi25;
    void** eax26;
    struct s16* eax27;
    void** v28;
    void** v29;
    void** v30;
    void** v31;
    void** eax32;
    void** v33;
    void** v34;
    void** v35;
    void** v36;

    esi18 = reinterpret_cast<void**>(&eax19->f20);
    eax26 = pthread_mutex_lock(ecx, esi18, v20, v21, v22, v23, ebx24, esi25, __return_address(), a2, a3, a4, a5);
    if (eax26 || (eax32 = pthread_mutex_lock(ecx, &eax27->f24, v28, v29, v30, v31, ebx24, esi25, __return_address(), a2, a3, a4, a5), eax26 = reinterpret_cast<void**>(0), eax32 == 0)) {
        return eax26;
    } else {
        pthread_mutex_unlock(ecx, esi18, v33, v34, v35, v36, ebx24, esi25, __return_address(), a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15, a16, a17);
        return eax32;
    }
}

struct s17 {
    signed char[24] pad24;
    void** f24;
};

struct s18 {
    signed char[20] pad20;
    void** f20;
};

void** fun_64943660(void** ecx, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7, void** a8, void** a9, void** a10, void** a11, void** a12, void** a13, void** a14, void** a15, void** a16, void** a17) {
    struct s17* eax18;
    void** v19;
    void** v20;
    void** v21;
    void** ebx22;
    void** esi23;
    void** edi24;
    void** eax25;
    struct s18* eax26;
    void** v27;
    void** v28;
    void** v29;
    void** eax30;
    uint32_t edx31;

    eax25 = pthread_mutex_unlock(ecx, &eax18->f24, v19, v20, v21, ebx22, esi23, edi24, __return_address(), a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15, a16, a17);
    eax30 = pthread_mutex_unlock(ecx, &eax26->f20, v27, v28, v29, ebx22, esi23, edi24, __return_address(), a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15, a16, a17);
    if (!eax30 || !edx31) {
        if (edx31 | reinterpret_cast<unsigned char>(eax25)) {
            eax30 = eax25;
        }
        return eax30;
    } else {
        return eax30;
    }
}

int32_t TryEnterCriticalSection = 0xe644;

void** DeleteCriticalSection = reinterpret_cast<void**>(0xf6);

void** pthread_cond_destroy(void*** a1) {
    void** esi2;
    void** ebx3;
    void** v4;
    void** v5;
    void** v6;
    void** v7;
    void** v8;
    void** v9;
    void** v10;
    void** v11;
    void** eax12;
    void** edi13;
    void** v14;
    void** eax15;
    void** eax16;
    int32_t eax17;
    int32_t edx18;
    void** v19;
    void** v20;
    void** eax21;
    void** v22;
    void** v23;
    void** eax24;

    esi2 = reinterpret_cast<void**>(22);
    if (a1 && (ebx3 = *a1, !!ebx3)) {
        if (ebx3 == 0xffffffff) {
            *reinterpret_cast<int16_t*>(&esi2) = 16;
            pthread_spin_lock(0x64949004, v4, v5, v6, v7);
            if (*a1 == 0xffffffff) {
                *a1 = reinterpret_cast<void**>(0);
                *reinterpret_cast<int16_t*>(&esi2) = 0;
            }
            pthread_spin_unlock(0x64949004, v8, v9, v10, v11);
        } else {
            eax12 = ebx3 + 96;
            edi13 = ebx3 + 72;
            eax15 = fun_64942260(0xffffffff, edi13, eax12, v14, eax12);
            esi2 = eax15;
            if (!eax15) {
                eax16 = ebx3 + 20;
                eax17 = reinterpret_cast<int32_t>(TryEnterCriticalSection(0xffffffff, eax16, eax12));
                if (!eax17) {
                    *reinterpret_cast<int16_t*>(&esi2) = 16;
                    fun_64941a50(edi13, eax12, eax16, eax12, eax16);
                } else {
                    if (reinterpret_cast<signed char>(*reinterpret_cast<void***>(ebx3 + 8)) <= reinterpret_cast<signed char>(*reinterpret_cast<void***>(ebx3 + 16))) {
                        *a1 = reinterpret_cast<void**>(0);
                        fun_64941a50(edi13, eax12, eax16, eax12, eax16);
                        edx18 = CloseHandle;
                        v19 = *reinterpret_cast<void***>(ebx3 + 100);
                        edx18(edi13, v19, eax16, eax12);
                        v20 = *reinterpret_cast<void***>(ebx3 + 0x68);
                        edx18(edi13, v20, v19, eax16, eax12);
                        LeaveCriticalSection(edi13, eax16, v20, v19, eax16, eax12);
                        eax21 = DeleteCriticalSection;
                        eax21(edi13, eax16, eax16, v20, v19, eax16, eax12);
                        eax21(edi13, edi13, eax16, eax16, v20, v19, eax16, eax12);
                        v22 = ebx3 + 44;
                        eax21(edi13, v22, edi13, eax16, eax16, v20, v19, eax16, eax12);
                        *reinterpret_cast<void***>(ebx3) = reinterpret_cast<void**>(0xc0deadbf);
                        fun_64948f1c(edi13, ebx3, v22, edi13, eax16, eax16, v20, v19, eax16, eax12, eax16, eax21, v23);
                    } else {
                        eax24 = fun_64941a50(edi13, eax12, eax16, eax12, eax16);
                        esi2 = eax24;
                        if (!eax24) {
                            esi2 = reinterpret_cast<void**>(16);
                        }
                        LeaveCriticalSection(edi13, eax16, eax16, eax12);
                    }
                }
            }
        }
    }
    return esi2;
}

struct s19 {
    int32_t f0;
    int32_t f4;
};

int32_t g6494b010;

void** fun_649436c0(void** a1, void** a2, void** a3) {
    void** v4;
    void** v5;
    void** v6;
    void** v7;
    struct s19** eax8;
    struct s9* eax9;
    void** v10;
    void** v11;
    void** v12;
    void** v13;
    void** v14;
    void** v15;
    void** v16;
    void** edx17;

    pthread_spin_lock(0x64949020, v4, v5, v6, v7);
    if ((*eax8)->f0 != 0xbab1f0ed || reinterpret_cast<uint1_t>((*eax8)->f4 < 0) | reinterpret_cast<uint1_t>((*eax8)->f4 == 0)) {
        eax9 = _iob;
        fun_64948f2c(&eax9->f64, "Assertion failed: (%s), file %s, line %d\n", "(((rwlock_t *)*rwl)->valid == LIFE_RWLOCK) && (((rwlock_t *)*rwl)->busy > 0)", "../../src/winpthreads-v3/src/rwlock.c", 40, v10, v11, v12);
        fun_64948f34(1);
        g6494b010 = reinterpret_cast<int32_t>("Assertion failed: (%s), file %s, line %d\n");
        goto 1;
    } else {
        (*eax8)->f4 = (*eax8)->f4 - 1;
        pthread_spin_unlock(0x64949020, v13, v14, v15, v16);
        return edx17;
    }
}

void** fun_64942be0(void** ecx);

void** pthread_mutex_trylock(void** ecx, void** a2) {
    void** v3;
    void** v4;
    void** ebx5;
    void** eax6;
    void** eax7;
    void** eax8;
    void** v9;
    void** v10;
    void** v11;
    void** v12;
    struct s9* eax13;
    void** v14;
    void** v15;
    void** eax16;
    void** v17;
    void** v18;
    void** v19;
    void** v20;

    eax6 = fun_64943000(ecx, v3, v4, ebx5);
    if (eax6) {
        return eax6;
    }
    eax7 = fun_64942be0(ecx);
    eax8 = *reinterpret_cast<void***>(a2);
    pthread_spin_lock(0x64949018, v9, v10, v11, v12);
    if (!reinterpret_cast<int1_t>(*reinterpret_cast<void***>(eax8) == 0xbab1f00d)) 
        goto addr_64942ca1_5;
    if (!(reinterpret_cast<uint1_t>(reinterpret_cast<signed char>(*reinterpret_cast<void***>(eax8 + 4)) < reinterpret_cast<signed char>(0)) | reinterpret_cast<uint1_t>(*reinterpret_cast<void***>(eax8 + 4) == 0))) 
        goto addr_64942c84_7;
    addr_64942ca1_5:
    eax13 = _iob;
    fun_64948f2c(&eax13->f64, "Assertion failed: (%s), file %s, line %d\n", "(m_->valid == LIFE_MUTEX) && (m_->busy > 0)", "../../src/winpthreads-v3/src/mutex.c", 45, v14, v15, 0x6494325f);
    fun_64948f34(1);
    g64949010 = reinterpret_cast<int32_t>("Assertion failed: (%s), file %s, line %d\n");
    goto 1;
    addr_64942c84_7:
    eax16 = *reinterpret_cast<void***>(eax8 + 4);
    *reinterpret_cast<void***>(eax8 + 4) = eax16 - 1;
    pthread_spin_unlock(0x64949018, v17, v18, v19, v20);
    return eax7;
}

void** fun_64941f10(void** ecx);

void fun_649427f0(void** ecx, void** a2, void** a3, void** a4, void** a5);

void** pthread_cond_wait(void** ecx, void** a2, void** a3) {
    void** eax4;
    void*** ebp5;
    void** ebx6;
    void** edi7;
    void** esi8;
    void** v9;
    void** v10;
    void** eax11;
    void** v12;
    void** ecx13;
    void** v14;
    void** v15;
    void** v16;
    void** v17;
    void** eax18;
    void** v19;
    void** v20;
    void** v21;
    void** eax22;
    void** v23;
    void** v24;
    void** v25;
    void** v26;
    void** v27;
    void** v28;
    void** ebx29;
    void** esi30;
    void** edi31;
    void** ebp32;
    void** eax33;
    void** v34;
    void** eax35;
    void** v36;
    void** v37;
    void** eax38;

    eax4 = reinterpret_cast<void**>(22);
    ebp5 = reinterpret_cast<void***>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4);
    if (!a2) 
        goto addr_649426e8_2;
    ebx6 = *reinterpret_cast<void***>(a2);
    if (!ebx6) 
        goto addr_649426e8_2;
    if (ebx6 == 0xffffffff) {
        eax4 = fun_64941f10(ecx);
        if (reinterpret_cast<unsigned char>(eax4) & 0xffffffef) {
            addr_649426e8_2:
            return eax4;
        } else {
            ebx6 = *reinterpret_cast<void***>(a2);
        }
    } else {
        if (*reinterpret_cast<void***>(ebx6) != 0xc0bab1fd) 
            goto addr_649426e8_2;
    }
    edi7 = ebx6 + 96;
    esi8 = ebx6 + 72;
    eax4 = fun_64942260(0xffffffff, esi8, edi7, v9, v10);
    if (!eax4 && (eax11 = ebx6 + 20, EnterCriticalSection(0xffffffff, eax11, edi7), *reinterpret_cast<void***>(ebx6 + 8) = *reinterpret_cast<void***>(ebx6 + 8) + 1, v12 = eax11, LeaveCriticalSection(0xffffffff, v12, eax11, edi7), ecx13 = esi8, eax4 = fun_64941a50(ecx13, edi7, v12, eax11, edi7), !eax4)) {
        v14 = reinterpret_cast<void**>(ebp5 + 0xffffffcc);
        v15 = reinterpret_cast<void**>(ebp5 + 0xffffffd0);
        eax18 = pthread_getclean(ecx13, edi7, v12, eax11, edi7, v16, eax11, v17, eax4, ebx6, a3, v14, fun_649427f0);
        v19 = *reinterpret_cast<void***>(eax18);
        eax22 = pthread_getclean(ecx13, static_cast<uint32_t>(reinterpret_cast<unsigned char>(edi7)), v12, eax11, edi7, v20, eax11, v21, eax4, ebx6, a3, v14, fun_649427f0);
        *reinterpret_cast<void***>(eax22) = reinterpret_cast<void**>(ebp5 + 0xffffffdc);
        v23 = a3;
        eax33 = pthread_mutex_unlock(ecx13, v23, v12, eax11, edi7, v24, eax11, v25, eax4, ebx6, a3, v14, fun_649427f0, v15, v19, v26, v27, v28, ebx29, esi30, edi31, ebp32, __return_address(), a2, a3);
        v34 = eax33;
        if (!eax33) {
            v12 = ebx6 + 68;
            ecx13 = reinterpret_cast<void**>(0xffffffff);
            v23 = ebx6 + 44;
            eax35 = fun_64942260(0xffffffff, v23, v12, eax11, edi7);
            v34 = eax35;
        }
        eax38 = pthread_getclean(ecx13, v23, v12, eax11, edi7, v36, eax11, v37, v34, ebx6, a3, v14, fun_649427f0);
        *reinterpret_cast<void***>(eax38) = v19;
        fun_649427f0(ecx13, v15, v12, eax11, edi7);
        eax4 = v34;
        goto addr_649426e8_2;
    }
}

void** fun_64943900(void** ecx);

struct s20 {
    int32_t f0;
    int32_t f4;
};

void** fun_64943960(void** ecx) {
    int32_t* eax2;
    void** eax3;
    void** v4;
    void** v5;
    void** v6;
    void** v7;
    struct s20** eax8;
    void** ebx9;
    void** v10;
    void** v11;
    void** v12;
    void** v13;

    if (*eax2 == -1) {
        eax3 = fun_64943900(ecx);
        if (reinterpret_cast<unsigned char>(eax3) & 0xffffffef) {
            addr_64943998_3:
            return eax3;
        }
    }
    pthread_spin_lock(0x64949020, v4, v5, v6, v7);
    if (!*eax8) {
        ebx9 = reinterpret_cast<void**>(22);
    } else {
        ebx9 = reinterpret_cast<void**>(22);
        if ((*eax8)->f0 == 0xbab1f0ed) {
            (*eax8)->f4 = (*eax8)->f4 + 1;
            *reinterpret_cast<signed char*>(&ebx9) = 0;
        }
    }
    pthread_spin_unlock(0x64949020, v10, v11, v12, v13);
    eax3 = ebx9;
    goto addr_64943998_3;
}

void** pthread_mutex_timedlock(void** ecx, void** a2, void** a3) {
    void** edx4;
    void** v5;
    void** ebx6;
    void** eax7;
    void** ebx8;
    void** v9;
    void** v10;
    void** v11;
    void** eax12;
    void** eax13;
    void** edx14;
    void** v15;
    void** v16;
    void** v17;
    void** eax18;
    void** ebx19;
    void** ebp20;
    void** eax21;
    void** eax22;
    void** ebp23;
    void** v24;
    void** eax25;
    void** v26;
    void** v27;
    struct s9* eax28;
    void** v29;
    void** v30;
    void** eax31;
    void** v32;
    void** edx33;
    void** edi34;
    void** eax35;
    void** v36;
    void** eax37;
    void** eax38;

    edx4 = reinterpret_cast<void**>(0xffffffff);
    v5 = ebx6;
    if (!a3) {
        addr_649431f4_2:
        eax7 = a2;
        ebx8 = v5;
    } else {
        eax12 = fun_64943000(ecx, v9, v10, v11);
        if (eax12) {
            return eax12;
        }
        eax13 = fun_64942be0(ecx);
        edx14 = eax13;
        if (!reinterpret_cast<int1_t>(eax13 == 16)) 
            goto addr_64943225_6; else 
            goto addr_649431ae_7;
    }
    addr_649430b0_8:
    v5 = ebx8;
    eax18 = fun_64943000(ecx, v15, v16, v17);
    if (eax18) 
        goto addr_64943103_9;
    ebx19 = *reinterpret_cast<void***>(eax7);
    if (!*reinterpret_cast<void***>(ebx19 + 8)) {
        goto addr_649430d6_12;
    }
    ebp20 = *reinterpret_cast<void***>(ebx19 + 20);
    if (ebp20) {
        eax21 = reinterpret_cast<void**>(GetCurrentThreadId(v15));
        if (ebp20 == eax21) {
            edx14 = reinterpret_cast<void**>(36);
            if (!reinterpret_cast<int1_t>(*reinterpret_cast<void***>(ebx19 + 8) == 2)) {
                addr_64943126_16:
                eax22 = *reinterpret_cast<void***>(eax7);
            } else {
                *reinterpret_cast<void***>(ebx19 + 12) = *reinterpret_cast<void***>(ebx19 + 12) + 1;
                goto addr_64943124_18;
            }
        } else {
            goto addr_649430d6_12;
        }
    } else {
        addr_649430d6_12:
        ebp23 = *reinterpret_cast<void***>(ebx19 + 24);
        fun_64942c60(v15);
        v24 = edx4;
        eax18 = fun_64941f60(ecx, ebp23, 1, v24);
        if (eax18 || (eax18 = fun_64943000(ecx, ebp23, 1, v24), !!eax18)) {
            addr_64943103_9:
            return eax18;
        } else {
            *reinterpret_cast<void***>(ebx19 + 12) = reinterpret_cast<void**>(1);
            eax25 = reinterpret_cast<void**>(GetCurrentThreadId(ebp23, 1, v24));
            *reinterpret_cast<void***>(ebx19 + 20) = eax25;
            goto addr_64943124_18;
        }
    }
    addr_64942c60_21:
    pthread_spin_lock(0x64949018, 1, v24, v26, v27);
    if (!reinterpret_cast<int1_t>(*reinterpret_cast<void***>(eax22) == 0xbab1f00d) || reinterpret_cast<uint1_t>(reinterpret_cast<signed char>(*reinterpret_cast<void***>(eax22 + 4)) < reinterpret_cast<signed char>(0)) | reinterpret_cast<uint1_t>(*reinterpret_cast<void***>(eax22 + 4) == 0)) {
        eax28 = _iob;
        fun_64948f2c(&eax28->f64, "Assertion failed: (%s), file %s, line %d\n", "(m_->valid == LIFE_MUTEX) && (m_->busy > 0)", "../../src/winpthreads-v3/src/mutex.c", 45, v29, v30, v5);
        fun_64948f34(1);
        g64949010 = reinterpret_cast<int32_t>("Assertion failed: (%s), file %s, line %d\n");
        goto 1;
    } else {
        eax31 = *reinterpret_cast<void***>(eax22 + 4);
        *reinterpret_cast<void***>(eax22 + 4) = eax31 - 1;
        pthread_spin_unlock(0x64949018, 1, v24, v26, v32);
        return edx14;
    }
    addr_64943124_18:
    edx14 = reinterpret_cast<void**>(0);
    goto addr_64943126_16;
    addr_64943225_6:
    eax22 = *reinterpret_cast<void***>(a2);
    goto addr_64942c60_21;
    addr_649431ae_7:
    edx33 = *reinterpret_cast<void***>(*reinterpret_cast<void***>(a2) + 8);
    if (!edx33 || ((edi34 = *reinterpret_cast<void***>(*reinterpret_cast<void***>(a2) + 20), !edi34) || (eax35 = reinterpret_cast<void**>(GetCurrentThreadId()), edi34 != eax35))) {
        eax37 = _pthread_time_in_ms(v36);
        v15 = a3;
        v26 = eax37;
        eax38 = _pthread_time_in_ms_from_timespec(v15);
        fun_64942c60(v15);
        if (reinterpret_cast<unsigned char>(edx33) > reinterpret_cast<unsigned char>(edx33) || reinterpret_cast<unsigned char>(edx33) >= reinterpret_cast<unsigned char>(edx33) && reinterpret_cast<unsigned char>(v26) > reinterpret_cast<unsigned char>(eax38)) {
            edx4 = reinterpret_cast<void**>(0);
            goto addr_649431f4_2;
        } else {
            eax7 = a2;
            edx4 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(eax38) - reinterpret_cast<unsigned char>(v26));
            ebx8 = v5;
            goto addr_649430b0_8;
        }
    } else {
        edx14 = reinterpret_cast<void**>(36);
        goto addr_64943225_6;
    }
}

void** _pthread_rel_time_in_ms(void** a1);

void** pthread_cond_timedwait(void** ecx, void** a2, void** a3, void** a4, void** a5) {
    void** eax6;
    void*** esp7;
    void** ebx8;
    void** eax9;
    uint32_t edx10;
    void** ebp11;
    void** edi12;
    void** esi13;
    void** v14;
    void** v15;
    void** v16;
    void** ecx17;
    void** v18;
    void** v19;
    void** v20;
    void** v21;
    void** v22;
    void** v23;
    void** v24;
    void** v25;
    void** eax26;
    void** v27;
    void** v28;
    void** v29;
    void** v30;
    void** eax31;
    void** v32;
    void** v33;
    void** v34;
    void** v35;
    void** v36;
    void** v37;
    void** v38;
    void** ebx39;
    void** esi40;
    void** edi41;
    void** ebp42;
    void** eax43;
    void** v44;
    void** v45;
    void** v46;
    void** eax47;
    void** v48;
    void** v49;
    void** v50;
    void** eax51;

    eax6 = reinterpret_cast<void**>(22);
    esp7 = reinterpret_cast<void***>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4 - 4 - 4 - 4 - 60);
    if (!a2) 
        goto addr_64942937_2;
    ebx8 = *reinterpret_cast<void***>(a2);
    if (!ebx8) 
        goto addr_64942937_2;
    if (ebx8 == 0xffffffff) {
        eax6 = fun_64941f10(ecx);
        esp7 = esp7 - 4 + 4;
        if (reinterpret_cast<unsigned char>(eax6) & 0xffffffef) {
            addr_64942937_2:
            return eax6;
        } else {
            ebx8 = *reinterpret_cast<void***>(a2);
        }
    } else {
        if (*reinterpret_cast<void***>(ebx8) != 0xc0bab1fd) 
            goto addr_64942937_2;
    }
    eax9 = _pthread_rel_time_in_ms(a4);
    if (edx10 > 0 || (ebp11 = eax9, reinterpret_cast<unsigned char>(eax9) > reinterpret_cast<unsigned char>(0xfffffffe))) {
        ebp11 = reinterpret_cast<void**>(0xffffffff);
    }
    edi12 = ebx8 + 96;
    esi13 = ebx8 + 72;
    v14 = edi12;
    eax6 = fun_64942260(0xffffffff, esi13, v14, v15, v16);
    esp7 = esp7 - 4 + 4 - 4 + 4;
    if (!eax6 && (*reinterpret_cast<void***>(ebx8 + 8) = *reinterpret_cast<void***>(ebx8 + 8) + 1, ecx17 = esi13, eax6 = fun_64941a50(ecx17, edi12, v14, v18, v19), esp7 = esp7 - 4 + 4, !eax6)) {
        v20 = reinterpret_cast<void**>(esp7 + 20);
        v21 = reinterpret_cast<void**>(esp7 + 24);
        eax26 = pthread_getclean(ecx17, edi12, v14, v22, v23, v24, eax6, ebx8, a3, v20, fun_649427f0, v21, v25);
        v27 = *reinterpret_cast<void***>(eax26);
        eax31 = pthread_getclean(ecx17, static_cast<uint32_t>(reinterpret_cast<unsigned char>(edi12)), v14, v28, v29, v30, eax6, ebx8, a3, v20, fun_649427f0, v21, v27);
        *reinterpret_cast<void***>(eax31) = reinterpret_cast<void**>(esp7 - 4 + 4 - 4 + 4 + 36);
        v32 = a3;
        eax43 = pthread_mutex_unlock(ecx17, v32, v14, v33, v34, v35, eax6, ebx8, a3, v20, fun_649427f0, v21, v27, v36, v37, v38, ebx39, esi40, edi41, ebp42, __return_address(), a2, a3, a4, a5);
        v44 = eax43;
        if (!eax43) {
            v14 = ebx8 + 68;
            ecx17 = ebp11;
            v32 = ebx8 + 44;
            eax47 = fun_64942260(ecx17, v32, v14, v45, v46);
            v44 = eax47;
        }
        eax51 = pthread_getclean(ecx17, v32, v14, v48, v49, v50, v44, ebx8, a3, v20, fun_649427f0, v21, v27);
        *reinterpret_cast<void***>(eax51) = v27;
        v20(ecx17, v21, v14);
        eax6 = v44;
        goto addr_64942937_2;
    }
}

int32_t SetCriticalSectionSpinCount = 0xe546;

void** pthread_spin_init(void*** a1, int32_t a2) {
    void** eax3;
    void** eax4;
    void*** edi5;

    eax3 = reinterpret_cast<void**>(22);
    if (a1 && ((*reinterpret_cast<signed char*>(&eax3) = 0x81, a2 == 0) && (eax4 = fun_64948f3c(1, 32), eax3 = reinterpret_cast<void**>(12), !!eax4))) {
        edi5 = reinterpret_cast<void***>(eax4 + 8);
        InitializeCriticalSection(edi5, 32);
        SetCriticalSectionSpinCount(edi5, 0xfa0, 32);
        eax3 = reinterpret_cast<void**>(0);
        *a1 = eax4;
    }
    return eax3;
}

int32_t g6494b014;

void fun_649440e0() {
    int32_t eax1;
    int32_t tmp32_2;

    while ((eax1 = g6494b014, !!eax1) || (tmp32_2 = g6494b014, g6494b014 = 1, !!tmp32_2)) {
        __asm__("pause ");
    }
    return;
}

void** fun_64944170() {
    int32_t* eax1;
    void*** eax2;
    void** eax3;

    if (*eax1 == -1) {
        fun_649440e0();
        if (*eax2 != 0xffffffff || (eax3 = pthread_spin_init(eax2, 0), reinterpret_cast<signed char>(eax3) >= reinterpret_cast<signed char>(0))) {
            g6494b014 = 0;
            eax3 = reinterpret_cast<void**>(0);
        } else {
            g6494b014 = 0;
        }
        return eax3;
    } else {
        return 0;
    }
}

int32_t memmove = 0xe7ae;

void fun_64948f54(void** a1, void** a2, void** a3) {
    goto memmove;
}

void** g6494b030;

void** g6494b02c;

void** g6494b034;

void** fun_64948f5c(void** a1, void** a2);

void** g6494b028;

void** fun_649444f0(void** a1, void** a2);

void** fun_64944570(void** a1, void** a2) {
    void** edi3;
    void** eax4;
    int32_t eax5;
    void** esi6;
    void** eax7;
    void** ebx8;
    void** ebx9;
    void** v10;
    void** eax11;
    void** v12;
    void** eax13;
    void** eax14;
    void** edx15;
    void** edx16;
    void** ebp17;
    void** eax18;
    void** eax19;
    void* edx20;
    void* v21;
    void** edx22;

    edi3 = eax4;
    if (!eax5) 
        goto addr_6494469f_2;
    esi6 = g6494b030;
    eax7 = g6494b02c;
    ebx8 = g6494b034;
    if (reinterpret_cast<unsigned char>(esi6) >= reinterpret_cast<unsigned char>(eax7)) {
        if (esi6) {
            ebx9 = eax7 + 16;
            v10 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(ebx9) * 8);
            eax11 = g6494b034;
            v12 = eax11;
            eax13 = fun_64948f5c(v12, v10);
            if (!eax13) {
                addr_6494469f_2:
                return 0;
            } else {
                g6494b02c = ebx9;
                ebx8 = eax13;
                g6494b034 = eax13;
            }
        } else {
            v12 = reinterpret_cast<void**>(0x80);
            eax14 = fun_64948f0c(0x80);
            if (!eax14) 
                goto addr_6494469f_2;
            g6494b02c = reinterpret_cast<void**>(16);
            ebx8 = eax14;
            g6494b034 = eax14;
        }
    }
    do {
        edx15 = g6494b028;
        while (edx16 = edx15 + 1, g6494b028 = edx16, !(reinterpret_cast<unsigned char>(edx16) & 0x40000000)) {
            if (edx16) 
                goto addr_649446bc_12;
            edx15 = reinterpret_cast<void**>(0);
        }
        g6494b028 = reinterpret_cast<void**>(1);
        ebp17 = reinterpret_cast<void**>(1);
        continue;
        addr_649446bc_12:
        ebp17 = edx16;
        eax18 = fun_649444f0(v12, v10);
    } while (eax18);
    eax19 = esi6;
    if (esi6) {
        do {
            if (reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(reinterpret_cast<uint32_t>(ebx8 + reinterpret_cast<unsigned char>(eax19) * 8) - 4)) <= reinterpret_cast<unsigned char>(ebp17)) 
                break;
            --eax19;
        } while (eax19);
        goto addr_6494462b_19;
    } else {
        addr_64944608_20:
        *reinterpret_cast<void***>(ebx8 + 4) = ebp17;
        *reinterpret_cast<void***>(ebx8) = edi3;
        g6494b030 = esi6 + 1;
        return ebp17;
    }
    if (esi6 != eax19) {
        edx20 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(eax19) * 8);
        v21 = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(edx20) + 8);
    } else {
        ebx8 = ebx8 + reinterpret_cast<unsigned char>(esi6) * 8;
        goto addr_64944608_20;
    }
    addr_64944635_24:
    edx22 = reinterpret_cast<void**>(reinterpret_cast<uint32_t>(edx20) + reinterpret_cast<unsigned char>(ebx8));
    fun_64948f54(reinterpret_cast<uint32_t>(v21) + reinterpret_cast<unsigned char>(ebx8), edx22, reinterpret_cast<unsigned char>(esi6) - reinterpret_cast<unsigned char>(eax19) << 3);
    ebx8 = edx22;
    goto addr_64944608_20;
    addr_6494462b_19:
    v21 = reinterpret_cast<void*>(8);
    edx20 = reinterpret_cast<void*>(0);
    goto addr_64944635_24;
}

void** fun_64944350(void** ecx);

void** g6494b048;

void pthread_tls_init(void** a1);

void** fun_64944400(void** ecx, void** a2, void** a3, void** a4, void** a5);

int32_t fun_64944910(void** ecx, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7, void** a8, void** a9, void** a10, void** a11, void** a12, void** a13, void** a14, void** a15, void** a16, void** a17) {
    void** eax18;
    void** esi19;
    void** v20;
    void** v21;
    void** v22;
    void** v23;
    void** ebx24;
    void** esi25;
    void** edx26;
    struct s9* eax27;
    void** v28;
    void** v29;
    void** v30;

    eax18 = fun_64944350(ecx);
    esi19 = eax18 + 4;
    pthread_mutex_lock(ecx, esi19, v20, v21, v22, v23, ebx24, esi25, __return_address(), a2, a3, a4, a5);
    edx26 = g6494b048;
    if (!edx26) {
        pthread_tls_init(esi19);
        g6494b048 = reinterpret_cast<void**>(1);
    } else {
        if (edx26 != 1) {
            eax27 = _iob;
            v28 = edx26;
            fun_64948f2c(&eax27->f64, " once %p is %d\n", 0x6494b048, v28, v29, ebx24, esi25, __return_address());
        }
    }
    pthread_mutex_unlock(ecx, esi19, " once %p is %d\n", 0x6494b048, v28, v30, ebx24, esi25, __return_address(), a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15, a16, a17);
    fun_64944400(ecx, esi19, " once %p is %d\n", 0x6494b048, v28);
    return 0;
}

void** pthread_mutex_lock(void** ecx, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7, void** a8, void** a9, void** a10, void** a11, void** a12, void** a13) {
    void** v14;
    void** v15;
    void** v16;
    void** eax17;
    void** ebx18;
    void** ebp19;
    void** v20;
    void** eax21;
    void** edx22;
    void** eax23;
    void** ebp24;
    void** v25;
    void** eax26;
    void** v27;
    void** v28;
    struct s9* eax29;
    void** v30;
    void** v31;
    void** ebx32;
    void** eax33;
    void** v34;
    void** v35;

    eax17 = fun_64943000(ecx, v14, v15, v16);
    if (eax17) 
        goto addr_64943103_3;
    ebx18 = *reinterpret_cast<void***>(a2);
    if (!*reinterpret_cast<void***>(ebx18 + 8)) {
        goto addr_649430d6_6;
    }
    ebp19 = *reinterpret_cast<void***>(ebx18 + 20);
    if (ebp19) {
        eax21 = reinterpret_cast<void**>(GetCurrentThreadId(v20));
        if (ebp19 == eax21) {
            edx22 = reinterpret_cast<void**>(36);
            if (!reinterpret_cast<int1_t>(*reinterpret_cast<void***>(ebx18 + 8) == 2)) {
                addr_64943126_10:
                eax23 = *reinterpret_cast<void***>(a2);
            } else {
                *reinterpret_cast<void***>(ebx18 + 12) = *reinterpret_cast<void***>(ebx18 + 12) + 1;
                goto addr_64943124_12;
            }
        } else {
            goto addr_649430d6_6;
        }
    } else {
        addr_649430d6_6:
        ebp24 = *reinterpret_cast<void***>(ebx18 + 24);
        fun_64942c60(v25);
        eax17 = fun_64941f60(ecx, ebp24, 1, 0xffffffff);
        if (eax17 || (eax17 = fun_64943000(ecx, ebp24, 1, 0xffffffff), !!eax17)) {
            addr_64943103_3:
            return eax17;
        } else {
            *reinterpret_cast<void***>(ebx18 + 12) = reinterpret_cast<void**>(1);
            eax26 = reinterpret_cast<void**>(GetCurrentThreadId(ebp24, 1, 0xffffffff));
            *reinterpret_cast<void***>(ebx18 + 20) = eax26;
            goto addr_64943124_12;
        }
    }
    pthread_spin_lock(0x64949018, 1, 0xffffffff, v27, v28);
    if (!reinterpret_cast<int1_t>(*reinterpret_cast<void***>(eax23) == 0xbab1f00d) || reinterpret_cast<uint1_t>(reinterpret_cast<signed char>(*reinterpret_cast<void***>(eax23 + 4)) < reinterpret_cast<signed char>(0)) | reinterpret_cast<uint1_t>(*reinterpret_cast<void***>(eax23 + 4) == 0)) {
        eax29 = _iob;
        fun_64948f2c(&eax29->f64, "Assertion failed: (%s), file %s, line %d\n", "(m_->valid == LIFE_MUTEX) && (m_->busy > 0)", "../../src/winpthreads-v3/src/mutex.c", 45, v30, v31, ebx32);
        fun_64948f34(1);
        g64949010 = reinterpret_cast<int32_t>("Assertion failed: (%s), file %s, line %d\n");
        goto 1;
    } else {
        eax33 = *reinterpret_cast<void***>(eax23 + 4);
        *reinterpret_cast<void***>(eax23 + 4) = eax33 - 1;
        pthread_spin_unlock(0x64949018, 1, 0xffffffff, v34, v35);
        return edx22;
    }
    addr_64943124_12:
    edx22 = reinterpret_cast<void**>(0);
    goto addr_64943126_10;
}

struct s21 {
    void** f0;
    signed char[3] pad4;
    uint32_t f4;
};

void** fun_649444f0(void** a1, void** a2) {
    void** esi3;
    void** ecx4;
    void** eax5;
    void** eax6;
    void** esi7;
    void** ebp8;
    void** ecx9;
    void** edx10;
    struct s21* edi11;
    uint32_t eax12;
    uint32_t eax13;

    esi3 = g6494b030;
    if (!esi3) {
        addr_64944536_2:
        return 0;
    } else {
        if (esi3 == 1) {
            ecx4 = g6494b034;
            if (eax5 == *reinterpret_cast<void***>(ecx4 + 4)) {
                eax6 = *reinterpret_cast<void***>(ecx4);
            } else {
                eax6 = reinterpret_cast<void**>(0);
            }
            return eax6;
        }
        esi7 = esi3 - 1;
        ebp8 = g6494b034;
        ecx9 = reinterpret_cast<void**>(0);
        while (edx10 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(ecx9) + reinterpret_cast<unsigned char>(esi7) >> 1), edi11 = reinterpret_cast<struct s21*>(ebp8 + reinterpret_cast<unsigned char>(edx10) * 8), edi11->f4 != eax12) {
            if (eax13 < edi11->f4) {
                if (edx10 == ecx9) 
                    goto addr_64944536_2;
                esi7 = edx10 + 0xffffffff;
                if (reinterpret_cast<unsigned char>(ecx9) > reinterpret_cast<unsigned char>(esi7)) 
                    goto addr_64944536_2;
            } else {
                ecx9 = edx10 + 1;
                if (reinterpret_cast<unsigned char>(ecx9) > reinterpret_cast<unsigned char>(esi7)) 
                    goto addr_64944536_2;
            }
        }
    }
    return edi11->f0;
}

void** pthread_rwlock_rdlock(void** ecx, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7, void** a8, void** a9, void** a10, void** a11, void** a12, void** a13) {
    void** v14;
    void** v15;
    void** v16;
    void** v17;
    void** v18;
    void** v19;
    void** v20;
    void** ebx21;
    void** esi22;
    void** edi23;
    void** ebp24;
    void** eax25;
    void** esi26;
    void** edi27;
    void** v28;
    void** v29;
    void** v30;
    void** v31;
    void** v32;
    void** v33;
    void** eax34;
    void** edx35;
    void** v36;
    void** v37;
    void** v38;
    void** v39;
    void** v40;
    void** v41;
    void** v42;
    void** eax43;
    void** v44;
    void** v45;
    void** v46;
    void** v47;
    void** v48;
    void** v49;
    void** v50;
    void** v51;
    void** v52;
    void** v53;
    void** v54;
    void** v55;
    void** v56;
    void** v57;
    void** v58;
    void** v59;
    void** v60;
    void** v61;
    void** v62;
    void** v63;
    void** v64;
    void** v65;
    struct s9* eax66;
    void** v67;
    void** v68;
    void** v69;
    void** v70;
    void** v71;
    void** v72;

    pthread_testcancel(ecx, v14, v15, v16, v17, v18, v19, v20, ebx21, esi22, edi23, ebp24, __return_address(), a2, a3, a4, a5, a6, a7, a8, a9);
    eax25 = fun_64943960(ecx);
    if (eax25) {
        return eax25;
    }
    esi26 = *reinterpret_cast<void***>(a2);
    edi27 = esi26 + 20;
    eax34 = pthread_mutex_lock(ecx, edi27, v28, v29, v30, v31, v32, v33, ebx21, esi22, edi23, ebp24, __return_address());
    if (eax34) {
        addr_64943aea_4:
        edx35 = eax34;
    } else {
        *reinterpret_cast<void***>(esi26 + 12) = *reinterpret_cast<void***>(esi26 + 12) + 1;
        if (*reinterpret_cast<void***>(esi26 + 12) == 0x7fffffff) {
            v36 = esi26 + 24;
            eax43 = pthread_mutex_lock(ecx, v36, v37, v38, v39, v40, v41, v42, ebx21, esi22, edi23, ebp24, __return_address());
            if (!eax43) {
                *reinterpret_cast<void***>(esi26 + 12) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(esi26 + 12)) - reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(esi26 + 16)));
                *reinterpret_cast<void***>(esi26 + 16) = reinterpret_cast<void**>(0);
                eax34 = fun_64943660(ecx, v36, v44, v45, v46, v47, v48, v49, ebx21, esi22, edi23, ebp24, __return_address(), a2, a3, a4, a5);
                goto addr_64943aea_4;
            } else {
                pthread_mutex_unlock(ecx, edi27, v50, v51, v52, v53, v54, v55, ebx21, esi22, edi23, ebp24, __return_address(), a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13);
                edx35 = eax43;
            }
        } else {
            eax34 = pthread_mutex_unlock(ecx, edi27, v56, v57, v58, v59, v60, v61, ebx21, esi22, edi23, ebp24, __return_address(), a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13);
            goto addr_64943aea_4;
        }
    }
    pthread_spin_lock(0x64949020, v62, v63, v64, v65);
    if (!reinterpret_cast<int1_t>(*reinterpret_cast<void***>(*reinterpret_cast<void***>(a2)) == 0xbab1f0ed) || reinterpret_cast<uint1_t>(reinterpret_cast<signed char>(*reinterpret_cast<void***>(*reinterpret_cast<void***>(a2) + 4)) < reinterpret_cast<signed char>(0)) | reinterpret_cast<uint1_t>(*reinterpret_cast<void***>(*reinterpret_cast<void***>(a2) + 4) == 0)) {
        eax66 = _iob;
        fun_64948f2c(&eax66->f64, "Assertion failed: (%s), file %s, line %d\n", "(((rwlock_t *)*rwl)->valid == LIFE_RWLOCK) && (((rwlock_t *)*rwl)->busy > 0)", "../../src/winpthreads-v3/src/rwlock.c", 40, v67, v68, ebx21);
        fun_64948f34(1);
        g6494b010 = reinterpret_cast<int32_t>("Assertion failed: (%s), file %s, line %d\n");
        goto 1;
    } else {
        *reinterpret_cast<void***>(*reinterpret_cast<void***>(a2) + 4) = *reinterpret_cast<void***>(*reinterpret_cast<void***>(a2) + 4) - 1;
        pthread_spin_unlock(0x64949020, v69, v70, v71, v72);
        return edx35;
    }
}

int32_t _setjmp3 = 0xe744;

int32_t fun_64948f64(uint32_t a1, void** a2, void** a3, void** a4) {
    goto _setjmp3;
}

void** __pth_gpointer_locked(void** ecx, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7, void** a8, void** a9, void** a10, void** a11, void** a12, void** a13, void** a14, void** a15, void** a16, void** a17) {
    void** eax18;
    void** v19;
    void** v20;
    void** v21;
    void** v22;
    void** v23;
    void** ebx24;
    void** v25;
    void** eax26;
    void** v27;
    void** v28;
    void** v29;
    void** v30;
    void** v31;

    eax18 = reinterpret_cast<void**>(0);
    if (a2) {
        pthread_mutex_lock(ecx, 0x64949028, v19, v20, v21, v22, v23, ebx24, __return_address(), a2, a3, a4, a5);
        eax26 = fun_649444f0(0x64949028, v25);
        pthread_mutex_unlock(ecx, 0x64949028, v27, v28, v29, v30, v31, ebx24, __return_address(), a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15, a16, a17);
        eax18 = eax26;
    }
    return eax18;
}

void** g6494b020;

void** fun_64944350(void** ecx) {
    void** edi2;
    void** eax3;
    void** v4;
    void** ebx5;
    void** v6;
    void** v7;
    void** v8;
    void** esi9;
    void** eax10;
    void** ebx11;
    void** v12;
    void** v13;
    void** eax14;

    edi2 = eax3;
    v4 = ebx5;
    pthread_spin_lock(0x64949024, v6, v7, v8, v4);
    esi9 = g6494b020;
    if (!esi9) {
        eax10 = fun_64948f3c(1, 16);
        ebx11 = eax10;
        *reinterpret_cast<void***>(eax10) = edi2;
        *reinterpret_cast<void***>(eax10 + 8) = reinterpret_cast<void**>(1);
        g6494b020 = eax10;
    } else {
        if (*reinterpret_cast<void***>(esi9) != edi2) {
            while (ebx11 = *reinterpret_cast<void***>(esi9 + 12), !!ebx11) {
                if (*reinterpret_cast<void***>(ebx11) == edi2) 
                    goto addr_649443d0_6;
                esi9 = ebx11;
            }
            goto addr_64944382_8;
        } else {
            ebx11 = esi9;
            goto addr_649443d0_6;
        }
    }
    addr_649443a4_11:
    pthread_mutex_init(ecx, ebx11 + 4, 0);
    addr_649443b7_12:
    pthread_spin_unlock(0x64949024, 0, v12, v13, v4);
    return ebx11;
    addr_64944382_8:
    eax14 = fun_64948f3c(1, 16);
    *reinterpret_cast<void***>(eax14) = edi2;
    ebx11 = eax14;
    *reinterpret_cast<void***>(eax14 + 8) = reinterpret_cast<void**>(1);
    *reinterpret_cast<void***>(esi9 + 12) = eax14;
    goto addr_649443a4_11;
    addr_649443d0_6:
    *reinterpret_cast<void***>(ebx11 + 8) = *reinterpret_cast<void***>(ebx11 + 8) + 1;
    goto addr_649443b7_12;
}

void** g64949030 = reinterpret_cast<void**>(0xff);

int32_t TlsGetValue = 0xe628;

void** fun_64944860(void** ecx, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7, void** a8, void** a9, void** a10, void** a11, void** a12, void** a13, void** a14, void** a15, void** a16, void** a17);

/* (image base) */
int32_t image_base_ = 0x64944c20;

int32_t CreateEventA = 0xe2d2;

void** GetCurrentProcess = reinterpret_cast<void**>(80);

int32_t GetCurrentThread = 0xe37a;

int32_t DuplicateHandle = 0xe30e;

int32_t GetThreadPriority = 0xe466;

int32_t TlsSetValue = 0xe636;

void** fun_64948f4c();

void** fun_64944990(void** ecx, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7, void** a8, void** a9, void** a10, void** a11, void** a12) {
    int1_t zf13;
    void** v14;
    void** v15;
    void** v16;
    void** v17;
    void** v18;
    void** v19;
    void** v20;
    void** v21;
    void** v22;
    void** v23;
    void** v24;
    void** ebx25;
    void** esi26;
    void** edi27;
    void** ebp28;
    void** eax29;
    void** eax30;
    void** ebx31;
    void** v32;
    void** v33;
    void** v34;
    void** v35;
    void** v36;
    void** v37;
    void** v38;
    void** v39;
    void** v40;
    void** v41;
    void** eax42;
    int32_t edi43;
    int32_t eax44;
    void** eax45;
    void** ebx46;
    void** eax47;
    void** eax48;
    void** eax49;
    void** ecx50;
    int32_t eax51;
    void** v52;
    void** eax53;
    uint32_t eax54;
    void** eax55;
    void** v56;
    int32_t eax57;
    int32_t v58;
    void** v59;
    void** v60;
    void** v61;
    void** v62;
    void** v63;
    void** v64;
    void** v65;
    void** v66;
    void** v67;
    void** v68;
    void** v69;
    void** v70;
    void** v71;
    void** v72;
    void** v73;
    void** v74;
    void** v75;
    void** v76;
    void** v77;
    void** v78;

    zf13 = reinterpret_cast<int1_t>(g6494b048 == 1);
    if (!zf13) {
        fun_64944910(ecx, v14, v15, v16, v17, v18, v19, v20, v21, v22, v23, v24, ebx25, esi26, edi27, ebp28, __return_address());
    }
    eax29 = g64949030;
    eax30 = reinterpret_cast<void**>(TlsGetValue(eax29));
    ebx31 = eax30;
    if (eax30 || ((eax42 = fun_64944860(ecx, 0x649449b5, eax29, v32, v33, v34, v35, v36, v37, v38, v39, v40, v41, ebx25, esi26, edi27, ebp28), edi43 = image_base_, edi43 == 0) || !eax42)) {
        addr_649449be_4:
        return ebx31;
    } else {
        *reinterpret_cast<void***>(eax42 + 36) = reinterpret_cast<void**>(1);
        eax44 = reinterpret_cast<int32_t>(GetCurrentThreadId(0x649449b5, eax29));
        *reinterpret_cast<int32_t*>(eax42 + 56) = eax44;
        eax45 = reinterpret_cast<void**>(CreateEventA(0, 1, 0, 0));
        ebx46 = GetCurrentProcess;
        *reinterpret_cast<int32_t*>(eax42 + 28) = -1;
        *reinterpret_cast<int32_t*>(eax42 + 52) = -1;
        *reinterpret_cast<void***>(eax42 + 96) = reinterpret_cast<void**>(0);
        *reinterpret_cast<void***>(eax42 + 20) = reinterpret_cast<void**>(0);
        *reinterpret_cast<void***>(eax42 + 24) = eax45;
        eax47 = reinterpret_cast<void**>(ebx46());
        eax48 = reinterpret_cast<void**>(GetCurrentThread());
        eax49 = reinterpret_cast<void**>(ebx46());
        ecx50 = eax42 + 20;
        eax51 = reinterpret_cast<int32_t>(DuplicateHandle(eax49, eax48, eax47, ecx50, 0, 0, 2, 0));
        if (!eax51 || (v52 = *reinterpret_cast<void***>(eax42 + 20), eax53 = reinterpret_cast<void**>(GetThreadPriority(v52)), *reinterpret_cast<void***>(eax42 + 100) = reinterpret_cast<void**>(0), *reinterpret_cast<void***>(eax42 + 0x68) = eax53, eax54 = static_cast<uint32_t>(*reinterpret_cast<unsigned char*>(eax42 + 32)) & 0xffffffcf | 16, *reinterpret_cast<unsigned char*>(eax42 + 32) = *reinterpret_cast<unsigned char*>(&eax54), eax55 = g64949030, v56 = eax42, eax57 = reinterpret_cast<int32_t>(TlsSetValue(eax55)), eax57 == 0)) {
            fun_64948f4c();
            if (v58) 
                goto addr_64944ade_8;
        } else {
            ebx31 = eax42;
            goto addr_649449be_4;
        }
    }
    addr_64944b01_10:
    goto v56;
    addr_64944ade_8:
    pthread_mutex_lock(ecx50, 0x64949028, v59, v60, v61, v62, 0x64944abb, ebx46, v56, v63, v64, v65, v66);
    fun_649444f0(0x64949028, v67);
    pthread_mutex_unlock(ecx50, 0x64949028, v68, v69, v70, v71, 0x64944abb, ebx46, v56, v72, v73, v74, v75, v76, 0x64944a7c, eax49, eax48, eax47, ecx50, 0, 0, 2, 0, v77, v78);
    goto addr_64944b01_10;
}

void** pthread_rwlock_wrlock(void** ecx, void** a2, void** a3, void** a4, void** a5) {
    void** v6;
    void** ebx7;
    void** v8;
    void** v9;
    void** v10;
    void** v11;
    void** v12;
    void** v13;
    void** v14;
    void** v15;
    void** v16;
    void** v17;
    void** v18;
    void** esi19;
    void** edi20;
    void** ebp21;
    void** eax22;
    void** ebx23;
    void** v24;
    void** v25;
    void** v26;
    void** v27;
    void** v28;
    void** v29;
    void** v30;
    void** v31;
    void** v32;
    void** v33;
    void** v34;
    void** eax35;
    void** v36;
    void** v37;
    void** v38;
    void** eax39;
    void** ecx40;
    void** eax41;
    void** ebp42;
    void** edi43;
    void** v44;
    void** v45;
    void** v46;
    void** v47;
    void** v48;
    void** v49;
    void** v50;
    void** v51;
    void** v52;
    void** v53;
    void** eax54;
    void** v55;
    void** v56;
    void** v57;
    void** v58;
    void** v59;
    void** v60;
    void** v61;
    void** v62;
    void** v63;
    void** eax64;
    void** ecx65;
    void** eax66;
    void** v67;
    void** v68;
    void** v69;
    void** v70;
    void** v71;
    void** eax72;
    int32_t v73;
    void** v74;
    void** v75;
    void** v76;
    void** v77;
    void** v78;
    void** v79;
    void** eax80;

    v6 = ebx7;
    pthread_testcancel(ecx, v8, v9, v10, v11, v12, v13, v14, v15, v16, v17, v18, v6, esi19, edi20, ebp21, __return_address(), a2, a3, a4, a5);
    eax22 = fun_64943960(ecx);
    if (eax22) {
        return eax22;
    }
    ebx23 = *reinterpret_cast<void***>(a2);
    eax35 = fun_64943610(ecx, v24, v25, v26, v27, v28, v29, v30, v31, v32, v33, v34, v6, esi19, edi20, ebp21, __return_address());
    if (eax35) {
        addr_64943ec7_4:
        eax39 = fun_649436c0(v36, v37, v38);
        return eax39;
    } else {
        if (*reinterpret_cast<void***>(ebx23 + 8)) {
            addr_64943ec2_6:
            *reinterpret_cast<void***>(ebx23 + 8) = *reinterpret_cast<void***>(ebx23 + 8) + 1;
            goto addr_64943ec7_4;
        } else {
            ecx40 = *reinterpret_cast<void***>(ebx23 + 16);
            eax41 = *reinterpret_cast<void***>(ebx23 + 12);
            if (!(reinterpret_cast<uint1_t>(reinterpret_cast<signed char>(ecx40) < reinterpret_cast<signed char>(0)) | reinterpret_cast<uint1_t>(ecx40 == 0))) {
                eax41 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(eax41) - reinterpret_cast<unsigned char>(ecx40));
                *reinterpret_cast<void***>(ebx23 + 12) = eax41;
                *reinterpret_cast<void***>(ebx23 + 16) = reinterpret_cast<void**>(0);
            }
            if (reinterpret_cast<uint1_t>(reinterpret_cast<signed char>(eax41) < reinterpret_cast<signed char>(0)) | reinterpret_cast<uint1_t>(eax41 == 0)) 
                goto addr_64943ec2_6;
        }
    }
    *reinterpret_cast<void***>(ebx23 + 16) = reinterpret_cast<void**>(-reinterpret_cast<unsigned char>(eax41));
    ebp42 = ebx23 + 24;
    edi43 = ebx23 + 28;
    v44 = ebx23;
    eax54 = pthread_getclean(ecx40, v45, v46, v47, v48, v49, 0x649436a0, v44, v50, v51, v52, v53, v6);
    v55 = *reinterpret_cast<void***>(eax54);
    eax64 = pthread_getclean(ecx40, static_cast<uint32_t>(reinterpret_cast<unsigned char>(v56)), v57, v58, v59, v60, 0x649436a0, v44, v55, v61, v62, v63, v6);
    ecx65 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4 - 4 - 4 - 4 - 44 - 4 + 4 - 4 + 4 - 4 + 4 - 4 + 4 - 4 + 4 + 20);
    *reinterpret_cast<void***>(eax64) = ecx65;
    do {
        v37 = ebp42;
        v36 = edi43;
        eax66 = pthread_cond_wait(ecx65, v36, v37);
        if (eax66) 
            break;
    } while (reinterpret_cast<signed char>(*reinterpret_cast<void***>(ebx23 + 16)) < reinterpret_cast<signed char>(0));
    goto addr_64943eb0_13;
    eax72 = pthread_getclean(ecx65, v36, v37, v67, eax66, v68, 0x649436a0, v44, v55, v69, v70, v71, v6);
    *reinterpret_cast<void***>(eax72) = v55;
    v36 = v44;
    v73(v36, v37);
    goto addr_64943ec7_4;
    addr_64943eb0_13:
    eax80 = pthread_getclean(ecx65, v36, v37, v74, v75, v76, 0x649436a0, v44, v55, v77, v78, v79, v6);
    *reinterpret_cast<void***>(eax80) = v55;
    *reinterpret_cast<void***>(ebx23 + 12) = reinterpret_cast<void**>(0);
    goto addr_64943ec2_6;
}

void** fun_649435b0();

void** pthread_cond_signal(void** a1);

void** pthread_rwlock_unlock(void** ecx, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7, void** a8, void** a9, void** a10, void** a11, void** a12, void** a13, void** a14, void** a15, void** a16, void** a17) {
    void** eax18;
    void** esi19;
    void** edi20;
    void** v21;
    void** v22;
    void** v23;
    void** v24;
    void** v25;
    void** ebx26;
    void** esi27;
    void** edi28;
    void** eax29;
    void** edx30;
    void** eax31;
    void** v32;
    void** v33;
    void** v34;
    void** eax35;
    void** v36;
    void** v37;
    void** v38;
    void** eax39;
    void** v40;
    void** v41;
    void** v42;
    void** v43;
    void** eax44;
    void** v45;
    void** v46;
    struct s9* eax47;
    void** v48;
    void** v49;
    void** v50;
    void** v51;

    eax18 = fun_649435b0();
    if (eax18) {
        return eax18;
    } else {
        esi19 = *reinterpret_cast<void***>(a2);
        if (!*reinterpret_cast<void***>(esi19 + 8)) {
            edi20 = esi19 + 24;
            v21 = edi20;
            v22 = reinterpret_cast<void**>(0x64943d82);
            eax29 = pthread_mutex_lock(ecx, v21, v23, v24, v25, ebx26, esi27, edi28, __return_address(), a2, a3, a4, a5);
            edx30 = eax29;
            if (!eax29) {
                *reinterpret_cast<void***>(esi19 + 16) = *reinterpret_cast<void***>(esi19 + 16) + 1;
                if (!*reinterpret_cast<void***>(esi19 + 16)) {
                    eax31 = pthread_cond_signal(esi19 + 28);
                    v21 = edi20;
                    v32 = eax31;
                    v22 = reinterpret_cast<void**>(0x64943db7);
                    eax35 = pthread_mutex_unlock(ecx, v21, v33, v34, v32, ebx26, esi27, edi28, __return_address(), a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15, a16, a17);
                    edx30 = v32;
                    if (!edx30) {
                        edx30 = eax35;
                    }
                } else {
                    v21 = edi20;
                    v22 = reinterpret_cast<void**>(0x64943d9c);
                    eax39 = pthread_mutex_unlock(ecx, v21, v36, v37, v38, ebx26, esi27, edi28, __return_address(), a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15, a16, a17);
                    edx30 = eax39;
                }
            }
        } else {
            *reinterpret_cast<void***>(esi19 + 8) = *reinterpret_cast<void***>(esi19 + 8) - 1;
            v22 = reinterpret_cast<void**>(0x64943d5c);
            eax44 = fun_64943660(ecx, v40, v41, v42, v43, ebx26, esi27, edi28, __return_address(), a2, a3, a4, a5, a6, a7, a8, a9);
            edx30 = eax44;
        }
        pthread_spin_lock(0x64949020, v45, v46, v22, v21);
        if (!reinterpret_cast<int1_t>(*reinterpret_cast<void***>(*reinterpret_cast<void***>(a2)) == 0xbab1f0ed) || reinterpret_cast<uint1_t>(reinterpret_cast<signed char>(*reinterpret_cast<void***>(*reinterpret_cast<void***>(a2) + 4)) < reinterpret_cast<signed char>(0)) | reinterpret_cast<uint1_t>(*reinterpret_cast<void***>(*reinterpret_cast<void***>(a2) + 4) == 0)) {
            eax47 = _iob;
            fun_64948f2c(&eax47->f64, "Assertion failed: (%s), file %s, line %d\n", "(((rwlock_t *)*rwl)->valid == LIFE_RWLOCK) && (((rwlock_t *)*rwl)->busy > 0)", "../../src/winpthreads-v3/src/rwlock.c", 40, v48, v49, v32);
            fun_64948f34(1);
            g6494b010 = reinterpret_cast<int32_t>("Assertion failed: (%s), file %s, line %d\n");
            goto 1;
        } else {
            *reinterpret_cast<void***>(*reinterpret_cast<void***>(a2) + 4) = *reinterpret_cast<void***>(*reinterpret_cast<void***>(a2) + 4) - 1;
            pthread_spin_unlock(0x64949020, v50, v51, v22, v21);
            return edx30;
        }
    }
}

int32_t realloc = 0xe7cc;

void** fun_64948f5c(void** a1, void** a2) {
    goto realloc;
}

int32_t memset = 0xe7b8;

void fun_64948f6c(void** a1, void** a2, void** a3) {
    goto memset;
}

int32_t longjmp = 0xe790;

void fun_64948f05(void** a1, void** a2) {
    goto longjmp;
}

void** _pthread_key_dest;

void** fun_64944b10(void** ecx, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7, void** a8, void** a9, void** a10, void** a11) {
    void** v12;
    void** v13;
    void** ebp14;
    void** v15;
    void** edi16;
    void** v17;
    void** esi18;
    void** v19;
    void** ebx20;
    void** eax21;
    void** v22;
    void** v23;
    void** v24;
    void** v25;
    void** v26;
    void** v27;
    void** eax28;
    void** esi29;
    void** v30;
    void** v31;
    void** v32;
    void** v33;
    void** ebx34;
    void* ebp35;
    void** edi36;
    void** v37;
    void** v38;
    void** v39;
    void** eax40;
    int1_t below_or_equal41;
    void** v42;
    void** eax43;
    void** v44;
    void** v45;
    void** v46;
    void** v47;
    void** v48;
    void** v49;

    v12 = reinterpret_cast<void**>(__return_address());
    v13 = ebp14;
    v15 = edi16;
    v17 = esi18;
    v19 = ebx20;
    eax28 = __pth_gpointer_locked(ecx, eax21, v22, v23, v24, v25, v26, v27, v19, v17, v15, v13, v12, a2, a3, a4, a5);
    esi29 = eax28;
    if (eax28) {
        v30 = eax28 + 52;
        v31 = reinterpret_cast<void**>(0x100);
        do {
            pthread_spin_lock(v30, v30, v32, v31, v33);
            if (!*reinterpret_cast<void***>(esi29 + 40)) 
                break;
            v32 = reinterpret_cast<void**>(0);
            ebx34 = reinterpret_cast<void**>(0);
            while (1) {
                ebp35 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(ebx34) * 4);
                edi36 = *reinterpret_cast<void***>(*reinterpret_cast<void***>(esi29 + 44) + reinterpret_cast<unsigned char>(ebx34) * 4);
                if (!*reinterpret_cast<signed char*>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(esi29 + 48)) + reinterpret_cast<unsigned char>(ebx34))) {
                    ++ebx34;
                    if (reinterpret_cast<unsigned char>(ebx34) >= reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(esi29 + 40))) 
                        break;
                } else {
                    pthread_rwlock_rdlock(ecx, 0x6494902c, v30, v32, v31, v37, v38, v39, v19, v17, v15, v13, v12);
                    eax40 = _pthread_key_dest;
                    below_or_equal41 = reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax40 + reinterpret_cast<unsigned char>(ebx34) * 4)) <= reinterpret_cast<unsigned char>(1);
                    *reinterpret_cast<void***>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(esi29 + 44)) + reinterpret_cast<uint32_t>(ebp35)) = reinterpret_cast<void**>(0);
                    *reinterpret_cast<signed char*>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(esi29 + 48)) + reinterpret_cast<unsigned char>(ebx34)) = 0;
                    if (!below_or_equal41) {
                        pthread_spin_unlock(v30, v30, v32, v31, v42);
                        eax43 = _pthread_key_dest;
                        *reinterpret_cast<void***>(reinterpret_cast<unsigned char>(eax43) + reinterpret_cast<uint32_t>(ebp35))(edi36);
                        pthread_spin_lock(v30, v30, v32, v31, v44);
                        v32 = reinterpret_cast<void**>(1);
                    }
                    ++ebx34;
                    pthread_rwlock_unlock(ecx, 0x6494902c, v30, v32, v31, v45, v46, v47, v19, v17, v15, v13, v12, a2, a3, a4, a5);
                    if (reinterpret_cast<unsigned char>(ebx34) >= reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(esi29 + 40))) 
                        break;
                }
            }
            eax28 = pthread_spin_unlock(v30, v30, v32, v31, v48);
            if (!v32) 
                goto addr_64944b25_11;
            --v31;
        } while (v31);
        goto addr_64944c0a_13;
    } else {
        addr_64944b25_11:
        return eax28;
    }
    eax28 = pthread_spin_unlock(v30, v30, v32, v31, v49);
    goto addr_64944b25_11;
    addr_64944c0a_13:
    goto addr_64944b25_11;
}

void** g6494b038;

void** g6494b03c;

void** fun_649446d0(void** ecx, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7, void** a8, void** a9, void** a10, void** a11, void** a12, void** a13) {
    void** v14;
    void** v15;
    void** ebp16;
    void** v17;
    void** edi18;
    void** v19;
    void** esi20;
    void** esi21;
    void** eax22;
    void** v23;
    void** ebx24;
    void** v25;
    void** v26;
    void** v27;
    void** v28;
    void** v29;
    void** v30;
    void** eax31;
    void** ebp32;
    void** v33;
    void** v34;
    void** v35;
    void** v36;
    void** v37;
    void** v38;
    void** v39;
    void** ebx40;
    void** edi41;
    void** edx42;
    void** v43;
    void** v44;
    void** v45;
    void** v46;
    void** edi47;
    uint32_t edx48;
    void** ecx49;
    int1_t zf50;
    void** eax51;
    void** v52;
    void** v53;
    void** v54;
    void** eax55;
    void** edx56;
    void* eax57;
    void** v58;
    void** v59;
    void** v60;

    v14 = reinterpret_cast<void**>(__return_address());
    v15 = ebp16;
    v17 = edi18;
    v19 = esi20;
    esi21 = eax22;
    v23 = ebx24;
    pthread_mutex_lock(ecx, 0x64949028, v25, v26, v27, v28, v29, v30, v23, v19, v17, v15, v14);
    eax31 = *reinterpret_cast<void***>(esi21 + 0xb0);
    if (!eax31 || (ebp32 = g6494b030, ebp32 == 0)) {
        addr_649446f3_2:
        if (*reinterpret_cast<void***>(esi21 + 44)) {
            v33 = *reinterpret_cast<void***>(esi21 + 44);
            fun_64948f1c(ecx, v33, v34, v35, v36, v37, v38, v39, v23, v19, v17, v15, v14);
        }
    } else {
        ebx40 = ebp32 + 0xffffffff;
        edi41 = g6494b034;
        ecx = reinterpret_cast<void**>(0);
        v36 = ebx40;
        do {
            edx42 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(ebx40) + reinterpret_cast<unsigned char>(ecx) >> 1);
            if (eax31 == *reinterpret_cast<void***>(reinterpret_cast<uint32_t>(edi41 + reinterpret_cast<unsigned char>(edx42) * 8) + 4)) 
                goto addr_649447c4_6;
            if (reinterpret_cast<unsigned char>(eax31) < reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(reinterpret_cast<uint32_t>(edi41 + reinterpret_cast<unsigned char>(edx42) * 8) + 4))) {
                if (ecx == edx42) 
                    goto addr_649446f3_2;
                ebx40 = edx42 + 0xffffffff;
            } else {
                ecx = edx42 + 1;
            }
        } while (reinterpret_cast<unsigned char>(ebx40) >= reinterpret_cast<unsigned char>(ecx));
        goto addr_649446f3_2;
    }
    if (*reinterpret_cast<void***>(esi21 + 48)) {
        v43 = *reinterpret_cast<void***>(esi21 + 48);
        fun_64948f1c(ecx, v43, v34, v35, v36, v44, v45, v46, v23, v19, v17, v15, v14);
    }
    edi47 = esi21;
    edx48 = 0xb4;
    if (reinterpret_cast<unsigned char>(esi21) & 1) {
        edi47 = esi21 + 1;
        *reinterpret_cast<unsigned char*>(&edx48) = 0xb3;
        *reinterpret_cast<void***>(esi21) = reinterpret_cast<void**>(0);
        if (!(reinterpret_cast<unsigned char>(edi47) & 2)) {
            addr_64944730_16:
            ecx49 = reinterpret_cast<void**>(edx48 >> 2);
            zf50 = (*reinterpret_cast<unsigned char*>(&edx48) & 2) == 0;
        } else {
            addr_64944814_17:
            edi47 = edi47 + 2;
            *reinterpret_cast<int16_t*>(edi47 + 0xfffffffe) = 0;
            edx48 = edx48 - 2;
            goto addr_64944730_16;
        }
        while (ecx49) {
            --ecx49;
            *reinterpret_cast<void***>(edi47) = reinterpret_cast<void**>(0);
            edi47 = edi47 + 4;
            esi21 = esi21 + 4;
        }
        if (!zf50) {
            edi47 = edi47 + 2;
            *reinterpret_cast<int16_t*>(edi47 + 0xfffffffe) = 0;
        }
        if (edx48 & 1) {
            *reinterpret_cast<void***>(edi47) = reinterpret_cast<void**>(0);
        }
        eax51 = g6494b038;
        if (!eax51) {
            g6494b038 = esi21;
            g6494b03c = esi21;
        } else {
            *reinterpret_cast<void***>(eax51 + 0xac) = esi21;
        }
        eax55 = pthread_mutex_unlock(ecx49, 0x64949028, v34, v35, v36, v52, v53, v54, v23, v19, v17, v15, v14, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13);
        return eax55;
    } else {
        if (reinterpret_cast<unsigned char>(edi47) & 2) 
            goto addr_64944814_17; else 
            goto addr_64944730_16;
    }
    addr_649447c4_6:
    edx56 = edx42 + 1;
    if (reinterpret_cast<unsigned char>(ebp32) > reinterpret_cast<unsigned char>(edx56)) {
        eax57 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(edx56) * 8);
        v35 = reinterpret_cast<void**>((reinterpret_cast<unsigned char>(ebp32) - reinterpret_cast<unsigned char>(edx56)) * 8);
        v34 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(edi41) + reinterpret_cast<uint32_t>(eax57));
        fun_64948f54(reinterpret_cast<unsigned char>(edi41) + reinterpret_cast<uint32_t>(eax57) + 0xfffffff8, v34, v35);
    }
    g6494b030 = v36;
    if (!v36) {
        fun_64948f1c(ecx, edi41, v34, v35, v36, v58, v59, v60, v23, v19, v17, v15, v14);
        g6494b02c = reinterpret_cast<void**>(0);
        g6494b030 = reinterpret_cast<void**>(0);
        goto addr_649446f3_2;
    }
}

void fun_64945800(void** ecx, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7, void** a8, void** a9) {
    void** v10;
    void** v11;
    void** v12;
    void** eax13;

    eax13 = fun_64944990(ecx, v10, v11, v12, __return_address(), a2, a3, a4, a5, a6, a7, a8);
    if (eax13) {
        if (reinterpret_cast<uint1_t>(reinterpret_cast<signed char>(a2) < reinterpret_cast<signed char>(0)) | reinterpret_cast<uint1_t>(a2 == 0)) {
            *reinterpret_cast<void***>(eax13 + 16) = *reinterpret_cast<void***>(eax13 + 16) - 1;
            return;
        } else {
            *reinterpret_cast<void***>(eax13 + 16) = *reinterpret_cast<void***>(eax13 + 16) + 1;
        }
    }
    return;
}

int32_t _endthreadex = 0xe6fa;

void** pthread_exit(void** ecx, void** a2, void** a3, void** a4) {
    void** v5;
    void** v6;
    void** ebp7;
    void** v8;
    void** esi9;
    void** v10;
    void** ebx11;
    void** esi12;
    void** v13;
    void** v14;
    void** v15;
    void** v16;
    void** eax17;
    void** ebx18;
    void** v19;
    void** v20;
    void** v21;
    void** eax22;
    void** eax23;
    void** v24;
    void** edx25;
    int1_t zf26;
    void** v27;
    int1_t zf28;
    void** eax29;
    int1_t zf30;
    void** v31;
    void** v32;
    void** eax33;

    v5 = reinterpret_cast<void**>(__return_address());
    v6 = ebp7;
    v8 = esi9;
    v10 = ebx11;
    esi12 = a2;
    eax17 = fun_64944990(ecx, v13, v14, v15, v16, v10, v8, v6, v5, a2, a3, a4);
    ebx18 = eax17;
    *reinterpret_cast<void***>(eax17 + 4) = esi12;
    if (!*reinterpret_cast<void***>(eax17 + 0xb0)) 
        goto addr_649456df_2;
    while (1) {
        fun_64944b10(ecx, v19, 1, v20, v21, v10, v8, v6, v5, a2, a3);
        addr_649456df_2:
        if (!(*reinterpret_cast<unsigned char*>(ebx18 + 32) & 48)) {
            fun_64948f05(ebx18 + 0x6c, 1);
        }
        eax22 = g64949030;
        v19 = eax22;
        eax23 = reinterpret_cast<void**>(TlsGetValue(v19, 1));
        ebx18 = eax23;
        v24 = edx25;
        if (!eax23) {
            addr_6494573b_6:
            _endthreadex(esi12, v19, 1);
            continue;
        } else {
            if (!*reinterpret_cast<void***>(eax23 + 20)) {
                *reinterpret_cast<void***>(eax23) = reinterpret_cast<void**>(0xdeadbeef);
                if (*reinterpret_cast<void***>(eax23 + 24)) {
                    v24 = *reinterpret_cast<void***>(eax23 + 24);
                    CloseHandle(v24, v19, 1);
                }
                zf26 = *reinterpret_cast<void***>(ebx18 + 0xac) == 0;
                *reinterpret_cast<void***>(ebx18 + 24) = reinterpret_cast<void**>(0);
                esi12 = *reinterpret_cast<void***>(ebx18 + 4);
                if (!zf26) 
                    goto addr_6494576e_11; else 
                    goto addr_649457b2_12;
            }
            esi12 = *reinterpret_cast<void***>(eax23 + 4);
            *reinterpret_cast<void***>(eax23 + 100) = reinterpret_cast<void**>(1);
            if (*reinterpret_cast<void***>(eax23 + 24)) {
                v27 = *reinterpret_cast<void***>(eax23 + 24);
                CloseHandle(v27, v19, 1);
            }
            zf28 = (reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(ebx18 + 36)) & 4) == 0;
            *reinterpret_cast<void***>(ebx18 + 24) = reinterpret_cast<void**>(0);
            if (zf28) 
                goto addr_6494573b_6;
        }
        eax29 = *reinterpret_cast<void***>(ebx18 + 20);
        *reinterpret_cast<void***>(ebx18) = reinterpret_cast<void**>(0xdeadbeef);
        v24 = eax29;
        CloseHandle(v24, v19, 1);
        zf30 = *reinterpret_cast<void***>(ebx18 + 0xac) == 0;
        *reinterpret_cast<void***>(ebx18 + 20) = reinterpret_cast<void**>(0);
        if (zf30) {
            addr_649457b2_12:
            fun_649446d0(ecx, v24, v19, 1, v31, v32, v10, v8, v6, v5, a2, a3, a4);
            goto addr_6494576e_11;
        } else {
            addr_6494576e_11:
            eax33 = g64949030;
            v19 = reinterpret_cast<void**>(0);
            TlsSetValue(eax33, 0, 1);
            goto addr_6494573b_6;
        }
    }
}

unsigned char _pthread_invoke_cancel(void** ecx, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7, void** a8) {
    void** v9;
    void** v10;
    void** ebx11;
    void** v12;
    void** v13;
    void** v14;
    void** v15;
    void** v16;
    void** v17;
    void** eax18;
    uint32_t edx19;
    void** v20;
    void** v21;
    void** v22;
    void** v23;
    void** v24;
    void*** esp25;
    void** ebx26;
    void** v27;
    void** v28;
    void** v29;
    void** v30;
    void** v31;
    void** v32;
    void** v33;
    void** v34;
    void** eax35;
    void** esp36;
    void** v37;
    void** v38;
    void** v39;
    void** v40;
    void** ebp41;
    void** v42;
    void** v43;
    void** v44;
    void** v45;
    void** v46;
    void** eax47;
    void** ecx48;
    void** v49;
    int32_t eax50;
    void** ebx51;
    void** v52;
    void** v53;
    void** v54;
    void** v55;
    void** v56;
    void** v57;
    void** v58;
    void** v59;
    void** v60;
    void** v61;
    void** v62;
    void** v63;
    void** v64;
    void** v65;
    void** v66;
    void** esi67;
    void** eax68;
    void** eax69;
    void** esi70;
    void** v71;
    void** v72;
    void** v73;
    void** v74;
    uint32_t eax75;
    void** edx76;
    void** v77;
    void** v78;
    void** v79;
    void** v80;
    void** v81;
    void** v82;
    void** v83;
    void** v84;
    void** v85;
    void** v86;
    void** v87;
    void** edx88;
    uint32_t eax89;
    void** eax90;
    void** v91;
    void** v92;
    void** v93;
    void** v94;
    void** v95;
    void** v96;
    void** v97;
    void** v98;
    void** v99;
    void** v100;
    void** v101;
    void** v102;
    void** v103;
    void** v104;
    void** v105;
    void** v106;
    void** v107;
    void** v108;
    void** v109;
    void** v110;
    void** v111;
    void** v112;
    void** v113;
    void** eax114;
    void** v115;
    void** v116;
    void** v117;
    void** v118;
    void** v119;
    void** v120;
    void** eax121;
    void** ebx122;
    void** esi123;
    void** v124;
    void** v125;
    void** v126;
    void** v127;
    void** v128;
    void** v129;
    void** eax130;
    void** v131;
    void** v132;
    void** v133;
    void** v134;
    void** v135;
    void** v136;
    void** v137;
    void** v138;
    void** edx139;
    void** v140;
    void** v141;
    void** v142;
    void** v143;
    void** v144;
    void** v145;
    void** v146;
    void** v147;
    void** v148;
    void** v149;
    void** v150;
    void** v151;
    void** v152;
    void** v153;
    void** v154;
    void** v155;
    void** v156;
    void** v157;
    void** v158;
    void** v159;
    void** v160;
    void** v161;
    void** v162;
    void** v163;

    v9 = reinterpret_cast<void**>(__return_address());
    v10 = ebx11;
    eax18 = fun_64944990(ecx, v12, v13, v14, v15, v16, v17, v10, v9, a2, a3, a4);
    edx19 = static_cast<uint32_t>(*reinterpret_cast<unsigned char*>(eax18 + 32)) & 0xfffffff3 | 4;
    *reinterpret_cast<unsigned char*>(eax18 + 32) = *reinterpret_cast<unsigned char*>(&edx19);
    fun_64945800(ecx, 1, v20, v21, v22, v23, v24, v10, v9);
    esp25 = reinterpret_cast<void***>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4 - 24 - 4 + 4 - 4 + 4);
    --g6494b050;
    ebx26 = *reinterpret_cast<void***>(eax18 + 12);
    if (ebx26) {
        do {
            v27 = *reinterpret_cast<void***>(ebx26 + 4);
            *reinterpret_cast<void***>(ebx26)(v27);
            esp25 = esp25 - 4 + 4;
            ebx26 = *reinterpret_cast<void***>(ebx26 + 8);
        } while (ebx26);
    }
    fun_64945800(ecx, 0, v28, v29, v30, v31, v32, v10, v9);
    eax35 = pthread_exit(ecx, 0xdeadbeef, v33, v34);
    esp36 = reinterpret_cast<void**>(esp25 - 4 + 4 - 4 + 4 - 4);
    eax47 = __pth_gpointer_locked(ecx, eax35, v37, v38, v39, v40, ebx26, ebp41, 0xdeadbeef, v42, v43, v44, v45, v46, v10, v9, a2);
    if (!eax47 || (*reinterpret_cast<unsigned char*>(eax47 + 32) & 12 || ((ecx48 = *reinterpret_cast<void***>(eax47 + 100), !!ecx48) || ((reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax47 + 36)) & 3) != 3 || (v49 = *reinterpret_cast<void***>(eax47 + 24), eax50 = reinterpret_cast<int32_t>(WaitForSingleObject(v49, 0)), !!eax50))))) {
        goto 0xdeadbeef;
    }
    ebx51 = eax47 + 28;
    pthread_mutex_unlock(ecx48, ebx51, 0x649458d6, v49, 0, v52, v53, v54, ebx26, ebp41, 0xdeadbeef, v55, v56, v57, v58, v59, v10, v9, a2, a3, a4, a5, a6, a7, a8);
    _pthread_invoke_cancel(ecx48, ebx51, 0x649458d6, v49, 0, v60, v61, v62);
    eax68 = fun_64944990(ecx48, v63, v64, v65, v66, ebx51, esi67, esp36, ebx51, 0x649458d6, v49, 0);
    if (!eax68) 
        goto addr_64945912_8;
    if (*reinterpret_cast<unsigned char*>(eax68 + 32) & 12) 
        goto addr_64945912_8;
    eax69 = g6494b050;
    if (eax69) 
        goto addr_64945920_11;
    addr_64945912_8:
    goto ebx51;
    addr_64945920_11:
    esi70 = eax68 + 28;
    pthread_mutex_lock(ecx48, esi70, v71, v72, v73, ebx51, esi67, esp36, ebx51, 0x649458d6, v49, 0, v74);
    eax75 = *reinterpret_cast<unsigned char*>(eax68 + 32);
    if (!(*reinterpret_cast<unsigned char*>(&eax75) & 3) || ((edx76 = *reinterpret_cast<void***>(eax68 + 36), (*reinterpret_cast<unsigned char*>(&edx76) & 1) == 0) || (ecx48 = *reinterpret_cast<void***>(eax68 + 16), !(reinterpret_cast<uint1_t>(reinterpret_cast<signed char>(ecx48) < reinterpret_cast<signed char>(0)) | reinterpret_cast<uint1_t>(ecx48 == 0))))) {
        pthread_mutex_unlock(ecx48, esi70, v77, v78, v79, ebx51, esi67, esp36, ebx51, 0x649458d6, v49, 0, v80, v81, v82, ebx26, ebp41, 0xdeadbeef, v83, v84, v85, v86, v87, v10, v9);
        goto ebx51;
    }
    edx88 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(edx76) & 0xfffffffe);
    eax89 = eax75 & 0xfffffff3 | 4;
    *reinterpret_cast<unsigned char*>(eax68 + 32) = *reinterpret_cast<unsigned char*>(&eax89);
    eax90 = *reinterpret_cast<void***>(eax68 + 24);
    *reinterpret_cast<void***>(eax68 + 36) = edx88;
    if (eax90) {
        ResetEvent(eax90);
    }
    pthread_mutex_unlock(ecx48, esi70, v91, v92, v93, ebx51, esi67, esp36, ebx51, 0x649458d6, v49, 0, v94, v95, v96, ebx26, ebp41, 0xdeadbeef, v97, v98, v99, v100, v101, v10, v9);
    _pthread_invoke_cancel(ecx48, esi70, v102, v103, v104, ebx51, esi67, esp36);
    if (v105) 
        goto addr_6494598f_16;
    fun_64944990(ecx48, v106, v107, v108, v109, eax68, esi70, reinterpret_cast<uint32_t>(esp36 - 4) - 20 - 4 + 4 - 4 + 4 - 8 - 4 + 4 - 4 + 4 - 4, esi70, v110, v111, v112);
    goto addr_649459e4_18;
    addr_6494598f_16:
    v113 = v105;
    eax114 = _pthread_time_in_ms_from_timespec(v113);
    if (reinterpret_cast<unsigned char>(edx88) > reinterpret_cast<unsigned char>(0) || reinterpret_cast<unsigned char>(eax114) > reinterpret_cast<unsigned char>(0xfffffffe)) {
        eax121 = fun_64944990(ecx48, v113, v115, v116, v117, eax68, esi70, reinterpret_cast<uint32_t>(esp36 - 4) - 20 - 4 + 4 - 4 + 4 - 8 - 4 + 4 - 4 + 4 - 4, esi70, v118, v119, v120);
        ebx122 = reinterpret_cast<void**>(0xffffffff);
        esi123 = eax121;
        goto addr_649459a8_20;
    } else {
        ebx122 = eax114;
        eax130 = fun_64944990(ecx48, v113, v124, v125, v126, eax68, esi70, reinterpret_cast<uint32_t>(esp36 - 4) - 20 - 4 + 4 - 4 + 4 - 8 - 4 + 4 - 4 + 4 - 4, esi70, v127, v128, v129);
        esi123 = eax130;
        if (ebx122) {
            addr_649459a8_20:
            pthread_testcancel(ecx48, v113, v131, v132, v133, eax68, esi70, reinterpret_cast<uint32_t>(esp36 - 4) - 20 - 4 + 4 - 4 + 4 - 8 - 4 + 4 - 4 + 4 - 4, esi70, v134, v135, v136, ebx51, esi67, esp36, ebx51, 0x649458d6, v49, 0, v137, v138);
            edx139 = *reinterpret_cast<void***>(esi123 + 24);
            if (!edx139) {
                v140 = ebx122;
                v141 = reinterpret_cast<void**>(0x64945a19);
                Sleep(v140);
            } else {
                v142 = ebx122;
                v140 = edx139;
                v141 = reinterpret_cast<void**>(0x649459c1);
                WaitForSingleObject(v140, v142);
            }
        } else {
            addr_649459e4_18:
            pthread_testcancel(ecx48, v113, v143, v144, v145, eax68, esi70, reinterpret_cast<uint32_t>(esp36 - 4) - 20 - 4 + 4 - 4 + 4 - 8 - 4 + 4 - 4 + 4 - 4, esi70, v146, v147, v148, ebx51, esi67, esp36, ebx51, 0x649458d6, v49, 0, v149, v150);
            Sleep(0);
            pthread_testcancel(ecx48, 0x649459f6, 0, v151, v152, v153, eax68, esi70, reinterpret_cast<uint32_t>(esp36 - 4) - 20 - 4 + 4 - 4 + 4 - 8 - 4 + 4 - 4 + 4 - 4, esi70, v154, v155, v156, ebx51, esi67, esp36, ebx51, 0x649458d6, v49, 0, v157);
            goto esi70;
        }
        pthread_testcancel(ecx48, v141, v140, v142, v158, v159, eax68, esi70, reinterpret_cast<uint32_t>(esp36 - 4) - 20 - 4 + 4 - 4 + 4 - 8 - 4 + 4 - 4 + 4 - 4, esi70, v160, v161, v162, ebx51, esi67, esp36, ebx51, 0x649458d6, v49, 0, v163);
        goto esi70;
    }
}

void fun_64945890(void** ecx, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7, void** a8, void** a9, void** a10, void** a11, void** a12, void** a13, void** a14, void** a15) {
    void** esp16;
    void** eax17;
    void** v18;
    void** v19;
    void** v20;
    void** v21;
    void** ebx22;
    void** ebp23;
    void** eax24;
    void** ecx25;
    void** v26;
    int32_t eax27;
    void** ebx28;
    void** v29;
    void** v30;
    void** v31;
    void** v32;
    void** v33;
    void** v34;
    void** v35;
    void** v36;
    void** v37;
    void** v38;
    void** esi39;
    void** eax40;
    void** eax41;
    void** esi42;
    void** v43;
    void** v44;
    void** v45;
    void** v46;
    uint32_t eax47;
    void** edx48;
    void** v49;
    void** v50;
    void** v51;
    void** v52;
    void** v53;
    void** v54;
    void** edx55;
    uint32_t eax56;
    void** eax57;
    void** v58;
    void** v59;
    void** v60;
    void** v61;
    void** v62;
    void** v63;
    void** v64;
    void** v65;
    void** v66;
    void** v67;
    void** v68;
    void** v69;
    void** v70;
    void** v71;
    void** v72;
    void** v73;
    void** v74;
    void** v75;
    void** eax76;
    void** v77;
    void** v78;
    void** v79;
    void** v80;
    void** v81;
    void** v82;
    void** eax83;
    void** ebx84;
    void** esi85;
    void** v86;
    void** v87;
    void** v88;
    void** v89;
    void** v90;
    void** v91;
    void** eax92;
    void** v93;
    void** v94;
    void** v95;
    void** v96;
    void** v97;
    void** v98;
    void** v99;
    void** v100;
    void** edx101;
    void** v102;
    void** v103;
    void** v104;
    void** v105;
    void** v106;
    void** v107;
    void** v108;
    void** v109;
    void** v110;
    void** v111;
    void** v112;
    void** v113;
    void** v114;
    void** v115;
    void** v116;
    void** v117;
    void** v118;
    void** v119;
    void** v120;
    void** v121;
    void** v122;
    void** v123;
    void** v124;
    void** v125;

    esp16 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4);
    eax24 = __pth_gpointer_locked(ecx, eax17, v18, v19, v20, v21, ebx22, ebp23, __return_address(), a2, a3, a4, a5, a6, a7, a8, a9);
    if (!eax24 || (*reinterpret_cast<unsigned char*>(eax24 + 32) & 12 || ((ecx25 = *reinterpret_cast<void***>(eax24 + 100), !!ecx25) || ((reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax24 + 36)) & 3) != 3 || (v26 = *reinterpret_cast<void***>(eax24 + 24), eax27 = reinterpret_cast<int32_t>(WaitForSingleObject(v26, 0)), !!eax27))))) {
        return;
    }
    ebx28 = eax24 + 28;
    pthread_mutex_unlock(ecx25, ebx28, 0x649458d6, v26, 0, v29, v30, v31, ebx22, ebp23, __return_address(), a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15);
    _pthread_invoke_cancel(ecx25, ebx28, 0x649458d6, v26, 0, v32, v33, v34);
    eax40 = fun_64944990(ecx25, v35, v36, v37, v38, ebx28, esi39, esp16, ebx28, 0x649458d6, v26, 0);
    if (!eax40) 
        goto addr_64945912_5;
    if (*reinterpret_cast<unsigned char*>(eax40 + 32) & 12) 
        goto addr_64945912_5;
    eax41 = g6494b050;
    if (eax41) 
        goto addr_64945920_8;
    addr_64945912_5:
    goto ebx28;
    addr_64945920_8:
    esi42 = eax40 + 28;
    pthread_mutex_lock(ecx25, esi42, v43, v44, v45, ebx28, esi39, esp16, ebx28, 0x649458d6, v26, 0, v46);
    eax47 = *reinterpret_cast<unsigned char*>(eax40 + 32);
    if (!(*reinterpret_cast<unsigned char*>(&eax47) & 3) || ((edx48 = *reinterpret_cast<void***>(eax40 + 36), (*reinterpret_cast<unsigned char*>(&edx48) & 1) == 0) || (ecx25 = *reinterpret_cast<void***>(eax40 + 16), !(reinterpret_cast<uint1_t>(reinterpret_cast<signed char>(ecx25) < reinterpret_cast<signed char>(0)) | reinterpret_cast<uint1_t>(ecx25 == 0))))) {
        pthread_mutex_unlock(ecx25, esi42, v49, v50, v51, ebx28, esi39, esp16, ebx28, 0x649458d6, v26, 0, v52, v53, v54, ebx22, ebp23, __return_address(), a2, a3, a4, a5, a6, a7, a8);
        goto ebx28;
    }
    edx55 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(edx48) & 0xfffffffe);
    eax56 = eax47 & 0xfffffff3 | 4;
    *reinterpret_cast<unsigned char*>(eax40 + 32) = *reinterpret_cast<unsigned char*>(&eax56);
    eax57 = *reinterpret_cast<void***>(eax40 + 24);
    *reinterpret_cast<void***>(eax40 + 36) = edx55;
    if (eax57) {
        ResetEvent(eax57);
    }
    pthread_mutex_unlock(ecx25, esi42, v58, v59, v60, ebx28, esi39, esp16, ebx28, 0x649458d6, v26, 0, v61, v62, v63, ebx22, ebp23, __return_address(), a2, a3, a4, a5, a6, a7, a8);
    _pthread_invoke_cancel(ecx25, esi42, v64, v65, v66, ebx28, esi39, esp16);
    if (v67) 
        goto addr_6494598f_13;
    fun_64944990(ecx25, v68, v69, v70, v71, eax40, esi42, reinterpret_cast<uint32_t>(esp16 - 4) - 20 - 4 + 4 - 4 + 4 - 8 - 4 + 4 - 4 + 4 - 4, esi42, v72, v73, v74);
    goto addr_649459e4_15;
    addr_6494598f_13:
    v75 = v67;
    eax76 = _pthread_time_in_ms_from_timespec(v75);
    if (reinterpret_cast<unsigned char>(edx55) > reinterpret_cast<unsigned char>(0) || reinterpret_cast<unsigned char>(eax76) > reinterpret_cast<unsigned char>(0xfffffffe)) {
        eax83 = fun_64944990(ecx25, v75, v77, v78, v79, eax40, esi42, reinterpret_cast<uint32_t>(esp16 - 4) - 20 - 4 + 4 - 4 + 4 - 8 - 4 + 4 - 4 + 4 - 4, esi42, v80, v81, v82);
        ebx84 = reinterpret_cast<void**>(0xffffffff);
        esi85 = eax83;
        goto addr_649459a8_17;
    } else {
        ebx84 = eax76;
        eax92 = fun_64944990(ecx25, v75, v86, v87, v88, eax40, esi42, reinterpret_cast<uint32_t>(esp16 - 4) - 20 - 4 + 4 - 4 + 4 - 8 - 4 + 4 - 4 + 4 - 4, esi42, v89, v90, v91);
        esi85 = eax92;
        if (ebx84) {
            addr_649459a8_17:
            pthread_testcancel(ecx25, v75, v93, v94, v95, eax40, esi42, reinterpret_cast<uint32_t>(esp16 - 4) - 20 - 4 + 4 - 4 + 4 - 8 - 4 + 4 - 4 + 4 - 4, esi42, v96, v97, v98, ebx28, esi39, esp16, ebx28, 0x649458d6, v26, 0, v99, v100);
            edx101 = *reinterpret_cast<void***>(esi85 + 24);
            if (!edx101) {
                v102 = ebx84;
                v103 = reinterpret_cast<void**>(0x64945a19);
                Sleep(v102);
            } else {
                v104 = ebx84;
                v102 = edx101;
                v103 = reinterpret_cast<void**>(0x649459c1);
                WaitForSingleObject(v102, v104);
            }
        } else {
            addr_649459e4_15:
            pthread_testcancel(ecx25, v75, v105, v106, v107, eax40, esi42, reinterpret_cast<uint32_t>(esp16 - 4) - 20 - 4 + 4 - 4 + 4 - 8 - 4 + 4 - 4 + 4 - 4, esi42, v108, v109, v110, ebx28, esi39, esp16, ebx28, 0x649458d6, v26, 0, v111, v112);
            Sleep(0);
            pthread_testcancel(ecx25, 0x649459f6, 0, v113, v114, v115, eax40, esi42, reinterpret_cast<uint32_t>(esp16 - 4) - 20 - 4 + 4 - 4 + 4 - 8 - 4 + 4 - 4 + 4 - 4, esi42, v116, v117, v118, ebx28, esi39, esp16, ebx28, 0x649458d6, v26, 0, v119);
            goto esi42;
        }
        pthread_testcancel(ecx25, v103, v102, v104, v120, v121, eax40, esi42, reinterpret_cast<uint32_t>(esp16 - 4) - 20 - 4 + 4 - 4 + 4 - 8 - 4 + 4 - 4 + 4 - 4, esi42, v122, v123, v124, ebx28, esi39, esp16, ebx28, 0x649458d6, v26, 0, v125);
        goto esi42;
    }
}

void** _pthread_rel_time_in_ms(void** a1) {
    void* edx2;
    void* tmp32_3;
    uint32_t edi4;
    void* eax5;
    uint32_t v6;
    void* tmp32_7;
    uint16_t v8;
    uint32_t edx9;
    void** eax10;

    edx2 = reinterpret_cast<void*>((__intrinsic() >> 18) - reinterpret_cast<uint32_t>(reinterpret_cast<signed char>(*reinterpret_cast<void***>(a1 + 4)) >> 31));
    tmp32_3 = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(edx2) + 0x3e8 * reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(a1)));
    edi4 = (reinterpret_cast<int32_t>(edx2) >> 31) + __intrinsic() + reinterpret_cast<uint1_t>(reinterpret_cast<uint32_t>(tmp32_3) < reinterpret_cast<uint32_t>(edx2));
    _ftime(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4 - 4 - 4 - 32 + 20);
    eax5 = reinterpret_cast<void*>(0x3e8 * v6);
    tmp32_7 = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(eax5) + v8);
    edx9 = __intrinsic() + reinterpret_cast<uint1_t>(reinterpret_cast<uint32_t>(tmp32_7) < reinterpret_cast<uint32_t>(eax5));
    if (edi4 < edx9) 
        goto addr_64942b24_2;
    if (edi4 <= edx9) {
        if (reinterpret_cast<uint32_t>(tmp32_3) < reinterpret_cast<uint32_t>(tmp32_7)) {
            addr_64942b24_2:
            return 0;
        } else {
            eax10 = reinterpret_cast<void**>(reinterpret_cast<uint32_t>(tmp32_3) - reinterpret_cast<uint32_t>(tmp32_7));
        }
    } else {
        eax10 = reinterpret_cast<void**>(reinterpret_cast<uint32_t>(tmp32_3) - reinterpret_cast<uint32_t>(tmp32_7));
    }
    return eax10;
}

void** fun_64946650(void** ecx, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7, void** a8, void** a9, void** a10, void** a11, void** a12, void** a13) {
    void** v14;
    void** v15;
    void** v16;
    void** edx17;
    void** v18;
    void** v19;
    void** v20;
    void** ebx21;
    void** esi22;
    void** edi23;
    void** ebp24;
    void*** eax25;
    void** esi26;
    void** v27;
    int32_t* eax28;
    void** eax29;
    void** ebp30;
    void** v31;
    void** v32;
    void** v33;
    void** v34;
    void** v35;
    void** eax36;
    void*** eax37;
    void** v38;
    void** v39;
    void** v40;
    void** v41;
    void** v42;

    if (ecx) {
        pthread_testcancel(ecx, v14, v15, v16, edx17, v18, v19, v20, ebx21, esi22, edi23, ebp24, __return_address(), a2, a3, a4, a5, a6, a7, a8, a9);
    }
    if (!eax25 || (esi26 = *eax25, esi26 == 0)) {
        addr_649466c0_4:
        eax28 = reinterpret_cast<int32_t*>(_errno(v27));
        *eax28 = 22;
        eax29 = reinterpret_cast<void**>(0xffffffff);
    } else {
        ebp30 = esi26 + 12;
        eax36 = pthread_mutex_lock(ecx, ebp30, v31, v32, edx17, v33, v34, v35, ebx21, esi22, edi23, ebp24, __return_address());
        if (eax36) {
            eax37 = reinterpret_cast<void***>(_errno(ebp30));
            *eax37 = eax36;
            return 0xffffffff;
        }
        if (!*eax25) 
            goto addr_649466b5_8; else 
            goto addr_64946682_9;
    }
    addr_6494668a_10:
    return eax29;
    addr_649466b5_8:
    v27 = ebp30;
    pthread_mutex_unlock(ecx, v27, v38, v39, edx17, v40, v41, v42, ebx21, esi22, edi23, ebp24, __return_address(), a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13);
    goto addr_649466c0_4;
    addr_64946682_9:
    *reinterpret_cast<void***>(edx17) = esi26;
    eax29 = reinterpret_cast<void**>(0);
    goto addr_6494668a_10;
}

struct s22 {
    void** f0;
    signed char[3] pad4;
    void** f4;
};

void** fun_649488c0(void** a1, void** a2, void** a3, void** a4, struct s22* a5);

void** fun_64948ce0(void** a1, void** a2, void** a3, void** a4) {
    uint32_t ebx5;
    void** edx6;
    void** esi7;
    void** edi8;
    void** eax9;
    uint1_t cf10;
    void** eax11;
    uint1_t cf12;

    ebx5 = 0;
    edx6 = a2;
    esi7 = a3;
    edi8 = a4;
    eax9 = a1;
    if (reinterpret_cast<signed char>(edx6) < reinterpret_cast<signed char>(0)) {
        cf10 = reinterpret_cast<uint1_t>(!!eax9);
        eax9 = reinterpret_cast<void**>(-reinterpret_cast<unsigned char>(eax9));
        *reinterpret_cast<signed char*>(&ebx5) = 1;
        edx6 = reinterpret_cast<void**>(-(reinterpret_cast<unsigned char>(edx6) + cf10));
        if (reinterpret_cast<signed char>(edi8) >= reinterpret_cast<signed char>(0)) {
            addr_64948d00_3:
            eax11 = fun_649488c0(eax9, edx6, esi7, edi8, 0);
            if (ebx5) {
                eax11 = reinterpret_cast<void**>(-reinterpret_cast<unsigned char>(eax11));
            }
        } else {
            addr_64948d3d_5:
            cf12 = reinterpret_cast<uint1_t>(!!esi7);
            esi7 = reinterpret_cast<void**>(-reinterpret_cast<unsigned char>(esi7));
            ebx5 = ebx5 ^ 1;
            edi8 = reinterpret_cast<void**>(-(reinterpret_cast<unsigned char>(edi8) + cf12));
            goto addr_64948d00_3;
        }
        return eax11;
    } else {
        if (reinterpret_cast<signed char>(edi8) < reinterpret_cast<signed char>(0)) 
            goto addr_64948d3d_5; else 
            goto addr_64948d00_3;
    }
}

void** fun_64948e00(void** a1, void** a2, void** a3, void** a4, void* a5, void* a6) {
    void** eax7;

    eax7 = fun_649488c0(a1, a2, a3, a4, 0);
    return eax7;
}

int32_t fun_64948e40(void** a1, void** a2, void** a3, void** a4, void* a5, void* a6) {
    int32_t v7;

    fun_649488c0(a1, a2, a3, a4, reinterpret_cast<int32_t>(__zero_stack_offset()) - 44 + 32);
    return v7;
}

int32_t fun_64948d50(void** a1, void** a2, void** a3, void** a4) {
    int32_t esi5;
    void** edx6;
    void** ecx7;
    void** ebx8;
    void** eax9;
    uint1_t cf10;
    uint1_t cf11;
    int32_t eax12;
    int32_t v13;

    esi5 = 0;
    edx6 = a2;
    ecx7 = a3;
    ebx8 = a4;
    eax9 = a1;
    if (reinterpret_cast<signed char>(edx6) < reinterpret_cast<signed char>(0)) {
        cf10 = reinterpret_cast<uint1_t>(!!eax9);
        eax9 = reinterpret_cast<void**>(-reinterpret_cast<unsigned char>(eax9));
        *reinterpret_cast<int16_t*>(&esi5) = 1;
        edx6 = reinterpret_cast<void**>(-(reinterpret_cast<unsigned char>(edx6) + cf10));
    }
    if (reinterpret_cast<signed char>(ebx8) < reinterpret_cast<signed char>(0)) {
        cf11 = reinterpret_cast<uint1_t>(!!ecx7);
        ecx7 = reinterpret_cast<void**>(-reinterpret_cast<unsigned char>(ecx7));
        ebx8 = reinterpret_cast<void**>(-(reinterpret_cast<unsigned char>(ebx8) + cf11));
    }
    fun_649488c0(eax9, edx6, ecx7, ebx8, reinterpret_cast<int32_t>(__zero_stack_offset()) - 4 - 4 - 4 - 40 + 32);
    eax12 = v13;
    if (esi5) {
        eax12 = -eax12;
    }
    return eax12;
}

struct s23 {
    void** f0;
    signed char[3] pad4;
    void** f4;
};

int32_t QueryPerformanceFrequency = 0xe4f8;

int32_t QueryPerformanceCounter = 0xe4de;

int32_t GetSystemTimeAsFileTime = 0xe438;

int32_t GetProcessTimes = 0xe40c;

int32_t GetThreadTimes = 0xe47a;

int32_t clock_gettime(int32_t a1, struct s23* a2) {
    void* ebp3;
    void** v4;
    int32_t eax5;
    int32_t eax6;
    void* v7;
    void* v8;
    void* v9;
    void* v10;
    int32_t* eax11;
    void** v12;
    void** v13;
    void** v14;
    void** v15;
    void** eax16;
    int32_t eax17;
    void** tmp32_18;
    void** eax19;
    void** tmp32_20;
    void** v21;
    void** esi22;
    void** edi23;
    void* v24;
    void** eax25;
    int32_t eax26;
    void** eax27;
    int32_t eax28;
    void** tmp32_29;
    void** v30;
    void* v31;
    void* v32;
    void* v33;
    void** eax34;
    int32_t eax35;

    ebp3 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4);
    if (a1 == 1) {
        v4 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(ebp3) + 0xffffffd8);
        eax5 = reinterpret_cast<int32_t>(QueryPerformanceFrequency(v4));
        if (!eax5 || (eax6 = reinterpret_cast<int32_t>(QueryPerformanceCounter(reinterpret_cast<int32_t>(ebp3) + 0xffffffe0, v4)), eax6 == 0)) {
            addr_64947456_3:
            eax11 = reinterpret_cast<int32_t*>(_errno(v4, v7, v8, v9, v10));
            *eax11 = 22;
            return -1;
        } else {
            eax16 = fun_64948ce0(v12, v13, v14, v15);
            a2->f0 = eax16;
            eax17 = fun_64948d50(v12, v13, v14, v15);
            __asm__("shrd eax, edi, 0x1");
            tmp32_18 = v14 + eax17 * 0x3b9aca00;
            eax19 = fun_64948ce0(tmp32_18, (reinterpret_cast<signed char>(v15) >> 1) + (reinterpret_cast<int32_t>(__intrinsic()) + reinterpret_cast<unsigned char>(v13) * 0x3b9aca00) + reinterpret_cast<uint1_t>(reinterpret_cast<unsigned char>(tmp32_18) < reinterpret_cast<unsigned char>(v14)), v14, v15);
            a2->f4 = eax19;
            if (reinterpret_cast<signed char>(eax19) > reinterpret_cast<signed char>(0x3b9ac9ff)) {
                a2->f4 = eax19 - 0x3b9aca00;
                a2->f0 = eax16 + 1;
            }
        }
    } else {
        if (a1 <= 1) {
            if (a1) 
                goto addr_64947456_3;
            GetSystemTimeAsFileTime(reinterpret_cast<int32_t>(ebp3) + 0xffffffc8);
            tmp32_20 = v21 + 0x2ac18000;
            esi22 = tmp32_20;
            edi23 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(v24) - 0x19db1df + reinterpret_cast<uint1_t>(reinterpret_cast<unsigned char>(tmp32_20) < reinterpret_cast<unsigned char>(v21)));
        } else {
            if (a1 == 2) {
                eax25 = reinterpret_cast<void**>(GetCurrentProcess());
                v10 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(ebp3) - 32);
                v9 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(ebp3) - 40);
                v8 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(ebp3) - 48);
                v7 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(ebp3) - 56);
                v4 = eax25;
                eax26 = reinterpret_cast<int32_t>(GetProcessTimes(v4, v7, v8, v9, v10));
                if (!eax26) 
                    goto addr_64947456_3;
            } else {
                if (a1 != 3) 
                    goto addr_64947456_3;
                eax27 = reinterpret_cast<void**>(GetCurrentThread());
                v10 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(ebp3) - 32);
                v9 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(ebp3) - 40);
                v8 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(ebp3) - 48);
                v7 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(ebp3) - 56);
                v4 = eax27;
                eax28 = reinterpret_cast<int32_t>(GetThreadTimes(v4, v7, v8, v9, v10));
                if (!eax28) 
                    goto addr_64947456_3;
            }
            tmp32_29 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(v30) + reinterpret_cast<uint32_t>(v31));
            esi22 = tmp32_29;
            edi23 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(v32) + reinterpret_cast<int32_t>(v33) + reinterpret_cast<uint1_t>(reinterpret_cast<unsigned char>(tmp32_29) < reinterpret_cast<unsigned char>(v30)));
        }
        eax34 = fun_64948e00(esi22, edi23, 0x989680, 0, v9, v10);
        a2->f0 = eax34;
        eax35 = fun_64948e40(esi22, edi23, 0x989680, 0, v9, v10);
        a2->f4 = reinterpret_cast<void**>(eax35 * 100);
    }
    return 0;
}

struct s24 {
    void** f0;
    signed char[3] pad4;
    int32_t f4;
};

int32_t nanosleep(struct s23* a1, struct s24* a2) {
    void* ebp3;
    void** ebx4;
    void** ecx5;
    int32_t* eax6;
    int32_t eax7;
    void** ecx8;
    void** edx9;
    void** ebx10;
    void** edi11;
    void** v12;
    void** v13;
    void** esi14;
    void** tmp32_15;
    uint1_t cf16;
    void** v17;
    void** v18;
    void** v19;
    void** v20;
    void** v21;
    void** v22;
    void** v23;
    void** v24;
    void** v25;
    void** v26;
    int32_t eax27;
    void** v28;
    void** v29;
    void** v30;
    void** v31;
    void** v32;
    void** v33;
    void** v34;
    void** v35;
    void** v36;
    void** edx37;
    void* v38;
    int32_t v39;
    int32_t v40;
    void* v41;
    void* v42;
    void** v43;
    uint32_t v44;
    void* v45;
    void* v46;
    void** eax47;
    int32_t eax48;
    void** ebx49;
    void** esi50;
    void** edi51;
    void* v52;
    void* v53;
    void** eax54;
    void* v55;
    void* v56;
    int32_t eax57;
    int32_t* eax58;

    ebp3 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4);
    ebx4 = a1->f0;
    if (reinterpret_cast<signed char>(ebx4) < reinterpret_cast<signed char>(0) || (ecx5 = a1->f4, reinterpret_cast<unsigned char>(ecx5) > reinterpret_cast<unsigned char>(0x3b9ac9ff))) {
        eax6 = reinterpret_cast<int32_t*>(_errno());
        *eax6 = 22;
        eax7 = -1;
    } else {
        if (a2) {
            GetSystemTimeAsFileTime(reinterpret_cast<int32_t>(ebp3) + 0xffffffd8);
            ebx4 = a1->f0;
            ecx5 = a1->f4;
        }
        ecx8 = reinterpret_cast<void**>(reinterpret_cast<signed char>(ecx5) >> 31);
        edx9 = reinterpret_cast<void**>((__intrinsic() >> 18) - reinterpret_cast<unsigned char>(ecx8));
        ebx10 = edx9 + reinterpret_cast<unsigned char>(ebx4) * 0x3e8;
        __asm__("cdq ");
        edi11 = edx9;
        v12 = ebx10;
        v13 = edx9;
        if (!(reinterpret_cast<unsigned char>(edx9) | reinterpret_cast<unsigned char>(ebx10))) 
            goto addr_64947766_6;
        esi14 = ebx10;
        do {
            if (reinterpret_cast<unsigned char>(edi11) > reinterpret_cast<unsigned char>(0)) 
                goto addr_64947770_9;
            if (reinterpret_cast<unsigned char>(esi14) <= reinterpret_cast<unsigned char>(0xfffffffd)) 
                goto addr_6494775a_11;
            addr_64947770_9:
            tmp32_15 = esi14 + 2;
            cf16 = reinterpret_cast<uint1_t>(reinterpret_cast<unsigned char>(tmp32_15) < reinterpret_cast<unsigned char>(esi14));
            esi14 = tmp32_15;
            v17 = reinterpret_cast<void**>(0xfffffffe);
            edi11 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(edi11 + 0xffffffff) + cf16);
            eax27 = fun_64945a20(ecx8, 0xfffffffe, v18, v19, v20, v21, v22, v12, v13, v23, v24, v25, v26);
            if (eax27) 
                goto addr_64947762_12;
            ecx8 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(esi14) | reinterpret_cast<unsigned char>(edi11));
        } while (ecx8);
        goto addr_6494778c_14;
    }
    addr_64947768_15:
    return eax7;
    addr_6494775a_11:
    v17 = esi14;
    eax27 = fun_64945a20(ecx8, v17, v28, v29, v30, v31, v32, v12, v13, v33, v34, v35, v36);
    addr_64947762_12:
    if (eax27) {
        if (a2) {
            GetSystemTimeAsFileTime(reinterpret_cast<int32_t>(ebp3) + 0xffffffe0);
            edx37 = reinterpret_cast<void**>(reinterpret_cast<uint32_t>(v38) - (v39 + reinterpret_cast<uint1_t>(reinterpret_cast<uint32_t>(v38) < v40 + reinterpret_cast<uint1_t>(reinterpret_cast<uint32_t>(v41) < reinterpret_cast<uint32_t>(v42)))));
            v43 = reinterpret_cast<void**>(0x2710);
            v17 = edx37;
            eax47 = fun_64948e00(reinterpret_cast<uint32_t>(v41) - v44, v17, 0x2710, 0, v45, v46);
            if (reinterpret_cast<unsigned char>(v13) < reinterpret_cast<unsigned char>(edx37) || reinterpret_cast<unsigned char>(v13) <= reinterpret_cast<unsigned char>(edx37) && reinterpret_cast<unsigned char>(ebx10) <= reinterpret_cast<unsigned char>(eax47)) {
                eax48 = 0;
                ebx49 = reinterpret_cast<void**>(0);
            } else {
                esi50 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(v12) - reinterpret_cast<unsigned char>(eax47));
                edi51 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(v13) - (reinterpret_cast<unsigned char>(edx37) + reinterpret_cast<uint1_t>(reinterpret_cast<unsigned char>(v13) < reinterpret_cast<unsigned char>(reinterpret_cast<unsigned char>(edx37) + reinterpret_cast<uint1_t>(reinterpret_cast<unsigned char>(v12) < reinterpret_cast<unsigned char>(eax47))))));
                eax54 = fun_64948e00(esi50, edi51, 0x3e8, 0, v52, v53);
                v43 = reinterpret_cast<void**>(0x3e8);
                v17 = edi51;
                ebx49 = eax54;
                eax57 = fun_64948e40(esi50, v17, 0x3e8, 0, v55, v56);
                eax48 = eax57 * 0xf4240;
            }
            a2->f0 = ebx49;
            a2->f4 = eax48;
        }
        eax58 = reinterpret_cast<int32_t*>(_errno(v17, v43, 0));
        *eax58 = 4;
        eax7 = -1;
        goto addr_64947768_15;
    } else {
        addr_64947766_6:
        eax7 = 0;
        goto addr_64947768_15;
    }
    addr_6494778c_14:
    goto addr_64947762_12;
}

int32_t _lock = 0xe732;

void fun_64948f74(int32_t a1) {
    goto _lock;
}

int32_t __dllonexit = 0xe6cc;

int32_t fun_64948f7c(int32_t a1, void* a2, void* a3) {
    goto __dllonexit;
}

int32_t _unlock = 0xe750;

void fun_64948f84(int32_t a1, void* a2, void* a3) {
    goto _unlock;
}

/* (image base) */
int16_t image_base_;

uint32_t fun_649483f0(int32_t a1);

struct s25 {
    signed char[60] pad60;
    int32_t f60;
};

struct s2* fun_64948430(struct s25* a1, uint32_t a2);

struct s2* fun_64948510(void** a1, void** a2, void** a3) {
    int1_t zf4;
    int32_t v5;
    uint32_t eax6;
    struct s2* eax7;

    zf4 = image_base_ == 0x5a4d;
    if (!zf4 || (eax6 = fun_649483f0(v5), eax6 == 0)) {
        return 0;
    } else {
        eax7 = fun_64948430(0x64940000, a1 - 0x64940000);
        return eax7;
    }
}

int32_t fun_64948600(void** a1, void** a2, void** a3) {
    int1_t zf4;
    uint32_t eax5;

    zf4 = image_base_ == 0x5a4d;
    if (!zf4 || (eax5 = fun_649483f0(__return_address()), eax5 == 0)) {
        return 0;
    } else {
        return 0x64940000;
    }
}

int32_t memcpy = 0xe7a4;

void fun_64948f9c(void** a1, void** a2, void** a3, void** a4, void** a5, void** a6, int32_t a7, void** a8, void** a9, void** a10) {
    goto memcpy;
}

void fun_64948f8c(int32_t a1, int32_t a2, int32_t a3, void** a4);

void fun_64948f94();

struct s26 {
    void** f0;
    signed char[3] pad4;
    uint32_t f4;
    struct s2* f8;
};

struct s27 {
    void** f0;
    signed char[3] pad4;
    void** f4;
    signed char[3] pad8;
    void** f8;
    signed char[3] pad12;
    void* f12;
};

struct s29 {
    signed char[1687420928] pad1687420928;
    void* f1687420928;
};

struct s28 {
    void** f0;
    signed char[3] pad4;
    void** f4;
    signed char[3] pad8;
    void** f8;
    signed char[3] pad12;
    struct s29* f12;
};

struct s30 {
    int32_t f0;
    void** f4;
    signed char[3] pad8;
    void** f8;
    signed char[3] pad12;
    void** f12;
    signed char[3] pad16;
    int32_t f16;
    void** f20;
    signed char[3] pad24;
    void** f24;
    signed char[3] pad28;
    void** f28;
    signed char[3] pad32;
    void** f32;
    signed char[3] pad36;
    void** f36;
    signed char[3] pad40;
    void** f40;
};

struct s31 {
    struct s29* f0;
    int32_t f4;
    unsigned char f8;
};

struct s32 {
    void** f0;
    signed char[3] pad4;
    void** f4;
};

void** fun_64947a40(void** ecx, void** a2, void** a3, void** a4, int32_t a5, void** a6, void** a7, void** a8, void** a9, void** a10, void** a11) {
    struct s9* eax12;
    struct s9* eax13;
    void** v14;
    void** eax15;
    void* esp16;
    void* ebp17;
    void** esi18;
    void*** esp19;
    void** v20;
    void** ecx21;
    void** v22;
    void** edx23;
    void** ebx24;
    void** v25;
    struct s2* eax26;
    void* esp27;
    void** ecx28;
    struct s26* tmp32_29;
    void** v30;
    int32_t eax31;
    void** edx32;
    void** v33;
    struct s1* eax34;
    int32_t v35;
    int32_t eax36;
    void** edx37;
    int32_t v38;
    void** tmp32_39;
    void** v40;
    void** v41;
    int32_t eax42;
    void** v43;
    void** eax44;
    void** v45;
    struct s1* edx46;
    int32_t v47;
    void** v48;
    void** v49;
    void*** esp50;
    int32_t v51;
    void** v52;
    void** v53;
    void** eax54;
    void* esp55;
    void* ebp56;
    int32_t eax57;
    struct s27* esp58;
    struct s28* ebx59;
    void** eax60;
    void** eax61;
    int32_t edi62;
    void** v63;
    void** v64;
    struct s30* esp65;
    void** eax66;
    struct s30* esp67;
    struct s27* esp68;
    struct s6* eax69;
    int32_t eax70;
    struct s27* esp71;
    struct s30* esp72;
    struct s6* eax73;
    struct s31* ebx74;
    struct s29* edx75;
    int32_t edi76;
    void** eax77;
    void* v78;
    void** ecx79;
    uint32_t ecx80;
    void* edi81;
    struct s30* esp82;
    struct s30* esp83;
    uint32_t ecx84;
    void* edi85;
    struct s30* esp86;
    void** eax87;
    void** ebx88;
    struct s1* eax89;
    void*** esi90;
    void* edi91;
    struct s32* eax92;
    struct s30* esp93;
    int32_t eax94;
    struct s27* esp95;
    struct s1* eax96;
    void** v97;
    struct s30* esp98;
    int1_t less99;
    struct s1* ecx100;
    void** eax101;
    struct s30* esp102;
    struct s30* esp103;
    struct s1* eax104;
    void** v105;
    void** eax106;
    void** v107;
    void** tmp32_108;
    int32_t eax109;
    int32_t v110;
    int32_t v111;
    void** edi112;
    int32_t ebx113;
    void** v114;
    void** v115;
    int32_t v116;
    int32_t v117;
    int32_t v118;
    int32_t v119;

    eax12 = _iob;
    fun_64948f8c("Mingw-w64 runtime failure:\n", 1, 27, &eax12->f64);
    eax13 = _iob;
    v14 = reinterpret_cast<void**>(&eax13->f64);
    fun_64948f94();
    eax15 = fun_64948f4c();
    esp16 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4 - 24 - 4 + 4 - 4 + 4 - 4 + 4 - 4);
    ebp17 = esp16;
    esi18 = eax15;
    esp19 = reinterpret_cast<void***>(reinterpret_cast<int32_t>(esp16) - 4 - 4 - 4 - 76);
    v20 = ecx;
    ecx21 = g6494b06c;
    v22 = edx23;
    if (reinterpret_cast<uint1_t>(reinterpret_cast<signed char>(ecx21) < reinterpret_cast<signed char>(0)) | reinterpret_cast<uint1_t>(ecx21 == 0)) {
        while (1) {
            ebx24 = reinterpret_cast<void**>(0);
            addr_64947ae6_4:
            eax26 = fun_64948510(esi18, v25, 28);
            esp27 = reinterpret_cast<void*>(esp19 - 4 + 4);
            if (!eax26) 
                break;
            ecx28 = reinterpret_cast<void**>(reinterpret_cast<uint32_t>(ebx24 + reinterpret_cast<unsigned char>(ebx24) * 2) << 2);
            tmp32_29 = reinterpret_cast<struct s26*>(reinterpret_cast<unsigned char>(ecx28) + reinterpret_cast<uint32_t>(g6494b070));
            v30 = ecx28;
            tmp32_29->f8 = eax26;
            tmp32_29->f0 = reinterpret_cast<void**>(0);
            eax31 = fun_64948600(esi18, v25, 28);
            edx32 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(ebp17) + 0xffffffcc);
            v33 = edx32;
            tmp32_29->f4 = eax31 + eax26->f12;
            eax34 = g6494b070;
            v25 = edx32;
            ebx24 = VirtualQuery;
            v35 = *reinterpret_cast<int32_t*>(reinterpret_cast<uint32_t>(eax34) + reinterpret_cast<unsigned char>(v30) + 4);
            eax36 = reinterpret_cast<int32_t>(ebx24(v35, v25, 28));
            ecx21 = v30;
            edx37 = v33;
            esp19 = reinterpret_cast<void***>(reinterpret_cast<int32_t>(esp27) - 4 + 4 - 4 + 4 - 12);
            if (!eax36) 
                goto addr_64947c97_6;
            if (v38 == 4) 
                goto addr_64947b63_8;
            if (v38 == 64) 
                goto addr_64947b63_8;
            tmp32_39 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(ecx21) + reinterpret_cast<uint32_t>(g6494b070));
            ecx21 = tmp32_39;
            v30 = edx37;
            eax42 = reinterpret_cast<int32_t>(VirtualProtect(v40, v41, 64, ecx21, v25, 28));
            edx37 = v30;
            esp19 = esp19 - 4 + 4 - 16;
            if (eax42) 
                goto addr_64947b63_8;
            eax44 = reinterpret_cast<void**>(GetLastError("  VirtualProtect failed with code 0x%x", v43));
            v43 = eax44;
            fun_64947a40(ecx21, "  VirtualProtect failed with code 0x%x", v43, v45, 0x64947c65, v40, v41, 64, ecx21, v25, 28);
            esp19 = esp19 - 4 + 4 - 4 + 4;
            esi18 = esi18;
        }
    } else {
        edx46 = g6494b070;
        ebx24 = reinterpret_cast<void**>(0);
        while (reinterpret_cast<unsigned char>(esi18) < reinterpret_cast<unsigned char>(edx46->f4) || reinterpret_cast<unsigned char>(esi18) >= reinterpret_cast<unsigned char>(reinterpret_cast<unsigned char>(edx46->f4) + reinterpret_cast<unsigned char>(edx46->f8->f8))) {
            ++ebx24;
            ++edx46;
            if (ebx24 == ecx21) 
                goto addr_64947ae6_4;
        }
        edx37 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(ebp17) + 0xffffffcc);
        ebx24 = VirtualQuery;
        goto addr_64947b6a_16;
    }
    addr_64947cb7_17:
    fun_64947a40(ecx21, "Address %p has no image-section", esi18, 28, v47, v33, v30, v20, v22, v48, v49);
    esp50 = reinterpret_cast<void***>(reinterpret_cast<int32_t>(esp27) - 4 + 4);
    fun_64947a40(ecx21, "  VirtualQuery failed for %d bytes at address %p", 28, esi18, v51, v33, v30, v20, v22, v52, v53);
    eax54 = g6494b068;
    if (eax54) {
        goto "  VirtualQuery failed for %d bytes at address %p";
    }
    esp55 = reinterpret_cast<void*>(esp50 - 4 + 4 - 4);
    ebp56 = esp55;
    g6494b068 = reinterpret_cast<void**>(1);
    fun_64948560();
    eax57 = fun_64948e80(ecx21);
    g6494b06c = reinterpret_cast<void**>(0);
    esp58 = reinterpret_cast<struct s27*>(reinterpret_cast<int32_t>(esp55) - 4 - 4 - 4 - 76 - 4 + 4 - 4 + 4 - eax57);
    g6494b070 = reinterpret_cast<struct s1*>(reinterpret_cast<uint32_t>(reinterpret_cast<int32_t>(esp58) + 31) & 0xfffffff0);
    if (1) 
        goto addr_64947de1_22;
    if (1) {
        ebx59 = reinterpret_cast<struct s28*>(0x6494aa28);
    } else {
        eax60 = g6494aa28;
        if (eax60 || (eax61 = g6494aa2c, !!eax61)) {
            ebx59 = reinterpret_cast<struct s28*>(0x6494aa28);
            goto addr_64947dee_27;
        } else {
            edi62 = g6494aa30;
            ebx59 = reinterpret_cast<struct s28*>(0x6494aa34);
            if (edi62) {
                ebx59 = reinterpret_cast<struct s28*>(0x6494aa28);
                goto addr_64947d80_30;
            }
        }
    }
    if (ebx59->f0) {
        addr_64947dee_27:
        if (reinterpret_cast<uint32_t>(ebx59) >= 0x6494aa28) {
            addr_64947de1_22:
            goto "  VirtualQuery failed for %d bytes at address %p";
        } else {
            v63 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(ebp56) + 0xffffffcc);
            do {
                ebx59 = reinterpret_cast<struct s28*>(&ebx59->f8);
                v64 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(*reinterpret_cast<void**>(ebx59->f4 + 0x64940000)) + reinterpret_cast<uint32_t>(*reinterpret_cast<void**>(reinterpret_cast<uint32_t>(ebx59) - 8)));
                esp65 = reinterpret_cast<struct s30*>(reinterpret_cast<int32_t>(esp58) - 4);
                esp65->f0 = 0x64947e25;
                fun_64947aa0(4);
                esp58 = reinterpret_cast<struct s27*>(&esp65->f4);
            } while (reinterpret_cast<uint32_t>(ebx59) < 0x6494aa28);
        }
    } else {
        ecx21 = ebx59->f4;
        if (!ecx21) {
            addr_64947d80_30:
            eax66 = ebx59->f8;
            if (!reinterpret_cast<int1_t>(eax66 == 1)) {
                addr_64947fa3_35:
                esp58->f4 = eax66;
                esp58->f0 = reinterpret_cast<void**>("  Unknown pseudo relocation protocol version %d.\n");
                esp67 = reinterpret_cast<struct s30*>(reinterpret_cast<int32_t>(esp58) - 4);
                esp67->f0 = 0x64947fb3;
                fun_64947a40(ecx21, esp67->f4, esp67->f8, esp67->f12, esp67->f16, esp67->f20, esp67->f24, esp67->f28, esp67->f32, esp67->f36, esp67->f40);
                esp68 = reinterpret_cast<struct s27*>(&esp67->f4);
                eax69 = image_base_;
                eax70 = eax69->f0;
                if (eax70) {
                    esp71 = reinterpret_cast<struct s27*>(reinterpret_cast<int32_t>(esp68) - 12);
                    do {
                        esp72 = reinterpret_cast<struct s30*>(reinterpret_cast<int32_t>(esp71) - 4);
                        esp72->f0 = 0x64947fd2;
                        eax70();
                        esp71 = reinterpret_cast<struct s27*>(&esp72->f4);
                        eax73 = image_base_;
                        eax70 = eax73->f4;
                        image_base_ = reinterpret_cast<struct s6*>(&eax73->f4);
                    } while (eax70);
                    esp68 = reinterpret_cast<struct s27*>(&esp71->f12);
                    goto addr_64947fea_39;
                }
            } else {
                ebx74 = reinterpret_cast<struct s31*>(&ebx59->f12);
                if (reinterpret_cast<uint32_t>(ebx74) >= 0x6494aa28) 
                    goto addr_64947de1_22;
                do {
                    edx75 = ebx74->f0;
                    edi76 = ebx74->f4;
                    eax77 = reinterpret_cast<void**>(edi76 + 0x64940000);
                    v78 = *reinterpret_cast<void**>(reinterpret_cast<uint32_t>(edx75) + 0x64940000);
                    ecx79 = reinterpret_cast<void**>(static_cast<uint32_t>(ebx74->f8));
                    if (ecx79 == 16) {
                        ecx80 = reinterpret_cast<uint16_t>(*reinterpret_cast<void**>(edi76 + 0x64940000));
                        edi81 = reinterpret_cast<void*>(static_cast<uint32_t>(*reinterpret_cast<uint16_t*>(&ecx80)));
                        if (*reinterpret_cast<int16_t*>(&ecx80) < reinterpret_cast<int16_t>(0)) {
                            edi81 = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(edi81) | 0xffff0000);
                        }
                        v63 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(ebp56) + 0xffffffcc);
                        v64 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(v78) + (reinterpret_cast<uint32_t>(edi81) - reinterpret_cast<uint32_t>(edx75) - 0x64940000));
                        esp82 = reinterpret_cast<struct s30*>(reinterpret_cast<int32_t>(esp58) - 4);
                        esp82->f0 = 0x64947f0d;
                        fun_64947aa0(2);
                        esp58 = reinterpret_cast<struct s27*>(&esp82->f4);
                        continue;
                    } else {
                        if (ecx79 == 32) {
                            v63 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(ebp56) + 0xffffffcc);
                            v64 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(v78) - (reinterpret_cast<uint32_t>(edx75) + 0x64940000) + reinterpret_cast<unsigned char>(*eax77));
                            esp83 = reinterpret_cast<struct s30*>(reinterpret_cast<int32_t>(esp58) - 4);
                            esp83->f0 = 0x64947f7c;
                            fun_64947aa0(4);
                            esp58 = reinterpret_cast<struct s27*>(&esp83->f4);
                            continue;
                        } else {
                            if (ecx79 != 8) 
                                goto addr_64947dca_48;
                            ecx84 = reinterpret_cast<unsigned char>(*eax77);
                            edi85 = reinterpret_cast<void*>(static_cast<uint32_t>(*reinterpret_cast<unsigned char*>(&ecx84)));
                            if (*reinterpret_cast<signed char*>(&ecx84) >= reinterpret_cast<signed char>(0)) 
                                goto addr_64947f34_50;
                        }
                    }
                    edi85 = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(edi85) | 0xffffff00);
                    addr_64947f34_50:
                    v63 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(ebp56) + 0xffffffcc);
                    v64 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(v78) + (reinterpret_cast<uint32_t>(edi85) - 0x64940000 - reinterpret_cast<uint32_t>(edx75)));
                    esp86 = reinterpret_cast<struct s30*>(reinterpret_cast<int32_t>(esp58) - 4);
                    esp86->f0 = 0x64947f57;
                    fun_64947aa0(1);
                    esp58 = reinterpret_cast<struct s27*>(&esp86->f4);
                    ebx74 = reinterpret_cast<struct s31*>(reinterpret_cast<uint32_t>(ebx74) + 12);
                } while (reinterpret_cast<uint32_t>(ebx74) < 0x6494aa28);
                goto addr_64947f1c_53;
            }
        } else {
            goto addr_64947dee_27;
        }
    }
    addr_64947e2d_55:
    eax87 = g6494b06c;
    ebx88 = reinterpret_cast<void**>(0);
    if (!reinterpret_cast<uint1_t>(reinterpret_cast<uint1_t>(reinterpret_cast<signed char>(eax87) < reinterpret_cast<signed char>(0)) | reinterpret_cast<uint1_t>(eax87 == 0))) {
        do {
            eax89 = g6494b070;
            esi90 = reinterpret_cast<void***>(ebx88 + reinterpret_cast<unsigned char>(ebx88) * 2);
            edi91 = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(esi90) * 4);
            eax92 = reinterpret_cast<struct s32*>(reinterpret_cast<uint32_t>(eax89) + reinterpret_cast<uint32_t>(edi91));
            if (eax92->f0) {
                esp58->f8 = reinterpret_cast<void**>(28);
                esp58->f4 = v63;
                esp58->f0 = eax92->f4;
                esp93 = reinterpret_cast<struct s30*>(reinterpret_cast<int32_t>(esp58) - 4);
                esp93->f0 = 0x64947e7d;
                eax94 = reinterpret_cast<int32_t>(VirtualQuery());
                esp95 = reinterpret_cast<struct s27*>(&esp93->f4 - 12);
                if (!eax94) 
                    break;
                esp95->f12 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(ebp56) - 56);
                eax96 = g6494b070;
                esp95->f8 = *reinterpret_cast<void***>(reinterpret_cast<uint32_t>(eax96) + reinterpret_cast<uint32_t>(esi90) * 4);
                esp95->f4 = v97;
                esp95->f0 = v64;
                esp98 = reinterpret_cast<struct s30*>(reinterpret_cast<int32_t>(esp95) - 4);
                esp98->f0 = 0x64947eae;
                VirtualProtect();
                esp58 = reinterpret_cast<struct s27*>(&esp98->f4 - 16);
            }
            ++ebx88;
            less99 = reinterpret_cast<signed char>(ebx88) < reinterpret_cast<signed char>(g6494b06c);
        } while (less99);
        goto addr_64947de1_22;
    } else {
        goto addr_64947de1_22;
    }
    ecx100 = g6494b070;
    ecx21 = reinterpret_cast<void**>(reinterpret_cast<uint32_t>(ecx100) + reinterpret_cast<uint32_t>(edi91));
    esp95->f8 = *reinterpret_cast<void***>(ecx21 + 4);
    eax101 = *reinterpret_cast<void***>(*reinterpret_cast<void***>(ecx21 + 8) + 8);
    esp95->f0 = reinterpret_cast<void**>("  VirtualQuery failed for %d bytes at address %p");
    esp95->f4 = eax101;
    esp102 = reinterpret_cast<struct s30*>(reinterpret_cast<int32_t>(esp95) - 4);
    esp102->f0 = 0x64947fa3;
    eax66 = fun_64947a40(ecx21, esp102->f4, esp102->f8, esp102->f12, esp102->f16, esp102->f20, esp102->f24, esp102->f28, esp102->f32, esp102->f36, esp102->f40);
    esp58 = reinterpret_cast<struct s27*>(&esp102->f4);
    goto addr_64947fa3_35;
    addr_64947fea_39:
    goto esp68->f0;
    addr_64947f1c_53:
    goto addr_64947e2d_55;
    addr_64947dca_48:
    esp58->f4 = ecx79;
    esp58->f0 = reinterpret_cast<void**>("  Unknown pseudo relocation bit size %d.\n");
    esp103 = reinterpret_cast<struct s30*>(reinterpret_cast<int32_t>(esp58) - 4);
    esp103->f0 = 0x64947de1;
    fun_64947a40(ecx79, esp103->f4, esp103->f8, esp103->f12, esp103->f16, esp103->f20, esp103->f24, esp103->f28, esp103->f32, esp103->f36, esp103->f40);
    goto addr_64947de1_22;
    addr_64947c97_6:
    eax104 = g6494b070;
    v105 = *reinterpret_cast<void***>(reinterpret_cast<uint32_t>(eax104) + reinterpret_cast<unsigned char>(ecx21) + 4);
    eax106 = eax26->f8;
    fun_64947a40(ecx21, "  VirtualQuery failed for %d bytes at address %p", eax106, v105, v35, v25, 28, v107, v33, v30, v20);
    esp27 = reinterpret_cast<void*>(esp19 - 4 + 4);
    goto addr_64947cb7_17;
    addr_64947b63_8:
    tmp32_108 = g6494b06c + 1;
    g6494b06c = tmp32_108;
    addr_64947b6a_16:
    eax109 = reinterpret_cast<int32_t>(ebx24(esi18, edx37, 28));
    esp50 = esp19 - 4 + 4 - 12;
    if (eax109) {
        if (v110 == 4 || v110 == 64) {
            fun_64948f9c(esi18, v22, v20, esi18, edx37, 28, v111, v33, v30, v20);
        } else {
            edi112 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(ebp17) + 0xffffffc8);
            ebx113 = VirtualProtect;
            ebx113(v114, v115, 64, edi112, edx37, 28);
            fun_64948f9c(esi18, v22, v20, 0x64947be9, v114, v115, 64, edi112, edx37, 28);
            if (v116 != 64 && v116 != 4) {
                ebx113(v117, v118, v119, edi112, v114, v115, 64, edi112, edx37, 28);
                goto v14;
            }
        }
        goto v14;
    }
}

struct s33 {
    void** f0;
    signed char[3] pad4;
    uint32_t f4;
    struct s2* f8;
};

struct s34 {
    void** f0;
    signed char[3] pad4;
    void** f4;
    signed char[3] pad8;
    void** f8;
    signed char[3] pad12;
    void* f12;
};

struct s36 {
    signed char[1687420928] pad1687420928;
    void* f1687420928;
};

struct s35 {
    void** f0;
    signed char[3] pad4;
    void** f4;
    signed char[3] pad8;
    void** f8;
    signed char[3] pad12;
    struct s36* f12;
};

struct s37 {
    int32_t f0;
    void** f4;
    signed char[3] pad8;
    void** f8;
    signed char[3] pad12;
    void** f12;
    signed char[3] pad16;
    int32_t f16;
    void** f20;
    signed char[3] pad24;
    void** f24;
    signed char[3] pad28;
    void** f28;
    signed char[3] pad32;
    void** f32;
    signed char[3] pad36;
    void** f36;
    signed char[3] pad40;
    void** f40;
};

struct s38 {
    struct s36* f0;
    int32_t f4;
    unsigned char f8;
};

struct s39 {
    void** f0;
    signed char[3] pad4;
    void** f4;
};

void fun_64947aa0(void** ecx) {
    void* esp2;
    void* ebp3;
    void** esi4;
    void** eax5;
    void*** esp6;
    void** v7;
    void** ecx8;
    void** v9;
    void** edx10;
    void** ebx11;
    void** v12;
    struct s2* eax13;
    void* esp14;
    void** ecx15;
    struct s33* tmp32_16;
    void** v17;
    int32_t eax18;
    void** edx19;
    void** v20;
    struct s1* eax21;
    int32_t v22;
    int32_t eax23;
    void** edx24;
    int32_t v25;
    void** tmp32_26;
    void** v27;
    void** v28;
    int32_t eax29;
    void** v30;
    void** eax31;
    void** v32;
    struct s1* edx33;
    int32_t v34;
    void** v35;
    void** v36;
    void*** esp37;
    int32_t v38;
    void** v39;
    void** v40;
    void** eax41;
    void* esp42;
    void* ebp43;
    int32_t eax44;
    struct s34* esp45;
    struct s35* ebx46;
    void** eax47;
    void** eax48;
    int32_t edi49;
    void** v50;
    void** v51;
    struct s37* esp52;
    void** eax53;
    struct s37* esp54;
    struct s34* esp55;
    struct s6* eax56;
    int32_t eax57;
    struct s34* esp58;
    struct s37* esp59;
    struct s6* eax60;
    struct s38* ebx61;
    struct s36* edx62;
    int32_t edi63;
    void** eax64;
    void* v65;
    void** ecx66;
    uint32_t ecx67;
    void* edi68;
    struct s37* esp69;
    struct s37* esp70;
    uint32_t ecx71;
    void* edi72;
    struct s37* esp73;
    void** eax74;
    void** ebx75;
    struct s1* eax76;
    void*** esi77;
    void* edi78;
    struct s39* eax79;
    struct s37* esp80;
    int32_t eax81;
    struct s34* esp82;
    struct s1* eax83;
    void** v84;
    struct s37* esp85;
    int1_t less86;
    struct s1* ecx87;
    void** eax88;
    struct s37* esp89;
    struct s37* esp90;
    struct s1* eax91;
    void** v92;
    void** eax93;
    void** v94;
    void** tmp32_95;
    int32_t eax96;
    int32_t v97;
    int32_t v98;
    void** edi99;
    int32_t ebx100;
    void** v101;
    void** v102;
    int32_t v103;
    int32_t v104;
    int32_t v105;
    int32_t v106;

    esp2 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4);
    ebp3 = esp2;
    esi4 = eax5;
    esp6 = reinterpret_cast<void***>(reinterpret_cast<int32_t>(esp2) - 4 - 4 - 4 - 76);
    v7 = ecx;
    ecx8 = g6494b06c;
    v9 = edx10;
    if (reinterpret_cast<uint1_t>(reinterpret_cast<signed char>(ecx8) < reinterpret_cast<signed char>(0)) | reinterpret_cast<uint1_t>(ecx8 == 0)) {
        while (1) {
            ebx11 = reinterpret_cast<void**>(0);
            addr_64947ae6_3:
            eax13 = fun_64948510(esi4, v12, 28);
            esp14 = reinterpret_cast<void*>(esp6 - 4 + 4);
            if (!eax13) 
                break;
            ecx15 = reinterpret_cast<void**>(reinterpret_cast<uint32_t>(ebx11 + reinterpret_cast<unsigned char>(ebx11) * 2) << 2);
            tmp32_16 = reinterpret_cast<struct s33*>(reinterpret_cast<unsigned char>(ecx15) + reinterpret_cast<uint32_t>(g6494b070));
            v17 = ecx15;
            tmp32_16->f8 = eax13;
            tmp32_16->f0 = reinterpret_cast<void**>(0);
            eax18 = fun_64948600(esi4, v12, 28);
            edx19 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(ebp3) + 0xffffffcc);
            v20 = edx19;
            tmp32_16->f4 = eax18 + eax13->f12;
            eax21 = g6494b070;
            v12 = edx19;
            ebx11 = VirtualQuery;
            v22 = *reinterpret_cast<int32_t*>(reinterpret_cast<uint32_t>(eax21) + reinterpret_cast<unsigned char>(v17) + 4);
            eax23 = reinterpret_cast<int32_t>(ebx11(v22, v12, 28));
            ecx8 = v17;
            edx24 = v20;
            esp6 = reinterpret_cast<void***>(reinterpret_cast<int32_t>(esp14) - 4 + 4 - 4 + 4 - 12);
            if (!eax23) 
                goto addr_64947c97_5;
            if (v25 == 4) 
                goto addr_64947b63_7;
            if (v25 == 64) 
                goto addr_64947b63_7;
            tmp32_26 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(ecx8) + reinterpret_cast<uint32_t>(g6494b070));
            ecx8 = tmp32_26;
            v17 = edx24;
            eax29 = reinterpret_cast<int32_t>(VirtualProtect(v27, v28, 64, ecx8, v12, 28));
            edx24 = v17;
            esp6 = esp6 - 4 + 4 - 16;
            if (eax29) 
                goto addr_64947b63_7;
            eax31 = reinterpret_cast<void**>(GetLastError("  VirtualProtect failed with code 0x%x", v30));
            v30 = eax31;
            fun_64947a40(ecx8, "  VirtualProtect failed with code 0x%x", v30, v32, 0x64947c65, v27, v28, 64, ecx8, v12, 28);
            esp6 = esp6 - 4 + 4 - 4 + 4;
            esi4 = esi4;
        }
    } else {
        edx33 = g6494b070;
        ebx11 = reinterpret_cast<void**>(0);
        while (reinterpret_cast<unsigned char>(esi4) < reinterpret_cast<unsigned char>(edx33->f4) || reinterpret_cast<unsigned char>(esi4) >= reinterpret_cast<unsigned char>(reinterpret_cast<unsigned char>(edx33->f4) + reinterpret_cast<unsigned char>(edx33->f8->f8))) {
            ++ebx11;
            ++edx33;
            if (ebx11 == ecx8) 
                goto addr_64947ae6_3;
        }
        edx24 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(ebp3) + 0xffffffcc);
        ebx11 = VirtualQuery;
        goto addr_64947b6a_15;
    }
    addr_64947cb7_16:
    fun_64947a40(ecx8, "Address %p has no image-section", esi4, 28, v34, v20, v17, v7, v9, v35, v36);
    esp37 = reinterpret_cast<void***>(reinterpret_cast<int32_t>(esp14) - 4 + 4);
    fun_64947a40(ecx8, "  VirtualQuery failed for %d bytes at address %p", 28, esi4, v38, v20, v17, v7, v9, v39, v40);
    eax41 = g6494b068;
    if (eax41) {
        goto "  VirtualQuery failed for %d bytes at address %p";
    }
    esp42 = reinterpret_cast<void*>(esp37 - 4 + 4 - 4);
    ebp43 = esp42;
    g6494b068 = reinterpret_cast<void**>(1);
    fun_64948560();
    eax44 = fun_64948e80(ecx8);
    g6494b06c = reinterpret_cast<void**>(0);
    esp45 = reinterpret_cast<struct s34*>(reinterpret_cast<int32_t>(esp42) - 4 - 4 - 4 - 76 - 4 + 4 - 4 + 4 - eax44);
    g6494b070 = reinterpret_cast<struct s1*>(reinterpret_cast<uint32_t>(reinterpret_cast<int32_t>(esp45) + 31) & 0xfffffff0);
    if (1) 
        goto addr_64947de1_21;
    if (1) {
        ebx46 = reinterpret_cast<struct s35*>(0x6494aa28);
    } else {
        eax47 = g6494aa28;
        if (eax47 || (eax48 = g6494aa2c, !!eax48)) {
            ebx46 = reinterpret_cast<struct s35*>(0x6494aa28);
            goto addr_64947dee_26;
        } else {
            edi49 = g6494aa30;
            ebx46 = reinterpret_cast<struct s35*>(0x6494aa34);
            if (edi49) {
                ebx46 = reinterpret_cast<struct s35*>(0x6494aa28);
                goto addr_64947d80_29;
            }
        }
    }
    if (ebx46->f0) {
        addr_64947dee_26:
        if (reinterpret_cast<uint32_t>(ebx46) >= 0x6494aa28) {
            addr_64947de1_21:
            goto "  VirtualQuery failed for %d bytes at address %p";
        } else {
            v50 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(ebp43) + 0xffffffcc);
            do {
                ebx46 = reinterpret_cast<struct s35*>(&ebx46->f8);
                v51 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(*reinterpret_cast<void**>(ebx46->f4 + 0x64940000)) + reinterpret_cast<uint32_t>(*reinterpret_cast<void**>(reinterpret_cast<uint32_t>(ebx46) - 8)));
                esp52 = reinterpret_cast<struct s37*>(reinterpret_cast<int32_t>(esp45) - 4);
                esp52->f0 = 0x64947e25;
                fun_64947aa0(4);
                esp45 = reinterpret_cast<struct s34*>(&esp52->f4);
            } while (reinterpret_cast<uint32_t>(ebx46) < 0x6494aa28);
        }
    } else {
        ecx8 = ebx46->f4;
        if (!ecx8) {
            addr_64947d80_29:
            eax53 = ebx46->f8;
            if (!reinterpret_cast<int1_t>(eax53 == 1)) {
                addr_64947fa3_34:
                esp45->f4 = eax53;
                esp45->f0 = reinterpret_cast<void**>("  Unknown pseudo relocation protocol version %d.\n");
                esp54 = reinterpret_cast<struct s37*>(reinterpret_cast<int32_t>(esp45) - 4);
                esp54->f0 = 0x64947fb3;
                fun_64947a40(ecx8, esp54->f4, esp54->f8, esp54->f12, esp54->f16, esp54->f20, esp54->f24, esp54->f28, esp54->f32, esp54->f36, esp54->f40);
                esp55 = reinterpret_cast<struct s34*>(&esp54->f4);
                eax56 = image_base_;
                eax57 = eax56->f0;
                if (eax57) {
                    esp58 = reinterpret_cast<struct s34*>(reinterpret_cast<int32_t>(esp55) - 12);
                    do {
                        esp59 = reinterpret_cast<struct s37*>(reinterpret_cast<int32_t>(esp58) - 4);
                        esp59->f0 = 0x64947fd2;
                        eax57();
                        esp58 = reinterpret_cast<struct s34*>(&esp59->f4);
                        eax60 = image_base_;
                        eax57 = eax60->f4;
                        image_base_ = reinterpret_cast<struct s6*>(&eax60->f4);
                    } while (eax57);
                    esp55 = reinterpret_cast<struct s34*>(&esp58->f12);
                    goto addr_64947fea_38;
                }
            } else {
                ebx61 = reinterpret_cast<struct s38*>(&ebx46->f12);
                if (reinterpret_cast<uint32_t>(ebx61) >= 0x6494aa28) 
                    goto addr_64947de1_21;
                do {
                    edx62 = ebx61->f0;
                    edi63 = ebx61->f4;
                    eax64 = reinterpret_cast<void**>(edi63 + 0x64940000);
                    v65 = *reinterpret_cast<void**>(reinterpret_cast<uint32_t>(edx62) + 0x64940000);
                    ecx66 = reinterpret_cast<void**>(static_cast<uint32_t>(ebx61->f8));
                    if (ecx66 == 16) {
                        ecx67 = reinterpret_cast<uint16_t>(*reinterpret_cast<void**>(edi63 + 0x64940000));
                        edi68 = reinterpret_cast<void*>(static_cast<uint32_t>(*reinterpret_cast<uint16_t*>(&ecx67)));
                        if (*reinterpret_cast<int16_t*>(&ecx67) < reinterpret_cast<int16_t>(0)) {
                            edi68 = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(edi68) | 0xffff0000);
                        }
                        v50 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(ebp43) + 0xffffffcc);
                        v51 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(v65) + (reinterpret_cast<uint32_t>(edi68) - reinterpret_cast<uint32_t>(edx62) - 0x64940000));
                        esp69 = reinterpret_cast<struct s37*>(reinterpret_cast<int32_t>(esp45) - 4);
                        esp69->f0 = 0x64947f0d;
                        fun_64947aa0(2);
                        esp45 = reinterpret_cast<struct s34*>(&esp69->f4);
                        continue;
                    } else {
                        if (ecx66 == 32) {
                            v50 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(ebp43) + 0xffffffcc);
                            v51 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(v65) - (reinterpret_cast<uint32_t>(edx62) + 0x64940000) + reinterpret_cast<unsigned char>(*eax64));
                            esp70 = reinterpret_cast<struct s37*>(reinterpret_cast<int32_t>(esp45) - 4);
                            esp70->f0 = 0x64947f7c;
                            fun_64947aa0(4);
                            esp45 = reinterpret_cast<struct s34*>(&esp70->f4);
                            continue;
                        } else {
                            if (ecx66 != 8) 
                                goto addr_64947dca_47;
                            ecx71 = reinterpret_cast<unsigned char>(*eax64);
                            edi72 = reinterpret_cast<void*>(static_cast<uint32_t>(*reinterpret_cast<unsigned char*>(&ecx71)));
                            if (*reinterpret_cast<signed char*>(&ecx71) >= reinterpret_cast<signed char>(0)) 
                                goto addr_64947f34_49;
                        }
                    }
                    edi72 = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(edi72) | 0xffffff00);
                    addr_64947f34_49:
                    v50 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(ebp43) + 0xffffffcc);
                    v51 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(v65) + (reinterpret_cast<uint32_t>(edi72) - 0x64940000 - reinterpret_cast<uint32_t>(edx62)));
                    esp73 = reinterpret_cast<struct s37*>(reinterpret_cast<int32_t>(esp45) - 4);
                    esp73->f0 = 0x64947f57;
                    fun_64947aa0(1);
                    esp45 = reinterpret_cast<struct s34*>(&esp73->f4);
                    ebx61 = reinterpret_cast<struct s38*>(reinterpret_cast<uint32_t>(ebx61) + 12);
                } while (reinterpret_cast<uint32_t>(ebx61) < 0x6494aa28);
                goto addr_64947f1c_52;
            }
        } else {
            goto addr_64947dee_26;
        }
    }
    addr_64947e2d_54:
    eax74 = g6494b06c;
    ebx75 = reinterpret_cast<void**>(0);
    if (!reinterpret_cast<uint1_t>(reinterpret_cast<uint1_t>(reinterpret_cast<signed char>(eax74) < reinterpret_cast<signed char>(0)) | reinterpret_cast<uint1_t>(eax74 == 0))) {
        do {
            eax76 = g6494b070;
            esi77 = reinterpret_cast<void***>(ebx75 + reinterpret_cast<unsigned char>(ebx75) * 2);
            edi78 = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(esi77) * 4);
            eax79 = reinterpret_cast<struct s39*>(reinterpret_cast<uint32_t>(eax76) + reinterpret_cast<uint32_t>(edi78));
            if (eax79->f0) {
                esp45->f8 = reinterpret_cast<void**>(28);
                esp45->f4 = v50;
                esp45->f0 = eax79->f4;
                esp80 = reinterpret_cast<struct s37*>(reinterpret_cast<int32_t>(esp45) - 4);
                esp80->f0 = 0x64947e7d;
                eax81 = reinterpret_cast<int32_t>(VirtualQuery());
                esp82 = reinterpret_cast<struct s34*>(&esp80->f4 - 12);
                if (!eax81) 
                    break;
                esp82->f12 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(ebp43) - 56);
                eax83 = g6494b070;
                esp82->f8 = *reinterpret_cast<void***>(reinterpret_cast<uint32_t>(eax83) + reinterpret_cast<uint32_t>(esi77) * 4);
                esp82->f4 = v84;
                esp82->f0 = v51;
                esp85 = reinterpret_cast<struct s37*>(reinterpret_cast<int32_t>(esp82) - 4);
                esp85->f0 = 0x64947eae;
                VirtualProtect();
                esp45 = reinterpret_cast<struct s34*>(&esp85->f4 - 16);
            }
            ++ebx75;
            less86 = reinterpret_cast<signed char>(ebx75) < reinterpret_cast<signed char>(g6494b06c);
        } while (less86);
        goto addr_64947de1_21;
    } else {
        goto addr_64947de1_21;
    }
    ecx87 = g6494b070;
    ecx8 = reinterpret_cast<void**>(reinterpret_cast<uint32_t>(ecx87) + reinterpret_cast<uint32_t>(edi78));
    esp82->f8 = *reinterpret_cast<void***>(ecx8 + 4);
    eax88 = *reinterpret_cast<void***>(*reinterpret_cast<void***>(ecx8 + 8) + 8);
    esp82->f0 = reinterpret_cast<void**>("  VirtualQuery failed for %d bytes at address %p");
    esp82->f4 = eax88;
    esp89 = reinterpret_cast<struct s37*>(reinterpret_cast<int32_t>(esp82) - 4);
    esp89->f0 = 0x64947fa3;
    eax53 = fun_64947a40(ecx8, esp89->f4, esp89->f8, esp89->f12, esp89->f16, esp89->f20, esp89->f24, esp89->f28, esp89->f32, esp89->f36, esp89->f40);
    esp45 = reinterpret_cast<struct s34*>(&esp89->f4);
    goto addr_64947fa3_34;
    addr_64947fea_38:
    goto esp55->f0;
    addr_64947f1c_52:
    goto addr_64947e2d_54;
    addr_64947dca_47:
    esp45->f4 = ecx66;
    esp45->f0 = reinterpret_cast<void**>("  Unknown pseudo relocation bit size %d.\n");
    esp90 = reinterpret_cast<struct s37*>(reinterpret_cast<int32_t>(esp45) - 4);
    esp90->f0 = 0x64947de1;
    fun_64947a40(ecx66, esp90->f4, esp90->f8, esp90->f12, esp90->f16, esp90->f20, esp90->f24, esp90->f28, esp90->f32, esp90->f36, esp90->f40);
    goto addr_64947de1_21;
    addr_64947c97_5:
    eax91 = g6494b070;
    v92 = *reinterpret_cast<void***>(reinterpret_cast<uint32_t>(eax91) + reinterpret_cast<unsigned char>(ecx8) + 4);
    eax93 = eax13->f8;
    fun_64947a40(ecx8, "  VirtualQuery failed for %d bytes at address %p", eax93, v92, v22, v12, 28, v94, v20, v17, v7);
    esp14 = reinterpret_cast<void*>(esp6 - 4 + 4);
    goto addr_64947cb7_16;
    addr_64947b63_7:
    tmp32_95 = g6494b06c + 1;
    g6494b06c = tmp32_95;
    addr_64947b6a_15:
    eax96 = reinterpret_cast<int32_t>(ebx11(esi4, edx24, 28));
    esp37 = esp6 - 4 + 4 - 12;
    if (eax96) {
        if (v97 == 4 || v97 == 64) {
            fun_64948f9c(esi4, v9, v7, esi4, edx24, 28, v98, v20, v17, v7);
        } else {
            edi99 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(ebp3) + 0xffffffc8);
            ebx100 = VirtualProtect;
            ebx100(v101, v102, 64, edi99, edx24, 28);
            fun_64948f9c(esi4, v9, v7, 0x64947be9, v101, v102, 64, edi99, edx24, 28);
            if (v103 != 64 && v103 != 4) {
                ebx100(v104, v105, v106, edi99, v101, v102, 64, edi99, edx24, 28);
                return;
            }
        }
        return;
    }
}

int32_t fun_64947860(int32_t a1);

int32_t fun_64947920(int32_t a1) {
    int32_t eax2;

    eax2 = fun_64947860(a1);
    return -static_cast<uint32_t>(static_cast<unsigned char>(reinterpret_cast<uint1_t>(eax2 == 0)));
}

int32_t strncmp = 0xe7e0;

int32_t fun_64948fac(uint32_t a1, int32_t a2, int32_t a3) {
    goto strncmp;
}

struct s40 {
    signed char[6] pad6;
    uint16_t f6;
    signed char[12] pad20;
    uint16_t f20;
};

struct s2* fun_64948430(struct s25* a1, uint32_t a2) {
    uint32_t ebx3;
    struct s40* edx4;
    uint32_t esi5;
    struct s2* eax6;
    uint32_t edx7;

    ebx3 = a2;
    edx4 = reinterpret_cast<struct s40*>(reinterpret_cast<int32_t>(a1) + a1->f60);
    esi5 = edx4->f6;
    eax6 = reinterpret_cast<struct s2*>(reinterpret_cast<int32_t>(edx4) + edx4->f20 + 24);
    if (!esi5) {
        addr_64948468_2:
        eax6 = reinterpret_cast<struct s2*>(0);
    } else {
        edx7 = 0;
        do {
            if (eax6->f12 > ebx3) 
                continue;
            if (ebx3 < eax6->f12 + reinterpret_cast<unsigned char>(eax6->f8)) 
                break;
            ++edx7;
            ++eax6;
        } while (edx7 < esi5);
        goto addr_64948468_2;
    }
    return eax6;
}

struct s41 {
    signed char[2] pad2;
    uint16_t f2;
};

void fun_64948730(int32_t ecx) {
    int32_t esi2;
    void* v3;
    void* eax4;
    int32_t edx5;
    int32_t edx6;
    void* edx7;
    void* ebx8;
    void* edx9;
    void* edx10;
    int32_t edi11;
    struct s41* ebp12;
    void* eax13;
    void* v14;
    int32_t ecx15;
    struct s41* eax16;
    struct s41* tmp32_17;
    int32_t ecx18;
    uint32_t edx19;
    uint16_t* edx20;
    int32_t ecx21;
    uint32_t eax22;

    esi2 = ecx;
    v3 = eax4;
    if (reinterpret_cast<uint1_t>(edx5 < 0) | reinterpret_cast<uint1_t>(edx6 == 0)) {
        edx7 = reinterpret_cast<void*>(0);
    } else {
        ebx8 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(edx9) + reinterpret_cast<int32_t>(edx10));
        edi11 = 16 - ecx;
        ebp12 = reinterpret_cast<struct s41*>(reinterpret_cast<int32_t>(eax13) + reinterpret_cast<int32_t>(ebx8));
        v14 = ebx8;
        do {
            ecx15 = edi11;
            eax16 = tmp32_17;
            ecx18 = esi2;
            edx19 = static_cast<uint32_t>(*reinterpret_cast<uint16_t*>(reinterpret_cast<int32_t>(eax16) - 2)) << *reinterpret_cast<unsigned char*>(&ecx18) | reinterpret_cast<uint32_t>(reinterpret_cast<int32_t>(static_cast<uint32_t>(eax16->f2)) >> *reinterpret_cast<signed char*>(&ecx15));
            *reinterpret_cast<uint16_t*>(reinterpret_cast<int32_t>(eax16) - 2) = *reinterpret_cast<uint16_t*>(&edx19);
        } while (eax16 != ebp12);
        edx7 = v14;
    }
    edx20 = reinterpret_cast<uint16_t*>(reinterpret_cast<int32_t>(edx7) + reinterpret_cast<int32_t>(v3));
    ecx21 = esi2;
    eax22 = static_cast<uint32_t>(*edx20) << *reinterpret_cast<unsigned char*>(&ecx21);
    *edx20 = *reinterpret_cast<uint16_t*>(&eax22);
    return;
}

int32_t g64949044 = 0;

struct s42 {
    uint16_t f0;
    uint16_t f2;
};

void** fun_649488c0(void** a1, void** a2, void** a3, void** a4, struct s22* a5) {
    uint16_t* esp6;
    void** eax7;
    void** edx8;
    void** ebx9;
    void** ecx10;
    struct s22* ebp11;
    int32_t esi12;
    void** eax13;
    uint32_t edi14;
    uint16_t esi15;
    uint16_t v16;
    uint32_t edi17;
    uint16_t v18;
    uint16_t v19;
    uint32_t esi20;
    uint16_t v21;
    uint16_t v22;
    uint16_t v23;
    uint16_t v24;
    uint16_t v25;
    uint16_t* esi26;
    uint16_t v27;
    int32_t v28;
    uint32_t edi29;
    uint32_t eax30;
    uint32_t eax31;
    uint32_t eax32;
    uint16_t* eax33;
    uint16_t edx34;
    uint16_t* v35;
    uint32_t eax36;
    uint32_t edx37;
    uint32_t eax38;
    uint16_t* esi39;
    int16_t* v40;
    uint32_t eax41;
    int32_t v42;
    int32_t edx43;
    uint16_t* ecx44;
    uint32_t v45;
    uint16_t v46;
    uint32_t v47;
    uint16_t* ebx48;
    struct s22* v49;
    uint16_t v50;
    uint16_t v51;
    uint32_t eax52;
    uint32_t edx53;
    uint32_t edi54;
    uint32_t ebp55;
    int32_t esi56;
    uint32_t edx57;
    int32_t edx58;
    int32_t edx59;
    uint32_t esi60;
    uint32_t esi61;
    uint16_t esi62;
    uint32_t eax63;
    uint32_t eax64;
    struct s22* ebp65;
    uint16_t eax66;
    int32_t esi67;
    int32_t ebp68;
    struct s42* eax69;
    struct s42* edi70;
    int32_t ecx71;
    int32_t ecx72;
    uint32_t edx73;

    esp6 = reinterpret_cast<uint16_t*>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4 - 4 - 4 - 4 - 76);
    eax7 = a4;
    edx8 = a3;
    ebx9 = a1;
    ecx10 = a2;
    ebp11 = a5;
    if (reinterpret_cast<unsigned char>(eax7) | reinterpret_cast<unsigned char>(edx8)) {
        if (reinterpret_cast<unsigned char>(eax7) < reinterpret_cast<unsigned char>(ecx10)) 
            goto addr_6494890c_3;
        if (reinterpret_cast<unsigned char>(eax7) > reinterpret_cast<unsigned char>(ecx10)) 
            goto addr_649489d6_5;
    } else {
        esi12 = g64949044;
        eax13 = reinterpret_cast<void**>(1 / reinterpret_cast<uint32_t>(esi12));
        if (ebp11) {
            ebp11->f0 = ebx9;
            ebp11->f4 = ecx10;
        }
        goto addr_649488fc_9;
    }
    if (reinterpret_cast<unsigned char>(edx8) <= reinterpret_cast<unsigned char>(ebx9)) {
        addr_6494890c_3:
        edi14 = reinterpret_cast<unsigned char>(ebx9) >> 16;
        esi15 = reinterpret_cast<uint16_t>(reinterpret_cast<unsigned char>(ecx10) >> 16);
        v16 = *reinterpret_cast<uint16_t*>(&edi14);
        edi17 = reinterpret_cast<unsigned char>(eax7) >> 16;
        v18 = esi15;
        v19 = esi15;
        esi20 = reinterpret_cast<unsigned char>(edx8) >> 16;
        v21 = *reinterpret_cast<uint16_t*>(&ecx10);
        v22 = *reinterpret_cast<uint16_t*>(&ebx9);
        v23 = *reinterpret_cast<uint16_t*>(&esi20);
        v24 = *reinterpret_cast<uint16_t*>(&edx8);
        if (*reinterpret_cast<uint16_t*>(&edi17)) {
            v25 = *reinterpret_cast<uint16_t*>(&edi17);
            esi26 = esp6 + 26;
            v27 = reinterpret_cast<uint16_t>(0);
            v28 = 4;
        } else {
            if (*reinterpret_cast<uint16_t*>(&eax7)) {
                v25 = *reinterpret_cast<uint16_t*>(&eax7);
                v27 = reinterpret_cast<uint16_t>(1);
                esi26 = esp6 + 27;
                v28 = 3;
            } else {
                if (*reinterpret_cast<uint16_t*>(&esi20)) {
                    v25 = *reinterpret_cast<uint16_t*>(&esi20);
                    esi26 = esp6 + 28;
                    v27 = reinterpret_cast<uint16_t>(2);
                    v28 = 2;
                } else {
                    edi29 = *reinterpret_cast<uint16_t*>(&edx8);
                    eax30 = (v18 % edi29 << 16 | static_cast<uint32_t>(*reinterpret_cast<uint16_t*>(&ecx10))) % edi29 << 16 | edi14;
                    eax31 = eax30 % edi29 << 16 | static_cast<uint32_t>(*reinterpret_cast<uint16_t*>(&ebx9));
                    eax32 = eax31 / edi29;
                    if (ebp11) {
                        ebp11->f0 = reinterpret_cast<void**>(eax31 % edi29);
                        ebp11->f4 = reinterpret_cast<void**>(0);
                    }
                    return static_cast<uint32_t>(*reinterpret_cast<uint16_t*>(&eax32)) | eax30 / edi29 << 16;
                }
            }
        }
    } else {
        goto addr_649489d6_5;
    }
    eax33 = esp6 + 21;
    if (!v18) {
        edx34 = v27;
        while (edx34 = reinterpret_cast<uint16_t>(edx34 - 1), ++eax33, *reinterpret_cast<uint16_t*>(&ecx10) == 0) {
            ecx10 = reinterpret_cast<void**>(static_cast<uint32_t>(*reinterpret_cast<uint16_t*>(&a3 + 2)));
        }
        v27 = edx34;
    }
    v35 = eax33;
    eax36 = 3 - v27;
    edx37 = 4 - v27;
    eax38 = eax36 + eax36;
    esi39 = esi26;
    do {
        *reinterpret_cast<int16_t*>(reinterpret_cast<int32_t>(esp6) + eax38 + 62) = 0;
        eax38 = eax38 - 2;
    } while (eax38 != 0xfffffffe);
    v40 = reinterpret_cast<int16_t*>(esp6 + edx37 + 31);
    eax41 = v25;
    v42 = 0;
    edx43 = 0;
    if (eax41 <= 0x7fff) {
        do {
            eax41 = eax41 + eax41;
            ++edx43;
        } while (eax41 <= 0x7fff);
        v42 = edx43;
        fun_64948730(edx43);
        fun_64948730(edx43);
        eax41 = v23;
        v25 = *reinterpret_cast<uint16_t*>(&eax41);
    }
    ecx44 = v35;
    v45 = eax41;
    v46 = reinterpret_cast<uint16_t>(0);
    v47 = v24;
    ebx48 = esi39;
    v49 = ebp11;
    goto addr_64948af9_32;
    addr_649489d6_5:
    if (!ebp11) {
        eax13 = reinterpret_cast<void**>(0);
    } else {
        ebp11->f0 = ebx9;
        ebp11->f4 = ecx10;
        return 0;
    }
    addr_649488fc_9:
    return eax13;
    addr_64948c58_35:
    eax13 = reinterpret_cast<void**>(static_cast<uint32_t>(v50) << 16 | static_cast<uint32_t>(v51));
    goto addr_649488fc_9;
    while (1) {
        addr_64948c80_36:
        eax52 = 0xffff;
        while (1) {
            edx53 = edx53 + v45;
            if (edx53 > 0xffff) 
                goto addr_64948b44_38;
            while (v47 * eax52 <= (edx53 << 16 | static_cast<uint32_t>(*reinterpret_cast<uint16_t*>(&edi54)))) {
                addr_64948b44_38:
                ebp55 = 0;
                esi56 = v28;
                do {
                    edx57 = ecx44[esi56] - ebx48[esi56] * eax52 - ebp55;
                    ecx44[esi56] = *reinterpret_cast<uint16_t*>(&edx57);
                    --esi56;
                    edx58 = reinterpret_cast<int32_t>(-(edx57 >> 16));
                    ebp55 = *reinterpret_cast<uint16_t*>(&edx58);
                } while (!reinterpret_cast<uint1_t>(reinterpret_cast<uint1_t>(esi56 < 0) | reinterpret_cast<uint1_t>(esi56 == 0)));
                if (*reinterpret_cast<uint16_t*>(&a2) - ebp55 >> 16) {
                    edx59 = v28;
                    --eax52;
                    esi60 = 0;
                    do {
                        esi61 = esi60 + (ebx48[edx59] + ecx44[edx59]);
                        ecx44[edx59] = *reinterpret_cast<uint16_t*>(&esi61);
                        --edx59;
                        esi60 = esi61 >> 16;
                    } while (!reinterpret_cast<uint1_t>(reinterpret_cast<uint1_t>(edx59 < 0) | reinterpret_cast<uint1_t>(edx59 == 0)));
                }
                esi62 = v46;
                ++ecx44;
                v46 = reinterpret_cast<uint16_t>(v46 + 1);
                v40[esi62] = *reinterpret_cast<int16_t*>(&eax52);
                if (reinterpret_cast<int16_t>(v46) > reinterpret_cast<int16_t>(v27)) 
                    goto addr_64948bcc_46;
                addr_64948af9_32:
                eax63 = *reinterpret_cast<uint16_t*>(&a2);
                edx53 = *reinterpret_cast<uint16_t*>(&a2 + 2);
                edi54 = *reinterpret_cast<uint16_t*>(&a3);
                if (*reinterpret_cast<uint16_t*>(&eax63) == v25) 
                    goto addr_64948c80_36;
                eax64 = eax63 << 16 | edx53;
                edx53 = eax64 % v45;
                eax52 = eax64 / v45;
            }
            --eax52;
        }
    }
    addr_64948bcc_46:
    ebp65 = v49;
    if (ebp65) {
        if (v42) {
            eax66 = reinterpret_cast<uint16_t>(v28 + v27);
            if (reinterpret_cast<int16_t>(eax66) > reinterpret_cast<int16_t>(v27)) {
                esi67 = 16 - v42;
                ebp68 = v42;
                eax69 = reinterpret_cast<struct s42*>(v35 + eax66);
                edi70 = reinterpret_cast<struct s42*>(v35 + v27);
                do {
                    ecx71 = esi67;
                    eax69 = reinterpret_cast<struct s42*>(reinterpret_cast<uint32_t>(eax69) - 2);
                    ecx72 = ebp68;
                    edx73 = reinterpret_cast<uint32_t>(reinterpret_cast<int32_t>(static_cast<uint32_t>(eax69->f2)) >> *reinterpret_cast<signed char*>(&ecx72)) | static_cast<uint32_t>(*reinterpret_cast<uint16_t*>(reinterpret_cast<uint32_t>(eax69) - 2)) << *reinterpret_cast<unsigned char*>(&ecx71);
                    eax69->f2 = *reinterpret_cast<uint16_t*>(&edx73);
                } while (eax69 != edi70);
                ebp65 = v49;
                eax66 = v27;
            }
            v35[eax66] = 0;
        }
        ebp65->f4 = reinterpret_cast<void**>(static_cast<uint32_t>(v19) << 16 | static_cast<uint32_t>(v21));
        ebp65->f0 = reinterpret_cast<void**>(static_cast<uint32_t>(v16) << 16 | static_cast<uint32_t>(v22));
        goto addr_64948c58_35;
    }
}

int32_t _initterm = 0xe71e;

void fun_64948f24(int32_t a1, int32_t a2) {
    goto _initterm;
}

uint32_t g64949048 = 0xbb40e64e;

int32_t GetCurrentProcessId = 0xe364;

int32_t GetTickCount = 0xe48c;

int32_t g6494904c = 0x44bf19b1;

void fun_64948060(int32_t a1) {
    void* ebp2;
    uint32_t eax3;
    void* v4;
    uint32_t eax5;
    uint32_t eax6;
    uint32_t eax7;
    uint32_t esi8;
    uint32_t v9;
    uint32_t v10;
    int32_t eax11;

    ebp2 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4);
    eax3 = g64949048;
    if (eax3 == 0xbb40e64e) {
        v4 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(ebp2) - 40);
        GetSystemTimeAsFileTime(v4);
        eax5 = reinterpret_cast<uint32_t>(GetCurrentProcessId(0x6494809e, v4));
        eax6 = reinterpret_cast<uint32_t>(GetCurrentThreadId(0x6494809e, v4));
        eax7 = reinterpret_cast<uint32_t>(GetTickCount(0x6494809e, v4));
        QueryPerformanceCounter(reinterpret_cast<int32_t>(ebp2) - 32, v4);
        esi8 = v9 ^ v10 ^ eax5 ^ eax6 ^ eax7;
        if (esi8 == 0xbb40e64e) {
            eax11 = 0x44bf19b0;
            esi8 = 0xbb40e64f;
        } else {
            eax11 = reinterpret_cast<int32_t>(~esi8);
        }
        g64949048 = esi8;
        g6494904c = eax11;
        return;
    } else {
        g6494904c = reinterpret_cast<int32_t>(~eax3);
        return;
    }
}

int32_t exit = 0xe76c;

void fun_64948f34(int32_t a1) {
    goto exit;
}

struct s43 {
    signed char[20] pad20;
    int32_t f20;
};

struct s44 {
    int32_t f0;
    int32_t f4;
};

void** fun_64942b50() {
    struct s43* esi1;
    struct s43** eax2;
    void** v3;
    void** v4;
    void** v5;
    void** v6;
    void** ebx7;
    struct s44** eax8;
    void** v9;
    void** v10;
    void** v11;
    void** v12;

    esi1 = *eax2;
    pthread_spin_lock(0x64949018, v3, v4, v5, v6);
    ebx7 = reinterpret_cast<void**>(22);
    if (*eax8 && ((*eax8)->f0 == 0xbab1f00d && ((*reinterpret_cast<signed char*>(&ebx7) = 1, reinterpret_cast<uint32_t>(reinterpret_cast<int32_t>(*eax8) + 3) > 2) && esi1->f20))) {
        *reinterpret_cast<signed char*>(&ebx7) = 0;
        (*eax8)->f4 = (*eax8)->f4 + 1;
    }
    pthread_spin_unlock(0x64949018, v9, v10, v11, v12);
    return ebx7;
}

void** sem_init(void** a1, void** a2, void** a3) {
    int32_t* eax4;
    void** esi5;
    int32_t* eax6;
    void** eax7;
    int32_t* eax8;
    void** edi9;
    void** eax10;
    void** v11;
    void** v12;
    void** v13;
    void** ebx14;
    void** esi15;
    void** edi16;
    void** ebp17;
    int32_t* eax18;
    void** eax19;
    void** v20;
    void** v21;
    void** v22;
    void** v23;

    if (reinterpret_cast<signed char>(a3) < reinterpret_cast<signed char>(0) || !a1) {
        eax4 = reinterpret_cast<int32_t*>(_errno());
        esi5 = reinterpret_cast<void**>(0xffffffff);
        *eax4 = 22;
    } else {
        if (a2) {
            eax6 = reinterpret_cast<int32_t*>(_errno());
            esi5 = reinterpret_cast<void**>(0xffffffff);
            *eax6 = 1;
        } else {
            eax7 = fun_64948f3c(1, 16);
            if (!eax7) {
                eax8 = reinterpret_cast<int32_t*>(_errno(1, 16));
                esi5 = reinterpret_cast<void**>(0xffffffff);
                *eax8 = 12;
            } else {
                *reinterpret_cast<void***>(eax7 + 8) = a3;
                edi9 = eax7 + 12;
                eax10 = pthread_mutex_init(a1, edi9, 0);
                esi5 = eax10;
                if (eax10) {
                    addr_64946800_8:
                    esi5 = reinterpret_cast<void**>(0xffffffff);
                    fun_64948f1c(a1, eax7, 0, 0x7fffffff, 0, v11, v12, v13, ebx14, esi15, edi16, ebp17, __return_address());
                    eax18 = reinterpret_cast<int32_t*>(_errno(eax7, 0, 0x7fffffff, 0));
                    *eax18 = 28;
                } else {
                    eax19 = reinterpret_cast<void**>(CreateSemaphoreA(0, 0, 0x7fffffff, 0));
                    *reinterpret_cast<void***>(eax7 + 4) = eax19;
                    if (!eax19) {
                        pthread_mutex_destroy(a1, edi9, v20, v21, 0x649467d9, 0, 0, 0x7fffffff, 0, v22, v23);
                        goto addr_64946800_8;
                    } else {
                        *reinterpret_cast<void***>(eax7) = reinterpret_cast<void**>(0xbab1f00d);
                        *reinterpret_cast<void***>(a1) = eax7;
                    }
                }
            }
        }
    }
    return esi5;
}

void** fun_64942bb0() {
    void** v1;
    void** v2;
    void** v3;
    void** v4;
    void** v5;
    void** v6;
    void** v7;
    void** v8;
    uint32_t eax9;

    pthread_spin_lock(0x64949018, v1, v2, v3, v4);
    pthread_spin_unlock(0x64949018, v5, v6, v7, v8);
    return eax9 - (eax9 + reinterpret_cast<uint1_t>(eax9 < eax9 + reinterpret_cast<uint1_t>(eax9 < 1))) & 22;
}

void** fun_64941530(void** a1, void** a2, void** a3) {
    void** v4;
    void** v5;
    void** v6;
    void** v7;
    int32_t* eax8;
    int32_t edx9;
    void** v10;
    void** v11;
    void** v12;
    void** v13;
    void** eax14;

    pthread_spin_lock(0x64949000, v4, v5, v6, v7);
    *eax8 = edx9;
    eax14 = pthread_spin_unlock(0x64949000, v10, v11, v12, v13);
    return eax14;
}

struct s45 {
    signed char[8] pad8;
    int32_t f8;
};

struct s46 {
    signed char[8] pad8;
    int32_t f8;
    void** f12;
};

void fun_0(void** ecx, void** a2, void** a3, void** a4);

void** sem_wait(void** a1, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7, void** a8) {
    void** v9;
    void** v10;
    void** v11;
    void** v12;
    void** v13;
    void** v14;
    void** v15;
    void** v16;
    void** v17;
    void** v18;
    void** v19;
    void** v20;
    void** eax21;
    struct s45* v22;
    int32_t esi23;
    struct s46* v24;
    void** eax25;
    void** edi26;
    void** v27;
    void** v28;
    void** v29;
    void** v30;
    void** v31;
    void** v32;
    void** v33;
    void** v34;
    void** v35;
    void** ebx36;
    void** esi37;
    void** edi38;
    void*** esp39;
    void** v40;
    void** v41;
    void** v42;
    void** v43;
    void** v44;
    void** v45;
    void** v46;
    void** v47;
    void** eax48;
    void** v49;
    void** v50;
    void** v51;
    void** v52;
    void** v53;
    void** v54;
    void** v55;
    void** eax56;
    void** eax57;
    void** v58;
    void** v59;
    void** v60;
    void** v61;
    void** eax62;
    void*** eax63;

    eax21 = fun_64946650(1, v9, v10, v11, v12, v13, v14, v15, v16, v17, v18, v19, v20);
    if (!eax21) {
        v22->f8 = v22->f8 - 1;
        esi23 = v24->f8;
        eax25 = reinterpret_cast<void**>(&v24->f12);
        edi26 = *reinterpret_cast<void***>(eax25 + 0xfffffff8);
        pthread_mutex_unlock(1, eax25, v27, v28, v29, v30, v31, v32, a1, 0, v33, v34, v35, ebx36, esi37, edi38, __return_address(), a1, a2, a3, a4, a5, a6, a7, a8);
        esp39 = reinterpret_cast<void***>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4 - 4 - 4 - 48 - 4 + 4 - 4 + 4);
        if (esi23 >= 0 || ((v40 = reinterpret_cast<void**>(esp39 + 28), eax48 = pthread_getclean(1, eax25, v41, v42, v43, v44, v45, v46, a1, 0, 0x649466e0, v40, v47), v49 = *reinterpret_cast<void***>(eax48), eax56 = pthread_getclean(1, static_cast<uint32_t>(reinterpret_cast<unsigned char>(eax25)), v50, v51, v52, v53, v54, v55, a1, 0, 0x649466e0, v40, v49), *reinterpret_cast<void***>(eax56) = reinterpret_cast<void**>(esp39 - 4 + 4 - 4 + 4 + 36), eax57 = fun_64941f60(1, edi26, 2, 0xffffffff), eax62 = pthread_getclean(1, edi26, 2, 0xffffffff, v58, v59, v60, v61, a1, 0, 0x649466e0, v40, v49), *reinterpret_cast<void***>(eax62) = v49, eax57 == 0) || (fun_0(1, v40, 2, 0xffffffff), eax57 == 22))) {
            return eax21;
        } else {
            eax63 = reinterpret_cast<void***>(_errno(1, v40, 2, 0xffffffff));
            *eax63 = eax57;
        }
    }
    return 0xffffffff;
}

void** fun_64941f10(void** ecx) {
    void** esi2;
    void** v3;
    void** v4;
    void** v5;
    void** v6;
    void** eax7;
    void** eax8;
    void** v9;
    void** v10;
    void** v11;

    esi2 = reinterpret_cast<void**>(22);
    pthread_spin_lock(0x64949004, v3, v4, v5, v6);
    if (eax7 && (esi2 = reinterpret_cast<void**>(0), *reinterpret_cast<void***>(eax7) == 0xffffffff)) {
        eax8 = pthread_cond_init(ecx, eax7, 0);
        esi2 = eax8;
    }
    pthread_spin_unlock(0x64949004, 0, v9, v10, v11);
    return esi2;
}

void** fun_64942f70(void** ecx, void** a2) {
    void** v3;
    void** v4;
    void** v5;
    void** v6;
    void** eax7;
    void** ebx8;
    void** v9;
    void** v10;
    void** v11;
    void** v12;
    void** eax13;
    void** eax14;
    void** eax15;

    pthread_spin_lock(0x64949014, v3, v4, v5, v6);
    if (reinterpret_cast<uint32_t>(*reinterpret_cast<void***>(eax7) + 3) > 2) {
        ebx8 = reinterpret_cast<void**>(0);
    } else {
        if (*reinterpret_cast<void***>(eax7) == 0xffffffff) 
            goto addr_64942fa2_4;
        if (*reinterpret_cast<void***>(eax7) == 0xfffffffd) 
            goto addr_64942fd4_6; else 
            goto addr_64942f96_7;
    }
    addr_64942fb4_8:
    pthread_spin_unlock(0x64949014, v9, v10, v11, v12);
    return ebx8;
    addr_64942fd4_6:
    v9 = reinterpret_cast<void**>(0x6494900c);
    eax13 = pthread_mutex_init(ecx, eax7, 0x6494900c);
    ebx8 = eax13;
    goto addr_64942fb4_8;
    addr_64942f96_7:
    if (*reinterpret_cast<void***>(eax7) == 0xfffffffe) {
        v9 = reinterpret_cast<void**>(0x64949008);
        eax14 = pthread_mutex_init(ecx, eax7, 0x64949008);
        ebx8 = eax14;
        goto addr_64942fb4_8;
    } else {
        if (!*reinterpret_cast<void***>(eax7)) {
            ebx8 = reinterpret_cast<void**>(22);
            goto addr_64942fb4_8;
        } else {
            addr_64942fa2_4:
            v9 = reinterpret_cast<void**>(0);
            eax15 = pthread_mutex_init(ecx, eax7, 0);
            ebx8 = eax15;
            goto addr_64942fb4_8;
        }
    }
}

struct s47 {
    signed char[8] pad8;
    int32_t f8;
};

struct s48 {
    signed char[12] pad12;
    int32_t f12;
    signed char[4] pad20;
    int32_t f20;
    void** f24;
};

void** fun_64942be0(void** ecx) {
    struct s47* eax2;
    struct s48* eax3;
    int32_t esi4;
    int32_t eax5;
    void** esi6;
    void** eax7;
    void** eax8;
    int32_t eax9;

    if (!eax2->f8) {
        if (!eax3->f20) 
            goto addr_64942bf5_3; else 
            goto addr_64942c37_4;
    } else {
        esi4 = eax3->f20;
        if (esi4) {
            if (eax2->f8 != 2) 
                goto addr_64942c37_4;
            eax5 = reinterpret_cast<int32_t>(GetCurrentThreadId());
            if (esi4 != eax5) 
                goto addr_64942c37_4;
            eax3->f12 = eax3->f12 + 1;
            esi6 = reinterpret_cast<void**>(0);
        } else {
            addr_64942bf5_3:
            eax7 = eax3->f24;
            eax8 = fun_64941f60(ecx, eax7, 1, 0);
            if (eax8 == 0x8a) {
                addr_64942c37_4:
                esi6 = reinterpret_cast<void**>(16);
            } else {
                esi6 = eax8;
                if (!eax8) {
                    eax3->f12 = 1;
                    eax9 = reinterpret_cast<int32_t>(GetCurrentThreadId(eax7, 1, 0));
                    eax3->f20 = eax9;
                }
            }
        }
        return esi6;
    }
}

struct s49 {
    int32_t f0;
    int32_t f4;
};

void** pthread_spin_trylock(struct s49** a1) {
    void** eax2;
    struct s49* ebx3;
    int32_t v4;
    int32_t eax5;
    int32_t eax6;

    eax2 = reinterpret_cast<void**>(22);
    if (a1 && (*a1 && ((eax2 = fun_64944170(), reinterpret_cast<signed char>(eax2) >= reinterpret_cast<signed char>(0)) && (ebx3 = *a1, v4 = reinterpret_cast<int32_t>(ebx3 + 1), eax5 = reinterpret_cast<int32_t>(TryEnterCriticalSection(v4)), eax2 = reinterpret_cast<void**>(16), !!eax5)))) {
        eax6 = reinterpret_cast<int32_t>(GetCurrentThreadId(0x649442c2, v4));
        ebx3->f4 = ebx3->f4 + 1;
        ebx3->f0 = eax6;
        eax2 = reinterpret_cast<void**>(0);
    }
    return eax2;
}

void** pthread_rwlock_init(void** ecx, void*** a2, void** a3) {
    void** eax4;
    void** eax5;
    void** edi6;
    void** eax7;
    void** v8;
    void** v9;
    void** v10;
    void** v11;
    void** v12;
    void** ebx13;
    void** esi14;
    void** edi15;
    void** ebp16;
    void** ebp17;
    void** eax18;
    void** v19;
    void** v20;
    void** v21;
    void** v22;
    void** v23;
    void** v24;
    void** v25;
    void** v26;
    void** v27;
    void** v28;
    void** eax29;
    void** v30;
    void** v31;
    void** v32;
    void** v33;

    eax4 = reinterpret_cast<void**>(22);
    if (!a2 || (*a2 = reinterpret_cast<void**>(0), eax5 = fun_64948f3c(1, 32), eax4 = reinterpret_cast<void**>(12), eax5 == 0)) {
        addr_649438a0_2:
        return eax4;
    } else {
        edi6 = eax5 + 20;
        *reinterpret_cast<void***>(eax5) = reinterpret_cast<void**>(0xdeadb0ef);
        *reinterpret_cast<void***>(eax5 + 16) = reinterpret_cast<void**>(0);
        *reinterpret_cast<void***>(eax5 + 12) = reinterpret_cast<void**>(0);
        *reinterpret_cast<void***>(eax5 + 8) = reinterpret_cast<void**>(0);
        eax7 = pthread_mutex_init(ecx, edi6, 0);
        if (eax7) {
            fun_64948f1c(ecx, eax5, 0, v8, v9, v10, v11, v12, ebx13, esi14, edi15, ebp16, __return_address());
            return eax7;
        }
        ebp17 = eax5 + 24;
        eax18 = pthread_mutex_init(ecx, ebp17, 0);
        if (!eax18) 
            goto addr_64943878_6;
    }
    v19 = eax18;
    v20 = edi6;
    addr_649438c7_8:
    pthread_mutex_destroy(ecx, v20, 0, v21, v19, v22, v23, v24, ebx13, esi14, edi15);
    fun_64948f1c(ecx, eax5, 0, v25, v19, v26, v27, v28, ebx13, esi14, edi15, ebp16, __return_address());
    eax4 = v19;
    goto addr_649438a0_2;
    addr_64943878_6:
    eax29 = pthread_cond_init(ecx, eax5 + 28, 0);
    if (eax29) {
        v19 = eax29;
        pthread_mutex_destroy(ecx, edi6, 0, v30, v19, v31, v32, v33, ebx13, esi14, edi15);
        v20 = ebp17;
        goto addr_649438c7_8;
    } else {
        *reinterpret_cast<void***>(eax5) = reinterpret_cast<void**>(0xbab1f0ed);
        eax4 = reinterpret_cast<void**>(0);
        *a2 = eax5;
        goto addr_649438a0_2;
    }
}

void** pthread_cond_signal(void** a1) {
    void** ebx2;
    void** eax3;
    void** esi4;
    void** v5;
    void** v6;
    void** v7;
    void** eax8;
    void** edx9;
    void** eax10;
    void** eax11;
    void** eax12;
    void** ecx13;
    void** v14;
    uint32_t tmp32_15;
    uint32_t edx16;
    void** ecx17;
    int32_t eax18;

    if (!a1 || (ebx2 = *reinterpret_cast<void***>(a1), ebx2 == 0)) {
        return 22;
    }
    if (ebx2 == 0xffffffff) {
        eax3 = reinterpret_cast<void**>(0);
        goto addr_649424b7_5;
    } else {
        eax3 = reinterpret_cast<void**>(22);
        if (*reinterpret_cast<void***>(ebx2) == 0xc0bab1fd) {
            esi4 = ebx2 + 20;
            v5 = esi4;
            EnterCriticalSection(v5);
            if (!*reinterpret_cast<void***>(ebx2 + 12)) {
                if (reinterpret_cast<signed char>(*reinterpret_cast<void***>(ebx2 + 8)) <= reinterpret_cast<signed char>(*reinterpret_cast<void***>(ebx2 + 16))) {
                    addr_64942580_9:
                    LeaveCriticalSection(esi4, v5);
                    eax3 = reinterpret_cast<void**>(0);
                    goto addr_649424b7_5;
                } else {
                    v5 = ebx2 + 96;
                    eax8 = fun_64942260(0xffffffff, ebx2 + 72, v5, v6, v7);
                    if (eax8) {
                        LeaveCriticalSection(0xffffffff, esi4, v5);
                        eax3 = eax8;
                        goto addr_649424b7_5;
                    } else {
                        edx9 = *reinterpret_cast<void***>(ebx2 + 16);
                        eax10 = *reinterpret_cast<void***>(ebx2 + 8);
                        if (edx9) {
                            *reinterpret_cast<void***>(ebx2 + 16) = reinterpret_cast<void**>(0);
                            eax10 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(eax10) - reinterpret_cast<unsigned char>(edx9));
                        }
                        *reinterpret_cast<void***>(ebx2 + 8) = eax10 - 1;
                        *reinterpret_cast<void***>(ebx2 + 12) = reinterpret_cast<void**>(1);
                    }
                }
            } else {
                if (!*reinterpret_cast<void***>(ebx2 + 8)) 
                    goto addr_64942580_9;
                eax11 = *reinterpret_cast<void***>(ebx2 + 12) + 1;
                *reinterpret_cast<void***>(ebx2 + 8) = *reinterpret_cast<void***>(ebx2 + 8) - 1;
                *reinterpret_cast<void***>(ebx2 + 12) = eax11;
            }
        } else {
            addr_649424b7_5:
            return eax3;
        }
        LeaveCriticalSection(0xffffffff, esi4, v5);
        eax12 = *reinterpret_cast<void***>(ebx2 + 100);
        ecx13 = ebx2 + 44;
        v14 = ecx13;
        EnterCriticalSection(v14);
        __asm__("cdq ");
        tmp32_15 = *reinterpret_cast<uint32_t*>(ebx2 + 68) + 1;
        edx16 = 1 + reinterpret_cast<uint1_t>(tmp32_15 < *reinterpret_cast<uint32_t*>(ebx2 + 68));
        if (reinterpret_cast<int32_t>(edx16) < reinterpret_cast<int32_t>(0) || reinterpret_cast<int32_t>(edx16) <= reinterpret_cast<int32_t>(0) && tmp32_15 <= 0x7fffffff) {
            ecx17 = reinterpret_cast<void**>(-*reinterpret_cast<uint32_t*>(ebx2 + 68));
            *reinterpret_cast<uint32_t*>(ebx2 + 68) = *reinterpret_cast<uint32_t*>(ebx2 + 68) + 1;
            if (!(reinterpret_cast<uint1_t>(reinterpret_cast<signed char>(ecx17) < reinterpret_cast<signed char>(0)) | reinterpret_cast<uint1_t>(ecx17 == 0))) {
                if (reinterpret_cast<signed char>(ecx17) > reinterpret_cast<signed char>(1)) {
                    ecx17 = reinterpret_cast<void**>(1);
                }
                v14 = ecx17;
                eax18 = reinterpret_cast<int32_t>(ReleaseSemaphore(eax12, v14, 0));
                if (!eax18) {
                    *reinterpret_cast<uint32_t*>(ebx2 + 68) = *reinterpret_cast<uint32_t*>(ebx2 + 68) + -1;
                    LeaveCriticalSection(ecx13);
                    return 22;
                }
            }
            LeaveCriticalSection(ecx13, v14, 0);
            return 0;
        } else {
            LeaveCriticalSection(ecx13, v14);
            return 34;
        }
    }
}

int32_t abort = 0xe75a;

void** fun_64948f4c() {
    goto abort;
}

void** fun_64944400(void** ecx, void** a2, void** a3, void** a4, void** a5) {
    void** v6;
    void** v7;
    void** esi8;
    void** esi9;
    void** eax10;
    void** v11;
    void** ebx12;
    int32_t eax13;
    void** v14;
    void** v15;
    void** v16;
    void** v17;
    void** ebx18;
    void** edx19;
    struct s9* eax20;
    void** v21;
    void** v22;
    void** v23;
    void** v24;
    void** v25;
    void** v26;
    void** v27;
    void** v28;
    void** v29;
    void** v30;
    void** v31;
    void** v32;
    void** v33;
    void** eax34;

    v6 = reinterpret_cast<void**>(__return_address());
    v7 = esi8;
    esi9 = eax10;
    v11 = ebx12;
    if (eax13) {
        pthread_spin_lock(0x64949024, v14, v15, v16, v17);
        ebx18 = g6494b020;
        if (esi9 == ebx18) {
            addr_64944476_3:
            edx19 = ebx18;
            ebx18 = reinterpret_cast<void**>(0);
        } else {
            if (ebx18) {
                while ((edx19 = *reinterpret_cast<void***>(ebx18 + 12), esi9 != edx19) && (esi9 = esi9, !!edx19)) {
                    ebx18 = edx19;
                }
            } else {
                goto addr_64944476_3;
            }
        }
        if (!edx19) {
            eax20 = _iob;
            v21 = esi9;
            fun_64948f2c(&eax20->f64, "%p not found?!?!\n", v21, v22, v23, v11, v7, v6);
        } else {
            *reinterpret_cast<void***>(esi9 + 8) = *reinterpret_cast<void***>(esi9 + 8) - 1;
            if (!*reinterpret_cast<void***>(esi9 + 8)) {
                pthread_mutex_destroy(ecx, esi9 + 4, v24, v25, v26, v27, v11, v7, v6, a2, a3);
                if (!ebx18) {
                    g6494b020 = *reinterpret_cast<void***>(esi9 + 12);
                } else {
                    *reinterpret_cast<void***>(ebx18 + 12) = *reinterpret_cast<void***>(esi9 + 12);
                }
                fun_64948f1c(ecx, esi9, v28, v29, v30, v31, v11, v7, v6, a2, a3, a4, a5);
            }
        }
        eax34 = pthread_spin_unlock(0x64949024, "%p not found?!?!\n", v21, v32, v33);
    }
    return eax34;
}

void** fun_64944860(void** ecx, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7, void** a8, void** a9, void** a10, void** a11, void** a12, void** a13, void** a14, void** a15, void** a16, void** a17) {
    void** v18;
    void** v19;
    void** v20;
    void** v21;
    void** v22;
    void** ebx23;
    void** ebx24;
    void** eax25;
    void** eax26;
    void** v27;
    void** v28;
    void** v29;
    void** v30;
    void** v31;
    void** v32;
    void** eax33;
    int1_t zf34;
    void** v35;
    void** v36;
    void** v37;
    void** v38;

    pthread_mutex_lock(ecx, 0x64949028, v18, v19, v20, v21, v22, ebx23, __return_address(), a2, a3, a4, a5);
    ebx24 = g6494b03c;
    if (!ebx24) {
        eax25 = fun_64948f3c(1, 0xb4);
        ebx24 = eax25;
        if (eax25 && (eax26 = fun_64944570(1, 0xb4), *reinterpret_cast<void***>(ebx24 + 0xb0) = eax26, !eax26)) {
            v27 = ebx24;
            ebx24 = reinterpret_cast<void**>(0);
            fun_64948f1c(ecx, v27, 0xb4, v28, v29, v30, v31, ebx23, __return_address(), a2, a3, a4, a5);
        }
    } else {
        eax33 = fun_64944570(0x64949028, v32);
        *reinterpret_cast<void***>(ebx24 + 0xb0) = eax33;
        if (!eax33) {
            ebx24 = reinterpret_cast<void**>(0);
        } else {
            zf34 = *reinterpret_cast<void***>(ebx24 + 0xac) == 0;
            g6494b03c = *reinterpret_cast<void***>(ebx24 + 0xac);
            if (zf34) {
                g6494b038 = reinterpret_cast<void**>(0);
            }
            *reinterpret_cast<void***>(ebx24 + 0xac) = reinterpret_cast<void**>(0);
        }
    }
    pthread_mutex_unlock(ecx, 0x64949028, 0xb4, v35, v36, v37, v38, ebx23, __return_address(), a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15, a16, a17);
    return ebx24;
}

struct s50 {
    int32_t f0;
    int32_t f4;
};

void** fun_649435b0() {
    void** v1;
    void** v2;
    void** v3;
    void** v4;
    struct s50** eax5;
    void** ebx6;
    void** v7;
    void** v8;
    void** v9;
    void** v10;

    pthread_spin_lock(0x64949020, v1, v2, v3, v4);
    if (!eax5) {
        ebx6 = reinterpret_cast<void**>(22);
    } else {
        ebx6 = reinterpret_cast<void**>(22);
        if (*eax5 && (*eax5)->f0 == 0xbab1f0ed) {
            if (*eax5 == -1) {
                ebx6 = reinterpret_cast<void**>(1);
            } else {
                (*eax5)->f4 = (*eax5)->f4 + 1;
                *reinterpret_cast<signed char*>(&ebx6) = 0;
            }
        }
    }
    pthread_spin_unlock(0x64949020, v7, v8, v9, v10);
    return ebx6;
}

int32_t _onexit = 0xe73a;

int32_t fun_64947860(int32_t a1) {
    void** eax2;
    void** eax3;
    int32_t eax4;
    void** eax5;
    void** eax6;
    void** eax7;
    void** eax8;
    int32_t* esp9;
    void* v10;
    void* v11;
    int32_t eax12;
    void** eax13;
    void** eax14;

    eax2 = g6494b3e8;
    eax3 = fun_64947a20(eax2);
    if (eax3 == 0xffffffff) {
        eax4 = reinterpret_cast<int32_t>(_onexit(a1));
        return eax4;
    } else {
        fun_64948f74(8);
        eax5 = g6494b3e8;
        eax6 = fun_64947a20(eax5);
        eax7 = g6494b3e4;
        eax8 = fun_64947a20(eax7);
        esp9 = reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4 - 40 - 4 + 4 - 4 + 4 - 4 + 4 - 4 + 4);
        v10 = reinterpret_cast<void*>(esp9 + 7);
        v11 = reinterpret_cast<void*>(esp9 + 6);
        eax12 = fun_64948f7c(a1, v11, v10);
        eax13 = fun_64947a30(eax6, v11, v10);
        g6494b3e8 = eax13;
        eax14 = fun_64947a30(eax8, v11, v10);
        g6494b3e4 = eax14;
        fun_64948f84(8, v11, v10);
        return eax12;
    }
}

int32_t g6494b3c4;

void fun_649481a0();

int32_t fun_64948350(int32_t a1, uint32_t a2, int32_t a3) {
    int32_t eax4;
    int32_t eax5;
    int32_t eax6;
    int32_t eax7;

    if (a2 == 1) {
        eax4 = g6494b3c4;
        if (!eax4) {
            InitializeCriticalSection(0x6494b3c8);
        }
        g6494b3c4 = 1;
        return 1;
    } else {
        if (a2 < 1) {
            eax5 = g6494b3c4;
            if (eax5) {
                fun_649481a0();
            }
            eax6 = g6494b3c4;
            if (eax6 == 1) {
                g6494b3c4 = 0;
                DeleteCriticalSection(0x6494b3c8);
            }
        } else {
            if (a2 == 3 && (eax7 = g6494b3c4, !!eax7)) {
                fun_649481a0();
            }
        }
        return 1;
    }
}

int32_t fwrite = 0xe786;

void fun_64948f8c(int32_t a1, int32_t a2, int32_t a3, void** a4) {
    goto fwrite;
}

int32_t vfprintf = 0xe7ea;

void fun_64948f94() {
    goto vfprintf;
}

void** g6494b3c0;

void fun_649481a0() {
    void** edi1;
    int32_t esi2;
    int32_t esi3;
    void** v4;
    void** eax5;
    int32_t eax6;
    void** eax7;

    EnterCriticalSection(0x6494b3c8);
    edi1 = g6494b3c0;
    esi2 = GetLastError;
    if (edi1) {
        esi3 = esi2;
        do {
            v4 = *reinterpret_cast<void***>(edi1);
            eax5 = reinterpret_cast<void**>(TlsGetValue(v4, 0x6494b3c8));
            eax6 = reinterpret_cast<int32_t>(esi3(0x649481db, v4, 0x6494b3c8));
            if (!eax6 && eax5) {
                eax7 = *reinterpret_cast<void***>(edi1 + 4);
                eax7(eax5, v4, 0x6494b3c8);
            }
            edi1 = *reinterpret_cast<void***>(edi1 + 8);
        } while (edi1);
    }
    LeaveCriticalSection(0x6494b3c8, 0x6494b3c8);
    return;
}

struct s51 {
    int32_t f0;
    signed char[20] pad24;
    int16_t f24;
};

struct s52 {
    signed char[60] pad60;
    int32_t f60;
};

uint32_t fun_649483f0(int32_t a1) {
    struct s51* eax2;
    int32_t eax3;
    struct s52* eax4;

    eax2 = reinterpret_cast<struct s51*>(eax3 + eax4->f60);
    if (eax2->f0 == 0x4550) {
        return static_cast<uint32_t>(static_cast<unsigned char>(reinterpret_cast<uint1_t>(eax2->f24 == 0x10b)));
    } else {
        return 0;
    }
}

int32_t g6494003c;

uint32_t fun_64948560() {
    int1_t zf1;
    int32_t ebx2;
    uint32_t eax3;
    int32_t eax4;

    zf1 = image_base_ == 0x5a4d;
    if (!zf1 || (eax3 = fun_649483f0(ebx2), eax3 == 0)) {
        return 0;
    } else {
        eax4 = g6494003c;
        return static_cast<uint32_t>(*reinterpret_cast<uint16_t*>(eax4 + 0x64940006));
    }
}

int32_t fun_64948e80(void** ecx) {
    int32_t v2;
    int32_t eax3;
    void* ecx4;
    uint32_t eax5;
    uint32_t eax6;
    uint32_t* ecx7;

    v2 = eax3;
    ecx4 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4 - 4 + 12);
    if (eax5 >= 0x1000) {
        do {
            ecx4 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(ecx4) - 0x1000);
            eax6 = eax6 - 0x1000;
        } while (eax6 > 0x1000);
    }
    ecx7 = reinterpret_cast<uint32_t*>(reinterpret_cast<int32_t>(ecx4) - eax6);
    *ecx7 = *ecx7;
    return v2;
}

struct s53 {
    int32_t f0;
    int32_t f4;
};

int32_t fun_649414c0(int32_t a1) {
    int32_t esi2;
    int32_t* edx3;
    void** v4;
    void** v5;
    void** v6;
    void** ebx7;
    struct s53** eax8;
    struct s53** edx9;
    void** v10;
    void** v11;
    void** v12;

    esi2 = 22;
    *edx3 = 0;
    pthread_spin_lock(0x64949000, v4, v5, v6, ebx7);
    if (eax8 && ((esi2 = 22, !!*eax8) && ((*eax8)->f0 == 0xbab1feed && (*reinterpret_cast<int16_t*>(&esi2) = 16, !(*eax8)->f4)))) {
        *reinterpret_cast<int16_t*>(&esi2) = 0;
        *edx9 = *eax8;
        *eax8 = reinterpret_cast<struct s53*>(0);
    }
    pthread_spin_unlock(0x64949000, v10, v11, v12, ebx7);
    return esi2;
}

void** fun_64943270(void** ecx, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7, void** a8, void** a9, void** a10, void** a11, void** a12, void** a13) {
    void** v14;
    void** v15;
    void** edi16;
    void** v17;
    void** esi18;
    void*** esi19;
    void*** eax20;
    void** v21;
    void** ebx22;
    void** eax23;
    void*** edi24;
    void*** edx25;
    int32_t* edx26;
    void** ebx27;
    void** eax28;
    void** eax29;
    void** v30;
    void** v31;
    void** v32;
    void** v33;
    void** v34;
    void** v35;
    void** ebx36;
    void** v37;
    void** v38;
    void** v39;
    void** v40;

    v14 = reinterpret_cast<void**>(__return_address());
    v15 = edi16;
    v17 = esi18;
    esi19 = eax20;
    v21 = ebx22;
    eax23 = reinterpret_cast<void**>(22);
    if (!esi19 || !*esi19) {
        addr_649432e8_2:
        return eax23;
    } else {
        edi24 = edx25;
        *edx26 = 0;
        ebx27 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4 - 4 - 4 - 32 + 28);
        while (eax28 = pthread_spin_trylock(0x64949018), !!eax28) {
            eax29 = *esi19;
            eax23 = pthread_mutex_trylock(ecx, ebx27);
            if (eax23) 
                goto addr_649432e8_2;
            pthread_mutex_unlock(ecx, ebx27, v30, v31, v32, v33, v34, v35, eax29, v21, v17, v15, v14, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13);
        }
    }
    if (!*esi19) {
        ebx36 = reinterpret_cast<void**>(22);
        goto addr_649432da_9;
    }
    if (reinterpret_cast<uint32_t>(*esi19 + 3) <= 2) {
        addr_649432f8_11:
        *esi19 = reinterpret_cast<void**>(0);
        return eax28;
    } else {
        ebx36 = reinterpret_cast<void**>(22);
        if (*reinterpret_cast<void***>(*esi19) == 0xbab1f00d) {
            if (!*reinterpret_cast<void***>(*esi19 + 4)) {
                if (*reinterpret_cast<void***>(*esi19 + 20)) {
                    ebx36 = reinterpret_cast<void**>(16);
                    goto addr_649432da_9;
                } else {
                    *edi24 = *esi19;
                    goto addr_649432f8_11;
                }
            } else {
                eax23 = reinterpret_cast<void**>(0xbeef);
                goto addr_649432e8_2;
            }
        } else {
            addr_649432da_9:
            pthread_spin_unlock(0x64949018, v37, v38, v39, v40);
            eax23 = ebx36;
            goto addr_649432e8_2;
        }
    }
}

struct s54 {
    int32_t f0;
    int32_t f4;
};

int32_t fun_64941560() {
    int32_t esi1;
    void** v2;
    void** v3;
    void** v4;
    void** v5;
    struct s54** eax6;
    void** v7;
    void** v8;
    void** v9;
    void** v10;

    esi1 = 22;
    pthread_spin_lock(0x64949000, v2, v3, v4, v5);
    if (eax6 && ((esi1 = 22, !!*eax6) && (*eax6)->f0 == 0xbab1feed)) {
        *reinterpret_cast<int16_t*>(&esi1) = 0;
        (*eax6)->f4 = (*eax6)->f4 + 1;
    }
    pthread_spin_unlock(0x64949000, v7, v8, v9, v10);
    return esi1;
}

void** fun_64943900(void** ecx) {
    void** v2;
    void** v3;
    void** v4;
    void** v5;
    void*** eax6;
    void** eax7;
    void** v8;
    void** v9;
    void** v10;
    void** eax11;
    void** v12;
    void** v13;
    void** v14;
    void** v15;

    pthread_spin_lock(0x6494901c, v2, v3, v4, v5);
    if (*eax6 == 0xffffffff) {
        eax7 = pthread_rwlock_init(ecx, eax6, 0);
        pthread_spin_unlock(0x6494901c, 0, v8, v9, v10);
        eax11 = eax7;
    } else {
        pthread_spin_unlock(0x6494901c, v12, v13, v14, v15);
        eax11 = reinterpret_cast<void**>(22);
    }
    return eax11;
}

struct s55 {
    int32_t f0;
    int32_t f4;
};

void** fun_64943540(void** a1) {
    void** esi2;
    int32_t* edx3;
    void** v4;
    void** v5;
    void** v6;
    void** ebx7;
    struct s55** eax8;
    void** v9;
    void** v10;
    void** v11;
    struct s55** edx12;

    esi2 = reinterpret_cast<void**>(22);
    *edx3 = 0;
    pthread_spin_lock(0x64949020, v4, v5, v6, ebx7);
    if (!eax8) 
        goto addr_6494357d_2;
    esi2 = reinterpret_cast<void**>(22);
    if (!*eax8) 
        goto addr_6494357d_2;
    if (*eax8 != -1) {
        if ((*eax8)->f0 != 0xbab1f0ed || (esi2 = reinterpret_cast<void**>(16), !!(*eax8)->f4)) {
            addr_6494357d_2:
            pthread_spin_unlock(0x64949020, v9, v10, v11, ebx7);
            return esi2;
        } else {
            *edx12 = *eax8;
        }
    }
    *eax8 = reinterpret_cast<struct s55*>(0);
    *reinterpret_cast<int16_t*>(&esi2) = 0;
    goto addr_6494357d_2;
}

int32_t TlsAlloc = 0xe61c;

void pthread_tls_init(void** a1) {
    void** eax2;
    void** eax3;
    void** esi4;
    int32_t v5;
    void** ecx6;
    int32_t v7;
    void** esi8;
    void** ebp9;
    void** ecx10;
    void** edx11;
    int32_t v12;

    eax2 = reinterpret_cast<void**>(TlsAlloc());
    g64949030 = eax2;
    if (eax2 != 0xffffffff) {
        return;
    }
    eax3 = fun_64948f4c();
    esi4 = g6494b030;
    if (esi4) 
        goto addr_649444fe_5;
    addr_64944536_6:
    goto v5;
    addr_649444fe_5:
    if (esi4 == 1) {
        ecx6 = g6494b034;
        if (eax3 == *reinterpret_cast<void***>(ecx6 + 4)) {
        }
        goto v7;
    }
    esi8 = esi4 - 1;
    ebp9 = g6494b034;
    ecx10 = reinterpret_cast<void**>(0);
    while (edx11 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(ecx10) + reinterpret_cast<unsigned char>(esi8) >> 1), *reinterpret_cast<void***>(reinterpret_cast<uint32_t>(ebp9 + reinterpret_cast<unsigned char>(edx11) * 8) + 4) != eax3) {
        if (reinterpret_cast<unsigned char>(eax3) < reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(reinterpret_cast<uint32_t>(ebp9 + reinterpret_cast<unsigned char>(edx11) * 8) + 4))) {
            if (edx11 == ecx10) 
                goto addr_64944536_6;
            esi8 = edx11 + 0xffffffff;
            if (reinterpret_cast<unsigned char>(ecx10) > reinterpret_cast<unsigned char>(esi8)) 
                goto addr_64944536_6;
        } else {
            ecx10 = edx11 + 1;
            if (reinterpret_cast<unsigned char>(ecx10) > reinterpret_cast<unsigned char>(esi8)) 
                goto addr_64944536_6;
        }
    }
    goto v12;
}

int32_t GetHandleInformation = 0xe3a4;

void** fun_64946e80(void** ecx, void** a2, void** a3, void** a4, void** a5) {
    void** eax6;
    void** v7;
    void** v8;
    void** v9;
    void** v10;
    void** v11;
    void** v12;
    void** v13;
    void** v14;
    void** ebx15;
    void** ebp16;
    void** eax17;
    void** eax18;
    void** eax19;
    void** edx20;
    void** edx21;

    eax17 = __pth_gpointer_locked(ecx, eax6, v7, v8, v9, v10, v11, v12, v13, v14, ebx15, ebp16, __return_address(), a2, a3, a4, a5);
    eax18 = *reinterpret_cast<void***>(eax17 + 20);
    if (reinterpret_cast<unsigned char>(eax18 + 0xffffffff) <= reinterpret_cast<unsigned char>(0xfffffffd)) {
        eax19 = reinterpret_cast<void**>(GetHandleInformation(eax18, reinterpret_cast<int32_t>(__zero_stack_offset()) - 4 - 12));
        edx20 = reinterpret_cast<void**>(0);
        if (!eax19) {
            edx21 = *reinterpret_cast<void***>(eax17 + 100);
            *reinterpret_cast<signed char*>(&eax19) = 3;
            if (edx21) {
                edx21 = eax19;
            }
            return edx21;
        }
    } else {
        edx20 = *reinterpret_cast<void***>(eax17 + 100);
        if (edx20) {
            edx20 = reinterpret_cast<void**>(3);
        }
    }
    return edx20;
}

int32_t strlen = 0xe7d6;

uint32_t fun_64948fa4(int32_t a1) {
    goto strlen;
}

int32_t g64949050 = 0;

int32_t GetModuleHandleA = 0xe3cc;

int32_t GetProcAddress = 0xe3e0;

void fun_64941460() {
    int32_t eax1;
    int32_t v2;
    int32_t eax3;
    int32_t edx4;
    int32_t eax5;

    eax1 = g64949050;
    if (eax1) {
        v2 = reinterpret_cast<int32_t>("libgcj-13.dll");
        eax3 = reinterpret_cast<int32_t>(GetModuleHandleA("libgcj-13.dll"));
        edx4 = 0;
        if (eax3) {
            v2 = reinterpret_cast<int32_t>("_Jv_RegisterClasses");
            eax5 = reinterpret_cast<int32_t>(GetProcAddress(eax3, "_Jv_RegisterClasses"));
            edx4 = eax5;
        }
        if (edx4) {
            edx4(0x64949050, v2);
        }
    }
    return;
}

int32_t fun_64941000() {
    void** eax1;
    void* v2;
    void* v3;
    void** eax4;

    eax1 = fun_64948f0c(0x80);
    eax4 = fun_64947a30(eax1, v2, v3);
    g6494b3e8 = eax4;
    g6494b3e4 = eax4;
    if (!eax1) {
        return 1;
    } else {
        *reinterpret_cast<void***>(eax1) = reinterpret_cast<void**>(0);
        return 0;
    }
}

void fun_64948fe3() {
}

void fun_64948fe6() {
}

void fun_64948fef() {
    int32_t* eax1;
    int32_t* eax2;
    signed char* eax3;
    signed char* eax4;
    signed char al5;
    signed char* eax6;
    signed char* eax7;
    signed char al8;
    signed char* eax9;
    signed char* eax10;
    signed char al11;
    signed char* eax12;
    signed char* eax13;
    signed char al14;
    signed char* eax15;
    signed char* eax16;
    signed char al17;
    signed char* eax18;
    signed char* eax19;
    signed char al20;
    signed char* eax21;
    signed char* eax22;
    signed char al23;

    *eax1 = *eax2 + 1;
    *eax3 = reinterpret_cast<signed char>(*eax4 + al5);
    *eax6 = reinterpret_cast<signed char>(*eax7 + al8);
    *eax9 = reinterpret_cast<signed char>(*eax10 + al11);
    *eax12 = reinterpret_cast<signed char>(*eax13 + al14);
    *eax15 = reinterpret_cast<signed char>(*eax16 + al17);
    *eax18 = reinterpret_cast<signed char>(*eax19 + al20);
    *eax21 = reinterpret_cast<signed char>(*eax22 + al23);
}

void fun_64941449() {
    void** v1;
    int32_t v2;

    fun_64948060(__return_address());
    fun_64941260(v1, __return_address());
    goto v2;
}

void fun_649414b0() {
    return;
}

void fun_6494152c() {
}

struct s56 {
    int32_t f0;
    signed char[12] pad16;
    void** f16;
    signed char[7] pad24;
    void** f24;
    signed char[3] pad28;
    void** f28;
    signed char[3] pad32;
    void** f32;
};

void fun_6494166c(void** ecx, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7, void** a8, void** a9, void** a10, void** a11, void** a12, void** a13, void** a14, void** a15, void** a16, void** a17, void** a18, void** a19, void** a20, void** a21, void** a22, void** a23, void** a24) {
    struct s56* esi25;
    int32_t ebp26;
    void** edi27;
    void** eax28;
    int32_t ebp29;
    int32_t eax30;
    void** eax31;
    int32_t ebp32;
    int32_t eax33;
    void** v34;
    void** v35;
    int32_t ebp36;
    int32_t* ebx37;
    int32_t ebp38;
    void** eax39;
    void** v40;
    void** v41;
    int32_t ebp42;
    void** v43;
    void** v44;
    int32_t ebp45;
    int32_t* ebx46;
    int32_t ebp47;
    void** edx48;
    int32_t ebp49;
    int32_t ebp50;
    int32_t ebp51;
    int32_t ebp52;
    int32_t* ebx53;
    int32_t ebp54;
    int32_t ebp55;

    esi25 = *reinterpret_cast<struct s56**>(ebp26 - 28);
    edi27 = reinterpret_cast<void**>(&esi25->f24);
    pthread_mutex_lock(ecx, edi27, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12);
    eax28 = reinterpret_cast<void**>(&esi25->f28);
    *reinterpret_cast<void***>(ebp29 - 44) = eax28;
    eax30 = sem_destroy(ecx, eax28, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12);
    if (!eax30) {
        eax31 = reinterpret_cast<void**>(&esi25->f32);
        *reinterpret_cast<void***>(ebp32 - 48) = eax31;
        eax33 = sem_destroy(ecx, eax31, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12);
        if (eax33) {
            v34 = esi25->f16;
            v35 = *reinterpret_cast<void***>(ebp36 - 44);
            sem_init(v35, v34, 0);
            *ebx37 = *reinterpret_cast<int32_t*>(ebp38 - 28);
            pthread_mutex_unlock(ecx, edi27, v34, 0, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15, a16, a17, a18, a19, a20, a21, a22, a23, a24);
        } else {
            pthread_mutex_unlock(ecx, edi27, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15, a16, a17, a18, a19, a20, a21, a22, a23, a24);
            eax39 = pthread_mutex_destroy(ecx, edi27, a2, a3, a4, a5, a6, a7, a8, a9, a10);
            if (eax39) {
                v40 = esi25->f16;
                v41 = *reinterpret_cast<void***>(ebp42 - 44);
                sem_init(v41, v40, 0);
                v43 = esi25->f16;
                v44 = *reinterpret_cast<void***>(ebp45 - 48);
                sem_init(v44, v43, 0);
                *ebx46 = *reinterpret_cast<int32_t*>(ebp47 - 28);
            } else {
                edx48 = *reinterpret_cast<void***>(ebp49 - 28);
                esi25->f0 = 0xdeadb00f;
                *reinterpret_cast<void***>(ebp50 - 44) = eax39;
                fun_64948f1c(ecx, edx48, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12);
                goto *reinterpret_cast<int32_t*>(ebp51 - 12 + 4 + 4 + 4 + 4);
            }
        }
        goto *reinterpret_cast<int32_t*>(ebp52 - 12 + 4 + 4 + 4 + 4);
    } else {
        *ebx53 = *reinterpret_cast<int32_t*>(ebp54 - 28);
        pthread_mutex_unlock(ecx, edi27, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15, a16, a17, a18, a19, a20, a21, a22, a23, a24);
        goto *reinterpret_cast<int32_t*>(ebp55 - 12 + 4 + 4 + 4 + 4);
    }
}

void fun_649416aa() {
}

void fun_6494178e() {
    int32_t v1;
    void** eax2;
    int32_t v3;
    void** v4;
    void**** v5;
    void** ebx6;
    void** ebx7;
    void** ebx8;
    void** v9;
    void** eax10;
    void** eax11;
    void** ebp12;
    void** eax13;
    void** eax14;
    void** v15;
    void** eax16;
    void** v17;
    void** v18;
    void** v19;
    void** v20;
    void** v21;
    void** v22;
    void** v23;
    void** v24;
    void** v25;
    void** v26;
    void** v27;
    void** v28;
    void** v29;
    void** v30;
    void** v31;
    void** v32;
    void** v33;
    void** v34;
    void** v35;
    void** v36;
    void** v37;
    void** v38;
    void** v39;
    void** v40;
    void** v41;
    void** v42;
    void** v43;
    void** v44;
    void** v45;
    void** v46;
    void** v47;
    void** v48;
    void** v49;
    void** v50;
    void** v51;
    void** v52;
    void** v53;
    void** v54;
    void** v55;
    void** v56;
    void** v57;

    if (!v1) {
        goto addr_64941784_4;
    }
    eax2 = fun_64948f3c(1, 36);
    if (!eax2) {
        addr_64941784_4:
        goto v3;
    } else {
        if (!v4 || !*v5) {
            *reinterpret_cast<void***>(eax2 + 16) = reinterpret_cast<void**>(0);
        } else {
            *reinterpret_cast<void***>(eax2 + 16) = **v5;
        }
        *reinterpret_cast<void***>(eax2 + 12) = ebx6;
        *reinterpret_cast<void***>(eax2 + 8) = ebx7;
        ebx8 = eax2 + 24;
        v9 = reinterpret_cast<void**>(0);
        *reinterpret_cast<void***>(eax2) = reinterpret_cast<void**>(0xbab1feed);
        *reinterpret_cast<void***>(eax2 + 20) = reinterpret_cast<void**>(0);
        eax10 = pthread_mutex_init(v4, ebx8, 0);
        if (eax10) 
            goto addr_649417f8_10;
    }
    eax11 = *reinterpret_cast<void***>(eax2 + 16);
    ebp12 = eax2 + 28;
    eax13 = sem_init(ebp12, eax11, 0);
    if (!eax13) {
        eax14 = *reinterpret_cast<void***>(eax2 + 16);
        v9 = eax14;
        v15 = eax2 + 32;
        eax16 = sem_init(v15, v9, 0);
        if (!eax16) {
            fun_64941530(v15, v9, 0);
            goto addr_64941784_4;
        } else {
            pthread_mutex_destroy(v4, ebx8, v9, 0, v17, v18, v19, v20, v21, v22, v23);
            sem_destroy(v4, ebp12, v9, 0, v24, v25, v26, v27, v28, v29, v30, v31, v32);
        }
    } else {
        pthread_mutex_destroy(v4, ebx8, eax11, 0, v33, v34, v35, v36, v37, v38, v39);
        fun_64948f1c(v4, eax2, eax11, 0, v40, v41, v42, v43, v44, v45, v46, v47, v48);
        goto addr_64941784_4;
    }
    addr_649417f8_10:
    fun_64948f1c(v4, eax2, v9, 0, v49, v50, v51, v52, v53, v54, v55, v56, v57);
    goto addr_64941784_4;
}

void fun_6494180a() {
}

struct s57 {
    signed char[8] pad8;
    void** f8;
    signed char[3] pad12;
    void** f12;
    signed char[7] pad20;
    void** f20;
    signed char[3] pad24;
    void** f24;
};

struct s58 {
    int32_t f0;
    int32_t f4;
};

void fun_649418be(void** ecx, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7, void** a8, void** a9, void** a10, void** a11, void** a12, void** a13, void** a14, void** a15, void** a16, void** a17, void** a18, void** a19, void** a20, void** a21, void** a22, void** a23, void** a24) {
    struct s57* esi25;
    struct s57** ebx26;
    void** ebp27;
    void** eax28;
    struct s58** eax29;
    struct s58** ebx30;
    void** ecx31;
    void** eax32;
    struct s58** ebx33;
    void** eax34;
    void** edx35;
    void** edx36;
    void** eax37;
    struct s9* eax38;
    int32_t esi39;
    int32_t eax40;

    esi25 = *ebx26;
    ebp27 = reinterpret_cast<void**>(&esi25->f24);
    eax28 = pthread_mutex_lock(ecx, ebp27, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12);
    if (eax28) {
        addr_6494192f_3:
        eax29 = ebx30;
    } else {
        ecx31 = esi25->f20;
        esi25->f12 = esi25->f12 - 1;
        if (esi25->f12) {
            a4 = ecx31;
            pthread_mutex_unlock(ecx31, ebp27, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15, a16, a17, a18, a19, a20, a21, a22, a23, a24);
            eax32 = sem_wait(reinterpret_cast<int32_t>(esi25) + reinterpret_cast<unsigned char>(a4) * 4 + 28, a2, a3, a4, a5, a6, a7, a8);
            eax29 = ebx33;
            if (eax32) {
            }
        } else {
            eax34 = esi25->f8;
            edx35 = reinterpret_cast<void**>(0);
            *reinterpret_cast<unsigned char*>(&edx35) = reinterpret_cast<uint1_t>(ecx31 == 0);
            esi25->f20 = edx35;
            edx36 = reinterpret_cast<void**>(0);
            esi25->f12 = eax34;
            if (reinterpret_cast<signed char>(eax34) > reinterpret_cast<signed char>(1)) {
                a2 = eax34 - 1;
                eax37 = sem_post_multiple(reinterpret_cast<int32_t>(esi25) + reinterpret_cast<unsigned char>(ecx31) * 4 + 28, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12);
                edx36 = eax37;
            }
            a4 = edx36;
            pthread_mutex_unlock(ecx31, ebp27, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15, a16, a17, a18, a19, a20, a21, a22, a23, a24);
            if (a4) {
            }
            goto addr_6494192f_3;
        }
    }
    pthread_spin_lock(0x64949000, a2, a3, a4, a5);
    if ((*eax29)->f0 != 0xbab1feed || reinterpret_cast<uint1_t>((*eax29)->f4 < 0) | reinterpret_cast<uint1_t>((*eax29)->f4 == 0)) {
        eax38 = _iob;
        fun_64948f2c(&eax38->f64, "Assertion failed: (%s), file %s, line %d\n", "(((barrier_t *)*barrier)->valid == LIFE_BARRIER) && (((barrier_t *)*barrier)->busy > 0)", "../../src/winpthreads-v3/src/barrier.c", 38, a6, a7, a8);
        fun_64948f34(1);
        esi39 = Sleep;
        while (eax40 = fun_649414c0(0), eax40 == 16) {
            esi39(0);
        }
        if (!eax40) 
            goto 0x64941670; else 
            goto "???";
    } else {
        (*eax29)->f4 = (*eax29)->f4 - 1;
        pthread_spin_unlock(0x64949000, a2, a3, a4, a5);
        goto a12;
    }
}

void fun_6494193d() {
}

int32_t fun_64941973(void*** a1) {
    void** eax2;
    int32_t eax3;

    eax2 = fun_64948f3c(1, 4);
    eax3 = 12;
    if (eax2) {
        *reinterpret_cast<void***>(eax2) = reinterpret_cast<void**>(0);
        *a1 = eax2;
        eax3 = 0;
    }
    return eax3;
}

int32_t fun_649419b4(void** a1, void** a2, void** a3, void** a4) {
    int32_t eax5;
    void** ecx6;
    void** v7;
    void** v8;
    void** v9;
    void** v10;
    void** v11;
    void** v12;

    eax5 = 22;
    if (a1 && (ecx6 = *reinterpret_cast<void***>(a1), !!ecx6)) {
        *reinterpret_cast<void***>(a1) = reinterpret_cast<void**>(0);
        fun_64948f1c(ecx6, ecx6, v7, v8, v9, v10, v11, v12, __return_address(), a1, a2, a3, a4);
        eax5 = 0;
    }
    return eax5;
}

int32_t fun_64941a0c() {
    int32_t* edx1;
    int32_t v2;

    *edx1 = v2;
    return 0;
}

int32_t fun_64941a2f() {
    int32_t v1;
    int32_t** eax2;
    int32_t* v3;

    if (v1) {
        if (*eax2) {
            *v3 = **eax2;
            return 0;
        }
    }
    return 22;
}

int32_t g6494b00c;

void** g6494b008;

void fun_64941b4a(void*** a1, void** a2) {
    int32_t edx3;
    void** eax4;
    void** edx5;
    void** eax6;
    void** v7;
    void** v8;
    void** v9;
    void** edi10;
    void** esi11;
    void** eax12;
    void** edx13;
    void** eax14;
    void** v15;

    edx3 = g6494b00c;
    if (edx3) {
        if (!*a1) {
            eax4 = reinterpret_cast<void**>(GetCurrentThreadId());
            edx5 = *a1;
            eax6 = g6494b008;
            fun_64948f2c(eax6, "C%p %d %s\n", edx5, eax4, a2, v7, v8, v9);
        } else {
            edi10 = *reinterpret_cast<void***>(*a1 + 8);
            esi11 = *reinterpret_cast<void***>(*a1);
            eax12 = reinterpret_cast<void**>(GetCurrentThreadId());
            edx13 = *a1;
            eax14 = g6494b008;
            fun_64948f2c(eax14, "C%p %d V=%0X w=%ld %s\n", edx13, eax12, esi11, edi10, a2, v15);
        }
    }
    return;
}

void fun_64941bac() {
}

int32_t fun_64941bf7(int32_t* a1) {
    int32_t eax2;

    eax2 = 22;
    if (a1) {
        *a1 = 0;
        *reinterpret_cast<signed char*>(&eax2) = 0;
    }
    return eax2;
}

int32_t fun_64941c17(int32_t* a1, int32_t* a2) {
    if (!a1 || !a2) {
        return 22;
    } else {
        *a2 = *a1;
        return 0;
    }
}

int32_t fun_64941c43(int32_t a1, int32_t* a2) {
    if (!a1 || !a2) {
        return 22;
    } else {
        *a2 = 0;
        return 0;
    }
}

int32_t fun_64941c75(int32_t a1, int32_t a2) {
    if (!a1 || a2) {
        return 22;
    } else {
        return 0;
    }
}

int32_t fun_64941c9c(void** a1, void** a2, void** a3, void** a4) {
    void** v5;
    void** v6;
    void** edi7;
    int32_t eax8;
    void** v9;
    void** esi10;
    void** v11;
    void** ebx12;
    void** v13;
    void** eax14;
    void** v15;
    void** v16;
    void** edx17;
    void** eax18;
    void** edx19;
    void** ebx20;
    void** eax21;
    void** ecx22;
    void** v23;
    void** eax24;
    void** eax25;
    void** edx26;
    void** edx27;
    uint1_t cf28;

    v5 = reinterpret_cast<void**>(__return_address());
    v6 = edi7;
    eax8 = 22;
    v9 = esi10;
    v11 = ebx12;
    if (reinterpret_cast<unsigned char>(a1) <= reinterpret_cast<unsigned char>(2)) {
        v13 = a3;
        if (!(*reinterpret_cast<unsigned char*>(&a2) & 1)) {
            eax14 = _pthread_time_in_ms_from_timespec(v13);
            v15 = eax14;
            v16 = edx17;
            goto addr_64941ce0_4;
        }
        eax18 = _pthread_rel_time_in_ms(v13);
        v16 = edx19;
        v15 = eax18;
        if (reinterpret_cast<unsigned char>(v16) <= reinterpret_cast<unsigned char>(0)) 
            goto addr_64941ce7_6;
        while (1) {
            ebx20 = reinterpret_cast<void**>(0x1869f);
            while (1) {
                eax21 = _pthread_time_in_ms(v13);
                v13 = ebx20;
                fun_64945a20(ecx22, v13, v23, v15, v16, v11, v9, v6, v5, a1, a2, a3, a4);
                eax24 = _pthread_time_in_ms(v13);
                eax25 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(eax24) - reinterpret_cast<unsigned char>(eax21));
                edx26 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(edx27) - (reinterpret_cast<unsigned char>(edx27) + reinterpret_cast<uint1_t>(reinterpret_cast<unsigned char>(edx27) < reinterpret_cast<unsigned char>(reinterpret_cast<unsigned char>(edx27) + reinterpret_cast<uint1_t>(reinterpret_cast<unsigned char>(eax24) < reinterpret_cast<unsigned char>(eax21))))));
                if (reinterpret_cast<unsigned char>(v16) < reinterpret_cast<unsigned char>(edx26)) 
                    goto addr_64941d15_10;
                if (reinterpret_cast<unsigned char>(v16) > reinterpret_cast<unsigned char>(edx26)) 
                    goto addr_64941d5f_12;
                if (reinterpret_cast<unsigned char>(v15) <= reinterpret_cast<unsigned char>(eax25)) 
                    goto addr_64941d15_10;
                addr_64941d5f_12:
                cf28 = reinterpret_cast<uint1_t>(reinterpret_cast<unsigned char>(v15) < reinterpret_cast<unsigned char>(eax25));
                v15 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(v15) - reinterpret_cast<unsigned char>(eax25));
                v16 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(v16) - (reinterpret_cast<unsigned char>(edx26) + reinterpret_cast<uint1_t>(reinterpret_cast<unsigned char>(v16) < reinterpret_cast<unsigned char>(reinterpret_cast<unsigned char>(edx26) + cf28))));
                edx27 = v16;
                ecx22 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(edx27) | reinterpret_cast<unsigned char>(v15));
                if (!ecx22) 
                    goto addr_64941d79_14;
                addr_64941ce0_4:
                if (reinterpret_cast<unsigned char>(v16) > reinterpret_cast<unsigned char>(0)) 
                    break;
                addr_64941ce7_6:
                if (reinterpret_cast<unsigned char>(v15) > reinterpret_cast<unsigned char>(0x1869e)) 
                    break;
                ebx20 = v15;
            }
        }
    } else {
        return eax8;
    }
    addr_64941d15_10:
    eax8 = 0;
    if (a4) {
        *reinterpret_cast<void***>(a4) = reinterpret_cast<void**>(0);
        *reinterpret_cast<void***>(a4 + 4) = reinterpret_cast<void**>(0);
        return 0;
    }
    addr_64941d79_14:
    goto addr_64941d15_10;
}

void fun_64941cb9() {
}

int32_t fun_64941d7c(int32_t* a1, uint32_t a2) {
    if (a2 > 1 || !a1) {
        return 22;
    } else {
        *a1 = 0;
        if (a2 == 1) {
            return 40;
        } else {
            return 0;
        }
    }
}

void fun_64941d8d() {
}

void fun_64941dac() {
}

void fun_64941f0c() {
}

void fun_6494204d() {
}

void fun_6494206a() {
}

void fun_6494214c() {
}

void fun_6494224c() {
}

void fun_64942529() {
}

struct s59 {
    signed char[16] pad16;
    int32_t f16;
};

struct s60 {
    signed char[96] pad96;
    void** f96;
};

struct s61 {
    signed char[72] pad72;
    void** f72;
};

struct s62 {
    signed char[16] pad16;
    int32_t f16;
};

struct s63 {
    signed char[8] pad8;
    int32_t f8;
};

struct s64 {
    signed char[8] pad8;
    int32_t f8;
};

struct s65 {
    signed char[16] pad16;
    int32_t f16;
};

struct s66 {
    signed char[4] pad4;
    void** f4;
    signed char[3] pad8;
    void*** f8;
};

struct s67 {
    signed char[16] pad16;
    int32_t f16;
};

struct s68 {
    signed char[16] pad16;
    int32_t f16;
};

void fun_6494286c() {
    struct s59* ebx1;
    void** eax2;
    struct s60* ebx3;
    int32_t ebp4;
    void** eax5;
    struct s61* ebx6;
    int32_t ebp7;
    struct s62* ebx8;
    void** v9;
    void** ecx10;
    void** v11;
    void** v12;
    void** eax13;
    void** ecx14;
    int32_t ebp15;
    struct s63* ebx16;
    struct s64* ebx17;
    struct s65* ebx18;
    int32_t ebp19;
    void** v20;
    void** v21;
    int32_t ebp22;
    void** edi23;
    struct s66* esi24;
    int32_t ebp25;
    struct s67* ebx26;
    struct s68* ebx27;
    int32_t ebp28;
    void** edi29;
    void** v30;
    void** v31;
    void** v32;
    void** v33;
    void** v34;
    void** v35;
    void** v36;
    void** v37;
    void** v38;
    void** v39;
    void** eax40;

    if (ebx1->f16 == 0x3ffffffe) {
        eax2 = reinterpret_cast<void**>(&ebx3->f96);
        *reinterpret_cast<void***>(ebp4 - 28) = eax2;
        eax5 = reinterpret_cast<void**>(&ebx6->f72);
        *reinterpret_cast<void***>(ebp7 - 32) = eax5;
        ebx8->f16 = 0x3fffffff;
        v9 = eax2;
        ecx10 = reinterpret_cast<void**>(0xffffffff);
        eax13 = fun_64942260(0xffffffff, eax5, v9, v11, v12);
        if (eax13 || (ecx14 = *reinterpret_cast<void***>(ebp15 - 28), ebx16->f8 = ebx17->f8 - ebx18->f16, ecx10 = *reinterpret_cast<void***>(ebp19 - 32), eax13 = fun_64941a50(ecx10, ecx14, v9, v20, v21), !!eax13)) {
            *reinterpret_cast<void***>(ebp22 - 28) = eax13;
            LeaveCriticalSection(ecx10, edi23, v9);
            *esi24->f8 = *reinterpret_cast<void***>(ebp25 - 28);
        } else {
            ebx26->f16 = 0;
            goto addr_64942880_6;
        }
    } else {
        ebx27->f16 = ebx1->f16 + 1;
        goto addr_64942880_6;
    }
    addr_64942864_8:
    goto *reinterpret_cast<int32_t*>(ebp28 - 12 + 4 + 4 + 4 + 4);
    addr_64942880_6:
    LeaveCriticalSection(ecx10, edi29, v9);
    v30 = esi24->f4;
    eax40 = pthread_mutex_lock(ecx10, v30, edi29, v9, v31, v32, v33, v34, v35, v36, v37, v38, v39);
    if (eax40) {
        *esi24->f8 = eax40;
        goto addr_64942864_8;
    }
}

void fun_649428ed() {
}

void fun_64942a2d() {
}

void fun_64942b8c() {
}

void fun_64942c5c() {
}

void fun_64942e8d() {
}

void fun_6494310c() {
}

void fun_64943154() {
}

void fun_6494319c() {
}

void fun_64943233() {
}

int32_t fun_649433ee() {
    int32_t v1;
    uint32_t* v2;
    uint32_t* eax3;

    if (!v1) {
        return 22;
    } else {
        *v2 = *eax3 & 3;
        return 0;
    }
}

int32_t fun_64943406(uint32_t* a1, uint32_t a2) {
    if (!a1 || a2 > 2) {
        return 22;
    } else {
        *a1 = *a1 & 0xfffffffc | a2;
        return 0;
    }
}

int32_t fun_6494344e() {
    int32_t v1;
    uint32_t* v2;
    uint32_t* eax3;

    if (!v1) {
        return 22;
    } else {
        *v2 = *eax3 >> 2 & 1;
        return 0;
    }
}

int32_t fun_64943469(uint32_t* a1, uint32_t a2) {
    int32_t eax3;

    if (a2 > 1 || !a1) {
        return 22;
    } else {
        eax3 = 40;
        if (a2 != 1) {
            eax3 = 0;
        }
        *a1 = *a1 & 0xfffffffb;
        return eax3;
    }
}

void fun_6494347d() {
}

int32_t fun_649434a2(uint32_t* a1, uint32_t* a2) {
    *a2 = *a1 & 24;
    return 0;
}

void fun_649435ec() {
}

void fun_6494362c() {
}

void fun_64943653() {
}

struct s69 {
    signed char[12] pad12;
    int32_t f12;
    int32_t f16;
};

void fun_6494369d(struct s69* a1) {
    int32_t edx2;

    edx2 = a1->f16;
    a1->f16 = 0;
    a1->f12 = -edx2;
    goto fun_64943660;
}

void fun_649437ba() {
    int32_t eax1;
    void** edx2;
    void*** ebx3;
    void** v4;
    void** v5;
    void** v6;
    void** v7;
    void** v8;
    void** v9;
    void** v10;
    void** v11;
    int32_t v12;

    eax1 = reinterpret_cast<int32_t>(GetCurrentThreadId(__return_address()));
    edx2 = *ebx3;
    fun_64948f44("RWL%p %d %s\n", edx2, eax1, v4, v5, v6, v7, v8, v9, v10, v11);
    goto v12;
}

void fun_6494392d() {
}

void fun_6494399d() {
}

void fun_64943a3a() {
    int32_t* edi1;
    int32_t v2;
    int32_t v3;

    *edi1 = v2;
    goto v3;
}

void fun_64943a99() {
}

void fun_64943afa() {
}

void fun_64943b1d() {
}

struct s70 {
    signed char[16] pad16;
    int32_t f16;
};

void fun_64943bca(void** ecx, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7, void** a8, void** a9, void** a10, void** a11, void** a12, void** a13, void** a14, void** a15, void** a16, void** a17, void** a18, void** a19, void** a20, void** a21, void** a22, void** a23, void** a24) {
    struct s70* esi25;
    void** ebp26;

    esi25->f16 = esi25->f16 + 1;
    pthread_mutex_unlock(ecx, ebp26, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15, a16, a17, a18, a19, a20, a21, a22, a23, a24);
    goto fun_649436c0;
}

struct s71 {
    signed char[12] pad12;
    int32_t f12;
    int32_t f16;
    void** f20;
    signed char[3] pad24;
    void** f24;
};

void fun_64943c0e(void** ecx, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7, void** a8, void** a9, void** a10, void** a11, void** a12, void** a13, void** a14, void** a15, void** a16, void** a17, void** a18, void** a19, void** a20, void** a21, void** a22, void** a23, void** a24) {
    struct s71* esi25;
    struct s71** ebx26;
    void** edi27;
    void** eax28;
    void** v29;
    void** eax30;

    esi25 = *ebx26;
    edi27 = reinterpret_cast<void**>(&esi25->f20);
    eax28 = pthread_mutex_trylock(ecx, edi27);
    if (eax28) {
        addr_64943c37_3:
    } else {
        esi25->f12 = esi25->f12 + 1;
        if (esi25->f12 == 0x7fffffff) {
            v29 = reinterpret_cast<void**>(&esi25->f24);
            eax30 = pthread_mutex_lock(ecx, v29, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12);
            if (!eax30) {
                esi25->f12 = esi25->f12 - esi25->f16;
                esi25->f16 = 0;
                fun_64943660(ecx, v29, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15, a16);
                goto addr_64943c37_3;
            } else {
                pthread_mutex_unlock(ecx, edi27, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15, a16, a17, a18, a19, a20, a21, a22, a23, a24);
            }
        } else {
            pthread_mutex_unlock(ecx, edi27, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15, a16, a17, a18, a19, a20, a21, a22, a23, a24);
            goto addr_64943c37_3;
        }
    }
    goto fun_649436c0;
}

struct s72 {
    signed char[8] pad8;
    int32_t f8;
    int32_t f12;
    int32_t f16;
    void** f20;
    signed char[3] pad24;
    void** f24;
};

void fun_64943c9e(void** ecx, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7, void** a8, void** a9, void** a10, void** a11, void** a12, void** a13, void** a14, void** a15, void** a16, void** a17, void** a18, void** a19, void** a20, void** a21, void** a22, void** a23, void** a24) {
    struct s72* esi25;
    struct s72** ebx26;
    void** edi27;
    void** eax28;
    void** v29;
    void** eax30;
    int32_t eax31;
    void** eax32;

    esi25 = *ebx26;
    edi27 = reinterpret_cast<void**>(&esi25->f20);
    eax28 = pthread_mutex_trylock(ecx, edi27);
    if (eax28) {
        addr_64943d0d_3:
    } else {
        v29 = reinterpret_cast<void**>(&esi25->f24);
        eax30 = pthread_mutex_trylock(ecx, v29);
        if (eax30) {
            eax28 = pthread_mutex_unlock(ecx, edi27, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15, a16, a17, a18, a19, a20, a21, a22, a23, a24);
            if (!eax28) {
                goto addr_64943d0d_3;
            }
        } else {
            if (!esi25->f8) {
                eax31 = esi25->f12;
                if (!(reinterpret_cast<uint1_t>(esi25->f16 < 0) | reinterpret_cast<uint1_t>(esi25->f16 == 0))) {
                    eax31 = eax31 - esi25->f16;
                    esi25->f12 = eax31;
                    esi25->f16 = 0;
                }
                if (reinterpret_cast<uint1_t>(eax31 < 0) | reinterpret_cast<uint1_t>(eax31 == 0)) {
                    esi25->f8 = 1;
                } else {
                    eax32 = fun_64943660(ecx, v29, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15, a16);
                    if (!eax32) {
                    }
                }
            }
        }
    }
    goto fun_649436c0;
}

void fun_64943d6c() {
}

void fun_64943dc2() {
}

void fun_64943e6a() {
}

void fun_64943ea9() {
}

struct s73 {
    signed char[8] pad8;
    int32_t f8;
    int32_t f12;
    void** f16;
};

void fun_64943fac() {
    void** v1;
    struct s73* esi2;
    struct s73* esi3;
    void** eax4;
    void** v5;
    void** edi6;
    void** ebp7;
    void** v8;
    void** v9;
    void** ecx10;
    void** v11;
    void** v12;
    void** v13;
    void** v14;
    void** v15;
    void** v16;
    void** v17;
    void** v18;
    void** v19;
    void** eax20;
    void** v21;
    void** v22;
    void** v23;
    void** v24;
    void** v25;
    void** v26;
    void** v27;
    void** v28;
    void** v29;
    void** eax30;
    void** v31;
    void** v32;
    int32_t v33;
    int32_t v34;

    v1 = reinterpret_cast<void**>(__return_address());
    esi2 = esi3;
    do {
        if (eax4) 
            break;
        v5 = edi6;
        v1 = ebp7;
        v8 = v9;
        eax4 = pthread_cond_timedwait(ecx10, v1, v5, v8, v11);
        ecx10 = esi2->f16;
    } while (reinterpret_cast<signed char>(ecx10) < reinterpret_cast<signed char>(0));
    goto addr_64943fcf_4;
    eax20 = pthread_getclean(ecx10, v1, v5, v8, v12, v13, v14, eax4, v15, v16, v17, v18, v19);
    *reinterpret_cast<void***>(eax20) = v21;
    goto addr_6494403b_6;
    addr_64943fcf_4:
    eax30 = pthread_getclean(ecx10, v1, v5, v8, v22, v23, v24, v25, eax4, v26, v27, v28, v29);
    *reinterpret_cast<void***>(eax30) = v31;
    if (eax4) {
        addr_6494403b_6:
        v1 = v32;
        v33(v1, v5, v8);
    } else {
        esi2->f12 = 0;
        esi2->f8 = esi2->f8 + 1;
    }
    fun_649436c0(v1, v5, v8);
    goto v34;
}

int32_t fun_64944077(int32_t* a1, int32_t* a2) {
    if (!a1 || !a2) {
        return 22;
    } else {
        *a2 = *a1;
        return 0;
    }
}

int32_t fun_649440a3(uint32_t* a1, uint32_t a2) {
    if (a2 > 1 || !a1) {
        return 22;
    } else {
        *a1 = a2;
        return 0;
    }
}

void fun_6494419c() {
}

int32_t pthread_spin_destroy(void*** a1) {
    int32_t eax2;
    void** ecx3;
    void** esi4;
    void** edi5;
    void** eax6;
    void** v7;
    void** v8;
    void** v9;
    void** v10;
    void** v11;
    void** v12;
    void** v13;
    void** ebx14;
    void** esi15;
    void** edi16;
    void** ebp17;

    eax2 = 22;
    if (a1 && (ecx3 = *a1, !!ecx3)) {
        fun_649440e0();
        esi4 = *a1;
        if (esi4 == 0xffffffff) {
            addr_64944227_3:
            *a1 = reinterpret_cast<void**>(0);
            g6494b014 = 0;
            return 0;
        } else {
            edi5 = *reinterpret_cast<void***>(esi4);
            if (!edi5 || (eax6 = reinterpret_cast<void**>(GetCurrentThreadId()), edi5 == eax6)) {
                v7 = esi4 + 8;
                DeleteCriticalSection(v7);
                fun_64948f1c(ecx3, esi4, v7, v8, v9, v10, v11, v12, v13, ebx14, esi15, edi16, ebp17);
                goto addr_64944227_3;
            } else {
                g6494b014 = 0;
                eax2 = 1;
            }
        }
    }
    return eax2;
}

void fun_6494453d() {
}

void fun_6494455c() {
}

void fun_649447fd() {
}

void fun_64944b06() {
}

void fun_64944b2d() {
}

struct s74 {
    int32_t f0;
    signed char[16] pad20;
    void** f20;
    signed char[3] pad24;
    void** f24;
    signed char[3] pad28;
    void** f28;
    signed char[3] pad32;
    unsigned char f32;
    signed char[3] pad36;
    unsigned char f36;
    signed char[15] pad52;
    int32_t f52;
    signed char[44] pad100;
    int32_t f100;
    signed char[68] pad172;
    int32_t f172;
    int32_t f176;
};

void fun_64944c3c(void** ecx, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7, void** a8, void** a9, void** a10, void** a11) {
    void** eax12;
    void** v13;
    struct s74* eax14;
    int32_t ebp15;
    void** v16;
    int32_t eax17;
    void** eax18;
    void** v19;
    int32_t eax20;
    void** eax21;
    int32_t ebp22;
    int32_t esi23;
    void** v24;
    void** v25;

    eax12 = g64949030;
    if (eax12 == 0xffffffff || (v13 = reinterpret_cast<void**>(0x64944c53), eax14 = reinterpret_cast<struct s74*>(TlsGetValue(eax12)), eax14 == 0)) {
        addr_64944c2e_3:
        goto *reinterpret_cast<int32_t*>(ebp15 - 8 + 4 + 4 + 4);
    } else {
        if (!(eax14->f32 & 48)) {
            if (eax14->f100) {
                if (eax14->f24) {
                    v16 = eax14->f24;
                    CloseHandle(v16, eax12);
                }
                eax14->f24 = reinterpret_cast<void**>(0);
            } else {
                if (eax14->f24) {
                    v13 = eax14->f24;
                    CloseHandle(v13, eax12);
                }
                eax17 = eax14->f176;
                eax14->f24 = reinterpret_cast<void**>(0);
                eax14->f100 = 1;
                if (eax17) {
                    fun_64944b10(ecx, v13, eax12, a2, a3, a4, a5, a6, a7, a8, a9);
                }
                if (eax14->f36 & 4) 
                    goto addr_64944d28_14;
            }
        } else {
            if (eax14->f176) {
                fun_64944b10(ecx, 0x64944c53, eax12, a2, a3, a4, a5, a6, a7, a8, a9);
            }
            if (!eax14->f20) 
                goto addr_64944ca6_18; else 
                goto addr_64944c7b_19;
        }
    }
    pthread_mutex_destroy(ecx, &eax14->f28, eax12, a2, a3, a4, a5, a6, a7, a8, a9);
    eax14->f52 = -1;
    goto addr_64944c2e_3;
    addr_64944d28_14:
    eax18 = eax14->f20;
    eax14->f0 = 0xdeadbeef;
    if (eax18) {
        CloseHandle(eax18, eax12);
    }
    addr_64944c9f_22:
    eax14->f20 = reinterpret_cast<void**>(0);
    addr_64944ca6_18:
    v19 = reinterpret_cast<void**>(&eax14->f28);
    pthread_mutex_destroy(ecx, v19, eax12, a2, a3, a4, a5, a6, a7, a8, a9);
    eax20 = eax14->f172;
    eax14->f52 = -1;
    if (!eax20) {
        fun_649446d0(ecx, v19, eax12, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11);
    }
    eax21 = g64949030;
    TlsSetValue(eax21, 0);
    goto *reinterpret_cast<int32_t*>(ebp22 - 8 + 4 + 4 + 4);
    addr_64944c7b_19:
    esi23 = CloseHandle;
    v24 = eax14->f20;
    esi23(v24, eax12);
    if (eax14->f24) {
        v25 = eax14->f24;
        esi23(v25, v24, eax12);
    }
    eax14->f24 = reinterpret_cast<void**>(0);
    goto addr_64944c9f_22;
}

void fun_64944ced() {
}

void fun_64944d4a() {
}

int32_t GetProcessAffinityMask = 0xe3f2;

int32_t SetProcessAffinityMask = 0xe580;

int32_t fun_64945071(int32_t a1) {
    void* ebp2;
    int32_t edi3;
    void** ecx4;
    int32_t esi5;
    int32_t eax6;
    void* v7;
    void* v8;
    int32_t v9;
    int32_t eax10;
    uint32_t edx11;
    uint32_t v12;
    uint32_t ebx13;
    void** ecx14;
    int32_t eax15;

    ebp2 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4);
    edi3 = a1;
    ecx4 = GetCurrentProcess;
    if (!edi3) {
        edi3 = 1;
    }
    esi5 = 0;
    eax6 = reinterpret_cast<int32_t>(ecx4());
    v7 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(ebp2) - 28);
    v8 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(ebp2) - 32);
    v9 = eax6;
    eax10 = reinterpret_cast<int32_t>(GetProcessAffinityMask(v9, v8, v7));
    if (eax10) {
        edx11 = v12;
        ebx13 = 0;
        ecx14 = ecx4;
        if (edx11) {
            esi5 = 0;
            do {
                ebx13 = ebx13 + ebx13;
                if (*reinterpret_cast<unsigned char*>(&edx11) & 1 && edi3 > esi5) {
                    ebx13 = ebx13 | 1;
                    ++esi5;
                }
                edx11 = edx11 >> 1;
            } while (edx11);
        }
        eax15 = reinterpret_cast<int32_t>(ecx14());
        SetProcessAffinityMask(eax15, ebx13, 0x649450ba, v9, v8, v7);
    }
    return esi5;
}

void** g6494b040;

void** g6494b044;

int32_t pthread_key_create(void** ecx, void*** a2, void** a3) {
    void** v4;
    void** v5;
    void** ebp6;
    int32_t eax7;
    void** v8;
    void** edi9;
    void** v10;
    void** esi11;
    void** v12;
    void** ebx13;
    void*** ebx14;
    void** v15;
    void** v16;
    void** v17;
    void** ecx18;
    void** esi19;
    void** v20;
    void** v21;
    void** v22;
    void** v23;
    void** v24;
    void** v25;
    void** v26;
    void** v27;
    void** v28;
    void** v29;
    void** edi30;
    void** eax31;
    void** ebp32;
    void** eax33;
    void** eax34;
    void** eax35;
    void** edi36;
    void** edx37;
    void** eax38;
    void** edx39;
    void* eax40;
    void** eax41;
    void** ecx42;
    void** v43;
    void** v44;
    void** v45;
    void** eax46;
    void** ecx47;
    void** v48;
    void** v49;
    void** v50;
    void** v51;
    void** v52;
    void** v53;
    void** eax54;

    v4 = reinterpret_cast<void**>(__return_address());
    v5 = ebp6;
    eax7 = 22;
    v8 = edi9;
    v10 = esi11;
    v12 = ebx13;
    ebx14 = a2;
    if (!ebx14) {
        addr_64945262_2:
        return eax7;
    } else {
        pthread_rwlock_wrlock(ecx, 0x6494902c, v15, v16, v17);
        ecx18 = g6494b040;
        esi19 = g6494b044;
        if (reinterpret_cast<unsigned char>(ecx18) >= reinterpret_cast<unsigned char>(esi19)) {
            addr_64945283_4:
            if (!ecx18) {
                addr_649452b3_5:
                if (esi19 == 0x100000) {
                    addr_64945350_6:
                    pthread_rwlock_unlock(ecx18, 0x6494902c, v20, v21, v22, v23, v24, v25, v26, v27, v28, v29, v12, v10, v8, v5, v4);
                    eax7 = 12;
                    goto addr_64945262_2;
                } else {
                    edi30 = reinterpret_cast<void**>(0x100000);
                    eax31 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(esi19) + reinterpret_cast<unsigned char>(esi19));
                    ebp32 = esi19 + 1;
                    if (!eax31) {
                        eax31 = ebp32;
                    }
                    if (reinterpret_cast<signed char>(eax31) <= reinterpret_cast<signed char>(0x100000)) {
                        edi30 = eax31;
                    }
                    v20 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(edi30) * 4);
                    eax33 = _pthread_key_dest;
                    eax34 = fun_64948f5c(eax33, v20);
                    if (!eax34) 
                        goto addr_64945350_6;
                }
            } else {
                eax35 = _pthread_key_dest;
                if (!*reinterpret_cast<void***>(eax35)) {
                    edi36 = eax35;
                    edx37 = reinterpret_cast<void**>(0);
                    goto addr_64945240_14;
                } else {
                    eax38 = eax35 + 4;
                    edx37 = reinterpret_cast<void**>(0);
                    do {
                        ++edx37;
                        if (edx37 == ecx18) 
                            goto addr_649452b3_5;
                        edi36 = eax38;
                        eax38 = eax38 + 4;
                    } while (*reinterpret_cast<uint32_t*>(eax38 + 0xfffffffc));
                    goto addr_64945240_14;
                }
            }
        } else {
            edx39 = _pthread_key_dest;
            eax40 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(ecx18) * 4);
            edi36 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(edx39) + reinterpret_cast<uint32_t>(eax40));
            eax41 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(edx39) + reinterpret_cast<uint32_t>(eax40) + 4);
            edx37 = ecx18;
            if (*reinterpret_cast<void***>(edi36)) {
                do {
                    ++edx37;
                    if (reinterpret_cast<unsigned char>(edx37) >= reinterpret_cast<unsigned char>(esi19)) 
                        goto addr_64945283_4;
                    edi36 = eax41;
                    eax41 = eax41 + 4;
                } while (*reinterpret_cast<uint32_t*>(eax41 + 0xfffffffc));
                goto addr_64945240_14;
            } else {
                edx37 = ecx18;
                goto addr_64945240_14;
            }
        }
    }
    ecx42 = eax34 + reinterpret_cast<unsigned char>(esi19) * 4;
    v43 = eax34;
    v44 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(edi30) - reinterpret_cast<unsigned char>(esi19) << 2);
    v45 = ecx42;
    fun_64948f6c(ecx42, 0, v44);
    eax46 = reinterpret_cast<void**>(1);
    g6494b044 = edi30;
    ecx47 = v45;
    g6494b040 = ebp32;
    _pthread_key_dest = v43;
    if (a3) {
        eax46 = a3;
    }
    *ebx14 = esi19;
    *reinterpret_cast<void***>(ecx47) = eax46;
    addr_64945254_25:
    pthread_rwlock_unlock(ecx47, 0x6494902c, 0, v44, v48, v49, v50, v45, v43, v51, v52, v53, v12, v10, v8, v5, v4);
    eax7 = 0;
    goto addr_64945262_2;
    addr_64945240_14:
    ecx47 = a3;
    eax54 = reinterpret_cast<void**>(1);
    *ebx14 = edx37;
    if (ecx47) {
        eax54 = a3;
    }
    *reinterpret_cast<void***>(edi36) = eax54;
    goto addr_64945254_25;
}

void fun_6494526a() {
}

void fun_6494529d() {
}

void fun_6494534c() {
}

int32_t SetLastError = 0xe570;

void** fun_64945445(void** ecx, void** a2) {
    int32_t eax3;
    void** v4;
    void** v5;
    void** v6;
    void** v7;
    void** v8;
    void** v9;
    void** v10;
    void** ebx11;
    void** esi12;
    void** edi13;
    void** ebp14;
    void** eax15;
    void** esi16;
    void** v17;
    void** v18;
    void** v19;
    void** v20;
    void** ebx21;
    void** v22;
    void** v23;
    void** v24;
    void** v25;

    eax3 = reinterpret_cast<int32_t>(GetLastError());
    eax15 = fun_64944990(ecx, v4, v5, v6, v7, v8, v9, v10, ebx11, esi12, edi13, ebp14);
    esi16 = eax15 + 52;
    pthread_spin_lock(esi16, v17, v18, v19, v20);
    if (reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax15 + 40)) <= reinterpret_cast<unsigned char>(a2) || !*reinterpret_cast<signed char*>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax15 + 48)) + reinterpret_cast<unsigned char>(a2))) {
        ebx21 = reinterpret_cast<void**>(0);
    } else {
        ebx21 = *reinterpret_cast<void***>(*reinterpret_cast<void***>(eax15 + 44) + reinterpret_cast<unsigned char>(a2) * 4);
    }
    pthread_spin_unlock(esi16, v22, v23, v24, v25);
    SetLastError(eax3);
    return ebx21;
}

void fun_649454ac() {
}

void fun_649455ea() {
    goto fun_64944b10;
}

void fun_6494563a() {
}

void fun_6494566a() {
    int32_t v1;

    goto v1;
}

void fun_649457bc() {
}

void fun_649457cc() {
}

void fun_649457ec() {
}

void fun_6494581d() {
}

void fun_64945919() {
}

struct s75 {
    signed char[32] pad32;
    unsigned char f32;
};

struct s76 {
    signed char[100] pad100;
    int32_t f100;
};

struct s77 {
    signed char[20] pad20;
    int32_t f20;
};

int32_t SetEvent = 0xe564;

int32_t SuspendThread = 0xe5f8;

int32_t GetThreadContext = 0xe452;

int32_t SetThreadContext = 0xe5aa;

int32_t ResumeThread = 0xe536;

void fun_64945cd9(void** ecx, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7, void** a8, void** a9, void** a10, void** a11, void** a12, void** a13, void** a14, void** a15, void** a16, void** a17, void** a18, void** a19, void** a20, void** a21, void** a22, void** a23, void** a24) {
    struct s75* eax25;
    struct s76* eax26;
    struct s77* eax27;
    int32_t esi28;
    void** edi29;
    void** v30;
    void** v31;
    void** v32;
    void** v33;
    void** v34;
    void** v35;
    void** v36;
    void** v37;
    void** v38;
    void** v39;
    void** v40;
    void** v41;
    void** v42;
    void** v43;
    void** v44;
    void** eax45;
    void** eax46;
    void** edi47;
    int32_t eax48;
    void** esi49;
    void** v50;
    void** v51;
    void** v52;
    void** v53;
    void** v54;
    void** v55;
    void** v56;
    void** v57;
    void** v58;
    void** v59;
    void** v60;
    void** v61;
    void** v62;
    void** v63;
    void** v64;
    void** eax65;
    void** eax66;
    uint32_t eax67;
    uint32_t eax68;
    void** tmp32_69;
    void** v70;
    void** v71;
    void** v72;
    void** v73;
    void** v74;
    void** v75;
    void** v76;
    void** v77;
    void** v78;
    void** v79;
    void** v80;
    void** v81;
    void** v82;
    void** v83;
    void** v84;
    void** v85;
    void** v86;
    void** v87;
    void** v88;
    void** v89;
    uint32_t eax90;
    uint32_t eax91;
    void** v92;
    void** v93;
    void** v94;
    void** v95;
    void** v96;
    void** v97;
    void** v98;
    void** v99;
    void** v100;
    void** v101;
    void** v102;
    void** v103;
    void** v104;
    void** v105;
    void** v106;
    void** v107;
    void** v108;
    void** v109;
    void** v110;
    void** v111;
    void** v112;
    void** v113;
    void** v114;
    uint32_t eax115;
    void** v116;
    void** v117;
    void** v118;
    void** v119;
    void** v120;
    void** v121;
    void** v122;
    void** v123;
    void** v124;
    void** v125;
    void** v126;
    void** v127;
    void** v128;
    void** v129;
    void** v130;
    void** v131;
    void** v132;
    void** v133;
    void** v134;
    void** v135;
    void** eax136;
    void** v137;
    int32_t eax138;
    void** v139;
    void** v140;
    void** eax141;
    uint32_t eax142;
    uint32_t eax143;
    void** tmp32_144;
    void** v145;
    void** v146;
    void** v147;
    void** v148;
    void** v149;
    void** v150;
    void** v151;
    void** v152;
    void** v153;
    void** v154;
    void** v155;
    void** v156;
    void** v157;
    void** v158;
    uint32_t eax159;
    void** tmp32_160;
    void** v161;

    if (eax25->f32 & 12 || (eax26->f100 || (!eax27->f20 || eax27->f20 == -1))) {
        pthread_mutex_unlock(ecx, 0x64949028, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15, a16, a17, a18, a19, a20, a21, a22, a23, a24);
        goto addr_64945cd0_4;
    }
    pthread_mutex_unlock(ecx, 0x64949028, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15, a16, a17, a18, a19, a20, a21, a22, a23, a24);
    if (!esi28 || reinterpret_cast<uint32_t>(esi28 - 2) > 21) {
        addr_64945cd0_4:
        goto a8;
    } else {
        eax45 = __pth_gpointer_locked(ecx, edi29, v30, v31, v32, v33, v34, v35, v36, v37, v38, v39, v40, v41, v42, v43, v44);
        if (!eax45) 
            goto addr_64945ac8_8;
        eax46 = *reinterpret_cast<void***>(eax45 + 20);
        if (reinterpret_cast<unsigned char>(eax46 + 0xffffffff) > reinterpret_cast<unsigned char>(0xfffffffd)) 
            goto addr_64945ac8_8;
        edi47 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4 + 4 + 16 + 4 + 4 + 4 - 4 + 0xfffffd1c);
        eax48 = reinterpret_cast<int32_t>(GetHandleInformation(eax46, edi47));
        if (!eax48) 
            goto addr_64945ac8_8;
        esi49 = eax45 + 28;
        pthread_mutex_lock(ecx, esi49, 0x64945ae8, eax46, edi47, v50, v51, v52, v53, v54, v55, v56, v57);
        eax65 = fun_64944990(ecx, esi49, 0x64945ae8, eax46, edi47, v58, v59, v60, v61, v62, v63, v64);
        if (!eax65) {
            eax66 = reinterpret_cast<void**>(0);
        } else {
            eax66 = *reinterpret_cast<void***>(eax65 + 0xb0);
        }
        if (edi29 != eax66) 
            goto addr_64945b12_15;
    }
    eax67 = *reinterpret_cast<unsigned char*>(eax45 + 32);
    if (*reinterpret_cast<unsigned char*>(&eax67) & 3) 
        goto addr_64945b5c_17;
    eax68 = eax67 & 0xfffffffc | 1;
    *reinterpret_cast<unsigned char*>(eax45 + 32) = *reinterpret_cast<unsigned char*>(&eax68);
    tmp32_69 = g6494b050 + 1;
    g6494b050 = tmp32_69;
    if (*reinterpret_cast<void***>(eax45 + 24)) {
        v70 = *reinterpret_cast<void***>(eax45 + 24);
        SetEvent(v70, 0x64945ae8, eax46, edi47);
    }
    if ((reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax45 + 36)) & 3) == 3) 
        goto addr_64945bac_21;
    addr_64945b4d_22:
    pthread_mutex_unlock(ecx, esi49, 0x64945ae8, eax46, edi47, v71, v72, v73, 0x10001, v74, v75, v76, v77, v78, v79, v80, v81, v82, v83, v84, v85, v86, v87, v88, v89);
    addr_64945acd_23:
    goto a8;
    addr_64945bac_21:
    eax90 = *reinterpret_cast<unsigned char*>(eax45 + 32);
    *reinterpret_cast<void***>(eax45 + 36) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax45 + 36)) & 0xfffffffe);
    eax91 = eax90 & 0xfffffff3 | 4;
    *reinterpret_cast<unsigned char*>(eax45 + 32) = *reinterpret_cast<unsigned char*>(&eax91);
    pthread_mutex_unlock(ecx, esi49, 0x64945ae8, eax46, edi47, v92, v93, v94, v95, v96, v97, v98, v99, v100, v101, v102, v103, v104, v105, v106, v107, v108, v109, v110, v111);
    *reinterpret_cast<unsigned char*>(&eax115) = _pthread_invoke_cancel(ecx, esi49, 0x64945ae8, eax46, edi47, v112, v113, v114);
    esi49 = esi49;
    goto addr_64945bd0_24;
    addr_64945b12_15:
    eax115 = *reinterpret_cast<unsigned char*>(eax45 + 32);
    if ((reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax45 + 36)) & 3) == 3) {
        addr_64945bd0_24:
        if (*reinterpret_cast<unsigned char*>(&eax115) & 12) {
            addr_64945b5c_17:
            pthread_mutex_unlock(ecx, esi49, 0x64945ae8, eax46, edi47, v116, v117, v118, v119, v120, v121, v122, v123, v124, v125, v126, v127, v128, v129, v130, v131, v132, v133, v134, v135);
            if (*reinterpret_cast<unsigned char*>(eax45 + 32) & 12) {
                addr_64945ac8_8:
                goto addr_64945acd_23;
            } else {
                goto addr_64945acd_23;
            }
        } else {
            if (*reinterpret_cast<unsigned char*>(&eax115) & 15) 
                goto addr_64945ac8_8;
            eax136 = *reinterpret_cast<void***>(eax45 + 20);
            SuspendThread(eax136, 0x64945ae8, eax46, edi47);
            v137 = *reinterpret_cast<void***>(eax45 + 20);
            eax138 = reinterpret_cast<int32_t>(WaitForSingleObject(v137, 0, 0x64945ae8, eax46, edi47));
            if (eax138 == 0x102) {
                v139 = *reinterpret_cast<void***>(eax45 + 20);
                GetThreadContext(v139, edi47, v137, 0, 0x64945ae8, eax46, edi47);
                v140 = *reinterpret_cast<void***>(eax45 + 20);
                eax141 = reinterpret_cast<void**>(SetThreadContext(v140, edi47, v139, edi47, v137, 0, 0x64945ae8, eax46, edi47));
                eax142 = *reinterpret_cast<unsigned char*>(eax45 + 32);
                *reinterpret_cast<void***>(eax45 + 36) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax45 + 36)) & 0xfffffffe);
                eax143 = eax142 & 0xfffffff0 | 5;
                *reinterpret_cast<unsigned char*>(eax45 + 32) = *reinterpret_cast<unsigned char*>(&eax143);
                tmp32_144 = g6494b050 + 1;
                g6494b050 = tmp32_144;
                if (*reinterpret_cast<void***>(eax45 + 24)) {
                    v145 = *reinterpret_cast<void***>(eax45 + 24);
                    SetEvent(v145, eax141, v140, edi47, v139, edi47, v137, 0, 0x64945ae8, eax46, edi47);
                }
                pthread_mutex_unlock(ecx, esi49, eax141, v140, edi47, v139, edi47, v137, 0, 0x64945ae8, eax46, edi47, v146, v147, v148, 0x10001, v149, v150, v151, v152, v153, v154, v155, v156, v157);
                v158 = *reinterpret_cast<void***>(eax45 + 20);
                ResumeThread(v158, eax141, v140, edi47, v139, edi47, v137, 0, 0x64945ae8, eax46, edi47);
                goto addr_64945b4d_22;
            }
        }
    } else {
        if (*reinterpret_cast<unsigned char*>(&eax115) & 3) 
            goto addr_64945b5c_17;
        eax159 = eax115 & 0xfffffffc | 1;
        *reinterpret_cast<unsigned char*>(eax45 + 32) = *reinterpret_cast<unsigned char*>(&eax159);
        tmp32_160 = g6494b050 + 1;
        g6494b050 = tmp32_160;
        if (*reinterpret_cast<void***>(eax45 + 24)) {
            v161 = *reinterpret_cast<void***>(eax45 + 24);
            SetEvent(v161, 0x64945ae8, eax46, edi47);
            goto addr_64945b4d_22;
        }
    }
}

uint32_t fun_64945d25(uint32_t* a1, uint32_t a2) {
    return a2 & *a1;
}

void fun_64945e3d() {
    uint32_t* edx1;
    uint32_t* edx2;
    uint32_t v3;

    *edx1 = *edx2 & 0xfffffff7 | v3;
    return;
}

struct s78 {
    signed char[28] pad28;
    void** f28;
    signed char[7] pad36;
    uint32_t f36;
};

void fun_64945f2a(void** ecx, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7, void** a8, void** a9, void** a10, void** a11, void** a12, void** a13, void** a14, void** a15, void** a16, void** a17, void** a18, void** a19, void** a20, void** a21, void** a22, void** a23, void** a24) {
    void** ebx25;
    struct s78* esi26;
    uint32_t edi27;

    ebx25 = reinterpret_cast<void**>(&esi26->f28);
    pthread_mutex_lock(ecx, ebx25, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12);
    if (a10) {
        *reinterpret_cast<void***>(a10) = reinterpret_cast<void**>(esi26->f36 & 1);
    }
    esi26->f36 = esi26->f36 & 0xfffffffe | edi27;
    fun_64945890(a10, ebx25, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14);
    pthread_mutex_unlock(a10, ebx25, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15, a16, a17, a18, a19, a20, a21, a22, a23, a24);
    goto a8;
}

int32_t fun_64945f71(void** ecx, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7, void** a8, void** a9, void** a10, void** a11, void** a12, void** a13, void** a14, void** a15, void** a16, void** a17) {
    void** v18;
    void** v19;
    void** v20;
    void** v21;
    void** ebx22;
    void** esi23;
    void** edi24;
    void** eax25;
    int32_t eax26;
    void** edi27;
    void** ebx28;
    void** v29;
    void** v30;
    void** v31;
    void** v32;
    void** v33;
    void** v34;
    void** v35;
    void** v36;
    void** v37;

    eax25 = fun_64944990(ecx, v18, v19, v20, v21, ebx22, esi23, edi24, __return_address(), a2, a3, a4);
    eax26 = 22;
    if (eax25 && (edi27 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(a2) & 2), edi27 == a2)) {
        ebx28 = eax25 + 28;
        pthread_mutex_lock(ecx, ebx28, v29, v30, v31, ebx22, esi23, edi24, __return_address(), a2, a3, a4, a5);
        if (a3) {
            *reinterpret_cast<void***>(a3) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax25 + 36)) & 2);
        }
        *reinterpret_cast<void***>(eax25 + 36) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax25 + 36)) & 0xfffffffd | reinterpret_cast<unsigned char>(edi27));
        fun_64945890(ecx, ebx28, v32, v33, v34, ebx22, esi23, edi24, __return_address(), a2, a3, a4, a5, a6, a7);
        pthread_mutex_unlock(ecx, ebx28, v35, v36, v37, ebx22, esi23, edi24, __return_address(), a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15, a16, a17);
        eax26 = 0;
    }
    return eax26;
}

void fun_64945faa() {
}

int32_t _beginthreadex = 0xe6e8;

int32_t SetThreadPriority = 0xe5be;

int32_t fun_64945ff1(void** ecx, void*** a2, void** a3, void** a4, void** a5) {
    void** v6;
    void** v7;
    void** v8;
    void** v9;
    void** v10;
    void** v11;
    void** v12;
    void** v13;
    void** v14;
    void** v15;
    void** v16;
    void** ebx17;
    void** esi18;
    void** edi19;
    void** ebp20;
    void** eax21;
    void** esi22;
    int32_t ebx23;
    int32_t edi24;
    void** v25;
    void** v26;
    void** v27;
    void** eax28;
    void** v29;
    void** eax30;
    void** ebx31;
    void** eax32;
    void** v33;
    void** v34;
    void** v35;
    void** v36;
    void** v37;
    void** eax38;
    void** v39;
    void** v40;
    void** v41;
    void** v42;
    void** v43;
    void** eax44;
    void** v45;
    void** v46;
    void** v47;
    void** eax48;
    void** v49;
    void** v50;

    eax21 = fun_64944860(ecx, v6, v7, v8, v9, v10, v11, v12, v13, v14, v15, v16, ebx17, esi18, edi19, ebp20, __return_address());
    esi22 = eax21;
    if (!eax21) {
        addr_649461ba_3:
        return 11;
    } else {
        if (a2) {
            *a2 = *reinterpret_cast<void***>(esi22 + 0xb0);
        }
        ebx23 = 1;
        edi24 = Sleep;
        *reinterpret_cast<void***>(esi22 + 100) = reinterpret_cast<void**>(0);
        *reinterpret_cast<void***>(esi22 + 36) = reinterpret_cast<void**>(1);
        *reinterpret_cast<void***>(esi22 + 4) = a5;
        *reinterpret_cast<void***>(esi22 + 20) = reinterpret_cast<void**>(0xffffffff);
        *reinterpret_cast<void***>(esi22 + 8) = a4;
        while (v25 = reinterpret_cast<void**>(1), v26 = reinterpret_cast<void**>(0), v27 = reinterpret_cast<void**>(0x6494607b), eax28 = reinterpret_cast<void**>(CreateEventA(0, 1, 0, 0)), *reinterpret_cast<void***>(esi22 + 24) = eax28, !eax28) {
            if (ebx23 == 1) {
                v29 = reinterpret_cast<void**>(0);
                Sleep(0);
            } else {
                v29 = reinterpret_cast<void**>(20);
                edi24(20);
                if (ebx23 == 5) 
                    goto addr_649460b6_11;
            }
            ++ebx23;
        }
    }
    *reinterpret_cast<int32_t*>(esi22 + 28) = -1;
    *reinterpret_cast<int32_t*>(esi22 + 52) = -1;
    *reinterpret_cast<void***>(esi22) = reinterpret_cast<void**>(0xbab1f00d);
    *reinterpret_cast<void***>(esi22 + 0x68) = reinterpret_cast<void**>(0);
    *reinterpret_cast<void***>(esi22 + 96) = reinterpret_cast<void**>(0);
    goto addr_649460e3_14;
    addr_649460b6_11:
    eax30 = *reinterpret_cast<void***>(esi22 + 24);
    *reinterpret_cast<int32_t*>(esi22 + 28) = -1;
    *reinterpret_cast<int32_t*>(esi22 + 52) = -1;
    *reinterpret_cast<void***>(esi22) = reinterpret_cast<void**>(0xbab1f00d);
    *reinterpret_cast<void***>(esi22 + 0x68) = reinterpret_cast<void**>(0);
    *reinterpret_cast<void***>(esi22 + 96) = reinterpret_cast<void**>(0);
    if (!eax30) {
        addr_6494619c_15:
        if (a2) {
            *a2 = reinterpret_cast<void**>(0);
        }
    } else {
        addr_649460e3_14:
        if (!a3) {
            ebx31 = reinterpret_cast<void**>(0);
            goto addr_6494610d_18;
        } else {
            ecx = a3;
            eax32 = *reinterpret_cast<void***>(a3);
            ebx31 = *reinterpret_cast<void***>(ecx + 8);
            *reinterpret_cast<void***>(esi22 + 36) = eax32;
            if (*reinterpret_cast<unsigned char*>(&eax32) & 8) {
                eax38 = fun_64944990(ecx, v29, v33, v34, 0x6494607b, 0, 1, 0, 0, v35, v36, v37);
                *reinterpret_cast<void***>(esi22 + 0x68) = *reinterpret_cast<void***>(eax38 + 0x68);
                goto addr_6494610d_18;
            } else {
                *reinterpret_cast<void***>(esi22 + 0x68) = *reinterpret_cast<void***>(a3 + 12);
                goto addr_6494610d_18;
            }
        }
    }
    if (!*reinterpret_cast<void***>(esi22 + 0xac)) {
        fun_649446d0(ecx, v29, v39, 0x64944db0, v27, v26, v25, 0, 0, v40, v41, v42, v43);
        goto addr_649461ba_3;
    }
    addr_6494610d_18:
    v39 = ebx31;
    v25 = reinterpret_cast<void**>(0);
    v26 = reinterpret_cast<void**>(4);
    v27 = esi22;
    eax44 = reinterpret_cast<void**>(_beginthreadex(0, v39, 0x64944db0, v27, 4, 0, 0, 0));
    if (eax44 == 0xffffffff || !eax44) {
        if (*reinterpret_cast<void***>(esi22 + 24)) {
            v45 = *reinterpret_cast<void***>(esi22 + 24);
            CloseHandle(v45, v39, 0x64944db0, v27, 4, 0, 0, 0);
        }
        v29 = esi22 + 28;
        pthread_mutex_destroy(ecx, v29, v39, 0x64944db0, v27, 4, 0, 0, 0, v46, v47);
        *reinterpret_cast<int32_t*>(esi22 + 52) = -1;
        *reinterpret_cast<void***>(esi22 + 24) = reinterpret_cast<void**>(0);
        goto addr_6494619c_15;
    } else {
        eax48 = *reinterpret_cast<void***>(esi22 + 0x68);
        if (reinterpret_cast<signed char>(eax48) < reinterpret_cast<signed char>(0xfffffff2)) {
            eax48 = reinterpret_cast<void**>(0xfffffff1);
        } else {
            if (reinterpret_cast<signed char>(eax48) < reinterpret_cast<signed char>(0xffffffff)) {
                eax48 = reinterpret_cast<void**>(0xfffffffe);
            } else {
                if (reinterpret_cast<signed char>(eax48) > reinterpret_cast<signed char>(14)) {
                    eax48 = reinterpret_cast<void**>(15);
                } else {
                    if (reinterpret_cast<signed char>(eax48) >= reinterpret_cast<signed char>(2)) {
                        eax48 = reinterpret_cast<void**>(2);
                    }
                }
            }
        }
        SetThreadPriority(eax44, eax48, 0x64944db0, v27, 4, 0, 0, 0);
        v49 = *reinterpret_cast<void***>(esi22 + 24);
        ResetEvent(v49, 0x649461d9, eax44, eax48, 0x64944db0, v27, 4, 0, 0, 0);
        if (!(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(esi22 + 36)) & 4)) {
            *reinterpret_cast<void***>(esi22 + 20) = eax44;
            v50 = eax44;
            ResumeThread(v50, v49, 0x649461d9, eax44, eax48, 0x64944db0, v27, 4, 0, 0, 0);
        } else {
            *reinterpret_cast<void***>(esi22 + 20) = reinterpret_cast<void**>(0);
            v50 = eax44;
            ResumeThread(v50, v49, 0x649461d9, eax44, eax48, 0x64944db0, v27, 4, 0, 0, 0);
            CloseHandle(eax44, v50, v49, 0x649461d9, eax44, eax48, 0x64944db0, v27, 4, 0, 0, 0);
        }
        Sleep(0, v50, v49, 0x649461d9, eax44, eax48, 0x64944db0, v27, 4, 0, 0, 0);
        return 0;
    }
}

void fun_6494616c() {
}

void fun_6494622a() {
}

struct s79 {
    signed char[36] pad36;
    unsigned char f36;
};

struct s80 {
    signed char[100] pad100;
    int32_t f100;
};

struct s81 {
    signed char[20] pad20;
    void** f20;
};

struct s82 {
    signed char[20] pad20;
    void** f20;
};

struct s83 {
    signed char[24] pad24;
    void** f24;
};

struct s84 {
    signed char[12] pad12;
    int32_t f12;
};

struct s85 {
    signed char[24] pad24;
    int32_t f24;
};

struct s86 {
    signed char[12] pad12;
    void** f12;
};

struct s87 {
    signed char[4] pad4;
    void** f4;
};

struct s88 {
    signed char[28] pad28;
    void** f28;
};

struct s89 {
    signed char[172] pad172;
    int32_t f172;
};

struct s90 {
    signed char[52] pad52;
    int32_t f52;
};

void fun_6494641c(void** ecx, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7, void** a8, void** a9, void** a10, void** a11, void** a12, void** a13, void** a14, void** a15, void** a16, void** a17, void** a18, void** a19, void** a20, void** a21, void** a22, void** a23, void** a24) {
    void** esi25;
    void** esi26;
    struct s79* ebx27;
    void** eax28;
    void** eax29;
    struct s80* ebx30;
    void** v31;
    struct s81* ebx32;
    int32_t eax33;
    int32_t esi34;
    void** v35;
    struct s82* ebx36;
    struct s83* ebx37;
    void** v38;
    int32_t eax39;
    struct s84* ebp40;
    struct s85* ebx41;
    struct s86* ebp42;
    struct s87* ebx43;
    void** v44;
    struct s88* ebx45;
    int32_t esi46;
    struct s89* ebx47;
    struct s90* ebx48;
    int32_t ebp49;
    int32_t ebp50;

    esi25 = esi26;
    if (!(ebx27->f36 & 4)) {
        eax28 = fun_64944990(ecx, __return_address(), a2, a3, a4, a5, a6, a7, a8, a9, a10, a11);
        if (!eax28) {
            eax29 = reinterpret_cast<void**>(0);
            esi25 = esi25;
        } else {
            eax29 = *reinterpret_cast<void***>(eax28 + 0xb0);
        }
        if (esi25 == eax29) {
            pthread_mutex_unlock(ecx, 0x64949028, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15, a16, a17, a18, a19, a20, a21, a22, a23, a24);
        } else {
            if (ebx30->f100 || (a2 = reinterpret_cast<void**>(0), v31 = ebx32->f20, eax33 = reinterpret_cast<int32_t>(WaitForSingleObject(v31, 0)), !eax33)) {
                esi34 = CloseHandle;
                v35 = ebx36->f20;
                esi34(v35, a2);
                if (ebx37->f24) {
                    v38 = ebx37->f24;
                    esi34(v38, v35, a2);
                }
                eax39 = ebp40->f12;
                ebx41->f24 = 0;
                if (eax39) {
                    ecx = ebp42->f12;
                    *reinterpret_cast<void***>(ecx) = ebx43->f4;
                }
                v44 = reinterpret_cast<void**>(&ebx45->f28);
                pthread_mutex_destroy(ecx, v44, v35, a2, a3, a4, a5, a6, a7, a8, a9);
                esi46 = ebx47->f172;
                ebx48->f52 = -1;
                if (!esi46) {
                    fun_649446d0(ecx, v44, v35, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11);
                }
                pthread_mutex_unlock(ecx, 0x64949028, v35, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15, a16, a17, a18, a19, a20, a21, a22, a23);
                pthread_testcancel(ecx, 0x64949028, v35, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15, a16, a17, a18, a19);
            } else {
                pthread_mutex_unlock(ecx, 0x64949028, 0x64946476, v31, 0, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15, a16, a17, a18, a19, a20, a21, a22);
                pthread_testcancel(ecx, 0x64949028, 0x64946476, v31, 0, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15, a16, a17, a18);
            }
        }
        goto *reinterpret_cast<int32_t*>(ebp49 - 8 + 4 + 4 + 4);
    } else {
        pthread_mutex_unlock(ecx, 0x64949028, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15, a16, a17, a18, a19, a20, a21, a22, a23, a24);
        goto *reinterpret_cast<int32_t*>(ebp50 - 8 + 4 + 4 + 4);
    }
}

struct s91 {
    signed char[36] pad36;
    uint32_t f36;
};

struct s92 {
    signed char[20] pad20;
    void** f20;
};

struct s93 {
    signed char[36] pad36;
    uint32_t f36;
};

struct s94 {
    signed char[20] pad20;
    int32_t f20;
};

struct s95 {
    signed char[100] pad100;
    int32_t f100;
};

struct s96 {
    signed char[24] pad24;
    void** f24;
};

struct s97 {
    signed char[24] pad24;
    int32_t f24;
};

struct s98 {
    signed char[28] pad28;
    void** f28;
};

struct s99 {
    signed char[172] pad172;
    int32_t f172;
};

struct s100 {
    signed char[52] pad52;
    int32_t f52;
};

void fun_6494658c(void** ecx, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7, void** a8, void** a9, void** a10, void** a11, void** a12, void** a13, void** a14, void** a15, void** a16, void** a17, void** a18, void** a19, void** a20, void** a21, void** a22, void** a23, void** a24) {
    uint32_t eax25;
    struct s91* ebx26;
    void** edx27;
    struct s92* ebx28;
    struct s93* ebx29;
    struct s94* ebx30;
    int32_t esi31;
    struct s95* ebx32;
    struct s96* ebx33;
    void** v34;
    struct s97* ebx35;
    void** v36;
    struct s98* ebx37;
    int32_t eax38;
    struct s99* ebx39;
    struct s100* ebx40;
    int32_t ebp41;

    eax25 = ebx26->f36;
    if (*reinterpret_cast<unsigned char*>(&eax25) & 4) {
        pthread_mutex_unlock(ecx, 0x64949028, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15, a16, a17, a18, a19, a20, a21, a22, a23, a24);
    } else {
        edx27 = ebx28->f20;
        ebx29->f36 = eax25 | 4;
        ebx30->f20 = 0;
        if (edx27 && (esi31 = CloseHandle, esi31(edx27), !!ebx32->f100)) {
            if (ebx33->f24) {
                v34 = ebx33->f24;
                esi31(v34, edx27);
            }
            ebx35->f24 = 0;
            v36 = reinterpret_cast<void**>(&ebx37->f28);
            pthread_mutex_destroy(ecx, v36, edx27, a2, a3, a4, a5, a6, a7, a8, a9);
            eax38 = ebx39->f172;
            ebx40->f52 = -1;
            if (!eax38) {
                fun_649446d0(ecx, v36, edx27, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11);
            }
        }
        pthread_mutex_unlock(ecx, 0x64949028, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15, a16, a17, a18, a19, a20, a21, a22, a23, a24);
    }
    goto *reinterpret_cast<int32_t*>(ebp41 - 8 + 4 + 4 + 4);
}

void fun_6494699f() {
    int32_t v1;

    goto v1;
}

void fun_64946a2c() {
}

struct s101 {
    signed char[8] pad8;
    int32_t f8;
};

struct s102 {
    signed char[8] pad8;
    int32_t f8;
    void** f12;
};

void** sem_timedwait(void** a1, void** a2, void** a3, void** a4) {
    void** v5;
    void** v6;
    void** v7;
    void** v8;
    void** v9;
    void** v10;
    void** eax11;
    void** eax12;
    void** edi13;
    void** v14;
    void** v15;
    void** v16;
    void** v17;
    void** v18;
    void** v19;
    void** v20;
    void** v21;
    void** v22;
    void** v23;
    void** eax24;
    void*** esp25;
    void** ebx26;
    void** v27;
    struct s101* v28;
    int32_t ebp29;
    struct s102* v30;
    void** edx31;
    void** esi32;
    void** v33;
    void** v34;
    void** v35;
    void** v36;
    void** v37;
    void** v38;
    void** v39;
    void** v40;
    void** v41;
    void** v42;
    void** v43;
    void** ebx44;
    void** esi45;
    void** edi46;
    void** ebp47;
    void** v48;
    void** v49;
    void** v50;
    void** v51;
    void** v52;
    void** v53;
    void** v54;
    void** eax55;
    void** v56;
    void** v57;
    void** v58;
    void** v59;
    void** v60;
    void** v61;
    void** eax62;
    void** eax63;
    void** v64;
    void** v65;
    void** v66;
    void** eax67;
    void*** eax68;

    if (!a2) {
        eax11 = sem_wait(a1, v5, v6, v7, v8, 0, v9, v10);
        return eax11;
    } else {
        eax12 = _pthread_rel_time_in_ms(a2);
        if (reinterpret_cast<unsigned char>(a2) > reinterpret_cast<unsigned char>(0) || (edi13 = eax12, reinterpret_cast<unsigned char>(eax12) > reinterpret_cast<unsigned char>(0xfffffffe))) {
            edi13 = reinterpret_cast<void**>(0xffffffff);
        }
        eax24 = fun_64946650(1, a2, v14, v15, v16, v17, 0, v18, v19, v20, v21, v22, v23);
        esp25 = reinterpret_cast<void***>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4 - 4 - 4 - 4 - 60 - 4 + 4 - 4 + 4);
        ebx26 = eax24;
        if (eax24) {
            ebx26 = reinterpret_cast<void**>(0xffffffff);
        } else {
            v27 = reinterpret_cast<void**>(esp25 + 20);
            v28->f8 = v28->f8 - 1;
            ebp29 = v30->f8;
            edx31 = reinterpret_cast<void**>(&v30->f12);
            esi32 = *reinterpret_cast<void***>(edx31 + 0xfffffff8);
            pthread_mutex_unlock(1, edx31, v33, v34, v35, v36, 0, v37, a1, v27, v38, v39, v40, v41, v42, v43, ebx44, esi45, edi46, ebp47, __return_address(), a1, a2, a3, a4);
            esp25 = esp25 - 4 + 4;
            if (ebp29 < 0 && ((v48 = reinterpret_cast<void**>(esp25 + 28), eax55 = pthread_getclean(1, edx31, v49, v50, v51, v52, 0, v53, a1, v27, 0x649466e0, v48, v54), v56 = *reinterpret_cast<void***>(eax55), eax62 = pthread_getclean(1, static_cast<uint32_t>(reinterpret_cast<unsigned char>(edx31)), v57, v58, v59, v60, 0, v61, a1, v27, 0x649466e0, v48, v56), *reinterpret_cast<void***>(eax62) = reinterpret_cast<void**>(esp25 - 4 + 4 - 4 + 4 + 36), eax63 = fun_64941f60(1, esi32, 2, edi13), eax67 = pthread_getclean(1, esi32, 2, edi13, v64, v65, eax63, v66, a1, v27, 0x649466e0, v48, v56), *reinterpret_cast<void***>(eax67) = v56, !!eax63) && ((v27(1, v48, 2, edi13), eax63 != 22) && eax63))) {
                eax68 = reinterpret_cast<void***>(_errno(1, v48, 2, edi13));
                ebx26 = reinterpret_cast<void**>(0xffffffff);
                *eax68 = eax63;
            }
        }
        return ebx26;
    }
}

void fun_64946b3a() {
}

void fun_64946bc9() {
}

void fun_64946e39() {
    int32_t* eax1;
    int32_t eax2;
    int32_t v3;

    eax1 = reinterpret_cast<int32_t*>(_errno(__return_address()));
    *eax1 = eax2;
    goto v3;
}

int32_t fun_64946eda(uint32_t a1) {
    int32_t eax2;
    int32_t* eax3;

    eax2 = -15;
    if (a1 > 2) {
        eax3 = reinterpret_cast<int32_t*>(_errno());
        *eax3 = 22;
        eax2 = -1;
    }
    return eax2;
}

int32_t fun_64946f04(uint32_t a1) {
    int32_t* eax2;
    int32_t eax3;

    if (a1 > 2) {
        eax2 = reinterpret_cast<int32_t*>(_errno());
        *eax2 = 22;
        eax3 = -1;
    } else {
        eax3 = 15;
    }
    return eax3;
}

struct s103 {
    signed char[12] pad12;
    int32_t f12;
};

int32_t fun_64946f4e() {
    int32_t v1;
    struct s103* eax2;
    int32_t* v3;

    if (!v1) {
        return 22;
    } else {
        eax2->f12 = *v3;
        return 0;
    }
}

struct s104 {
    signed char[12] pad12;
    int32_t f12;
};

int32_t fun_64946f64(struct s104* a1, int32_t* a2) {
    if (!a1 || !a2) {
        return 22;
    } else {
        *a2 = a1->f12;
        return 0;
    }
}

uint32_t fun_64946f94(int32_t a1, uint32_t a2) {
    if (!a1 || a2 > 2) {
        return 22;
    } else {
        return ~(22 - (22 + reinterpret_cast<uint1_t>(22 < 22 + reinterpret_cast<uint1_t>(a2 < 1)))) & 0x81;
    }
}

int32_t fun_64946fc6(int32_t a1, int32_t* a2) {
    if (!a1 || !a2) {
        return 22;
    } else {
        *a2 = 0;
        return 0;
    }
}

void** fun_64946ff5(void** ecx, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7, void** a8, void** a9) {
    void** ebx10;
    void** v11;
    void** v12;
    void** v13;
    void** v14;
    void** eax15;
    void** v16;
    void** v17;
    void** v18;
    void** v19;
    void** ebx20;
    void** esi21;
    void** eax22;
    void** v23;
    void** v24;
    void** v25;
    void** v26;
    void** eax27;

    ebx10 = reinterpret_cast<void**>(3);
    if (!a2 || (eax15 = fun_64946e80(ecx, v11, v12, v13, v14), ebx10 = eax15, !!eax15)) {
        return ebx10;
    } else {
        if (!a4 || !a3) {
            return 22;
        } else {
            eax22 = __pth_gpointer_locked(ecx, a2, v16, v17, v18, v19, ebx20, esi21, __return_address(), a2, a3, a4, a5, a6, a7, a8, a9);
            *reinterpret_cast<void***>(a3) = *reinterpret_cast<void***>(eax22 + 96);
            eax27 = __pth_gpointer_locked(ecx, a2, v23, v24, v25, v26, ebx20, esi21, __return_address(), a2, a3, a4, a5, a6, a7, a8, a9);
            *reinterpret_cast<void***>(a4) = *reinterpret_cast<void***>(eax27 + 0x68);
            return ebx10;
        }
    }
}

void fun_6494701a() {
}

void** fun_64947074(void** ecx, void** a2, void** a3, void** a4, void** a5) {
    void** ebx6;
    void** v7;
    void** v8;
    void** v9;
    void** v10;
    void** eax11;
    void** edi12;
    void** v13;
    void** v14;
    void** v15;
    void** v16;
    void** v17;
    void** v18;
    void** ebx19;
    void** esi20;
    void** edi21;
    void** ebp22;
    void** eax23;
    void** v24;
    int32_t eax25;

    ebx6 = reinterpret_cast<void**>(3);
    if (a2 && (eax11 = fun_64946e80(ecx, v7, v8, v9, v10), ebx6 = eax11, !eax11)) {
        if (reinterpret_cast<unsigned char>(a3) > reinterpret_cast<unsigned char>(2) || !a4) {
            addr_649470b3_3:
            return 22;
        } else {
            if (a3) {
                return 0x81;
            }
            edi12 = *reinterpret_cast<void***>(a4);
            if (reinterpret_cast<uint32_t>(edi12 + 15) > 30) 
                goto addr_649470b3_3;
        }
        if (edi12 != 0xfffffff1) {
            if (reinterpret_cast<signed char>(edi12) < reinterpret_cast<signed char>(0xffffffff)) {
                edi12 = reinterpret_cast<void**>(0xfffffffe);
            } else {
                if (edi12 != 15 && reinterpret_cast<signed char>(edi12) >= reinterpret_cast<signed char>(2)) {
                    edi12 = reinterpret_cast<void**>(2);
                }
            }
        }
        eax23 = __pth_gpointer_locked(ecx, a2, v13, v14, v15, v16, v17, v18, ebx19, esi20, edi21, ebp22, __return_address(), a2, a3, a4, a5);
        v24 = *reinterpret_cast<void***>(eax23 + 20);
        eax25 = reinterpret_cast<int32_t>(SetThreadPriority(v24, edi12));
        if (!eax25) 
            goto addr_649470b3_3;
        *reinterpret_cast<void***>(eax23 + 96) = reinterpret_cast<void**>(0);
        *reinterpret_cast<void***>(eax23 + 0x68) = *reinterpret_cast<void***>(a4);
    }
    return ebx6;
}

int32_t GetSystemTimeAdjustment = 0xe41e;

struct s105 {
    int32_t f0;
    int32_t f4;
};

void fun_649472dc() {
    int32_t eax1;
    int32_t ebp2;
    int32_t ebp3;
    int32_t ebp4;
    int32_t eax5;
    int32_t ebp6;
    struct s105* esi7;
    int32_t ebp8;
    int32_t* eax9;
    int32_t ebp10;

    if (eax1 <= 3) {
        GetSystemTimeAdjustment(ebp2 - 24, ebp3 - 20, ebp4 - 16);
        eax5 = *reinterpret_cast<int32_t*>(ebp6 - 20) * 100;
        esi7->f0 = 0;
        esi7->f4 = eax5;
        goto *reinterpret_cast<int32_t*>(ebp8 - 8 + 4 + 4 + 4);
    } else {
        eax9 = reinterpret_cast<int32_t*>(_errno(__return_address()));
        *eax9 = 22;
        goto *reinterpret_cast<int32_t*>(ebp10 - 8 + 4 + 4 + 4);
    }
}

struct s106 {
    int32_t f0;
    int32_t f4;
};

void fun_649472fd() {
    int32_t ebp1;
    int32_t eax2;
    void** ecx3;
    int32_t ebp4;
    void** ebx5;
    int32_t ebp6;
    struct s106* esi7;
    void** tmp32_8;
    void** eax9;

    eax2 = reinterpret_cast<int32_t>(QueryPerformanceFrequency(ebp1 - 16));
    if (!eax2) 
        goto 0x649472e5;
    ecx3 = *reinterpret_cast<void***>(ebp4 - 16);
    ebx5 = *reinterpret_cast<void***>(ebp6 - 12);
    esi7->f0 = 0;
    __asm__("shrd eax, edx, 0x1");
    tmp32_8 = ecx3 + 0x3b9aca00;
    eax9 = fun_64948ce0(tmp32_8, (reinterpret_cast<signed char>(ebx5) >> 1) + reinterpret_cast<uint1_t>(reinterpret_cast<unsigned char>(tmp32_8) < reinterpret_cast<unsigned char>(ecx3)), ecx3, ebx5);
    if (!reinterpret_cast<uint1_t>(reinterpret_cast<uint1_t>(reinterpret_cast<signed char>(eax9) < reinterpret_cast<signed char>(0)) | reinterpret_cast<uint1_t>(eax9 == 0))) 
        goto 0x649472d0;
    esi7->f4 = 1;
    goto 0x649472f6;
}

void fun_64947354() {
}

void fun_6494741c() {
}

void fun_6494749a() {
}

int32_t fun_64947574(int32_t a1, int32_t a2, struct s23* a3, struct s24* a4) {
    int32_t* eax5;
    int32_t eax6;
    int32_t eax7;
    struct s23* esi8;
    int1_t sf9;
    uint32_t v10;

    if (a1) {
        eax5 = reinterpret_cast<int32_t*>(_errno());
        *eax5 = 22;
        eax6 = -1;
    } else {
        if (!a2) {
            eax7 = nanosleep(a3, a4);
            return eax7;
        } else {
            esi8 = reinterpret_cast<struct s23*>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4 - 4 - 36 + 24);
            clock_gettime(0, esi8);
            sf9 = reinterpret_cast<int32_t>(reinterpret_cast<unsigned char>(a3->f4) - v10) < reinterpret_cast<int32_t>(0);
            if (sf9) {
            }
            eax6 = nanosleep(esi8, a4);
        }
    }
    return eax6;
}

void fun_649475da() {
}

void fun_649476af() {
    int32_t* eax1;
    int32_t ebp2;

    eax1 = reinterpret_cast<int32_t*>(_errno(__return_address()));
    *eax1 = 22;
    goto *reinterpret_cast<int32_t*>(ebp2 - 8 + 4 + 4 + 4);
}

void fun_6494795c() {
    int32_t v1;
    uint32_t eax2;
    int32_t v3;
    int32_t v4;

    fun_64948350(v1, eax2, v3);
    goto v4;
}

void fun_649479ef() {
    int32_t v1;
    int32_t v2;
    int32_t v3;

    fun_64948350(v1, 1, v2);
    goto v3;
}

void fun_64947bac() {
}

void fun_64947cea() {
}

void fun_64947e3a() {
}

void fun_64947fec() {
}

void fun_64948039() {
}

void fun_6494804c() {
}

int32_t fun_64948211(void** a1, void** a2) {
    int32_t esi3;
    int32_t eax4;
    void** eax5;
    void** eax6;

    esi3 = 0;
    eax4 = g6494b3c4;
    if (eax4) {
        eax5 = fun_64948f3c(1, 12);
        if (!eax5) {
            esi3 = -1;
        } else {
            *reinterpret_cast<void***>(eax5) = a1;
            *reinterpret_cast<void***>(eax5 + 4) = a2;
            EnterCriticalSection(0x6494b3c8, 12);
            eax6 = g6494b3c0;
            g6494b3c0 = eax5;
            *reinterpret_cast<void***>(eax5 + 8) = eax6;
            LeaveCriticalSection(0x6494b3c8, 0x6494b3c8, 12);
            return 0;
        }
    }
    return esi3;
}

void fun_6494823c() {
}

struct s107 {
    signed char[4] pad4;
    int32_t f4;
};

void fun_649482ca(void** a1, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7, void** a8, void** a9, void** a10) {
    void** edx11;
    void** ebx12;
    void** eax13;
    void** ebx14;
    struct s107* ebp15;
    void** ecx16;

    EnterCriticalSection(0x6494b3c8);
    edx11 = g6494b3c0;
    if (!edx11) {
        addr_64948301_3:
        LeaveCriticalSection(0x6494b3c8, 0x6494b3c8);
    } else {
        if (*reinterpret_cast<void***>(edx11) != ebx12) {
            while (eax13 = *reinterpret_cast<void***>(edx11 + 8), !!eax13) {
                if (*reinterpret_cast<void***>(eax13) == ebx14) 
                    goto addr_64948318_7;
                edx11 = eax13;
            }
            goto addr_64948301_3;
        } else {
            g6494b3c0 = *reinterpret_cast<void***>(edx11 + 8);
            eax13 = edx11;
            goto addr_6494831e_11;
        }
    }
    addr_64948311_12:
    goto ebp15->f4;
    addr_64948318_7:
    ecx16 = *reinterpret_cast<void***>(eax13 + 8);
    *reinterpret_cast<void***>(edx11 + 8) = ecx16;
    addr_6494831e_11:
    fun_64948f1c(ecx16, eax13, 0x6494b3c8, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10);
    LeaveCriticalSection(0x6494b3c8, 0x6494b3c8);
    goto addr_64948311_12;
}

void fun_6494841e() {
    goto fun_649483f0;
}

struct s108 {
    signed char[6] pad6;
    uint16_t f6;
};

void fun_6494849f() {
    uint32_t eax1;
    int32_t v2;
    int32_t eax3;
    struct s108* edx4;
    uint32_t ebp5;
    uint32_t ebx6;
    int32_t edi7;
    int32_t eax8;
    uint32_t esi9;
    int32_t v10;
    int32_t v11;

    eax1 = fun_649483f0(__return_address());
    if (!eax1) {
        addr_64948495_3:
        goto v2;
    } else {
        eax3 = g6494003c;
        edx4 = reinterpret_cast<struct s108*>(eax3 + 0x64940000);
        ebp5 = edx4->f6;
        ebx6 = reinterpret_cast<int32_t>(edx4) + *reinterpret_cast<uint16_t*>(eax3 + 0x64940014) + 24;
        if (ebp5) {
            do {
                eax8 = fun_64948fac(ebx6, edi7, 8);
                if (!eax8) 
                    break;
                ++esi9;
                ebx6 = ebx6 + 40;
            } while (esi9 < ebp5);
            goto addr_64948500_7;
        } else {
            goto addr_64948495_3;
        }
    }
    goto v10;
    addr_64948500_7:
    goto v11;
}

void fun_64948559() {
}

struct s109 {
    signed char[39] pad39;
    unsigned char f39;
};

struct s109* fun_64948590(int32_t a1) {
    int1_t zf2;
    int32_t ebx3;
    int32_t ebx4;
    uint32_t eax5;
    int32_t eax6;
    struct s108* ecx7;
    struct s109* edx8;
    uint32_t ecx9;
    uint32_t eax10;

    zf2 = image_base_ == 0x5a4d;
    ebx3 = a1;
    if (!zf2 || ((eax5 = fun_649483f0(ebx4), eax5 == 0) || (eax6 = g6494003c, ecx7 = reinterpret_cast<struct s108*>(eax6 + 0x64940000), edx8 = reinterpret_cast<struct s109*>(reinterpret_cast<int32_t>(ecx7) + *reinterpret_cast<uint16_t*>(eax6 + 0x64940014) + 24), ecx9 = ecx7->f6, ecx9 == 0))) {
        return 0;
    }
    eax10 = 0;
    do {
        if (edx8->f39 & 32) {
            if (!ebx3) 
                goto addr_649485f4_6;
            --ebx3;
        }
        ++eax10;
        ++edx8;
    } while (eax10 < ecx9);
    return 0;
    addr_649485f4_6:
    return edx8;
}

uint32_t fun_64948624(int32_t a1) {
    int1_t zf2;
    int32_t v3;
    uint32_t eax4;
    struct s2* eax5;

    zf2 = image_base_ == 0x5a4d;
    if (zf2) {
        eax4 = fun_649483f0(v3);
        if (eax4) {
            eax5 = fun_64948430(0x64940000, a1 - 0x64940000);
            if (!eax5) {
                eax4 = 0;
            } else {
                eax4 = reinterpret_cast<uint32_t>(~eax5->f36) >> 31;
            }
        }
        return eax4;
    } else {
        return 0;
    }
}

void fun_6494867a() {
}

struct s110 {
    signed char[4] pad4;
    int32_t f4;
    signed char[4] pad12;
    int32_t f12;
};

void fun_649486ed() {
    int32_t ebx1;
    struct s110* edx2;
    struct s110* tmp32_3;
    int32_t v4;
    int32_t v5;

    do {
        --ebx1;
        edx2 = tmp32_3;
        if (edx2->f4) 
            continue;
        if (!edx2->f12) 
            break;
    } while (!reinterpret_cast<uint1_t>(reinterpret_cast<uint1_t>(ebx1 < 0) | reinterpret_cast<uint1_t>(ebx1 == 0)));
    goto addr_64948708_6;
    goto v4;
    addr_64948708_6:
    goto v5;
}

void fun_6494871a() {
}

uint32_t fun_649487dd(uint32_t a1, uint32_t a2, uint32_t a3) {
    uint32_t eax4;
    uint32_t ecx5;
    uint32_t ecx6;
    uint32_t ecx7;

    eax4 = a1;
    if (a3 <= 31) {
        if (a3) {
            ecx5 = 32 - a3;
            ecx6 = a3;
            return a2 << *reinterpret_cast<unsigned char*>(&ecx5) | eax4 >> *reinterpret_cast<signed char*>(&ecx6);
        }
    } else {
        eax4 = reinterpret_cast<uint32_t>(reinterpret_cast<int32_t>(a2) >> 31);
        if (a3 <= 63) {
            ecx7 = a3 - 32;
            eax4 = reinterpret_cast<uint32_t>(reinterpret_cast<int32_t>(a2) >> *reinterpret_cast<signed char*>(&ecx7));
        }
    }
    return eax4;
}

void fun_649488b2() {
}

void fun_649489ec() {
}

void fun_649489fa() {
}

void fun_64948d49() {
}

void fun_64948eaa(int32_t ecx) {
    int32_t v2;
    void* ecx3;
    uint32_t eax4;
    uint32_t eax5;
    uint32_t* ecx6;
    int32_t* esp7;

    v2 = reinterpret_cast<int32_t>(__return_address());
    ecx3 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4 + 8);
    if (eax4 >= 0x1000) {
        do {
            ecx3 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(ecx3) - 0x1000);
            eax5 = eax5 - 0x1000;
        } while (eax5 > 0x1000);
    }
    ecx6 = reinterpret_cast<uint32_t*>(reinterpret_cast<int32_t>(ecx3) - eax5);
    *ecx6 = *ecx6;
    esp7 = reinterpret_cast<int32_t*>(ecx6 - 1);
    *esp7 = v2;
    goto *esp7;
}

void fun_6494116a() {
}

void fun_64941257() {
}

void fun_649411fc() {
}

void fun_64947a25() {
}

void* fun_64948f00() {
    return reinterpret_cast<int32_t>(__zero_stack_offset()) + 4;
}

int32_t g6494b064;

void fun_64941416() {
    int32_t v1;

    g6494b064 = 0;
    if (v1 == 1) 
        goto 0x64941450; else 
        goto "???";
}

void fun_64941559() {
}

void fun_64941769() {
    int32_t v1;

    if (v1) 
        goto 0x64941790; else 
        goto "???";
}

void fun_64941819() {
}

void fun_6494189d(int32_t a1) {
    int32_t eax2;

    eax2 = fun_64941560();
    if (!eax2) 
        goto 0x649418c0;
    return;
}

int32_t fun_649419ea(int32_t* a1, uint32_t a2) {
    if (a1 && *a1) {
        if (a2 <= 1) 
            goto 0x64941a10;
    }
    return 22;
}

void fun_64941a19(int32_t a1) {
    if (a1) 
        goto 0x64941a30; else 
        goto "???";
}

void fun_64941b19(int32_t a1, void** a2) {
    void** eax3;
    void** eax4;
    struct s9* eax5;

    eax3 = a2;
    if (!eax3) {
        eax4 = g6494b008;
        if (eax4) {
            addr_64941b2d_3:
            g6494b00c = a1;
            return;
        } else {
            eax5 = _iob;
            eax3 = reinterpret_cast<void**>(&eax5->f32);
        }
    }
    g6494b008 = eax3;
    goto addr_64941b2d_3;
}

int32_t pthread_condattr_destroy(int32_t* a1) {
    int32_t eax2;

    eax2 = 22;
    if (a1) {
        *a1 = 0;
        *reinterpret_cast<signed char*>(&eax2) = 0;
    }
    return eax2;
}

void fun_64942acc() {
}

void fun_64942a8a() {
}

void fun_64941db6() {
}

void fun_64941f5c() {
}

void fun_649421aa() {
}

void fun_6494219a() {
}

void fun_6494218d() {
}

void fun_649424cc() {
}

struct s111 {
    int32_t f0;
    signed char[4] pad8;
    int32_t f8;
    int32_t f12;
    int32_t f16;
    void** f20;
    signed char[51] pad72;
    void** f72;
    signed char[23] pad96;
    void** f96;
};

void** fun_649425aa(struct s111** a1) {
    struct s111* ebx2;
    void** eax3;
    void** esi4;
    void** v5;
    void** v6;
    void** v7;
    void** eax8;
    int32_t eax9;
    int32_t edi10;
    int32_t eax11;

    if (!a1 || (ebx2 = *a1, ebx2 == 0)) {
        return 22;
    }
    if (ebx2 == -1) {
        eax3 = reinterpret_cast<void**>(0);
        goto addr_649425d8_5;
    } else {
        eax3 = reinterpret_cast<void**>(22);
        if (ebx2->f0 == 0xc0bab1fd) {
            esi4 = reinterpret_cast<void**>(&ebx2->f20);
            v5 = esi4;
            EnterCriticalSection(v5);
            if (!ebx2->f12) {
                if (ebx2->f8 <= ebx2->f16) {
                    addr_64942690_9:
                    LeaveCriticalSection(esi4, v5);
                    eax3 = reinterpret_cast<void**>(0);
                    goto addr_649425d8_5;
                } else {
                    v5 = reinterpret_cast<void**>(&ebx2->f96);
                    eax8 = fun_64942260(0xffffffff, &ebx2->f72, v5, v6, v7);
                    if (eax8) {
                        LeaveCriticalSection(0xffffffff, esi4, v5);
                        eax3 = eax8;
                        goto addr_649425d8_5;
                    } else {
                        eax9 = ebx2->f16;
                        edi10 = ebx2->f8;
                        if (eax9) {
                            ebx2->f16 = 0;
                            edi10 = edi10 - eax9;
                        }
                        ebx2->f8 = 0;
                        ebx2->f12 = edi10;
                    }
                }
            } else {
                if (!ebx2->f8) 
                    goto addr_64942690_9;
                eax11 = ebx2->f12 + ebx2->f8;
                ebx2->f8 = 0;
                ebx2->f12 = eax11;
            }
        } else {
            addr_649425d8_5:
            return eax3;
        }
        LeaveCriticalSection(0xffffffff, esi4, v5);
        goto fun_64941a50;
    }
}

void fun_6494257d() {
}

void fun_649425ed() {
}

void fun_649426ba() {
}

void fun_6494268d() {
}

struct s112 {
    signed char[12] pad12;
    int32_t f12;
    signed char[4] pad20;
    void** f20;
    signed char[51] pad72;
    void** f72;
    signed char[23] pad96;
    void** f96;
};

void fun_649427ec(struct s112** a1) {
    struct s112* ebx2;
    void** edi3;
    int32_t edx4;
    int32_t v5;
    void** v6;
    void** eax7;

    ebx2 = *a1;
    edi3 = reinterpret_cast<void**>(&ebx2->f20);
    EnterCriticalSection(edi3);
    if (!ebx2->f12) 
        goto 0x64942870;
    edx4 = ebx2->f12 - 1;
    v5 = ebx2->f12;
    ebx2->f12 = edx4;
    LeaveCriticalSection(edi3, edi3);
    if (v5 != 1) 
        goto 0x64942850;
    eax7 = fun_64941a50(&ebx2->f72, &ebx2->f96, edi3, edi3, v6);
    if (eax7) 
        goto 0x6494285f;
}

void fun_6494290c() {
}

void fun_64942cea(void*** a1, void** a2) {
    int32_t ecx3;
    void** eax4;
    int32_t eax5;
    void** edx6;
    void** v7;
    void** v8;
    void** v9;
    void** v10;
    void** v11;
    void** v12;
    void** v13;
    void** edx14;
    void** ebx15;
    void** ebp16;
    void** edi17;
    void** v18;
    void** esi19;
    void** ebx20;
    int32_t eax21;
    void** edx22;

    ecx3 = g64949010;
    if (ecx3) {
        eax4 = *a1;
        if (!eax4) {
            eax5 = reinterpret_cast<int32_t>(GetCurrentThreadId());
            edx6 = *a1;
            fun_64948f44("M%p %d %s\n", edx6, eax5, a2, v7, v8, v9, v10, v11, v12, v13);
        } else {
            edx14 = *reinterpret_cast<void***>(eax4 + 12);
            ebx15 = *reinterpret_cast<void***>(eax4 + 8);
            ebp16 = *reinterpret_cast<void***>(eax4 + 12);
            edi17 = *reinterpret_cast<void***>(eax4 + 20);
            v18 = *reinterpret_cast<void***>(eax4 + 24);
            esi19 = *reinterpret_cast<void***>(eax4);
            ebx20 = *reinterpret_cast<void***>(eax4 + 4);
            eax21 = reinterpret_cast<int32_t>(GetCurrentThreadId());
            edx22 = *a1;
            fun_64948f44("M%p %d V=%0X B=%d t=%d o=%d C=%d R=%d H=%p %s\n", edx22, eax21, esi19, ebx20, ebx15, edi17, ebp16, edx14, v18, a2);
        }
    }
    return;
}

void fun_64942e2c() {
}

void fun_64942e5c() {
}

void fun_64942ffc() {
}

void fun_6494305d() {
}

void fun_6494326c() {
}

void fun_64943321() {
    goto pthread_mutex_destroy;
}

int32_t fun_649433b9(int32_t* a1) {
    *a1 = 0;
    return 0;
}

void fun_64943434(int32_t a1) {
    if (a1) 
        goto 0x64943450; else 
        goto "???";
}

int32_t fun_649434c2(uint32_t* a1, uint32_t a2) {
    if ((a2 & 24) == 24) {
        *a1 = *a1 & 0xffffffe7 | a2;
        return 0;
    } else {
        return 22;
    }
}

int32_t fun_649434f9(uint32_t* a1, uint32_t* a2) {
    *a2 = *a1 >> 5;
    return 0;
}

void fun_649435ac() {
}

void fun_6494360c() {
}

void fun_649436b7() {
}

void fun_6494374a(void*** a1, void** a2) {
    int32_t ecx3;
    void** edi4;
    void** esi5;
    int32_t eax6;
    void** edx7;
    void** v8;
    void** v9;

    ecx3 = g6494b010;
    if (!ecx3) 
        goto 0x649437b3;
    if (!*a1) 
        goto 0x649437c0;
    edi4 = *reinterpret_cast<void***>(*a1 + 4);
    esi5 = *reinterpret_cast<void***>(*a1);
    eax6 = reinterpret_cast<int32_t>(GetCurrentThreadId());
    edx7 = *a1;
    fun_64948f44("RWL%p %d V=%0X B=%d r=%ld w=%ld L=%p %s\n", edx7, eax6, esi5, edi4, 0, 0, 0, a2, v8, v9);
}

void fun_649437e6() {
}

void fun_649438ba() {
}

void fun_649438dc() {
}

void fun_649438f1() {
    goto fun_64943900;
}

void fun_64943952() {
}

struct s113 {
    int32_t f0;
    signed char[4] pad8;
    int32_t f8;
    int32_t f12;
    int32_t f16;
    void** f20;
    signed char[3] pad24;
    void** f24;
    signed char[3] pad28;
    void** f28;
};

void** fun_649439bd(void** ecx, void** a2, void** a3, void** a4, void** a5) {
    void** v6;
    void** v7;
    void** v8;
    void** v9;
    void** eax10;
    void** ebx11;
    void** v12;
    void** v13;
    void** v14;
    void** v15;
    struct s113* v16;
    void** v17;
    void** v18;
    void** v19;
    void** v20;
    void** v21;
    void** v22;
    void** v23;
    void** ebx24;
    void** esi25;
    void** edi26;
    void** eax27;
    void** v28;
    void** v29;
    void** v30;
    void** v31;
    void** v32;
    void** v33;
    void** v34;
    void** v35;
    void** eax36;
    void** v37;
    void** v38;
    void** v39;
    void** v40;
    void** v41;
    void** v42;
    void** v43;
    void** eax44;
    void** v45;
    void** v46;
    void** v47;
    void** v48;
    void** v49;
    void** v50;
    void** v51;
    void** v52;
    void** v53;
    void** v54;
    void** v55;
    void** v56;
    void** v57;
    void** v58;
    void** v59;
    void** v60;
    void** v61;
    void** v62;
    void** v63;
    void** v64;
    void** v65;
    void** v66;

    pthread_spin_lock(0x6494901c, v6, v7, v8, v9);
    eax10 = fun_64943540(0x6494901c);
    ebx11 = eax10;
    pthread_spin_unlock(0x6494901c, v12, v13, v14, v15);
    if (ebx11 || !v16) {
        addr_64943a31_2:
        return ebx11;
    } else {
        eax27 = fun_64943610(ecx, 0x6494901c, v17, v18, v19, v20, v21, v22, v23, ebx24, esi25, edi26, __return_address(), a2, a3, a4, a5);
        if (eax27) 
            goto 0x64943a40;
        if (v16->f12 > v16->f16) 
            goto addr_64943a15_5;
        if (reinterpret_cast<uint1_t>(v16->f8 < 0) | reinterpret_cast<uint1_t>(v16->f8 == 0)) 
            goto addr_64943a51_7;
    }
    addr_64943a15_5:
    ebx11 = reinterpret_cast<void**>(16);
    *reinterpret_cast<void***>(a2) = v28;
    eax36 = fun_64943660(ecx, 0x6494901c, v29, v30, v31, v32, v33, v34, v35, ebx24, esi25, edi26, __return_address(), a2, a3, a4, a5);
    if (eax36) {
        ebx11 = eax36;
        goto addr_64943a31_2;
    }
    addr_64943a51_7:
    v16->f0 = 0xdeadb0ef;
    eax44 = fun_64943660(ecx, 0x6494901c, v37, v38, v39, v40, v41, v42, v43, ebx24, esi25, edi26, __return_address(), a2, a3, a4, a5);
    if (eax44) 
        goto 0x64943a40;
    pthread_cond_destroy(&v16->f28);
    pthread_mutex_destroy(ecx, &v16->f20, v45, v46, v47, v48, v49, v50, v51, ebx24, esi25);
    pthread_mutex_destroy(ecx, &v16->f24, v52, v53, v54, v55, v56, v57, v58, ebx24, esi25);
    v16->f0 = 0xdeadb0ef;
    fun_64948f1c(ecx, v59, v60, v61, v62, v63, v64, v65, v66, ebx24, esi25, edi26, __return_address());
    goto addr_64943a31_2;
}

void fun_64943c7c(void** ecx, int32_t a2) {
    void** eax3;

    eax3 = fun_64943960(ecx);
    if (!eax3) 
        goto 0x64943ca0;
    return;
}

void fun_64943d1d() {
}

void fun_64943eda(void** ecx, void** a2, void** a3, void** a4, void** a5) {
    void** v6;
    void** v7;
    void** v8;
    void** v9;
    void** v10;
    void** v11;
    void** v12;
    void** v13;
    void** v14;
    void** v15;
    void** v16;
    void** v17;
    void** v18;
    void** v19;
    void** v20;
    void** ebx21;
    void** esi22;
    void** edi23;
    void** ebp24;
    void** eax25;
    void** esi26;
    void** ebp27;
    void** eax28;
    void** v29;
    void** v30;
    void** eax31;
    void** v32;
    void** v33;
    void** v34;
    void** v35;
    void** v36;
    void** v37;
    void** v38;
    void** v39;
    void** v40;
    void** v41;
    void** v42;
    void** v43;
    void** v44;
    void** eax45;
    void** v46;
    void** v47;
    void** v48;
    void** v49;
    void** v50;
    void** v51;
    void** v52;
    void** eax53;
    void** v54;
    void** v55;
    void** v56;
    void** v57;
    void** v58;
    void** v59;
    void** v60;
    void** eax61;

    pthread_testcancel(ecx, v6, v7, v8, v9, v10, v11, v12, v13, v14, v15, v16, v17, v18, v19, v20, ebx21, esi22, edi23, ebp24, __return_address());
    if (!a2 || !a3) {
    }
    eax25 = fun_64943960(ecx);
    if (eax25) 
        goto 0x64943ef9;
    esi26 = *reinterpret_cast<void***>(a2);
    ebp27 = esi26 + 20;
    eax28 = pthread_mutex_timedlock(ecx, ebp27, a3);
    if (!eax28) 
        goto addr_64943f31_5;
    fun_649436c0(ebp27, a3, v29);
    goto 0x64943ef9;
    addr_64943f31_5:
    v30 = esi26 + 24;
    eax31 = pthread_mutex_timedlock(ecx, v30, a3);
    if (eax31) {
        pthread_mutex_unlock(ecx, ebp27, a3, v32, v33, v34, v35, eax31, v36, v37, v38, v39, v40, v41, v42, v43, ebx21, esi22, edi23, ebp24, __return_address(), a2, a3, a4, a5);
        fun_649436c0(ebp27, a3, v44);
        goto 0x64943ef9;
    }
    if (*reinterpret_cast<void***>(esi26 + 8)) 
        goto 0x64943fed;
    eax45 = *reinterpret_cast<void***>(esi26 + 12);
    if (!(reinterpret_cast<uint1_t>(reinterpret_cast<signed char>(*reinterpret_cast<void***>(esi26 + 16)) < reinterpret_cast<signed char>(0)) | reinterpret_cast<uint1_t>(*reinterpret_cast<void***>(esi26 + 16) == 0))) 
        goto addr_64943f65_10;
    addr_64943f71_11:
    if (reinterpret_cast<uint1_t>(reinterpret_cast<signed char>(eax45) < reinterpret_cast<signed char>(0)) | reinterpret_cast<uint1_t>(eax45 == 0)) 
        goto 0x64943fed;
    *reinterpret_cast<void***>(esi26 + 16) = reinterpret_cast<void**>(-reinterpret_cast<unsigned char>(eax45));
    eax53 = pthread_getclean(ecx, v30, a3, v46, v47, v48, v49, eax31, v50, v51, 0x649436a0, esi26, v52);
    v54 = *reinterpret_cast<void***>(eax53);
    eax61 = pthread_getclean(ecx, static_cast<uint32_t>(reinterpret_cast<unsigned char>(v30)), a3, v55, v56, v57, v58, eax31, v59, v60, 0x649436a0, esi26, v54);
    *reinterpret_cast<void***>(eax61) = reinterpret_cast<void**>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4 - 4 - 4 - 4 - 60 - 4 + 4 - 4 + 4 - 4 + 4 - 4 + 4 - 4 + 4 - 4 + 4 + 36);
    goto 0x64943fb4;
    addr_64943f65_10:
    eax45 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(eax45) - reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(esi26 + 16)));
    *reinterpret_cast<void***>(esi26 + 12) = eax45;
    *reinterpret_cast<void***>(esi26 + 16) = reinterpret_cast<void**>(0);
    goto addr_64943f71_11;
}

uint32_t fun_6494404c(uint32_t a1) {
    int32_t eax2;
    int32_t eax3;
    uint32_t eax4;
    int32_t eax5;

    return eax2 - (eax3 + reinterpret_cast<uint1_t>(eax4 < eax5 + reinterpret_cast<uint1_t>(a1 < 1))) & 22;
}

void fun_6494420c() {
}

void fun_64944289() {
}

void fun_649442e5() {
}

void fun_649446c3() {
}

void fun_64944851() {
    goto fun_64944860;
}

void fun_649448bc() {
}

void fun_64944901() {
    goto fun_64944910;
}

void fun_64944c20() {
    int32_t v1;

    if (v1 == 3) 
        goto 0x64944c40; else 
        goto "???";
}

void** g6494b024;

void fun_64944f52(void** a1) {
    g6494b024 = a1;
    return;
}

int32_t fun_6494500d() {
    return 0;
}

int32_t fun_64945109(void** ecx, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7, void** a8, void** a9) {
    int32_t eax10;
    void** eax11;
    void** ebp12;
    void** v13;
    void** v14;
    void** v15;
    void** v16;
    void** v17;
    void** v18;
    void** v19;
    void** v20;
    void** v21;
    void** v22;
    void** ebx23;
    void** esi24;
    void** v25;
    void** v26;
    void** v27;
    void** v28;
    void** v29;
    void** v30;
    void** v31;
    void** v32;
    void** v33;
    void** eax34;
    void** ecx35;
    void** eax36;
    void** v37;
    void** v38;
    void** v39;
    void** v40;
    void** v41;
    void** v42;
    void** v43;
    void** v44;
    void** v45;
    void** eax46;
    void** eax47;
    void** ecx48;
    void** v49;
    void** v50;
    void** v51;
    void** v52;
    void** v53;
    void** v54;
    void** v55;
    void** eax56;
    struct s9* eax57;
    void** v58;
    void** v59;
    void** v60;
    void** v61;
    void** v62;
    void** v63;
    void** v64;
    void** v65;
    void** v66;
    void** v67;
    void** esi68;
    void** edi69;
    void** ebp70;

    eax10 = 22;
    if (a3 && (*reinterpret_cast<signed char*>(&eax10) = 0, *reinterpret_cast<void***>(a2) != 1)) {
        eax11 = fun_64944350(ecx);
        ebp12 = eax11 + 4;
        pthread_mutex_lock(ecx, ebp12, v13, v14, v15, v16, v17, v18, v19, v20, v21, v22, ebx23);
        esi24 = *reinterpret_cast<void***>(a2);
        if (!esi24) {
            v25 = eax11;
            eax34 = fun_64944990(ecx, ebp12, v26, v27, v28, v29, 0x649444b0, v25, v30, v31, v32, v33);
            ecx35 = eax34 + 12;
            eax36 = ecx35;
            if (!eax34) {
                eax36 = esi24;
            }
            v37 = *reinterpret_cast<void***>(eax36);
            v38 = reinterpret_cast<void**>(static_cast<uint32_t>(reinterpret_cast<unsigned char>(ebp12)));
            eax46 = fun_64944990(ecx35, v38, v39, v40, v41, v42, 0x649444b0, v25, v37, v43, v44, v45);
            eax47 = eax46 + 12;
            if (!eax46) {
                eax47 = esi24;
            }
            ecx48 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4 - 4 - 4 - 4 - 44 - 4 + 4 - 4 + 4 - 4 + 4 - 4 + 4 + 20);
            *reinterpret_cast<void***>(eax47) = ecx48;
            a2();
            eax56 = fun_64944990(ecx48, static_cast<uint32_t>(reinterpret_cast<unsigned char>(v38)), v49, v50, v51, v52, 0x649444b0, v25, v37, v53, v54, v55);
            ecx = eax56 + 12;
            if (eax56) {
                esi24 = ecx;
            }
            *reinterpret_cast<void***>(esi24) = v37;
            *reinterpret_cast<void***>(a2) = reinterpret_cast<void**>(1);
        } else {
            if (esi24 != 1) {
                eax57 = _iob;
                v58 = esi24;
                v59 = a2;
                fun_64948f2c(&eax57->f64, " once %p is %d\n", v59, v58, v60, v61, v62, v63);
            }
        }
        pthread_mutex_unlock(ecx, ebp12, " once %p is %d\n", v59, v58, v64, 0x649444b0, v25, v37, v65, v66, v67, ebx23, esi68, edi69, ebp70, __return_address(), a2, a3, a4, a5, a6, a7, a8, a9);
        fun_64944400(ecx, ebp12, " once %p is %d\n", v59, v58);
        eax10 = 0;
    }
    return eax10;
}

void fun_64945189() {
}

int32_t pthread_key_delete(void** ecx, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7, void** a8, void** a9, void** a10, void** a11, void** a12, void** a13) {
    void** v14;
    void** v15;
    void** ebp16;
    void** v17;
    void** edi18;
    void** v19;
    void** esi20;
    void** v21;
    void** ebx22;
    void** ebx23;
    int1_t below_or_equal24;
    void** edx25;
    void** v26;
    void** v27;
    void** v28;
    void** v29;
    void** eax30;
    int1_t cf31;
    void** v32;
    void** v33;
    void** v34;
    void** v35;
    void** v36;
    void** edi37;
    void** eax38;
    void** edx39;
    void** ebp40;
    void** v41;
    void** v42;
    void** v43;
    void** v44;
    void** v45;
    void** v46;
    void** v47;
    void** v48;
    void** v49;
    void** v50;

    v14 = reinterpret_cast<void**>(__return_address());
    v15 = ebp16;
    v17 = edi18;
    v19 = esi20;
    v21 = ebx22;
    ebx23 = a2;
    below_or_equal24 = reinterpret_cast<unsigned char>(g6494b044) <= reinterpret_cast<unsigned char>(ebx23);
    if (below_or_equal24 || (edx25 = _pthread_key_dest, edx25 == 0)) {
        return 22;
    } else {
        pthread_rwlock_wrlock(ecx, 0x6494902c, v26, v27, v28);
        v29 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(ebx23) * 4);
        eax30 = _pthread_key_dest;
        cf31 = reinterpret_cast<unsigned char>(ebx23) < reinterpret_cast<unsigned char>(g6494b040);
        *reinterpret_cast<void***>(eax30 + reinterpret_cast<unsigned char>(ebx23) * 4) = reinterpret_cast<void**>(0);
        if (cf31) {
            g6494b040 = ebx23;
        }
        pthread_mutex_lock(ecx, 0x64949028, v32, v33, v29, v34, v35, v36, v21, v19, v17, v15, v14);
        edi37 = g6494b030;
        eax38 = reinterpret_cast<void**>(0);
        edx39 = reinterpret_cast<void**>(0);
        ebp40 = g6494b034;
        if (edi37) {
            do {
                ecx = ebp40 + reinterpret_cast<unsigned char>(edx39) * 8;
                if (*reinterpret_cast<void***>(ecx) && (*reinterpret_cast<void***>(*reinterpret_cast<void***>(ecx) + 44) && reinterpret_cast<unsigned char>(ebx23) < reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(*reinterpret_cast<void***>(ecx) + 40)))) {
                    *reinterpret_cast<void***>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(*reinterpret_cast<void***>(ecx) + 44)) + reinterpret_cast<unsigned char>(v29)) = reinterpret_cast<void**>(0);
                    *reinterpret_cast<signed char*>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(*reinterpret_cast<void***>(ecx) + 48)) + reinterpret_cast<unsigned char>(ebx23)) = 0;
                }
                ++eax38;
                edx39 = eax38;
            } while (eax38 != edi37);
        }
        pthread_mutex_unlock(ecx, 0x64949028, v41, v42, v29, v43, v44, v45, v21, v19, v17, v15, v14, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13);
        pthread_rwlock_unlock(ecx, 0x6494902c, v46, v47, v29, v48, v49, v50, v21, v19, v17, v15, v14, a2, a3, a4, a5);
        return 0;
    }
}

int32_t fun_649454b4(void** ecx, void** a2, void** a3) {
    void** eax4;
    void** v5;
    void** v6;
    void** v7;
    void** v8;
    void** v9;
    void** v10;
    void** v11;
    void** v12;
    void** v13;
    void** v14;
    void** eax15;
    void** esi16;
    void** v17;
    void** v18;
    void** v19;
    void** v20;
    void** edi21;
    void** v22;
    void** v23;
    void** eax24;
    void** v25;
    void** eax26;
    void** v27;
    void** v28;
    void** v29;
    void** eax30;
    void** ecx31;
    void** v32;
    void** eax33;
    void** v34;
    void** v35;

    eax4 = reinterpret_cast<void**>(GetLastError());
    eax15 = fun_64944990(ecx, v5, v6, v7, v8, v9, v10, v11, eax4, v12, v13, v14);
    esi16 = eax15 + 52;
    pthread_spin_lock(esi16, v17, v18, v19, v20);
    if (reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax15 + 40)) <= reinterpret_cast<unsigned char>(a2)) {
        edi21 = a2 + 1;
        v22 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(edi21) * 4);
        v23 = *reinterpret_cast<void***>(eax15 + 44);
        eax24 = fun_64948f5c(v23, v22);
        if (!eax24 || (v22 = edi21, v25 = *reinterpret_cast<void***>(eax15 + 48), eax26 = fun_64948f5c(v25, v22), eax26 == 0)) {
            pthread_spin_unlock(esi16, v22, v27, v28, v29);
            return 12;
        } else {
            eax30 = *reinterpret_cast<void***>(eax15 + 40);
            fun_64948f6c(eax24 + reinterpret_cast<unsigned char>(eax30) * 4, 0, reinterpret_cast<unsigned char>(edi21) - reinterpret_cast<unsigned char>(eax30) << 2);
            ecx31 = *reinterpret_cast<void***>(eax15 + 40);
            v32 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(edi21) - reinterpret_cast<unsigned char>(ecx31));
            fun_64948f6c(reinterpret_cast<unsigned char>(ecx31) + reinterpret_cast<unsigned char>(eax26), 0, v32);
            *reinterpret_cast<void***>(eax15 + 40) = edi21;
            *reinterpret_cast<void***>(eax15 + 44) = eax24;
            *reinterpret_cast<void***>(eax15 + 48) = eax26;
            eax33 = eax24;
        }
    } else {
        eax33 = *reinterpret_cast<void***>(eax15 + 44);
    }
    *reinterpret_cast<void***>(eax33 + reinterpret_cast<unsigned char>(a2) * 4) = a3;
    *reinterpret_cast<signed char*>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax15 + 48)) + reinterpret_cast<unsigned char>(a2)) = 1;
    pthread_spin_unlock(esi16, 0, v32, v34, v35);
    SetLastError(eax4, 0, v32);
    return 0;
}

uint32_t fun_649455c9(int32_t a1, int32_t a2) {
    return static_cast<uint32_t>(static_cast<unsigned char>(reinterpret_cast<uint1_t>(a1 == a2)));
}

void fun_649455f5() {
}

void fun_6494561c() {
}

void fun_64945674() {
}

int32_t g6494b04c;

int32_t fun_64945697(int32_t* a1) {
    int32_t edx2;

    edx2 = g6494b04c;
    *a1 = edx2;
    return 0;
}

void fun_64945829() {
}

void fun_64945a91() {
    goto 0x64945aa0;
}

void fun_64945c8d(void** ecx, void** a2, void** a3, void** a4, void** a5) {
    void** v6;
    void** v7;
    void** v8;
    void** ebx9;
    void** esi10;
    void** edi11;
    void** v12;
    void** eax13;

    pthread_mutex_lock(ecx, 0x64949028, v6, v7, v8, ebx9, esi10, edi11, __return_address(), a2, a3, a4, a5);
    eax13 = fun_649444f0(0x64949028, v12);
    if (!eax13) 
        goto 0x64945cbf;
    if (*reinterpret_cast<void***>(eax13 + 0xb0) == a2) 
        goto 0x64945ce0; else 
        goto "???";
}

int32_t fun_64945d3c(uint32_t* a1, int32_t a2, uint32_t a3) {
    uint32_t edx4;

    edx4 = reinterpret_cast<uint32_t>(~a2);
    if (!(a3 & edx4)) {
        *a1 = edx4 & *a1 | a3;
        return 0;
    } else {
        return 22;
    }
}

struct s114 {
    int32_t f0;
    int32_t f4;
    int32_t f8;
    int32_t f12;
};

int32_t fun_64945d62(struct s114* a1) {
    a1->f12 = 0;
    a1->f0 = 1;
    a1->f4 = 0;
    a1->f8 = 0;
    return 0;
}

int32_t fun_64945df7(uint32_t* a1, uint32_t* a2) {
    *a2 = *a1 & 4;
    return 0;
}

int32_t fun_64945e4c(uint32_t* a1, uint32_t* a2) {
    *a2 = *a1 & 8;
    return 0;
}

int32_t fun_64945e97(uint32_t* a1, uint32_t* a2) {
    *a2 = *a1 & 16;
    return 0;
}

void fun_6494625c() {
}

void fun_649463b1(void** ecx, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7, void** a8, void** a9, void** a10, void** a11, void** a12, void** a13) {
    void** v14;
    void** v15;
    void** v16;
    void** v17;
    void** v18;
    void** v19;
    void** v20;
    void** ebx21;
    void** esi22;
    void** ebp23;
    void** v24;
    void** v25;
    void** v26;
    void** v27;
    void** v28;
    void** v29;
    void** v30;
    void** eax31;
    void** eax32;
    void** v33;
    int32_t eax34;
    void** v35;
    void** v36;
    void** v37;
    void** v38;
    void** v39;
    void** v40;

    pthread_mutex_lock(ecx, 0x64949028, v14, v15, v16, v17, v18, v19, v20, ebx21, esi22, ebp23, __return_address());
    eax31 = __pth_gpointer_locked(ecx, a2, v24, v25, v26, v27, v28, v29, v30, ebx21, esi22, ebp23, __return_address(), a2, a3, a4, a5);
    if (eax31 && (eax32 = *reinterpret_cast<void***>(eax31 + 20), !!eax32)) {
        v33 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4 + 0xfffffff4);
        eax34 = reinterpret_cast<int32_t>(GetHandleInformation(eax32, v33));
        if (eax34) 
            goto 0x64946420;
    }
    pthread_mutex_unlock(ecx, 0x64949028, v33, v35, v36, v37, v38, v39, v40, ebx21, esi22, ebp23, __return_address(), a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13);
}

void pthread_detach(void** ecx, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7, void** a8, void** a9, void** a10, void** a11, void** a12, void** a13) {
    void** v14;
    void** v15;
    void** v16;
    void** v17;
    void** v18;
    void** v19;
    void** v20;
    void** ebx21;
    void** esi22;
    void** ebp23;
    void** eax24;
    void** v25;
    void** v26;
    void** v27;
    void** v28;
    void** v29;
    void** v30;
    void** v31;
    void** eax32;
    void** v33;
    int32_t eax34;
    void** v35;
    void** v36;
    void** v37;
    void** v38;
    void** v39;
    void** v40;

    eax24 = __pth_gpointer_locked(ecx, a2, v14, v15, v16, v17, v18, v19, v20, ebx21, esi22, ebp23, __return_address(), a2, a3, a4, a5);
    pthread_mutex_lock(ecx, 0x64949028, v25, v26, v27, v28, v29, v30, v31, ebx21, esi22, ebp23, __return_address());
    if (eax24 && (eax32 = *reinterpret_cast<void***>(eax24 + 20), !!eax32)) {
        v33 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4 + 0xfffffff4);
        eax34 = reinterpret_cast<int32_t>(GetHandleInformation(eax32, v33));
        if (eax34) 
            goto 0x64946590;
    }
    pthread_mutex_unlock(ecx, 0x64949028, v33, v35, v36, v37, v38, v39, v40, ebx21, esi22, ebp23, __return_address(), a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13);
}

void** g4;

int32_t g8;

void** fun_649466d3(void** a1, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7, void** a8, void** a9, void** a10) {
    void** v11;
    void** v12;
    void** v13;
    void** v14;
    void** v15;
    void** v16;
    void** v17;
    void** v18;
    void** ebx19;
    void** ebp20;
    void** eax21;
    void** eax22;
    int32_t eax23;
    int32_t tmp32_24;
    void** v25;
    void** v26;
    void** v27;
    void** v28;
    void** v29;
    void** v30;
    void** eax31;

    eax21 = fun_64946650(0, v11, v12, v13, v14, v15, v16, v17, 0, v18, ebx19, ebp20, __return_address());
    if (!eax21) {
        eax22 = g4;
        eax23 = reinterpret_cast<int32_t>(WaitForSingleObject(eax22, 0));
        if (eax23) {
            tmp32_24 = g8 + 1;
            g8 = tmp32_24;
        } else {
            if (*reinterpret_cast<void***>(a1 + 4)) {
                *reinterpret_cast<void***>(*reinterpret_cast<void***>(a1 + 4)) = reinterpret_cast<void**>(0);
            }
        }
        eax31 = pthread_mutex_unlock(0, 12, 0x6494671d, eax22, 0, v25, v26, v27, v28, v29, 0, v30, ebx19, ebp20, __return_address(), a1, a2, a3, a4, a5, a6, a7, a8, a9, a10);
        return eax31;
    } else {
        return eax21;
    }
}

void fun_64946699() {
}

void fun_64946859() {
}

void fun_6494681c() {
}

struct s115 {
    signed char[8] pad8;
    int32_t f8;
    void** f12;
};

void fun_64946956(void** a1, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7, void** a8, void** a9, void** a10, void** a11, void** a12) {
    void** v13;
    void** v14;
    void** v15;
    void** v16;
    void** v17;
    void** v18;
    void** v19;
    void** v20;
    void** v21;
    void** v22;
    void** ebx23;
    void** eax24;
    struct s115* v25;
    void** v26;
    void** v27;
    void** v28;
    void** v29;
    void** v30;
    void** v31;
    void** v32;
    void** v33;
    void** v34;
    int32_t* eax35;
    void** edx36;
    void** v37;
    void** v38;
    void** v39;
    void** v40;
    void** v41;
    void** v42;
    void** v43;
    void** v44;
    void** v45;

    eax24 = fun_64946650(0, v13, v14, v15, v16, v17, v18, v19, v20, v21, v22, ebx23, __return_address());
    if (eax24) 
        goto 0x649469a0;
    if (reinterpret_cast<uint1_t>(v25->f8 < 0) | reinterpret_cast<uint1_t>(v25->f8 == 0)) {
        pthread_mutex_unlock(0, &v25->f12, v26, v27, v28, v29, v30, v31, v32, v33, v34, ebx23, __return_address(), a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12);
        eax35 = reinterpret_cast<int32_t*>(_errno(&v25->f12));
        *eax35 = 11;
        goto 0x64946998;
    } else {
        edx36 = reinterpret_cast<void**>(&v25->f12);
        *reinterpret_cast<uint32_t*>(edx36 + 0xfffffffc) = v25->f8 - 1;
        pthread_mutex_unlock(0, edx36, v37, v38, v39, v40, v41, v42, v43, v44, v45, ebx23, __return_address(), a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12);
    }
}

void fun_649469c5() {
}

struct s116 {
    signed char[12] pad12;
    void** f12;
};

struct s117 {
    signed char[4] pad4;
    int32_t f4;
};

void fun_64946c8c(void** ecx, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7, void** a8, void** a9, void** a10, void** a11, void** a12, void** a13, void** a14, void** a15, void** a16, void** a17, void** a18, void** a19, void** a20, void** a21, void** a22, void** a23, void** a24) {
    struct s116* edx25;
    int32_t* eax26;
    struct s117* ebp27;

    pthread_mutex_unlock(ecx, &edx25->f12, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15, a16, a17, a18, a19, a20, a21, a22, a23, a24);
    eax26 = reinterpret_cast<int32_t*>(_errno(&edx25->f12));
    *eax26 = 34;
    goto ebp27->f4;
}

int32_t sem_open() {
    int32_t* eax1;

    eax1 = reinterpret_cast<int32_t*>(_errno());
    *eax1 = 40;
    return 0;
}

void fun_64946f36(int32_t a1) {
    if (a1) 
        goto 0x64946f50; else 
        goto "???";
}

int32_t OpenProcess = 0xe4d0;

uint32_t fun_64947143(int32_t a1) {
    int32_t eax2;
    uint32_t eax3;
    int32_t eax4;
    int32_t* eax5;
    uint32_t eax6;
    int32_t edx7;

    if (!a1 || (eax2 = reinterpret_cast<int32_t>(GetCurrentProcessId()), a1 == eax2)) {
        addr_6494715e_2:
        eax3 = 0;
    } else {
        eax4 = reinterpret_cast<int32_t>(OpenProcess(0x400, 0, a1));
        if (!eax4) {
            eax5 = reinterpret_cast<int32_t*>(_errno());
            eax6 = reinterpret_cast<uint32_t>(GetLastError());
            edx7 = 0;
            *reinterpret_cast<unsigned char*>(&edx7) = reinterpret_cast<uint1_t>(eax6 != 5);
            eax3 = 0xffffffff;
            *eax5 = edx7 + edx7 + 1;
        } else {
            CloseHandle(eax4);
            goto addr_6494715e_2;
        }
    }
    return eax3;
}

uint32_t sched_setscheduler(int32_t a1, int32_t a2, int32_t a3) {
    int32_t* eax4;
    uint32_t eax5;
    int32_t eax6;
    int32_t v7;
    int32_t* eax8;
    int32_t eax9;
    int32_t* eax10;
    uint32_t eax11;
    int32_t edx12;

    if (!a3) {
        eax4 = reinterpret_cast<int32_t*>(_errno());
        *eax4 = 22;
        eax5 = 0xffffffff;
    } else {
        if (!a1 || (eax6 = reinterpret_cast<int32_t>(GetCurrentProcessId()), a1 == eax6)) {
            addr_649471d5_4:
            if (a2) {
                eax8 = reinterpret_cast<int32_t*>(_errno(0x200, 0, v7));
                *eax8 = 40;
                eax5 = 0xffffffff;
            } else {
                eax5 = 0;
            }
        } else {
            v7 = a1;
            eax9 = reinterpret_cast<int32_t>(OpenProcess(0x200, 0, v7));
            if (!eax9) {
                eax10 = reinterpret_cast<int32_t*>(_errno());
                eax11 = reinterpret_cast<uint32_t>(GetLastError());
                edx12 = 0;
                *reinterpret_cast<unsigned char*>(&edx12) = reinterpret_cast<uint1_t>(eax11 != 5);
                eax5 = 0xffffffff;
                *eax10 = edx12 + edx12 + 1;
            } else {
                CloseHandle(eax9);
                goto addr_649471d5_4;
            }
        }
    }
    return eax5;
}

int32_t fun_64947265() {
    Sleep(0);
    return 0;
}

void fun_64948e33() {
}

void fun_64947609() {
}

void fun_64947912() {
}

int32_t g64949040 = 2;

int32_t fun_64947983() {
    int1_t zf1;
    int32_t v2;
    int32_t* ebx3;
    int32_t eax4;

    zf1 = g64949040 == 2;
    if (!zf1) {
        g64949040 = 2;
    }
    if (v2 == 2) {
        ebx3 = reinterpret_cast<int32_t*>(0x6494f02c);
        if (1) 
            goto 0x649479b5;
        do {
            eax4 = *ebx3;
            if (eax4) {
                eax4();
            }
            ++ebx3;
        } while (!reinterpret_cast<int1_t>(ebx3 == 0x6494f02c));
        return 1;
    } else {
        if (v2 == 1) 
            goto 0x649479f0; else 
            goto "???";
    }
}

int32_t fun_64947a10() {
    return 0;
}

void fun_64947bbc() {
}

int32_t fun_64947940() {
    int32_t v1;

    if (!v1) 
        goto 0x64947960;
    if (v1 == 3) 
        goto 0x64947960;
    return 1;
}

int32_t fun_649482a3(int32_t a1) {
    int32_t eax2;

    eax2 = g6494b3c4;
    if (eax2) 
        goto 0x649482d0;
    return 0;
}

void fun_64948344() {
}

void fun_649483d9() {
}

int32_t fun_6494840d(int16_t* a1) {
    if (*a1 == 0x5a4d) 
        goto 0x64948420;
    return 0;
}

void fun_64948422() {
}

void fun_6494846d(int32_t a1) {
    uint32_t eax2;
    int1_t zf3;

    eax2 = fun_64948fa4(a1);
    if (eax2 > 8) 
        goto 0x64948495;
    zf3 = image_base_ == 0x5a4d;
    if (zf3) 
        goto 0x649484a0; else 
        goto "???";
}

int32_t fun_64948fc0() {
    int32_t eax1;

    fun_64941460();
    eax1 = fun_64947920(fun_649414b0);
    return eax1;
}

void fun_649485fc() {
}

int32_t fun_64948684(int32_t a1) {
    int1_t zf2;
    int32_t v3;
    uint32_t eax4;
    int32_t eax5;
    uint32_t esi6;
    struct s2* eax7;

    zf2 = image_base_ == 0x5a4d;
    if (zf2 && ((eax4 = fun_649483f0(v3), !!eax4) && ((eax5 = g6494003c, esi6 = *reinterpret_cast<uint32_t*>(eax5 + 0x64940080), !!esi6) && (eax7 = fun_64948430(0x64940000, esi6), !!eax7)))) {
        if (esi6 + 0x64940000) 
            goto 0x649486f6;
    }
    return 0;
}

int32_t fun_6494878c(int32_t a1, int32_t a2, uint32_t a3) {
    int32_t eax4;
    uint32_t ecx5;

    eax4 = a1;
    if (a3 <= 31) {
        if (a3) {
            ecx5 = a3;
            return eax4 << *reinterpret_cast<unsigned char*>(&ecx5);
        }
    } else {
        if (a3 <= 63) {
        }
        eax4 = 0;
    }
    return eax4;
}

void fun_649487ba() {
}

int32_t fun_64948829(uint32_t a1, int32_t a2, uint32_t a3, int32_t a4) {
    int32_t eax5;

    eax5 = 0;
    if (a2 < a4) {
        addr_64948857_2:
        return eax5;
    } else {
        if (a2 > a4) 
            goto addr_64948860_4;
        if (a1 < a3) 
            goto addr_64948857_2;
    }
    if (a1 > a3) {
        addr_64948860_4:
        return 2;
    } else {
        eax5 = 1;
        goto addr_64948857_2;
    }
}

uint32_t fun_64948869(uint32_t a1, uint32_t a2, uint32_t a3) {
    uint32_t eax4;
    uint32_t ecx5;
    uint32_t ecx6;
    uint32_t ecx7;

    eax4 = a1;
    if (a3 <= 31) {
        if (a3) {
            ecx5 = 32 - a3;
            ecx6 = a3;
            return a2 << *reinterpret_cast<unsigned char*>(&ecx5) | eax4 >> *reinterpret_cast<signed char*>(&ecx6);
        }
    } else {
        eax4 = 0;
        if (a3 <= 63) {
            ecx7 = a3 - 32;
            eax4 = a2 >> *reinterpret_cast<signed char*>(&ecx7);
        }
    }
    return eax4;
}

void fun_6494885a() {
}

void fun_64948cda() {
}

void fun_64948a09() {
}

void fun_64948c7c() {
}

void fun_64948df9() {
}

void fun_64948dea(int32_t a1, int32_t a2) {
    goto a2;
}

void fun_64942bdd() {
}

void fun_64946d69() {
}

void fun_64945644(void** ecx, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7, void** a8, void** a9) {
    void** v10;
    void** v11;
    void** v12;
    void** v13;
    void** v14;
    void** v15;
    void** eax16;

    eax16 = __pth_gpointer_locked(ecx, a2, v10, v11, v12, v13, v14, v15, __return_address(), a2, a3, a4, a5, a6, a7, a8, a9);
    if (!eax16) 
        goto 0x64945670;
}

void fun_64942257() {
}

void fun_649422f9() {
}

uint32_t fun_649433cd(uint32_t a1) {
    int32_t eax2;
    int32_t eax3;
    uint32_t eax4;
    int32_t eax5;

    return eax2 - (eax3 + reinterpret_cast<uint1_t>(eax4 < eax5 + reinterpret_cast<uint1_t>(a1 < 1))) & 22;
}

int32_t fun_64943512(uint32_t* a1, int32_t a2) {
    *a1 = (a2 << 5) + (*a1 & 31);
    return 0;
}

void fun_64943b39(void** ecx, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7, void** a8, void** a9, void** a10, void** a11, void** a12, void** a13) {
    void** v14;
    void** v15;
    void** v16;
    void** v17;
    void** v18;
    void** v19;
    void** v20;
    void** ebx21;
    void** esi22;
    void** edi23;
    void** ebp24;
    void** eax25;
    void** esi26;
    void** ebp27;
    void** eax28;
    void** v29;
    void** eax30;
    void** v31;
    void** v32;
    void** v33;
    void** v34;
    void** v35;
    void** v36;
    void** v37;
    void** v38;
    void** v39;
    void** v40;

    pthread_testcancel(ecx, v14, v15, v16, v17, v18, v19, v20, ebx21, esi22, edi23, ebp24, __return_address(), a2, a3, a4, a5, a6, a7, a8, a9);
    eax25 = fun_64943960(ecx);
    if (!eax25) {
        esi26 = *reinterpret_cast<void***>(a2);
        ebp27 = esi26 + 20;
        eax28 = pthread_mutex_timedlock(ecx, ebp27, a3);
        if (!eax28) {
            *reinterpret_cast<void***>(esi26 + 12) = *reinterpret_cast<void***>(esi26 + 12) + 1;
            if (*reinterpret_cast<void***>(esi26 + 12) == 0x7fffffff) {
                v29 = esi26 + 24;
                eax30 = pthread_mutex_timedlock(ecx, v29, a3);
                if (!eax30) {
                    *reinterpret_cast<void***>(esi26 + 12) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(esi26 + 12)) - reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(esi26 + 16)));
                    *reinterpret_cast<void***>(esi26 + 16) = reinterpret_cast<void**>(0);
                    fun_64943660(ecx, v29, a3, v31, v32, v33, v34, v35, ebx21, esi22, edi23, ebp24, __return_address(), a2, a3, a4, a5);
                } else {
                    if (eax30 == 0x8a) 
                        goto 0x64943bd0; else 
                        goto "???";
                }
            } else {
                pthread_mutex_unlock(ecx, ebp27, a3, v36, v37, v38, v39, v40, ebx21, esi22, edi23, ebp24, __return_address(), a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13);
            }
        }
    } else {
        return;
    }
}

void pthread_rwlock_tryrdlock(void** ecx, int32_t a2) {
    void** eax3;

    eax3 = fun_64943960(ecx);
    if (!eax3) 
        goto 0x64943c10;
    return;
}

void fun_64943d2c() {
}

int32_t fun_6494405c(int32_t* a1) {
    int32_t eax2;

    eax2 = 22;
    if (a1) {
        *a1 = 0;
        *reinterpret_cast<signed char*>(&eax2) = 0;
    }
    return eax2;
}

void fun_649443fc() {
}

void fun_649444a1(void** ecx, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7, void** a8, void** a9, void** a10, void** a11, void** a12, void** a13, void** a14, void** a15, void** a16, void** a17) {
    void** v18;
    void** v19;
    void** v20;
    void** v21;
    void** v22;
    void** ebx23;

    pthread_mutex_unlock(ecx, a2 + 4, v18, v19, v20, v21, v22, ebx23, __return_address(), a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15, a16, a17);
    goto fun_64944400;
}

void fun_64944566() {
}

void fun_64944987() {
}

void fun_64944da5(void** ecx, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7, void** a8, void** a9, void** a10, void** a11, void** a12, void** a13, void** a14, void** a15) {
    void** v16;
    void** v17;
    void** ebp18;
    void** v19;
    void** esi20;
    void** v21;
    void** ebx22;
    void** v23;
    void** v24;
    void** v25;
    void** eax26;
    void** v27;
    void** v28;
    void** v29;
    int1_t zf30;
    void** v31;
    void** v32;
    void** v33;
    void** eax34;
    void** v35;
    int32_t eax36;
    void** v37;
    int32_t eax38;
    void** v39;
    void** v40;
    void** v41;
    void** esi42;
    void** v43;
    void** edx44;
    void** v45;
    void** v46;
    void** v47;
    void** eax48;
    void** v49;
    void** v50;
    int32_t ebx51;
    void** v52;
    void** eax53;
    void** v54;
    void** v55;
    void** eax56;
    void** v57;
    void** v58;

    v16 = reinterpret_cast<void**>(__return_address());
    v17 = ebp18;
    v19 = esi20;
    v21 = ebx22;
    pthread_mutex_lock(ecx, 0x64949028, v23, v24, v25, v21, v19, v17, v16, a2, a3, a4, a5);
    eax26 = a2 + 28;
    v27 = eax26;
    pthread_mutex_lock(ecx, eax26, v28, v29, v27, v21, v19, v17, v16, a2, a3, a4, a5);
    zf30 = reinterpret_cast<int1_t>(g6494b048 == 1);
    if (!zf30) {
        fun_64944910(ecx, eax26, v31, v32, v27, v21, v19, v17, v16, a2, a3, a4, a5, a6, a7, a8, a9);
    }
    v33 = a2;
    eax34 = g64949030;
    v35 = eax34;
    TlsSetValue(v35, v33);
    eax36 = reinterpret_cast<int32_t>(GetCurrentThreadId());
    *reinterpret_cast<int32_t*>(a2 + 56) = eax36;
    pthread_mutex_unlock(ecx, v27, 0x64944df8, v35, v33, v37, v27, v21, v19, v17, v16, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15);
    eax38 = fun_64948f64(a2 + 0x6c, 0, v35, v33);
    v39 = reinterpret_cast<void**>(0x64949028);
    if (eax38) {
        while (1) {
            pthread_mutex_lock(ecx, v39, 0, v35, v33, v40, v27, v21, v19, v17, v16, a2, a3);
            addr_64944e6d_5:
            pthread_mutex_lock(ecx, v27, 0, v35, v33, v41, v27, v21, v19, v17, v16, a2, a3);
            esi42 = *reinterpret_cast<void***>(a2 + 4);
            if (*reinterpret_cast<void***>(a2 + 24)) {
                v43 = *reinterpret_cast<void***>(a2 + 24);
                CloseHandle(v43, 0, v35, v33);
            }
            edx44 = *reinterpret_cast<void***>(a2 + 20);
            *reinterpret_cast<void***>(a2 + 24) = reinterpret_cast<void**>(0);
            if (!edx44) {
                *reinterpret_cast<void***>(a2) = reinterpret_cast<void**>(0xdeadbeef);
                pthread_mutex_unlock(ecx, v27, 0, v35, v33, v45, v27, v21, v19, v17, v16, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15);
                pthread_mutex_destroy(ecx, v27, 0, v35, v33, v46, v27, v21, v19, v17, v16);
                if (!*reinterpret_cast<void***>(a2 + 0xac)) {
                    fun_649446d0(ecx, v27, 0, v35, v33, v47, v27, v21, v19, v17, v16, a2, a3);
                    esi42 = esi42;
                }
                eax48 = g64949030;
                TlsSetValue(eax48, 0, v35, v33);
            } else {
                *reinterpret_cast<void***>(a2 + 100) = reinterpret_cast<void**>(1);
                pthread_mutex_unlock(ecx, v27, 0, v35, v33, v49, v27, v21, v19, v17, v16, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15);
                pthread_mutex_destroy(ecx, v27, 0, v35, v33, v50, v27, v21, v19, v17, v16);
            }
            ebx51 = Sleep;
            while (eax53 = pthread_mutex_unlock(ecx, 0x64949028, 0, v35, v33, v52, v27, v21, v19, v17, v16, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15), eax53 == 0) {
                ebx51(0, 0, v35, v33);
            }
            v39 = esi42;
            _endthreadex(v39, 0, v35, v33);
        }
    } else {
        pthread_mutex_unlock(ecx, 0x64949028, 0, v35, v33, v54, v27, v21, v19, v17, v16, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15);
        v55 = *reinterpret_cast<void***>(a2 + 4);
        eax56 = reinterpret_cast<void**>(*reinterpret_cast<void***>(a2 + 8)(v55, 0, v35, v33));
        pthread_mutex_lock(ecx, 0x64949028, 0, v35, v33, v57, v27, v21, v19, v17, v16, a2, a3);
        *reinterpret_cast<void***>(a2 + 4) = eax56;
        if (!*reinterpret_cast<void***>(a2 + 0xb0)) 
            goto addr_64944e6d_5;
        fun_64944b10(ecx, 0x64949028, 0, v35, v33, v58, v27, v21, v19, v17, v16);
        goto addr_64944e6d_5;
    }
}

void fun_64944f6a(void** a1, void** a2, void** a3, void** a4) {
    void** ecx5;
    int32_t eax6;
    void** v7;
    void** v8;
    void** v9;
    void** v10;
    void** ebx11;
    void** esi12;
    void** edi13;
    void** v14;
    void** v15;
    void** v16;
    void** v17;
    void** v18;
    void** v19;
    void** v20;
    void** eax21;
    void** edi22;
    void** v23;
    void** v24;
    void** v25;
    void** v26;
    void** v27;
    void** v28;
    void** v29;
    void** eax30;
    void** esi31;
    int32_t eax32;
    void** v33;
    void** v34;
    void** v35;
    void** v36;
    void** v37;
    void** v38;
    void** v39;
    void** eax40;
    void** v41;
    void** v42;

    ecx5 = g6494b024;
    if (ecx5) {
        if (!a1) {
            eax6 = reinterpret_cast<int32_t>(GetCurrentThreadId());
            fun_64948f44("T%p %d %s\n", 0, eax6, a2, v7, v8, v9, v10, ebx11, esi12, edi13);
        } else {
            eax21 = __pth_gpointer_locked(ecx5, a1, v14, v15, v16, v17, v18, v19, v20, ebx11, esi12, edi13, __return_address(), a1, a2, a3, a4);
            edi22 = *reinterpret_cast<void***>(eax21 + 20);
            eax30 = __pth_gpointer_locked(ecx5, a1, v23, v24, v25, v26, v27, v28, v29, ebx11, esi12, edi13, __return_address(), a1, a2, a3, a4);
            esi31 = *reinterpret_cast<void***>(eax30);
            eax32 = reinterpret_cast<int32_t>(GetCurrentThreadId(a1));
            eax40 = __pth_gpointer_locked(ecx5, a1, v33, v34, v35, v36, v37, v38, v39, ebx11, esi12, edi13, __return_address(), a1, a2, a3, a4);
            fun_64948f44("T%p %d V=%0X H=%p %s\n", eax40, eax32, esi31, edi22, a2, v41, v42, ebx11, esi12, edi13);
        }
    }
    return;
}

uint32_t fun_64945013() {
    void* ebp1;
    int32_t eax2;
    int32_t eax3;
    uint32_t edx4;
    uint32_t v5;
    uint32_t eax6;

    ebp1 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4);
    eax2 = reinterpret_cast<int32_t>(GetCurrentProcess());
    eax3 = reinterpret_cast<int32_t>(GetProcessAffinityMask(eax2, reinterpret_cast<int32_t>(ebp1) - 16, reinterpret_cast<int32_t>(ebp1) - 12));
    if (!eax3 || (edx4 = v5, edx4 == 0)) {
        addr_6494504a_2:
        return 1;
    } else {
        eax6 = 0;
        do {
            eax6 = eax6 + (edx4 & 1);
            edx4 = edx4 >> 1;
        } while (edx4);
        if (!eax6) 
            goto addr_6494504a_2;
    }
    return eax6;
}

void _pthread_cleanup_dest(int32_t a1) {
    if (a1) 
        goto 0x649455f0;
    return;
}

int32_t pthread_set_concurrency(int32_t a1) {
    g6494b04c = a1;
    return 0;
}

struct s118 {
    int32_t f0;
    int32_t f4;
    int32_t f8;
    int32_t f12;
};

int32_t fun_64945d92(struct s118* a1) {
    a1->f0 = 0;
    a1->f4 = 0;
    a1->f8 = 0;
    a1->f12 = 0;
    return 0;
}

int32_t fun_64945e12(int32_t a1, uint32_t a2) {
    if (a1) {
        if (!(a2 & 0xfffffff7)) 
            goto 0x64945e40;
    }
    return 22;
}

int32_t fun_64945e62(uint32_t* a1, uint32_t a2) {
    if (!(a2 & 0xffffffef)) {
        *a1 = *a1 & 0xffffffef | a2;
        return 0;
    } else {
        return 22;
    }
}

struct s119 {
    signed char[4] pad4;
    int32_t f4;
};

int32_t fun_64945eb2(struct s119* a1, int32_t* a2) {
    *a2 = a1->f4;
    return 0;
}

int32_t fun_649462a5(void** ecx, void** a2, void** a3) {
    void** v4;
    void** v5;
    void** v6;
    void** v7;
    void** v8;
    void** v9;
    void** v10;
    void** v11;
    void** v12;
    void** v13;
    void** ebx14;
    void** esi15;
    void** edi16;
    void** ebp17;
    void** eax18;
    void** eax19;
    void** v20;
    void** v21;
    int32_t eax22;
    int32_t esi23;
    void** v24;
    void** v25;
    void** v26;
    void** v27;
    void** v28;
    void** v29;
    void** v30;
    void** v31;
    void** eax32;
    void** eax33;
    void** v34;
    void** v35;
    void** v36;
    void** v37;
    void** v38;
    void** v39;
    void** v40;
    void** v41;
    void** v42;
    void** v43;
    void** ecx44;
    void** v45;
    int32_t esi46;
    void** v47;
    void** v48;
    void** v49;
    void** v50;
    void** v51;
    void** v52;
    void** v53;
    void** v54;
    void** eax55;
    void** v56;
    void** v57;
    void** v58;
    void** v59;
    void** v60;
    void** v61;
    void** v62;

    eax18 = __pth_gpointer_locked(ecx, a2, v4, v5, v6, v7, v8, v9, v10, v11, v12, v13, ebx14, esi15, edi16, ebp17, __return_address());
    if (!eax18 || ((eax19 = *reinterpret_cast<void***>(eax18 + 20), eax19 == 0) || (v20 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4 + 0xffffffe4), v21 = reinterpret_cast<void**>(0x649462e1), eax22 = reinterpret_cast<int32_t>(GetHandleInformation(eax19, v20)), !eax22))) {
        esi23 = 3;
    } else {
        esi23 = 22;
        if (!(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax18 + 36)) & 4)) {
            eax32 = fun_64944990(ecx, v24, 0x649462e1, eax19, v20, v25, v26, v27, v28, v29, v30, v31);
            if (!eax32) {
                eax33 = reinterpret_cast<void**>(0);
            } else {
                eax33 = *reinterpret_cast<void***>(eax32 + 0xb0);
            }
            esi23 = 36;
            if (a2 != eax33) {
                pthread_testcancel(ecx, v34, 0x649462e1, eax19, v20, v35, v36, v37, v38, v39, v40, v41, v42, v43, ebx14, esi15, edi16, ebp17, __return_address(), a2, a3);
                ecx44 = *reinterpret_cast<void***>(eax18 + 100);
                if (!ecx44) {
                    v21 = reinterpret_cast<void**>(0xffffffff);
                    v45 = *reinterpret_cast<void***>(eax18 + 20);
                    WaitForSingleObject(v45, 0xffffffff, eax19, v20);
                }
                esi46 = CloseHandle;
                v47 = *reinterpret_cast<void***>(eax18 + 20);
                esi46(v47, v21, eax19, v20);
                if (*reinterpret_cast<void***>(eax18 + 24)) {
                    v48 = *reinterpret_cast<void***>(eax18 + 24);
                    esi46(v48, v47, v21, eax19, v20);
                }
                *reinterpret_cast<void***>(eax18 + 24) = reinterpret_cast<void**>(0);
                if (a3) {
                    ecx44 = a3;
                    *reinterpret_cast<void***>(ecx44) = *reinterpret_cast<void***>(eax18 + 4);
                }
                esi23 = 0;
                v49 = eax18 + 28;
                pthread_mutex_destroy(ecx44, v49, v47, v21, eax19, v20, v50, v51, v52, v53, v54);
                eax55 = *reinterpret_cast<void***>(eax18 + 0xac);
                *reinterpret_cast<int32_t*>(eax18 + 52) = -1;
                if (!eax55) {
                    fun_649446d0(ecx44, v49, v47, v21, eax19, v20, v56, v57, v58, v59, v60, v61, v62);
                }
            }
        }
    }
    return esi23;
}

int32_t g6494b01c;

int32_t fun_64946629() {
    int32_t eax1;

    eax1 = g6494b01c;
    return eax1;
}

struct s120 {
    signed char[8] pad8;
    int32_t f8;
};

struct s121 {
    signed char[4] pad4;
    void** f4;
    signed char[3] pad8;
    int32_t f8;
    void** f12;
};

struct s122 {
    signed char[12] pad12;
    void** f12;
};

void sem_post(void** a1, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7, void** a8, void** a9, void** a10, void** a11, void** a12) {
    void** v13;
    void** v14;
    void** v15;
    void** v16;
    void** v17;
    void** v18;
    void** v19;
    void** v20;
    void** v21;
    void** ebx22;
    void** ebp23;
    void** eax24;
    struct s120* v25;
    struct s121* eax26;
    struct s121* v27;
    void** v28;
    int32_t eax29;
    struct s121* v30;
    void** v31;
    void** v32;
    void** v33;
    void** v34;
    void** v35;
    void** v36;
    struct s122* v37;
    void** v38;
    void** v39;
    void** v40;
    void** v41;
    void** v42;
    void** v43;
    void** v44;
    int32_t* eax45;

    eax24 = fun_64946650(0, v13, v14, v15, v16, v17, v18, v19, v20, v21, ebx22, ebp23, __return_address());
    if (eax24) {
        goto 0x64946c31;
    }
    if (v25->f8 == 0x7fffffff) 
        goto 0x64946c90;
    v25->f8 = v25->f8 + 1;
    eax26 = v27;
    if (!(reinterpret_cast<uint1_t>(eax26->f8 < 0) | reinterpret_cast<uint1_t>(eax26->f8 == 0))) 
        goto addr_64946c26_5;
    v28 = eax26->f4;
    eax29 = reinterpret_cast<int32_t>(ReleaseSemaphore(v28, 1, 0));
    eax26 = v30;
    if (!eax29) 
        goto addr_64946c5e_7;
    addr_64946c26_5:
    pthread_mutex_unlock(0, &eax26->f12, 1, 0, v31, v32, v33, v34, v35, v36, ebx22, ebp23, __return_address(), a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12);
    addr_64946c5e_7:
    eax26->f8 = eax26->f8 - 1;
    pthread_mutex_unlock(0, &v37->f12, v38, 0x64946c54, v28, 1, 0, v39, v40, v41, v42, v43, v44, ebx22, ebp23, __return_address(), a1, a2, a3, a4, a5, a6, a7, a8, a9);
    eax45 = reinterpret_cast<int32_t*>(_errno(&v37->f12));
    *eax45 = 22;
    goto 0x64946c31;
}

int32_t fun_64946da5() {
    int32_t* eax1;

    eax1 = reinterpret_cast<int32_t*>(_errno());
    *eax1 = 40;
    return -1;
}

void clock_getres(int32_t a1, int32_t a2) {
    if (a1 == 1) 
        goto 0x64947300;
    if (a1 > 1) 
        goto 0x649472e0;
    if (a1) 
        goto 0x649472e5; else 
        goto "???";
}

int32_t fun_64948dbd(uint32_t a1, uint32_t a2, uint32_t a3, uint32_t a4) {
    int32_t eax5;

    eax5 = 0;
    if (a2 < a4) {
        addr_64948de7_2:
        return eax5;
    } else {
        if (a2 > a4) 
            goto 0x64948df0;
        if (a1 < a3) 
            goto addr_64948de7_2;
    }
    if (a1 > a3) 
        goto 0x64948df0;
    eax5 = 1;
    goto addr_64948de7_2;
}

int32_t FileTimeToSystemTime = 0xe338;

int32_t SetSystemTime = 0xe59a;

void fun_64947623(int32_t a1, int32_t a2) {
    void* ebp3;
    void* ebx4;
    void* v5;
    int32_t eax6;
    int32_t eax7;
    int32_t* eax8;

    ebp3 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4);
    if (a1) 
        goto 0x649476b0;
    __asm__("cdq ");
    ebx4 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(ebp3) - 24);
    v5 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(ebp3) - 32);
    eax6 = reinterpret_cast<int32_t>(FileTimeToSystemTime(v5, ebx4));
    if (!eax6) 
        goto 0x649476b0;
    eax7 = reinterpret_cast<int32_t>(SetSystemTime(ebx4, 0x6494768f, v5, ebx4));
    if (!eax7) {
        eax8 = reinterpret_cast<int32_t*>(_errno(0x6494769f, ebx4, 0x6494768f, v5, ebx4));
        *eax8 = 1;
        goto 0x649476a8;
    }
}

void* g6494b144;

int32_t g6494b360;

int32_t g6494b364;

int32_t g6494b138;

int32_t g6494b36c;

int32_t g6494b12c;

int32_t SetUnhandledExceptionFilter = 0xe5d2;

int32_t UnhandledExceptionFilter = 0xe65e;

int32_t TerminateProcess = 0xe608;

void fun_6494810c(int32_t a1) {
    int32_t eax2;

    g6494b144 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4 + 4);
    g6494b360 = 0xc0000409;
    g6494b364 = 1;
    g6494b138 = reinterpret_cast<int32_t>(__return_address());
    g6494b36c = reinterpret_cast<int32_t>(__return_address());
    g6494b12c = a1;
    SetUnhandledExceptionFilter(0);
    UnhandledExceptionFilter(0x6494a3cc, 0);
    eax2 = reinterpret_cast<int32_t>(GetCurrentProcess(0x64948175, 0x6494a3cc, 0));
    TerminateProcess(eax2, 0xc0000409, 0);
    fun_64948f4c();
}

void fun_6494850c() {
}

void fun_64948c8a() {
}

void fun_649433dc(int32_t a1) {
    if (a1) 
        goto 0x649433f0; else 
        goto "???";
}

void fun_649456bc() {
}

int32_t fun_64945dc2(uint32_t* a1, uint32_t a2) {
    if (!(a2 & 0xfffffffb)) {
        *a1 = *a1 & 0xfffffffb | a2;
        return 0;
    } else {
        return 22;
    }
}

struct s123 {
    signed char[4] pad4;
    int32_t f4;
};

int32_t pthread_attr_setstackaddr(struct s123* a1, int32_t a2) {
    a1->f4 = a2;
    return 0;
}

int32_t fun_64946636(int32_t a1) {
    g6494b01c = a1;
    return 0;
}

int32_t fun_64946dc9() {
    int32_t* eax1;

    eax1 = reinterpret_cast<int32_t*>(_errno());
    *eax1 = 40;
    return -1;
}

struct s124 {
    signed char[8] pad8;
    int32_t f8;
};

int32_t pthread_attr_getstacksize(struct s124* a1, int32_t* a2) {
    *a2 = a1->f8;
    return 0;
}

int32_t fun_64946de9(void** ecx, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7, void** a8, void** a9, void** a10, void** a11, void** a12, void** a13) {
    void** esi14;
    void** v15;
    int32_t* eax16;
    int32_t eax17;
    void** ebp18;
    void** v19;
    void** v20;
    void** v21;
    void** v22;
    void** v23;
    void** v24;
    void** ebx25;
    void** esi26;
    void** edi27;
    void** ebp28;
    void** eax29;
    void** v30;
    void** v31;
    void** v32;
    void** v33;
    void** v34;
    void** v35;
    void** v36;
    void** v37;
    void** v38;
    void** v39;
    void** v40;
    void** v41;

    if (!a3 || (!a2 || (esi14 = *reinterpret_cast<void***>(a2), esi14 == 0))) {
        addr_64946e65_2:
        eax16 = reinterpret_cast<int32_t*>(_errno(v15));
        *eax16 = 22;
        eax17 = -1;
    } else {
        ebp18 = esi14 + 12;
        eax29 = pthread_mutex_lock(ecx, ebp18, v19, v20, v21, v22, v23, v24, ebx25, esi26, edi27, ebp28, __return_address());
        if (eax29) 
            goto 0x64946e40;
        if (!*reinterpret_cast<void***>(a2)) 
            goto addr_64946e5d_5; else 
            goto addr_64946e22_6;
    }
    addr_64946e31_7:
    return eax17;
    addr_64946e5d_5:
    v15 = ebp18;
    pthread_mutex_unlock(ecx, v15, v30, v31, v32, v33, v34, v35, ebx25, esi26, edi27, ebp28, __return_address(), a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13);
    goto addr_64946e65_2;
    addr_64946e22_6:
    *reinterpret_cast<void***>(a3) = *reinterpret_cast<void***>(esi14 + 8);
    pthread_mutex_unlock(ecx, ebp18, v36, v37, v38, v39, v40, v41, ebx25, esi26, edi27, ebp28, __return_address(), a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13);
    eax17 = 0;
    goto addr_64946e31_7;
}

struct s125 {
    signed char[8] pad8;
    int32_t f8;
};

int32_t pthread_attr_setstacksize(struct s125* a1, int32_t a2) {
    a1->f8 = a2;
    return 0;
}

void pthread_setcancelstate(void** ecx, void** a2, void** a3, void** a4) {
    void** v5;
    void** v6;
    void** v7;
    void** v8;
    void** ebx9;
    void** esi10;
    void** edi11;
    void** eax12;

    eax12 = fun_64944990(ecx, v5, v6, v7, v8, ebx9, esi10, edi11, __return_address(), a2, a3, a4);
    if (!eax12) 
        goto 0x64945f23;
    if ((reinterpret_cast<unsigned char>(a2) & 1) == a2) 
        goto 0x64945f30; else 
        goto "???";
}
