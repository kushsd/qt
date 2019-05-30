
int32_t SHGetSpecialFolderLocation = 0xce9a;

int32_t SHGetPathFromIDListA = 0xce82;

int32_t SHGetMalloc = 0xce74;

void** fun_401000(void** ecx, void** a2, void** a3) {
    void*** esp4;
    int32_t eax5;
    int32_t eax6;
    void* v7;
    int32_t eax8;
    void** eax9;
    void** edx10;
    void** ecx11;

    esp4 = reinterpret_cast<void***>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4);
    eax5 = reinterpret_cast<int32_t>(SHGetSpecialFolderLocation());
    if (!eax5 && ecx) {
        eax6 = reinterpret_cast<int32_t>(SHGetPathFromIDListA());
        if (eax6) {
        }
        v7 = reinterpret_cast<void*>(esp4 - 4 - 4 - 4 - 4 - 4 + 4 - 4 - 4 - 4 + 4 + 4);
        eax8 = reinterpret_cast<int32_t>(SHGetMalloc(v7));
        if (!eax8 && (eax9 = ecx, !!eax9)) {
            if (a3) {
                edx10 = *reinterpret_cast<void***>(eax9);
                *reinterpret_cast<void***>(edx10 + 20)(eax9);
                eax9 = a3;
            }
            ecx11 = *reinterpret_cast<void***>(eax9);
            *reinterpret_cast<void***>(ecx11 + 8)(eax9, v7);
        }
    }
    goto esp4 + 12;
}

void** fun_401840(void** ecx, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7, void** a8, void** a9) {
    void** edx10;
    void** edi11;
    uint32_t ecx12;
    void* ecx13;

    edx10 = a2;
    edi11 = edx10;
    ecx12 = 0xffffffff;
    do {
        if (!ecx12) 
            break;
        --ecx12;
        ++edi11;
    } while (*reinterpret_cast<void***>(edi11));
    ecx13 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(~ecx12) - 1);
    if (reinterpret_cast<int32_t>(ecx13) > 3 && *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(ecx13) + reinterpret_cast<unsigned char>(edx10) + 0xffffffff) == 92) {
        *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(ecx13) + reinterpret_cast<unsigned char>(edx10) + 0xffffffff) = 0;
    }
    return 0;
}

void** g410d18 = reinterpret_cast<void**>(0);

void** fun_40645b(void** ecx, void** a2, void** a3);

void** fun_4052b0(void** ecx, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7, void** a8) {
    void** v9;
    void** ebx10;
    void** esi11;
    int1_t zf12;
    void** eax13;
    void** ebx14;
    void** edi15;
    void** eax16;
    void** al17;
    void** edi18;
    void* al19;
    void* cl20;
    void* al21;
    uint1_t cf22;
    void* eax23;
    uint1_t cf24;
    void* al25;

    v9 = ebx10;
    esi11 = a3;
    zf12 = g410d18 == 0;
    if (!zf12) {
        eax13 = reinterpret_cast<void**>(0xff);
        ebx14 = reinterpret_cast<void**>(0);
        edi15 = a2;
        do {
            if (!eax13) 
                break;
            eax13 = *reinterpret_cast<void***>(esi11);
            ++esi11;
            ebx14 = *reinterpret_cast<void***>(edi15);
            ++edi15;
        } while (eax13 == ebx14 || (eax16 = fun_40645b(ecx, ebx14, eax13), ebx14 = eax16, eax13 = fun_40645b(ecx, eax13, v9), ebx14 == eax13));
        goto addr_405332_5;
    } else {
        al17 = reinterpret_cast<void**>(0xff);
        edi18 = a2;
        do {
            if (!al17) 
                goto addr_4052fe_8;
            al17 = *reinterpret_cast<void***>(esi11);
            ++esi11;
            ++edi18;
        } while (*reinterpret_cast<void***>(edi18) == al17 || (al19 = reinterpret_cast<void*>(al17 - 65), cl20 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&ecx)) - reinterpret_cast<unsigned char>(reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&ecx)) + reinterpret_cast<uint1_t>(reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&ecx)) < reinterpret_cast<unsigned char>(reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&ecx)) + reinterpret_cast<uint1_t>(reinterpret_cast<unsigned char>(al19) < 26))))) & 32), al21 = reinterpret_cast<void*>(*reinterpret_cast<void***>(edi18) - 65), *reinterpret_cast<void**>(&ecx) = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(reinterpret_cast<unsigned char>(cl20) - reinterpret_cast<unsigned char>(reinterpret_cast<unsigned char>(cl20) + reinterpret_cast<uint1_t>(reinterpret_cast<unsigned char>(cl20) < reinterpret_cast<unsigned char>(reinterpret_cast<unsigned char>(cl20) + reinterpret_cast<uint1_t>(reinterpret_cast<unsigned char>(al21) < 26))))) & 32), al17 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(reinterpret_cast<unsigned char>(al21) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&ecx))) + 65), al17 == reinterpret_cast<unsigned char>(reinterpret_cast<unsigned char>(al19) + reinterpret_cast<unsigned char>(cl20)) + 65));
        goto addr_4052fa_10;
    }
    addr_405337_11:
    return eax13;
    addr_405332_5:
    cf22 = reinterpret_cast<uint1_t>(reinterpret_cast<unsigned char>(eax13) < reinterpret_cast<unsigned char>(reinterpret_cast<unsigned char>(eax13) + reinterpret_cast<uint1_t>(reinterpret_cast<unsigned char>(ebx14) < reinterpret_cast<unsigned char>(eax13))));
    eax23 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(eax13) - (reinterpret_cast<unsigned char>(eax13) + cf22));
    eax13 = reinterpret_cast<void**>(reinterpret_cast<uint32_t>(eax23) - (1 - reinterpret_cast<uint1_t>(reinterpret_cast<uint32_t>(eax23) < 1 - cf22)));
    goto addr_405337_11;
    addr_4052fe_8:
    eax13 = reinterpret_cast<void**>(static_cast<int32_t>(reinterpret_cast<signed char>(al17)));
    goto addr_405337_11;
    addr_4052fa_10:
    cf24 = reinterpret_cast<uint1_t>(reinterpret_cast<unsigned char>(al17) < reinterpret_cast<unsigned char>(reinterpret_cast<unsigned char>(al17) + reinterpret_cast<uint1_t>(reinterpret_cast<unsigned char>(al17) < reinterpret_cast<unsigned char>(reinterpret_cast<unsigned char>(reinterpret_cast<unsigned char>(al19) + reinterpret_cast<unsigned char>(cl20)) + 65))));
    al25 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(al17) - reinterpret_cast<unsigned char>(reinterpret_cast<unsigned char>(al17) + cf24));
    al17 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(al25) - reinterpret_cast<unsigned char>(1 - reinterpret_cast<uint1_t>(reinterpret_cast<unsigned char>(al25) < reinterpret_cast<unsigned char>(1 - cf24))));
    goto addr_4052fe_8;
}

void** g40e07c = reinterpret_cast<void**>(92);

void fun_401800(void** ecx, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7, void** a8, void** a9, void** a10, void** a11, void** a12, void** a13, void** a14) {
    void** edx15;
    void** edi16;
    uint32_t ecx17;
    void** edi18;
    uint32_t ecx19;
    void** ax20;

    edx15 = a2;
    if (!*reinterpret_cast<void***>(edx15)) {
        addr_401830_2:
        return;
    } else {
        edi16 = edx15;
        ecx17 = 0xffffffff;
        do {
            if (!ecx17) 
                break;
            --ecx17;
            ++edi16;
        } while (*reinterpret_cast<void***>(edi16));
        if (*reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(~ecx17) - 1 + reinterpret_cast<unsigned char>(edx15) - 1) == 92) 
            goto addr_401830_2;
    }
    edi18 = edx15;
    ecx19 = 0xffffffff;
    do {
        if (!ecx19) 
            break;
        --ecx19;
        ++edi18;
    } while (*reinterpret_cast<void***>(edi18));
    ax20 = g40e07c;
    *reinterpret_cast<void***>(edi18 + 0xffffffff) = ax20;
    goto addr_401830_2;
}

void** fun_40561b(void** ecx, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7, void** a8, void** a9, void** a10, void** a11, void** a12, void** a13);

void fun_4055c7(void** ecx, void** a2);

int32_t fun_401870(void** ecx, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7, void** a8, void** a9, void** a10) {
    void** esi11;
    void** eax12;
    int32_t edx13;

    eax12 = fun_40561b(ecx, a2, esi11, __return_address(), a2, a3, a4, a5, a6, a7, a8, a9, a10);
    if (!eax12) {
        fun_4055c7(ecx, esi11);
        eax12 = fun_40561b(ecx, a2, esi11, __return_address(), a2, a3, a4, a5, a6, a7, a8, a9, a10);
    }
    edx13 = 0;
    *reinterpret_cast<unsigned char*>(&edx13) = reinterpret_cast<uint1_t>(!!eax12);
    *reinterpret_cast<void***>(a3) = eax12;
    return edx13;
}

void fun_405a1e(void** ecx, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7, void** a8, void** a9, void** a10, void** a11, void** a12, void** a13, void** a14, void** a15, void** a16, void** a17, void** a18, ...);

void fun_401930(void** ecx, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7, void** a8, void** a9, void** a10, void** a11, void** a12, void** a13, void** a14, void** a15) {
    void** v16;
    void** esi17;

    if (*reinterpret_cast<void***>(a2)) {
        v16 = *reinterpret_cast<void***>(a2);
        fun_405a1e(ecx, v16, esi17, __return_address(), a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15);
        *reinterpret_cast<void***>(a2) = reinterpret_cast<void**>(0);
    }
    return;
}

int32_t GetFileAttributesA = 0xcf24;

int32_t SetFileAttributesA = 0xcf0e;

int32_t GetLastError = 0xca3c;

uint32_t* fun_406526(uint32_t a1);

int32_t fun_40533c(unsigned char a1, void** a2) {
    int32_t eax3;
    int32_t eax4;
    uint32_t eax5;

    eax3 = reinterpret_cast<int32_t>(GetFileAttributesA());
    if (eax3 != -1) {
        if (!(a1 & 0x80)) {
        }
        eax4 = reinterpret_cast<int32_t>(SetFileAttributesA());
        if (eax4) {
            return 0;
        }
    }
    eax5 = reinterpret_cast<uint32_t>(GetLastError());
    fun_406526(eax5);
    return -1;
}

void*** g4112c4;

void fun_407511(void** ecx);

void** fun_4072a6(int32_t a1, void** a2);

void** g4112c0;

int32_t HeapCompact = 0xcf70;

uint32_t g410cbc = 0;

uint32_t* g410cb8 = reinterpret_cast<uint32_t*>(0);

void fun_4055c7(void** ecx, void** a2) {
    void*** eax3;
    void** v4;
    int32_t eax5;
    uint32_t eax6;

    eax3 = g4112c4;
    if (!reinterpret_cast<int1_t>(eax3 == 3)) {
        if (reinterpret_cast<int1_t>(eax3 == 2)) {
            fun_407511(ecx);
            ecx = reinterpret_cast<void**>(32);
        }
    } else {
        fun_4072a6(__return_address(), a2);
    }
    v4 = g4112c0;
    eax5 = reinterpret_cast<int32_t>(HeapCompact(ecx));
    if (eax5) {
        goto v4;
    } else {
        eax6 = reinterpret_cast<uint32_t>(GetLastError(ecx));
        if (eax6 == 0x78) {
            g410cbc = 0x78;
            g410cb8 = reinterpret_cast<uint32_t*>(40);
        }
        goto v4;
    }
}

void** g410d34 = reinterpret_cast<void**>(0);

void** fun_40562d(uint32_t a1, void** a2);

void** fun_40561b(void** ecx, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7, void** a8, void** a9, void** a10, void** a11, void** a12, void** a13) {
    void** v14;
    void** eax15;

    v14 = g410d34;
    eax15 = fun_40562d(__return_address(), v14);
    return eax15;
}

void** g4106bc = reinterpret_cast<void**>(0xe0);

void** fun_40766f(void** ecx, void** a2);

void** g4112bc;

void** fun_406afb(void** ecx, void** a2);

int32_t HeapAlloc = 0xcf7e;

int32_t fun_407a44(void** ecx);

void** fun_407a60(void** ecx, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7, void** a8, void** a9, void** a10);

void** fun_4056cd(void** a1, void** a2, void** a3, void** a4, void** a5, void** a6) {
    void** v7;
    void** v8;
    void** ebp9;
    void** v10;
    void** esi11;
    void** esi12;
    void** v13;
    void** edi14;
    void** v15;
    void** edi16;
    void*** eax17;
    int1_t below_or_equal18;
    void** v19;
    void** ecx20;
    void** eax21;
    int1_t below_or_equal22;
    void** eax23;
    void** v24;
    void** eax25;
    int1_t zf26;
    int32_t eax27;
    void** eax28;
    void** v29;

    v7 = reinterpret_cast<void**>(__return_address());
    v8 = ebp9;
    v10 = esi11;
    esi12 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(a1) * reinterpret_cast<unsigned char>(a2));
    v13 = edi14;
    v15 = esi12;
    if (reinterpret_cast<unsigned char>(esi12) <= reinterpret_cast<unsigned char>(0xffffffe0)) {
        if (!esi12) {
            esi12 = reinterpret_cast<void**>(1);
        }
        esi12 = reinterpret_cast<void**>(reinterpret_cast<uint32_t>(esi12 + 15) & 0xfffffff0);
    }
    while (1) {
        edi16 = reinterpret_cast<void**>(0);
        if (reinterpret_cast<unsigned char>(esi12) <= reinterpret_cast<unsigned char>(0xffffffe0)) {
            eax17 = g4112c4;
            if (!reinterpret_cast<int1_t>(eax17 == 3)) {
                if (!reinterpret_cast<int1_t>(eax17 == 2)) 
                    goto addr_405738_8;
                below_or_equal18 = reinterpret_cast<unsigned char>(esi12) <= reinterpret_cast<unsigned char>(g4106bc);
                if (!below_or_equal18) 
                    goto addr_405738_8;
                v19 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(esi12) >> 4);
                eax21 = fun_40766f(ecx20, v19);
                edi16 = eax21;
                ecx20 = v19;
                if (edi16) 
                    goto addr_405777_11;
            } else {
                below_or_equal22 = reinterpret_cast<unsigned char>(v15) <= reinterpret_cast<unsigned char>(g4112bc);
                if (below_or_equal22) {
                    eax23 = fun_406afb(ecx20, v15);
                    edi16 = eax23;
                    ecx20 = v15;
                    if (edi16) 
                        goto addr_405763_14;
                }
            }
            addr_405738_8:
            v24 = g4112c0;
            eax25 = reinterpret_cast<void**>(HeapAlloc(ecx20, v24, 8, esi12));
            edi16 = eax25;
            if (edi16) 
                break;
        }
        zf26 = g410d34 == 0;
        if (zf26) 
            break;
        eax27 = fun_407a44(ecx20);
        ecx20 = esi12;
        if (!eax27) 
            goto addr_40577a_18;
    }
    addr_405771_20:
    eax28 = edi16;
    addr_405773_21:
    return eax28;
    addr_40577a_18:
    eax28 = reinterpret_cast<void**>(0);
    goto addr_405773_21;
    addr_405777_11:
    v29 = esi12;
    addr_405766_22:
    fun_407a60(ecx20, edi16, 0, v29, v13, v10, v8, v7, v15, a2);
    goto addr_405771_20;
    addr_405763_14:
    v29 = v15;
    goto addr_405766_22;
}

int32_t HeapReAlloc = 0xcf8a;

struct s0 {
    struct s0* f0;
    signed char[12] pad16;
    void** f16;
    signed char[3] pad20;
    void** f20;
};

void** fun_4075d3(void** ecx, void** a2, struct s0** a3, void*** a4);

uint32_t fun_40799b(void** ecx, void** a2, void** a3, void** a4, void** a5);

void** fun_407ac0(void** ecx, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7);

void fun_40762a(void** ecx, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7, void** a8, void** a9, void** a10);

void** fun_4067a7(void** ecx, void** a2, void** a3, void** a4, void** a5);

int32_t fun_406fb0(void** ecx, void** a2, void** a3, void** a4);

void fun_4067d2(void** ecx, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7, void** a8, void** a9);

void** fun_40577e(void** ecx, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7, void** a8, void** a9, void** a10, void** a11) {
    void*** ebp12;
    void** v13;
    void** v14;
    void** ebx15;
    void** v16;
    void** esi17;
    void** v18;
    void** edi19;
    void** esi20;
    void*** eax21;
    void** eax22;
    void** v23;
    int1_t zf24;
    int32_t eax25;
    void** edi26;
    void** eax27;
    void** v28;
    void** eax29;
    int1_t cf30;
    void** edi31;
    uint32_t eax32;
    void** eax33;
    void** v34;
    void** eax35;
    int1_t zf36;
    void** eax37;
    void** eax38;
    int32_t eax39;
    int1_t zf40;
    void** eax41;
    void** ebx42;
    int1_t below_or_equal43;
    int32_t eax44;
    void** v45;
    void** eax46;
    void** v47;
    void** eax48;
    void** eax49;
    void** eax50;
    void** eax51;
    void** eax52;
    int32_t eax53;
    void** ebp54;

    ebp12 = reinterpret_cast<void***>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4);
    v13 = ecx;
    v14 = ebx15;
    v16 = esi17;
    v18 = edi19;
    if (a2) {
        esi20 = a3;
        if (esi20) {
            eax21 = g4112c4;
            if (!reinterpret_cast<int1_t>(eax21 == 3)) {
                if (!reinterpret_cast<int1_t>(eax21 == 2)) {
                    do {
                        eax22 = reinterpret_cast<void**>(0);
                        if (reinterpret_cast<unsigned char>(esi20) <= reinterpret_cast<unsigned char>(0xffffffe0)) {
                            if (!esi20) {
                                esi20 = reinterpret_cast<void**>(1);
                            }
                            esi20 = reinterpret_cast<void**>(reinterpret_cast<uint32_t>(esi20 + 15) & 0xfffffff0);
                            v23 = g4112c0;
                            eax22 = reinterpret_cast<void**>(HeapReAlloc(ecx, v23, 0, a2, esi20));
                            if (eax22) 
                                break;
                        }
                        zf24 = g410d34 == 0;
                        if (zf24) 
                            break;
                        eax25 = fun_407a44(ecx);
                        ecx = esi20;
                    } while (eax25);
                    goto addr_405a17_11;
                } else {
                    if (reinterpret_cast<unsigned char>(esi20) <= reinterpret_cast<unsigned char>(0xffffffe0)) {
                        if (!esi20) {
                            esi20 = reinterpret_cast<void**>(16);
                        } else {
                            esi20 = reinterpret_cast<void**>(reinterpret_cast<uint32_t>(esi20 + 15) & 0xfffffff0);
                        }
                    }
                    do {
                        edi26 = reinterpret_cast<void**>(0);
                        if (reinterpret_cast<unsigned char>(esi20) > reinterpret_cast<unsigned char>(0xffffffe0)) 
                            goto addr_4059bb_17;
                        eax27 = fun_4075d3(ecx, a2, ebp12 - 4, ebp12 + 12);
                        if (!eax27) {
                            v28 = g4112c0;
                            eax29 = reinterpret_cast<void**>(HeapReAlloc(ecx, v28, 0, a2, esi20));
                            edi26 = eax29;
                        } else {
                            cf30 = reinterpret_cast<unsigned char>(esi20) < reinterpret_cast<unsigned char>(g4106bc);
                            if (!cf30) 
                                goto addr_405963_21;
                            edi31 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(esi20) >> 4);
                            eax32 = fun_40799b(ecx, v13, a3, eax27, edi31);
                            if (!eax32) 
                                goto addr_405929_23; else 
                                goto addr_405924_24;
                        }
                        addr_4059b3_25:
                        if (edi26) 
                            goto addr_4058b7_26; else 
                            goto addr_4059bb_17;
                        addr_405929_23:
                        eax33 = fun_40766f(ecx, edi31);
                        edi26 = eax33;
                        ecx = edi31;
                        if (!edi26) {
                            addr_405963_21:
                            v34 = g4112c0;
                            eax35 = reinterpret_cast<void**>(HeapAlloc(ecx, v34, 0, esi20));
                            edi26 = eax35;
                            if (!edi26) {
                                addr_4059bb_17:
                                zf36 = g410d34 == 0;
                                if (zf36) 
                                    goto addr_4058b7_26; else 
                                    continue;
                            } else {
                                eax37 = reinterpret_cast<void**>(static_cast<uint32_t>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax27))) << 4);
                                if (reinterpret_cast<unsigned char>(eax37) >= reinterpret_cast<unsigned char>(esi20)) {
                                    eax37 = esi20;
                                }
                                fun_407ac0(ecx, edi26, a2, eax37, v34, 0, esi20);
                                fun_40762a(ecx, v13, a3, eax27, edi26, a2, eax37, v34, 0, esi20);
                                goto addr_4059b3_25;
                            }
                        } else {
                            eax38 = reinterpret_cast<void**>(static_cast<uint32_t>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax27))) << 4);
                            if (reinterpret_cast<unsigned char>(eax38) >= reinterpret_cast<unsigned char>(esi20)) {
                                eax38 = esi20;
                            }
                            fun_407ac0(ecx, edi26, a2, eax38, v18, v16, v14);
                            fun_40762a(ecx, v13, a3, eax27, edi26, a2, eax38, v18, v16, v14);
                        }
                        addr_40595b_33:
                        if (edi26) 
                            goto addr_4058b7_26; else 
                            goto addr_405963_21;
                        addr_405924_24:
                        edi26 = a2;
                        goto addr_40595b_33;
                        eax39 = fun_407a44(ecx);
                        ecx = esi20;
                    } while (eax39);
                    goto addr_4059d7_35;
                }
            } else {
                do {
                    edi26 = reinterpret_cast<void**>(0);
                    if (reinterpret_cast<unsigned char>(esi20) > reinterpret_cast<unsigned char>(0xffffffe0)) {
                        addr_40589a_37:
                        zf40 = g410d34 == 0;
                        if (zf40) 
                            goto addr_4058b7_26; else 
                            continue;
                    } else {
                        eax41 = fun_4067a7(ecx, a2, v18, v16, v14);
                        ebx42 = eax41;
                        ecx = a2;
                        if (!ebx42) 
                            goto addr_405875_39;
                        below_or_equal43 = reinterpret_cast<unsigned char>(esi20) <= reinterpret_cast<unsigned char>(g4112bc);
                        if (!below_or_equal43) 
                            goto addr_40582e_41;
                        edi26 = a2;
                        eax44 = fun_406fb0(ecx, ebx42, edi26, esi20);
                        if (!eax44) 
                            goto addr_4057f4_43;
                    }
                    addr_40582a_44:
                    if (edi26) {
                        addr_405871_45:
                        if (ebx42) {
                            addr_405896_46:
                            if (edi26) 
                                goto addr_4058b7_26; else 
                                goto addr_40589a_37;
                        } else {
                            addr_405875_39:
                            if (!esi20) {
                                esi20 = reinterpret_cast<void**>(1);
                            }
                        }
                    } else {
                        addr_40582e_41:
                        if (!esi20) {
                            esi20 = reinterpret_cast<void**>(1);
                            goto addr_405835_49;
                        }
                    }
                    esi20 = reinterpret_cast<void**>(reinterpret_cast<uint32_t>(esi20 + 15) & 0xfffffff0);
                    v45 = g4112c0;
                    eax46 = reinterpret_cast<void**>(HeapReAlloc(ecx, v45, 0, a2, esi20));
                    edi26 = eax46;
                    goto addr_405896_46;
                    addr_405835_49:
                    esi20 = reinterpret_cast<void**>(reinterpret_cast<uint32_t>(esi20 + 15) & 0xfffffff0);
                    v47 = g4112c0;
                    eax48 = reinterpret_cast<void**>(HeapAlloc(ecx, v47, 0, esi20));
                    edi26 = eax48;
                    if (edi26) {
                        ecx = a2;
                        eax49 = *reinterpret_cast<void***>(ecx + 0xfffffffc) - 1;
                        if (reinterpret_cast<unsigned char>(eax49) >= reinterpret_cast<unsigned char>(esi20)) {
                            eax49 = esi20;
                        }
                        fun_407ac0(ecx, edi26, ecx, eax49, v47, 0, esi20);
                        fun_4067d2(ecx, ebx42, a2, edi26, ecx, eax49, v47, 0, esi20);
                        goto addr_405871_45;
                    }
                    addr_4057f4_43:
                    eax50 = fun_406afb(ecx, esi20);
                    edi26 = eax50;
                    ecx = esi20;
                    if (!edi26) 
                        goto addr_40582e_41;
                    eax51 = *reinterpret_cast<void***>(a2 + 0xfffffffc) - 1;
                    if (reinterpret_cast<unsigned char>(eax51) >= reinterpret_cast<unsigned char>(esi20)) {
                        eax51 = esi20;
                    }
                    fun_407ac0(ecx, edi26, a2, eax51, v18, v16, v14);
                    eax52 = fun_4067a7(ecx, a2, edi26, a2, eax51);
                    ebx42 = eax52;
                    fun_4067d2(ecx, ebx42, a2, a2, edi26, a2, eax51, v18, v16);
                    goto addr_40582a_44;
                    eax53 = fun_407a44(ecx);
                    ecx = esi20;
                } while (eax53);
                goto addr_4058b2_58;
            }
        } else {
            fun_405a1e(ecx, a2, v18, v16, v14, v13, ebp54, __return_address(), a2, a3, a4, a5, a6, a7, a8, a9, a10, a11);
            goto addr_405a17_11;
        }
    } else {
        eax22 = fun_40561b(ecx, a3, v18, v16, v14, v13, ebp54, __return_address(), a2, a3, a4, a5, a6);
    }
    addr_405a19_61:
    return eax22;
    addr_405a17_11:
    eax22 = reinterpret_cast<void**>(0);
    goto addr_405a19_61;
    addr_4058b7_26:
    eax22 = edi26;
    goto addr_405a19_61;
    addr_4059d7_35:
    goto addr_405a17_11;
    addr_4058b2_58:
    goto addr_405a17_11;
}

int32_t HeapFree = 0xcf98;

void fun_405a1e(void** ecx, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7, void** a8, void** a9, void** a10, void** a11, void** a12, void** a13, void** a14, void** a15, void** a16, void** a17, void** a18, ...) {
    void*** ebp19;
    void** v20;
    void*** eax21;
    void** eax22;
    void** v23;
    void** esi24;
    void** ebp25;
    void** eax26;
    void** v27;

    ebp19 = reinterpret_cast<void***>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4);
    v20 = ecx;
    if (a2) {
        eax21 = g4112c4;
        if (!reinterpret_cast<int1_t>(eax21 == 3)) {
            if (!reinterpret_cast<int1_t>(eax21 == 2) || (eax22 = fun_4075d3(ecx, a2, ebp19 - 4, ebp19 + 8), eax22 == 0)) {
                v23 = a2;
                goto addr_405a76_5;
            } else {
                fun_40762a(ecx, v20, a2, eax22, esi24, v20, ebp25, __return_address(), a2, a3);
            }
        } else {
            eax26 = fun_4067a7(ecx, a2, esi24, v20, ebp25);
            ecx = a2;
            v23 = a2;
            if (!eax26) {
                addr_405a76_5:
                v27 = g4112c0;
                HeapFree(ecx, v27, 0, v23);
            } else {
                fun_4067d2(ecx, eax26, v23, esi24, v20, ebp25, __return_address(), a2, a3);
            }
        }
    }
    return;
}

void** fun_40b170(void** a1, void*** a2, void** a3) {
    void** ecx4;
    void** esi5;
    void*** edi6;
    int1_t zf7;
    void** eax8;
    void** ebx9;
    void*** edi10;
    void** eax11;
    int1_t cf12;
    void** ecx13;
    void** ah14;
    void** al15;
    int1_t cf16;

    ecx4 = a3;
    if (!ecx4) 
        goto addr_40b216_2;
    esi5 = a1;
    edi6 = a2;
    zf7 = g410d18 == 0;
    if (!zf7) {
        eax8 = reinterpret_cast<void**>(0);
        ebx9 = reinterpret_cast<void**>(0);
        edi10 = edi6;
        do {
            eax8 = *reinterpret_cast<void***>(esi5);
            ebx9 = *edi10;
            if (!eax8) 
                break;
            if (!ebx9) 
                break;
            ++esi5;
            ++edi10;
            eax11 = fun_40645b(ecx4, ebx9, eax8);
            ebx9 = eax11;
            eax8 = fun_40645b(ecx4, eax8, ecx4);
            cf12 = reinterpret_cast<unsigned char>(eax8) < reinterpret_cast<unsigned char>(ebx9);
            if (eax8 != ebx9) 
                goto addr_40b20d_8;
            --ecx4;
        } while (ecx4);
        ecx4 = reinterpret_cast<void**>(0);
        cf12 = reinterpret_cast<unsigned char>(eax8) < reinterpret_cast<unsigned char>(ebx9);
        if (eax8 == ebx9) {
            addr_40b216_2:
            return ecx4;
        } else {
            addr_40b20d_8:
            ecx4 = reinterpret_cast<void**>(0xffffffff);
            if (!cf12) {
                ecx4 = reinterpret_cast<void**>(-reinterpret_cast<unsigned char>(0xffffffff));
                goto addr_40b216_2;
            }
        }
    }
    ecx13 = ecx4;
    do {
        ah14 = *reinterpret_cast<void***>(esi5);
        al15 = *edi6;
        if (!ah14) 
            break;
        if (!al15) 
            break;
        ++esi5;
        ++edi6;
        if (reinterpret_cast<unsigned char>(ah14) >= 65 && reinterpret_cast<unsigned char>(ah14) <= 90) {
            ah14 = ah14 + 32;
        }
        if (reinterpret_cast<unsigned char>(al15) >= 65 && reinterpret_cast<unsigned char>(al15) <= 90) {
            al15 = al15 + 32;
        }
        cf16 = reinterpret_cast<unsigned char>(ah14) < reinterpret_cast<unsigned char>(al15);
        if (ah14 != al15) 
            goto addr_40b1cb_20;
        --ecx13;
    } while (ecx13);
    ecx4 = reinterpret_cast<void**>(0);
    cf16 = reinterpret_cast<unsigned char>(ah14) < reinterpret_cast<unsigned char>(al15);
    if (ah14 == al15) 
        goto addr_40b216_2;
    addr_40b1cb_20:
    ecx4 = reinterpret_cast<void**>(0xffffffff);
    if (!cf16) {
        ecx4 = reinterpret_cast<void**>(-reinterpret_cast<unsigned char>(0xffffffff));
        goto addr_40b216_2;
    }
}

void** fun_4055a0(void** ecx, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7, void** a8, void** a9, void** a10) {
    void** edi11;
    uint32_t ecx12;
    int32_t ecx13;
    void** edi14;
    void** al15;
    void** edi16;
    void** eax17;

    edi11 = a2;
    ecx12 = 0xffffffff;
    do {
        if (!ecx12) 
            break;
        --ecx12;
        ++edi11;
    } while (*reinterpret_cast<void***>(edi11));
    ecx13 = reinterpret_cast<int32_t>(-(ecx12 + 1));
    edi14 = edi11 - 1;
    al15 = a3;
    do {
        if (!ecx13) 
            break;
        --ecx13;
        --edi14;
    } while (*reinterpret_cast<void***>(edi14) != al15);
    edi16 = edi14 + 1;
    if (*reinterpret_cast<void***>(edi16) == al15) {
        eax17 = edi16;
    } else {
        eax17 = reinterpret_cast<void**>(0);
    }
    return eax17;
}

int32_t RegOpenKeyExA = 0xcdf2;

int32_t RegQueryValueA = 0xce02;

int32_t RegCloseKey = 0xcdd0;

int32_t fun_401a90(int32_t a1, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7, void** a8, void** a9, void** a10, void** a11) {
    int32_t eax12;

    eax12 = reinterpret_cast<int32_t>(RegOpenKeyExA());
    if (!eax12) {
        RegQueryValueA(1, eax12, reinterpret_cast<int32_t>(__zero_stack_offset()) + 8);
        RegCloseKey(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4 - 4 - 4 - 4 - 4 - 4 - 4 + 4 + 8, 1, eax12, reinterpret_cast<int32_t>(__zero_stack_offset()) + 8);
    }
    goto a2;
}

void** fun_405a90(void** a1, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7, void** a8, void** a9, void** a10) {
    void** dl11;
    void** edi12;
    void** dh13;
    uint32_t eax14;
    uint32_t ebx15;
    uint32_t eax16;
    void** edx17;
    uint32_t ebx18;
    uint32_t ebx19;
    uint32_t ecx20;
    void* esi21;
    void** eax22;
    uint32_t eax23;
    uint32_t eax24;
    void** al25;
    void** esi26;
    void** ecx27;

    dl11 = *reinterpret_cast<void***>(a2);
    edi12 = a1;
    if (!dl11) {
        return edi12;
    }
    dh13 = *reinterpret_cast<void***>(a2 + 1);
    if (dh13) 
        goto addr_405aa8_4;
    eax14 = 0;
    *reinterpret_cast<void***>(&eax14) = dl11;
    ebx15 = eax14;
    eax16 = eax14 << 8;
    edx17 = a1;
    if (reinterpret_cast<unsigned char>(edx17) & 3) 
        goto addr_4054f8_7;
    addr_40550b_8:
    ebx18 = ebx15 | eax16;
    ebx19 = ebx18 << 16 | ebx18;
    while (1) {
        ecx20 = reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(edx17)) ^ ebx19;
        esi21 = reinterpret_cast<void*>(*reinterpret_cast<void***>(edx17) + 0x7efefeff);
        edx17 = edx17 + 4;
        if ((ecx20 ^ 0xffffffff ^ 0x7efefeff + ecx20) & 0x81010100) {
            eax22 = *reinterpret_cast<void***>(edx17 + 0xfffffffc);
            if (*reinterpret_cast<signed char*>(&eax22) == *reinterpret_cast<signed char*>(&ebx19)) 
                break;
            if (!*reinterpret_cast<signed char*>(&eax22)) 
                goto addr_405552_12;
            if (*reinterpret_cast<signed char*>(&eax22 + 1) == *reinterpret_cast<signed char*>(&ebx19)) 
                goto addr_40558e_14;
            if (!*reinterpret_cast<signed char*>(&eax22 + 1)) 
                goto addr_405552_12;
            eax23 = reinterpret_cast<unsigned char>(eax22) >> 16;
            if (*reinterpret_cast<signed char*>(&eax23) == *reinterpret_cast<signed char*>(&ebx19)) 
                goto addr_405587_17;
            if (!*reinterpret_cast<signed char*>(&eax23)) 
                goto addr_405552_12;
            if (*reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(&eax23) + 1) == *reinterpret_cast<signed char*>(&ebx19)) 
                goto addr_405580_20;
            if (!*reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(&eax23) + 1)) 
                goto addr_405552_12;
        } else {
            eax24 = (reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(edx17)) ^ 0xffffffff ^ reinterpret_cast<uint32_t>(esi21)) & 0x81010100;
            if (!eax24) 
                continue;
            if (eax24 & 0x1010100) 
                goto addr_405552_12;
            if (!(reinterpret_cast<uint32_t>(esi21) & 0x80000000)) 
                goto addr_405552_12;
        }
    }
    return edx17 + 0xfffffffc;
    addr_405552_12:
    addr_405554_27:
    return 0;
    addr_40558e_14:
    return edx17 + 0xfffffffd;
    addr_405587_17:
    return edx17 + 0xfffffffe;
    addr_405580_20:
    return edx17 + 0xffffffff;
    do {
        addr_4054f8_7:
        ++edx17;
        if (*reinterpret_cast<void***>(edx17) == *reinterpret_cast<void***>(&ebx15)) 
            break;
        if (!*reinterpret_cast<void***>(edx17)) 
            goto addr_405554_27;
    } while (reinterpret_cast<unsigned char>(edx17) & 3);
    goto addr_40550b_8;
    return edx17 + 0xffffffff;
    addr_405ac4_31:
    return 0;
    addr_405b03_32:
    return edi12 + 0xffffffff;
    while (1) {
        addr_405abc_33:
        if (al25 == dl11) {
            do {
                al25 = *reinterpret_cast<void***>(esi26);
                ++esi26;
                if (al25 != dh13) 
                    goto addr_405abc_33;
                edi12 = esi26 + 0xffffffff;
                do {
                    if (!*reinterpret_cast<void***>(ecx27 + 2)) 
                        goto addr_405b03_32;
                    esi26 = esi26 + 2;
                    if (*reinterpret_cast<void***>(esi26) != *reinterpret_cast<void***>(ecx27 + 2)) 
                        goto addr_405aa8_4;
                    if (!*reinterpret_cast<void***>(ecx27 + 3)) 
                        goto addr_405b03_32;
                    ecx27 = ecx27 + 2;
                } while (*reinterpret_cast<void***>(ecx27 + 3) == *reinterpret_cast<void***>(esi26 + 0xffffffff));
                addr_405aa8_4:
                ecx27 = a2;
                esi26 = edi12 + 1;
            } while (*reinterpret_cast<void***>(edi12) == dl11);
            if (!*reinterpret_cast<void***>(edi12)) 
                goto addr_405ac4_31;
        } else {
            if (!al25) 
                goto addr_405ac4_31;
        }
        al25 = *reinterpret_cast<void***>(esi26);
        ++esi26;
    }
}

int32_t ReadFile = 0xca5a;

void** fun_4015b0(void** a1, void** a2, void** a3, void** a4, void** a5, void** a6) {
    int32_t eax7;

    eax7 = reinterpret_cast<int32_t>(ReadFile());
    if (eax7) {
        goto a2;
    } else {
        GetLastError();
        goto a2;
    }
}

int32_t CloseHandle = 0xca84;

void** fun_4016a0(void** a1) {
    CloseHandle();
    goto a1;
}

int32_t SetFilePointer = 0xca72;

void** fun_4015f0(void** a1, void** a2, void** a3, void** a4) {
    SetFilePointer();
    goto a1;
}

void fun_401610(void** a1, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7) {
    SetFilePointer();
    goto a1;
}

int32_t GetExitCodeProcess = 0xcafe;

int32_t fun_401fb0(int32_t* a1) {
    int32_t v2;
    int32_t eax3;

    v2 = *a1;
    eax3 = reinterpret_cast<int32_t>(GetExitCodeProcess());
    if (eax3) {
        goto v2;
    } else {
        goto v2;
    }
}

int32_t PeekMessageA = 0xcc66;

int32_t TranslateMessage = 0xcc52;

int32_t DispatchMessageA = 0xcc3e;

int32_t GetMessageA = 0xcc30;

int32_t IsDialogMessageA = 0xcc1c;

void** g410ca4 = reinterpret_cast<void**>(0);

void fun_4022b0(int32_t a1, int32_t a2) {
    void* esp3;
    void* v4;
    int32_t eax5;
    int32_t v6;
    int32_t ebx7;
    int32_t ebx8;
    int32_t v9;
    int32_t ebp10;
    int32_t ebp11;
    int32_t v12;
    int32_t esi13;
    int32_t esi14;
    int32_t* esp15;
    int32_t v16;
    int32_t edi17;
    int32_t edi18;
    void* esp19;
    void* v20;
    int32_t eax21;
    void* esp22;
    void** eax23;
    int32_t eax24;
    void* v25;
    void* esp26;
    int32_t eax27;
    int32_t v28;

    esp3 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 28);
    v4 = esp3;
    eax5 = reinterpret_cast<int32_t>(PeekMessageA(v4, 0, 0, 0, 0));
    if (eax5) {
        v6 = ebx7;
        ebx8 = TranslateMessage;
        v9 = ebp10;
        ebp11 = DispatchMessageA;
        v12 = esi13;
        esi14 = GetMessageA;
        esp15 = reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(esp3) - 4 - 4 - 4 - 4 - 4 - 4 + 4 - 4 - 4 - 4 - 4);
        v16 = edi17;
        edi18 = IsDialogMessageA;
        do {
            esp19 = reinterpret_cast<void*>(esp15 - 1 - 1);
            v20 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp19) + 24);
            eax21 = reinterpret_cast<int32_t>(esi14(v20, 0, 0, 0, v16, v12, v9, v6, v4, 0, 0, 0, 0));
            esp22 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp19) - 4 - 4 - 4 + 4);
            if (eax21 && ((eax23 = g410ca4, eax23 == 0) || (eax24 = reinterpret_cast<int32_t>(edi18(eax23, reinterpret_cast<int32_t>(esp22) + 16, v20, 0, 0, 0, v16, v12, v9, v6, v4, 0, 0, 0, 0)), esp22 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp22) - 4 - 4 - 4 + 4), !eax24))) {
                v25 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp22) + 16);
                ebx8(v25, v20, 0, 0, 0, v16, v12, v9, v6, v4, 0, 0, 0, 0);
                esp26 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp22) - 4 - 4 + 4);
                ebp11(reinterpret_cast<int32_t>(esp26) + 16, v25, v20, 0, 0, 0, v16, v12, v9, v6, v4, 0, 0, 0, 0);
                esp22 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp26) - 4 - 4 + 4);
            }
            eax27 = reinterpret_cast<int32_t>(PeekMessageA());
            esp15 = reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(esp22) - 4 - 4 - 4 - 4 - 4 - 4 + 4);
        } while (eax27);
    }
    goto v28;
}

void** fun_402060(int32_t a1, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7, void** a8, void** a9, void** a10, void** a11, void** a12, void** a13, void** a14, void** a15, void** a16, void** a17, void** a18);

int32_t wsprintfA = 0xcbde;

void fun_4020e0(void** a1, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7, void** a8, void** a9, void** a10, void** a11, void** a12, void** a13, void** a14, void** a15) {
    void** eax16;
    void** cl17;
    void** edx18;
    void* edx19;
    void** cl20;

    eax16 = fun_402060(0, a2, __return_address(), a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15);
    cl17 = *reinterpret_cast<void***>(eax16);
    edx18 = eax16;
    if (!cl17) {
        addr_40210a_2:
        edx19 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(a1) - reinterpret_cast<unsigned char>(eax16));
    } else {
        do {
            if (!reinterpret_cast<int1_t>(cl17 == 37)) 
                continue;
            if (*reinterpret_cast<void***>(edx18 + 1) == 0x73) 
                goto addr_40211b_5;
            cl17 = *reinterpret_cast<void***>(edx18 + 1);
            ++edx18;
        } while (cl17);
        goto addr_40210a_2;
    }
    do {
        cl20 = *reinterpret_cast<void***>(eax16);
        *reinterpret_cast<void***>(reinterpret_cast<uint32_t>(edx19) + reinterpret_cast<unsigned char>(eax16)) = cl20;
        ++eax16;
    } while (cl20);
    return;
    addr_40211b_5:
    goto wsprintfA;
}

int32_t fun_40547d(unsigned char a1, int32_t a2, void** a3, void** a4);

void** fun_401530(void** a1, int32_t a2, void** a3, void** a4, void** a5, void** a6);

int32_t fun_4016b0(void** a1, void** a2) {
    void** v3;
    void** edi4;
    void** esi5;
    int32_t eax6;
    void** eax7;
    int1_t zf8;
    void** v9;
    void** v10;
    int32_t eax11;
    int1_t zf12;
    void** eax13;
    void** v14;
    void** v15;

    v3 = a1;
    eax6 = fun_40547d(*reinterpret_cast<unsigned char*>(&v3), 2, edi4, esi5);
    if (!eax6) {
        eax7 = fun_401530(a1, 2, edi4, esi5, __return_address(), a1);
        if (!reinterpret_cast<int1_t>(eax7 == 0xffffffff)) {
            fun_4016a0(eax7);
            return 0;
        } else {
            return 1;
        }
    } else {
        zf8 = reinterpret_cast<int1_t>(g410cb8 == 13);
        if (zf8) {
            v9 = a1;
            fun_40533c(*reinterpret_cast<unsigned char*>(&v9), 0x180);
            v10 = a1;
            eax11 = fun_40547d(*reinterpret_cast<unsigned char*>(&v10), 2, v9, 0x180);
            if (!eax11 || (zf12 = reinterpret_cast<int1_t>(g410cb8 == 13), !zf12)) {
                eax13 = fun_401530(a1, 2, edi4, esi5, __return_address(), a1);
                if (!reinterpret_cast<int1_t>(eax13 == 0xffffffff)) {
                    fun_4016a0(eax13);
                    v14 = a1;
                    fun_40533c(*reinterpret_cast<unsigned char*>(&v14), 0x100);
                    return 0;
                } else {
                    v15 = a1;
                    fun_40533c(*reinterpret_cast<unsigned char*>(&v15), 0x100);
                    return 1;
                }
            } else {
                return 1;
            }
        } else {
            return 0;
        }
    }
}

int32_t fun_4018b0(void** ecx, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7, void** a8, void** a9) {
    void** esi10;
    void** eax11;
    int32_t edx12;

    eax11 = fun_4056cd(a2, 1, esi10, __return_address(), a2, a3);
    if (!eax11) {
        fun_4055c7(ecx, esi10);
        eax11 = fun_4056cd(a2, 1, esi10, __return_address(), a2, a3);
    }
    edx12 = 0;
    *reinterpret_cast<unsigned char*>(&edx12) = reinterpret_cast<uint1_t>(!!eax11);
    *reinterpret_cast<void***>(a3) = eax11;
    return edx12;
}

void** g410ca8 = reinterpret_cast<void**>(0);

int32_t MessageBoxA = 0xcbea;

void** fun_4020b0(void** a1, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7, void** a8, void** a9, void** a10, void** a11, void** a12, void** a13, void** a14) {
    void** edx15;

    fun_402060(0, 0, a2, __return_address(), a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14);
    edx15 = g410ca8;
    MessageBoxA();
    goto edx15;
}

void** fun_401ae0(void** a1, void** a2, int32_t a3);

int32_t RemoveFontResourceA = 0xcd8e;

int32_t lstrcatA = 0xcaa8;

int32_t g410c94 = 0;

int32_t RegOpenKeyA = 0xce26;

int32_t RegDeleteValueA = 0xce34;

int32_t SendMessageTimeoutA = 0xcbc8;

void fun_401d00(void** ecx, void** a2) {
    void* esp3;
    int32_t eax4;
    signed char v5;
    void** edi6;
    void** esi7;
    void** v8;
    void** v9;
    void** v10;
    void** v11;
    void* esp12;
    void* esp13;
    int32_t ecx14;
    int32_t eax15;
    void* v16;
    int32_t v17;

    esp3 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 0x20c);
    fun_401ae0(a2, reinterpret_cast<int32_t>(esp3) + 4, 0x208);
    eax4 = reinterpret_cast<int32_t>(RemoveFontResourceA());
    if (v5) {
        fun_4055a0(ecx, a2, 92, a2, edi6, esi7, v8, v9, v10, v11);
        esp12 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp3) - 4 - 4 - 4 - 4 - 4 - 4 + 4 + 12 - 4 - 4 + 4 - 4 - 4 - 4 + 4 + 8);
        lstrcatA(reinterpret_cast<int32_t>(esp12) + 12, " (TrueType)");
        esp13 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp12) - 4 - 4 - 4 + 4);
        ecx14 = g410c94;
        if (ecx14) {
        }
        eax15 = reinterpret_cast<int32_t>(RegOpenKeyA());
        if (!eax15) {
            v16 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp13) - 4 - 4 - 4 - 4 + 4 + 12);
            RegDeleteValueA(reinterpret_cast<int32_t>(esp13) + 8, v16);
            RegCloseKey(0x80000002, reinterpret_cast<int32_t>(esp13) + 8, v16);
        }
    }
    if (eax4) {
        SendMessageTimeoutA(0xffff, 29, 0, 0, 0, 0x1388, 0x410c48, esi7);
    }
    goto v17;
}

void** g0;

int32_t SetErrorMode = 0xcb44;

void** g410c90 = reinterpret_cast<void**>(0);

void** g410c54 = reinterpret_cast<void**>(0);

void** g40e160 = reinterpret_cast<void**>(34);

int32_t CreateProcessA = 0xcabc;

int32_t GetCurrentDirectoryA = 0xcae6;

void** SetCurrentDirectoryA = reinterpret_cast<void**>(0xce);

int32_t LoadLibraryA = 0xcb26;

int32_t GetProcAddress = 0xcb14;

int32_t FreeLibrary = 0xcb36;

int32_t Sleep = 0xcab4;

void fun_4025f0() {
    void* esp1;
    void* ebp2;
    void** eax3;
    void** v4;
    void** v5;
    void** ebx6;
    void** v7;
    void** esi8;
    void** v9;
    void** edi10;
    void** eax11;
    void** eax12;
    void** ebx13;
    signed char* eax14;
    uint32_t edx15;
    uint32_t ecx16;
    void** edi17;
    uint32_t ecx18;
    uint32_t ecx19;
    void*** esi20;
    uint32_t edx21;
    void** edi22;
    uint32_t ecx23;
    void** edi24;
    uint32_t ecx25;
    uint32_t ecx26;
    void** edi27;
    uint32_t ecx28;
    void** ax29;
    void** ecx30;
    void** v31;
    void** v32;
    void** v33;
    int32_t eax34;
    int32_t esi35;
    void** v36;
    void** v37;
    void** ecx38;
    void** v39;
    void** eax40;
    void* edx41;
    void** eax42;
    uint32_t eax43;
    int32_t eax44;
    int32_t edi45;
    int32_t esi46;
    int32_t eax47;
    int32_t v48;

    esp1 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4);
    ebp2 = esp1;
    eax3 = g0;
    v4 = eax3;
    g0 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(esp1) - 4 - 4 - 4);
    v5 = ebx6;
    v7 = esi8;
    v9 = edi10;
    SetErrorMode(0x8001, v9, v7, v5);
    eax11 = g410c90;
    if (!eax11) 
        goto addr_402736_2;
    eax12 = fun_4056cd(0x208, 1, 0x8001, v9, v7, v5);
    ebx13 = eax12;
    if (!ebx13) 
        goto addr_402736_2;
    eax14 = "regsvr32 /u /s \"";
    edx15 = reinterpret_cast<unsigned char>(ebx13) - reinterpret_cast<uint32_t>("regsvr32 /u /s \"");
    do {
        *reinterpret_cast<signed char*>(&ecx16) = *eax14;
        *reinterpret_cast<signed char*>(edx15 + reinterpret_cast<uint32_t>(eax14)) = *reinterpret_cast<signed char*>(&ecx16);
        ++eax14;
    } while (*reinterpret_cast<signed char*>(&ecx16));
    edi17 = g410c54;
    ecx18 = 0xffffffff;
    do {
        if (!ecx18) 
            break;
        --ecx18;
        ++edi17;
    } while (*reinterpret_cast<void***>(edi17));
    ecx19 = ~ecx18;
    esi20 = reinterpret_cast<void***>(reinterpret_cast<unsigned char>(edi17) - ecx19);
    edx21 = ecx19;
    edi22 = ebx13;
    ecx23 = 0xffffffff;
    do {
        if (!ecx23) 
            break;
        --ecx23;
        ++edi22;
        ++esi20;
    } while (*reinterpret_cast<void***>(edi22));
    edi24 = edi22 - 1;
    ecx25 = edx21 >> 2;
    while (ecx25) {
        --ecx25;
        *reinterpret_cast<void***>(edi24) = *esi20;
        edi24 = edi24 + 4;
        esi20 = esi20 + 4;
    }
    ecx26 = edx21 & 3;
    while (ecx26) {
        --ecx26;
        *reinterpret_cast<void***>(edi24) = *esi20;
        ++edi24;
        ++esi20;
    }
    edi27 = ebx13;
    ecx28 = 0xffffffff;
    do {
        if (!ecx28) 
            break;
        --ecx28;
        ++edi27;
    } while (*reinterpret_cast<void***>(edi27));
    ax29 = g40e160;
    *reinterpret_cast<void***>(edi27 + 0xffffffff) = ax29;
    ecx30 = reinterpret_cast<void**>(17);
    while (ecx30) {
        --ecx30;
    }
    v31 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(ebp2) + 0xffffffd8);
    v32 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(ebp2) + 0xffffff94);
    v33 = ebx13;
    eax34 = reinterpret_cast<int32_t>(CreateProcessA(0, v33, 0, 0, 1));
    if (eax34) 
        goto addr_4026e0_25;
    esi35 = 0;
    addr_402725_27:
    fun_405a1e(ecx30, ebx13, 0, v33, 0, 0, 1, 32, 0, 0, v32, v31, 0x8001, v9, v7, v5, v36, v37);
    if (esi35) {
        addr_402818_28:
        SetErrorMode();
        g0 = v4;
        return;
    } else {
        addr_402736_2:
        SetErrorMode(0x8001, 0x8001, v9, v7, v5);
        ecx38 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(ebp2) + 0xfffffe84);
        v39 = ecx38;
        GetCurrentDirectoryA(0x104, v39, 0x8001, 0x8001, v9, v7, v5);
        fun_401840(ecx38, reinterpret_cast<int32_t>(ebp2) + 0xfffffe84, 0x104, v39, 0x8001, 0x8001, v9, v7, v5);
        eax40 = g410c54;
        edx41 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(ebp2) - 0x284 - reinterpret_cast<unsigned char>(eax40));
    }
    do {
        ecx38 = *reinterpret_cast<void***>(eax40);
        *reinterpret_cast<void***>(reinterpret_cast<uint32_t>(edx41) + reinterpret_cast<unsigned char>(eax40)) = ecx38;
        ++eax40;
    } while (ecx38);
    eax42 = fun_4055a0(ecx38, reinterpret_cast<int32_t>(ebp2) + 0xfffffd7c, 92, 0x104, v39, 0x8001, 0x8001, v9, v7, v5);
    if (eax42) {
        *reinterpret_cast<void***>(eax42) = reinterpret_cast<void**>(0);
        SetCurrentDirectoryA(reinterpret_cast<int32_t>(ebp2) - 0x284, 0x104, v39, 0x8001, 0x8001, v9, v7, v5);
    }
    eax43 = reinterpret_cast<uint32_t>(LoadLibraryA());
    if (eax43 >= 32) {
        eax44 = reinterpret_cast<int32_t>(GetProcAddress(eax43, "DllUnregisterServer"));
        if (eax44) {
            eax44(eax43, "DllUnregisterServer");
        }
        FreeLibrary(eax43, eax43, "DllUnregisterServer");
    }
    if (!1) {
        SetCurrentDirectoryA(reinterpret_cast<int32_t>(ebp2) - 0x17c);
    }
    SetErrorMode();
    goto addr_402818_28;
    addr_4026e0_25:
    if (!1) {
        edi45 = GetExitCodeProcess;
        esi46 = Sleep;
        do {
            ecx30 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(ebp2) + 0xffffff90);
            eax47 = reinterpret_cast<int32_t>(edi45(0, ecx30, 0, v33, 0, 0, 1));
            if (!eax47) 
                break;
            esi46(0xfa, 0, ecx30, 0, v33, 0, 0, 1);
        } while (v48 == 0x103);
        CloseHandle(0, 0, ecx30, 0, v33, 0, 0, 1);
    }
    esi35 = 1;
    goto addr_402725_27;
}

int32_t DeleteFileA = 0xcfb0;

int32_t fun_405f0c(void** a1, void** a2, void** a3) {
    int32_t eax4;
    uint32_t eax5;

    eax4 = reinterpret_cast<int32_t>(DeleteFileA());
    if (eax4) {
        eax5 = 0;
    } else {
        eax5 = reinterpret_cast<uint32_t>(GetLastError());
    }
    if (!eax5) {
        return 0;
    } else {
        fun_406526(eax5);
        return -1;
    }
}

int32_t fun_40547d(unsigned char a1, int32_t a2, void** a3, void** a4) {
    uint32_t* eax5;
    uint32_t eax6;

    eax5 = reinterpret_cast<uint32_t*>(GetFileAttributesA());
    if (!reinterpret_cast<int1_t>(eax5 == 0xffffffff)) {
        if (!(*reinterpret_cast<unsigned char*>(&eax5) & 1) || !(a1 & 2)) {
            return 0;
        } else {
            g410cb8 = reinterpret_cast<uint32_t*>(13);
            g410cbc = 5;
        }
    } else {
        eax6 = reinterpret_cast<uint32_t>(GetLastError());
        fun_406526(eax6);
    }
    return -1;
}

void** g410cac = reinterpret_cast<void**>(0);

int32_t DialogBoxParamA = 0xcc94;

int32_t fun_402390(void** a1, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7, void** a8, void** a9, void** a10, void** a11, void** a12);

int32_t fun_402450(void** ecx, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7, void** a8, void** a9, void** a10, void** a11) {
    void** esp12;
    int32_t esi13;
    void** esi14;
    int32_t eax15;
    void* esp16;
    void** ecx17;
    void** eax18;
    int32_t eax19;

    esp12 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4);
    esi13 = 7;
    eax15 = fun_4018b0(ecx, 0x400, esp12, esi14, ecx, __return_address(), a2, a3, a4);
    if (eax15) {
        fun_4020e0(ecx, 9, a2, esi14, ecx, __return_address(), a2, a3, a4, a5, a6, a7, a8, a9, a10);
        esp16 = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(esp12 - 4) - 4 - 4 - 4 + 4 + 8 - 4 - 4 - 4 - 4 + 4 + 12);
        if (*reinterpret_cast<void***>(ecx)) {
            ecx17 = g410cac;
            eax18 = g410ca8;
            eax19 = reinterpret_cast<int32_t>(DialogBoxParamA(ecx17, 0x6d, eax18, fun_402390, ecx));
            esi13 = eax19;
            if (esi13 == -1) {
                esi13 = 7;
            }
            fun_401930(ecx17, reinterpret_cast<uint32_t>(esp16) - 4 - 4 - 4 - 4 - 4 - 4 + 4 + 4, ecx17, 0x6d, eax18, fun_402390, ecx, esi14, ecx, __return_address(), a2, a3, a4, a5, a6);
        } else {
            fun_401930(a2, reinterpret_cast<uint32_t>(esp16) + 4, esi14, ecx, __return_address(), a2, a3, a4, a5, a6, a7, a8, a9, a10, a11);
            return 0x3e9;
        }
    }
    return esi13;
}

int32_t RemoveDirectoryA = 0xcb64;

int32_t fun_405ee2(void** a1, void** a2, void** a3, void** a4) {
    int32_t eax5;
    uint32_t eax6;

    eax5 = reinterpret_cast<int32_t>(RemoveDirectoryA());
    if (eax5) {
        eax6 = 0;
    } else {
        eax6 = reinterpret_cast<uint32_t>(GetLastError());
    }
    if (!eax6) {
        return 0;
    } else {
        fun_406526(eax6);
        return -1;
    }
}

uint32_t g410c9c = 0;

int32_t g410ca0 = 0;

int32_t SendMessageA = 0xcbb8;

void fun_402340(uint32_t a1) {
    void* esp2;
    uint32_t eax3;
    int1_t zf4;
    int32_t ecx5;
    void* esp6;
    void* v7;
    int32_t eax8;
    int32_t v9;
    int32_t ebx10;
    int32_t ebx11;
    int32_t v12;
    int32_t ebp13;
    int32_t ebp14;
    int32_t v15;
    int32_t esi16;
    int32_t esi17;
    int32_t* esp18;
    int32_t v19;
    int32_t edi20;
    int32_t edi21;
    void* esp22;
    void* v23;
    int32_t eax24;
    void* esp25;
    void** eax26;
    int32_t eax27;
    void* v28;
    void* esp29;
    int32_t eax30;

    esp2 = __zero_stack_offset();
    eax3 = a1;
    if (eax3 > 100) {
        eax3 = 100;
    }
    zf4 = g410c9c == eax3;
    if (zf4) {
        return;
    } else {
        ecx5 = g410ca0;
        g410c9c = eax3;
        if (ecx5) {
            SendMessageA(ecx5, 0x402, eax3, 0);
            esp2 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp2) - 4 - 4 - 4 - 4 - 4 + 4);
        }
        esp6 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp2) - 28);
        v7 = esp6;
        eax8 = reinterpret_cast<int32_t>(PeekMessageA(v7, 0, 0, 0, 0));
        if (eax8) {
            v9 = ebx10;
            ebx11 = TranslateMessage;
            v12 = ebp13;
            ebp14 = DispatchMessageA;
            v15 = esi16;
            esi17 = GetMessageA;
            esp18 = reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(esp6) - 4 - 4 - 4 - 4 - 4 - 4 + 4 - 4 - 4 - 4 - 4);
            v19 = edi20;
            edi21 = IsDialogMessageA;
            do {
                esp22 = reinterpret_cast<void*>(esp18 - 1 - 1);
                v23 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp22) + 24);
                eax24 = reinterpret_cast<int32_t>(esi17(v23, 0, 0, 0, v19, v15, v12, v9, v7, 0, 0, 0, 0));
                esp25 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp22) - 4 - 4 - 4 + 4);
                if (eax24 && ((eax26 = g410ca4, eax26 == 0) || (eax27 = reinterpret_cast<int32_t>(edi21(eax26, reinterpret_cast<int32_t>(esp25) + 16, v23, 0, 0, 0, v19, v15, v12, v9, v7, 0, 0, 0, 0)), esp25 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp25) - 4 - 4 - 4 + 4), !eax27))) {
                    v28 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp25) + 16);
                    ebx11(v28, v23, 0, 0, 0, v19, v15, v12, v9, v7, 0, 0, 0, 0);
                    esp29 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp25) - 4 - 4 + 4);
                    ebp14(reinterpret_cast<int32_t>(esp29) + 16, v28, v23, 0, 0, 0, v19, v15, v12, v9, v7, 0, 0, 0, 0);
                    esp25 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp29) - 4 - 4 + 4);
                }
                eax30 = reinterpret_cast<int32_t>(PeekMessageA());
                esp18 = reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(esp25) - 4 - 4 - 4 - 4 - 4 - 4 + 4);
            } while (eax30);
        }
        goto 0x402374;
    }
}

int32_t GetWindowsDirectoryA = 0xca06;

int32_t GetSystemDirectoryA = 0xc9f0;

int32_t RegQueryValueExA = 0xcdde;

int32_t fun_401070(void** ecx, void** a2, void** a3, void** a4, void** a5) {
    void** v6;
    void** ebx7;
    void** ebx8;
    void** v9;
    void** ebp10;
    void*** esp11;
    void** v12;
    void** edi13;
    void** edi14;
    uint32_t ecx15;
    int32_t ebp16;
    void** esi17;
    void** ecx18;
    void** v19;
    void** v20;
    void** v21;
    void*** esp22;
    void** v23;
    void** v24;
    void* esp25;
    void** ecx26;
    void** v27;
    void* esp28;
    void** eax29;
    void* esp30;
    void** v31;
    void* esp32;
    void* esp33;
    void** eax34;
    void** v35;
    void* esp36;
    void* esp37;
    void** eax38;
    void** v39;
    void* esp40;
    void* esp41;
    void** eax42;
    int32_t eax43;
    void** v44;
    void* esp45;
    void* esp46;
    void** eax47;
    void** v48;
    void* esp49;
    void* esp50;
    void** eax51;
    void** v52;
    void* esp53;
    void* esp54;
    void** eax55;
    int32_t eax56;
    void** v57;
    void* esp58;
    void* esp59;
    void** eax60;
    void** v61;
    void* esp62;
    void* esp63;
    void** eax64;
    int32_t eax65;
    void** v66;
    void* esp67;
    void* esp68;
    void** eax69;
    void** v70;
    void* esp71;
    void* esp72;
    void** eax73;
    int32_t eax74;
    void** v75;
    void* esp76;
    void* esp77;
    void** eax78;
    void** eax79;
    void* esp80;
    void** eax81;
    void** v82;
    void** v83;
    void** v84;
    void** v85;
    void* esp86;
    signed char* edi87;
    uint32_t ecx88;
    void*** esp89;
    void** v90;
    uint32_t edx91;
    uint32_t ecx92;
    signed char v93;
    uint32_t ecx94;
    void*** esp95;
    void** v96;
    void** eax97;
    void** eax98;
    void** v99;
    void* esp100;
    void** eax101;
    void** ecx102;
    void** v103;
    void** v104;
    void** v105;
    void** v106;
    void* esp107;
    signed char* edi108;
    uint32_t ecx109;
    void*** esp110;
    void** v111;
    uint32_t edx112;
    uint32_t ecx113;
    signed char v114;
    uint32_t ecx115;
    void*** esp116;
    void** v117;
    void** eax118;
    void** eax119;
    void** v120;
    void* esp121;
    void** eax122;
    int32_t eax123;
    int32_t esi124;
    void*** esp125;
    void** v126;
    void** ecx127;
    void** v128;
    int32_t eax129;
    void* esp130;
    void** eax131;
    void*** esp132;
    void** v133;
    void** v134;
    void** v135;
    int32_t eax136;
    void** eax137;
    void** v138;
    void** v139;
    void** v140;
    void** v141;
    void** v142;
    void** v143;
    int32_t v144;

    v6 = ebx7;
    ebx8 = a2;
    v9 = ebp10;
    esp11 = reinterpret_cast<void***>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 0x114 - 4 - 4 - 4);
    v12 = edi13;
    edi14 = ebx8;
    ecx15 = 0xffffffff;
    ebp16 = 0;
    do {
        if (!ecx15) 
            break;
        --ecx15;
        ++edi14;
        ++esi17;
    } while (*reinterpret_cast<void***>(edi14));
    ecx18 = reinterpret_cast<void**>(~ecx15 - 1);
    if (reinterpret_cast<signed char>(ecx18) <= reinterpret_cast<signed char>(3)) {
        return 1;
    }
    if (*reinterpret_cast<signed char*>(reinterpret_cast<unsigned char>(ecx18) + reinterpret_cast<unsigned char>(ebx8) + 0xffffffff) == 92) {
        ebp16 = 1;
        fun_401840(ecx18, ebx8, v12, v9, v6, v19, v20, 1, v21);
        esp11 = esp11 - 4 - 4 + 4 + 4;
    }
    esp22 = esp11 - 4;
    v23 = esi17;
    v24 = reinterpret_cast<void**>(esp22 + 32);
    GetWindowsDirectoryA();
    esp25 = reinterpret_cast<void*>(esp22 - 4 - 4 - 4 + 4);
    ecx26 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(esp25) + 32);
    fun_401840(ecx26, ecx26, v24, 0x104, v23, v12, v9, v6, v27);
    esp28 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp25) - 4 - 4 + 4);
    eax29 = fun_4052b0(ecx26, reinterpret_cast<int32_t>(esp28) + 36, ebx8, ecx26, v24, 0x104, v23, v12);
    esp30 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp28) - 4 - 4 - 4 + 4 + 12);
    if (!eax29) 
        goto addr_4014fc_9;
    v31 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(esp30) + 32);
    GetSystemDirectoryA();
    esp32 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp30) - 4 - 4 - 4 + 4);
    ecx26 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(esp32) + 32);
    fun_401840(ecx26, ecx26, v31, 0x104, v24, 0x104, v23, v12, v9);
    esp33 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp32) - 4 - 4 + 4);
    eax34 = fun_4052b0(ecx26, reinterpret_cast<int32_t>(esp33) + 36, ebx8, ecx26, v31, 0x104, v24, 0x104);
    esp30 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp33) - 4 - 4 - 4 + 4 + 12);
    if (!eax34) 
        goto addr_4014fc_9;
    v35 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(esp30) + 32);
    fun_401000(ecx26, v35, 0);
    esp36 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp30) - 4 - 4 - 4 + 4);
    ecx26 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(esp36) + 40);
    fun_401840(ecx26, ecx26, v35, 0, v31, 0x104, v24, 0x104, v23);
    esp37 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp36) - 4 - 4 + 4);
    eax38 = fun_4052b0(ecx26, reinterpret_cast<int32_t>(esp37) + 44, ebx8, ecx26, v35, 0, v31, 0x104);
    esp30 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp37) - 4 - 4 - 4 + 4 + 20);
    if (!eax38) 
        goto addr_4014fc_9;
    v39 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(esp30) + 32);
    fun_401000(ecx26, v39, 16);
    esp40 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp30) - 4 - 4 - 4 + 4);
    ecx26 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(esp40) + 40);
    fun_401840(ecx26, ecx26, v39, 16, v31, 0x104, v24, 0x104, v23);
    esp41 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp40) - 4 - 4 + 4);
    eax42 = fun_4052b0(ecx26, reinterpret_cast<int32_t>(esp41) + 44, ebx8, ecx26, v39, 16, v31, 0x104);
    esp30 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp41) - 4 - 4 - 4 + 4 + 20);
    if (!eax42) 
        goto addr_4014fc_9;
    eax43 = g410c94;
    if (!eax43) 
        goto addr_4011a0_14;
    v44 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(esp30) + 32);
    fun_401000(ecx26, v44, 25);
    esp45 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp30) - 4 - 4 - 4 + 4);
    ecx26 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(esp45) + 40);
    fun_401840(ecx26, ecx26, v44, 25, v31, 0x104, v24, 0x104, v23);
    esp46 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp45) - 4 - 4 + 4);
    eax47 = fun_4052b0(ecx26, reinterpret_cast<int32_t>(esp46) + 44, ebx8, ecx26, v44, 25, v31, 0x104);
    esp30 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp46) - 4 - 4 - 4 + 4 + 20);
    if (!eax47) 
        goto addr_4014fc_9;
    addr_4011a0_14:
    v48 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(esp30) + 32);
    fun_401000(ecx26, v48, 20);
    esp49 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp30) - 4 - 4 - 4 + 4);
    ecx26 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(esp49) + 40);
    fun_401840(ecx26, ecx26, v48, 20, v31, 0x104, v24, 0x104, v23);
    esp50 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp49) - 4 - 4 + 4);
    eax51 = fun_4052b0(ecx26, reinterpret_cast<int32_t>(esp50) + 44, ebx8, ecx26, v48, 20, v31, 0x104);
    esp30 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp50) - 4 - 4 - 4 + 4 + 20);
    if (!eax51) 
        goto addr_4014fc_9;
    v52 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(esp30) + 32);
    fun_401000(ecx26, v52, 2);
    esp53 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp30) - 4 - 4 - 4 + 4);
    ecx26 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(esp53) + 40);
    fun_401840(ecx26, ecx26, v52, 2, v31, 0x104, v24, 0x104, v23);
    esp54 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp53) - 4 - 4 + 4);
    eax55 = fun_4052b0(ecx26, reinterpret_cast<int32_t>(esp54) + 44, ebx8, ecx26, v52, 2, v31, 0x104);
    esp30 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp54) - 4 - 4 - 4 + 4 + 20);
    if (!eax55) 
        goto addr_4014fc_9;
    eax56 = g410c94;
    if (!eax56) 
        goto addr_40122d_18;
    v57 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(esp30) + 32);
    fun_401000(ecx26, v57, 23);
    esp58 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp30) - 4 - 4 - 4 + 4);
    ecx26 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(esp58) + 40);
    fun_401840(ecx26, ecx26, v57, 23, v31, 0x104, v24, 0x104, v23);
    esp59 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp58) - 4 - 4 + 4);
    eax60 = fun_4052b0(ecx26, reinterpret_cast<int32_t>(esp59) + 44, ebx8, ecx26, v57, 23, v31, 0x104);
    esp30 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp59) - 4 - 4 - 4 + 4 + 20);
    if (!eax60) 
        goto addr_4014fc_9;
    addr_40122d_18:
    v61 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(esp30) + 32);
    fun_401000(ecx26, v61, 11);
    esp62 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp30) - 4 - 4 - 4 + 4);
    ecx26 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(esp62) + 40);
    fun_401840(ecx26, ecx26, v61, 11, v31, 0x104, v24, 0x104, v23);
    esp63 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp62) - 4 - 4 + 4);
    eax64 = fun_4052b0(ecx26, reinterpret_cast<int32_t>(esp63) + 44, ebx8, ecx26, v61, 11, v31, 0x104);
    esp30 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp63) - 4 - 4 - 4 + 4 + 20);
    if (!eax64) 
        goto addr_4014fc_9;
    eax65 = g410c94;
    if (!eax65) 
        goto addr_40128e_21;
    v66 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(esp30) + 32);
    fun_401000(ecx26, v66, 22);
    esp67 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp30) - 4 - 4 - 4 + 4);
    ecx26 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(esp67) + 40);
    fun_401840(ecx26, ecx26, v66, 22, v31, 0x104, v24, 0x104, v23);
    esp68 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp67) - 4 - 4 + 4);
    eax69 = fun_4052b0(ecx26, reinterpret_cast<int32_t>(esp68) + 44, ebx8, ecx26, v66, 22, v31, 0x104);
    esp30 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp68) - 4 - 4 - 4 + 4 + 20);
    if (!eax69) 
        goto addr_4014fc_9;
    addr_40128e_21:
    v70 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(esp30) + 32);
    fun_401000(ecx26, v70, 7);
    esp71 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp30) - 4 - 4 - 4 + 4);
    ecx26 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(esp71) + 40);
    fun_401840(ecx26, ecx26, v70, 7, v31, 0x104, v24, 0x104, v23);
    esp72 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp71) - 4 - 4 + 4);
    eax73 = fun_4052b0(ecx26, reinterpret_cast<int32_t>(esp72) + 44, ebx8, ecx26, v70, 7, v31, 0x104);
    esp30 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp72) - 4 - 4 - 4 + 4 + 20);
    if (!eax73) 
        goto addr_4014fc_9;
    eax74 = g410c94;
    if (!eax74) 
        goto addr_4012ef_24;
    v75 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(esp30) + 32);
    fun_401000(ecx26, v75, 24);
    esp76 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp30) - 4 - 4 - 4 + 4);
    ecx26 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(esp76) + 40);
    fun_401840(ecx26, ecx26, v75, 24, v31, 0x104, v24, 0x104, v23);
    esp77 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp76) - 4 - 4 + 4);
    eax78 = fun_4052b0(ecx26, reinterpret_cast<int32_t>(esp77) + 44, ebx8, ecx26, v75, 24, v31, 0x104);
    esp30 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp77) - 4 - 4 - 4 + 4 + 20);
    if (!eax78) 
        goto addr_4014fc_9;
    addr_4012ef_24:
    eax79 = fun_401000(ecx26, reinterpret_cast<int32_t>(esp30) + 32, 26);
    esp30 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp30) - 4 - 4 - 4 + 4 + 8);
    if (eax79) {
        ecx26 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(esp30) + 32);
        fun_401840(ecx26, ecx26, v31, 0x104, v24, 0x104, v23, v12, v9);
        esp80 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp30) - 4 - 4 + 4);
        eax81 = fun_4052b0(ecx26, reinterpret_cast<int32_t>(esp80) + 36, ebx8, ecx26, v31, 0x104, v24, 0x104);
        esp30 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp80) - 4 - 4 - 4 + 4 + 12);
        if (!eax81) 
            goto addr_4014fc_9;
        v82 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(esp30) + 32);
        fun_401800(ecx26, v82, v31, 0x104, v24, 0x104, v23, v12, v9, v6, v83, v84, 1, v85);
        esp86 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp30) - 4 - 4 + 4);
        edi87 = "Microsoft\\Internet Explorer\\Quick Launch";
        ecx88 = 0xffffffff;
        do {
            if (!ecx88) 
                break;
            --ecx88;
            ++edi87;
        } while (*edi87);
        esp89 = reinterpret_cast<void***>(reinterpret_cast<int32_t>(esp86) - 4);
        v90 = ebx8;
        edx91 = ~ecx88;
        ecx92 = 0xffffffff;
        do {
            if (!ecx92) 
                break;
            --ecx92;
        } while (v93);
        ecx94 = edx91 >> 2;
        while (ecx94) {
            --ecx94;
        }
        ecx26 = reinterpret_cast<void**>(edx91 & 3);
        esp95 = esp89 - 4;
        v96 = reinterpret_cast<void**>(esp89 + 40);
        while (ecx26) {
            --ecx26;
        }
        eax97 = fun_4052b0(ecx26, v96, v90, v82, v31, 0x104, v24, 0x104);
        esp30 = reinterpret_cast<void*>(esp95 - 4 + 4 + 12);
        if (!eax97) 
            goto addr_4014fc_9;
    }
    ecx26 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(esp30) + 32);
    eax98 = fun_401000(ecx26, ecx26, 35);
    esp30 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp30) - 4 - 4 - 4 + 4 + 8);
    if (eax98) {
        v99 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(esp30) + 32);
        fun_401840(ecx26, v99, v31, 0x104, v24, 0x104, v23, v12, v9);
        esp100 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp30) - 4 - 4 + 4);
        eax101 = fun_4052b0(ecx26, reinterpret_cast<int32_t>(esp100) + 36, ebx8, v99, v31, 0x104, v24, 0x104);
        esp30 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp100) - 4 - 4 - 4 + 4 + 12);
        if (!eax101) 
            goto addr_4014fc_9;
        ecx102 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(esp30) + 32);
        v103 = ecx102;
        fun_401800(ecx102, v103, v31, 0x104, v24, 0x104, v23, v12, v9, v6, v104, v105, 1, v106);
        esp107 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp30) - 4 - 4 + 4);
        edi108 = "Microsoft\\Internet Explorer\\Quick Launch";
        ecx109 = 0xffffffff;
        do {
            if (!ecx109) 
                break;
            --ecx109;
            ++edi108;
        } while (*edi108);
        esp110 = reinterpret_cast<void***>(reinterpret_cast<int32_t>(esp107) - 4);
        v111 = ebx8;
        edx112 = ~ecx109;
        ecx113 = 0xffffffff;
        do {
            if (!ecx113) 
                break;
            --ecx113;
        } while (v114);
        ecx115 = edx112 >> 2;
        while (ecx115) {
            --ecx115;
        }
        ecx26 = reinterpret_cast<void**>(edx112 & 3);
        esp116 = esp110 - 4;
        v117 = reinterpret_cast<void**>(esp110 + 40);
        while (ecx26) {
            --ecx26;
        }
        eax118 = fun_4052b0(ecx26, v117, v111, v103, v31, 0x104, v24, 0x104);
        esp30 = reinterpret_cast<void*>(esp116 - 4 + 4 + 12);
        if (!eax118) 
            goto addr_4014fc_9;
    }
    ecx26 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(esp30) + 32);
    eax119 = fun_401000(ecx26, ecx26, 46);
    esp30 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp30) - 4 - 4 - 4 + 4 + 8);
    if (!eax119 || (v120 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(esp30) + 32), fun_401840(ecx26, v120, v31, 0x104, v24, 0x104, v23, v12, v9), esp121 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp30) - 4 - 4 + 4), eax122 = fun_4052b0(ecx26, reinterpret_cast<int32_t>(esp121) + 36, ebx8, v120, v31, 0x104, v24, 0x104), esp30 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp121) - 4 - 4 - 4 + 4 + 12), !!eax122)) {
        ecx26 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(esp30) + 20);
        eax123 = reinterpret_cast<int32_t>(RegOpenKeyExA(0x80000002, "Software\\Microsoft\\Windows\\CurrentVersion", 0, 0x20019, ecx26));
        esp30 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp30) - 4 - 4 - 4 - 4 - 4 - 4 + 4);
        if (eax123) {
            addr_4014e0_57:
            goto addr_4014fc_9;
        } else {
            esi124 = RegQueryValueExA;
            esp125 = reinterpret_cast<void***>(reinterpret_cast<int32_t>(esp30) - 4);
            v126 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(esp30) + 28);
            ecx127 = reinterpret_cast<void**>(esp125 + 20);
            v128 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(esp30) + 32);
            eax129 = reinterpret_cast<int32_t>(esi124(v31, "ProgramFilesDir", 0, ecx127, v128));
            esp130 = reinterpret_cast<void*>(esp125 - 4 - 4 - 4 - 4 - 4 - 4 + 4);
            if (eax129 || (eax131 = fun_4052b0(ecx127, reinterpret_cast<int32_t>(esp130) + 32, ebx8, v31, "ProgramFilesDir", 0, ecx127, v128), esp130 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp130) - 4 - 4 - 4 + 4 + 8), !!eax131)) {
                esp132 = reinterpret_cast<void***>(reinterpret_cast<int32_t>(esp130) - 4);
                v133 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(esp130) + 28);
                ecx26 = v126;
                v134 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(esp130) + 32);
                v135 = reinterpret_cast<void**>(esp132 + 20);
                v128 = reinterpret_cast<void**>(0);
                eax136 = reinterpret_cast<int32_t>(esi124(ecx26, "CommonFilesDir", 0, v135, v134));
                if (eax136 || (eax137 = fun_4052b0(ecx26, esp132 - 4 - 4 - 4 - 4 - 4 - 4 + 4 + 32, ebx8, ecx26, "CommonFilesDir", 0, v135, v134), !!eax137)) {
                    RegCloseKey(v133, ecx26, "CommonFilesDir", 0, v135, v134);
                    goto addr_4014e0_57;
                }
            } else {
                ecx26 = v126;
                v133 = ecx26;
            }
        }
    } else {
        addr_4014fc_9:
        if (ebp16) {
            fun_401800(ecx26, ebx8, 0x104, v23, v12, v9, v6, v138, v139, 1, v140, v141, v142, v143);
            goto addr_40150a_64;
        }
    }
    RegCloseKey(v133, v31, "ProgramFilesDir", 0, ecx127, v128);
    goto addr_4014fc_9;
    addr_40150a_64:
    goto v144;
}

int32_t lstrlenA = 0xca9c;

int32_t RegEnumKeyExA = 0xce56;

int32_t RegDeleteKeyA = 0xce46;

int32_t fun_402e20(void** a1, void** a2) {
    void** ebp3;
    int32_t eax4;
    int32_t eax5;
    void* esp6;
    int32_t edi7;
    void* esp8;
    int32_t eax9;
    void* esp10;
    int32_t eax11;
    int32_t v12;
    int32_t v13;
    int32_t v14;

    ebp3 = a2;
    if (!ebp3 || (eax4 = reinterpret_cast<int32_t>(lstrlenA(ebp3)), eax4 == 0)) {
        eax5 = 0x3f2;
        goto addr_402efd_3;
    }
    eax5 = reinterpret_cast<int32_t>(RegOpenKeyExA(__return_address()));
    if (eax5) {
        addr_402efd_3:
        return eax5;
    } else {
        esp6 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 0x408 - 4 - 4 - 4 + 4 - 4 - 4 - 4 - 4 - 4 - 4 + 4 - 4 - 4);
        edi7 = RegEnumKeyExA;
        do {
            esp8 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp6) - 4 - 4 - 4);
            eax9 = reinterpret_cast<int32_t>(edi7());
            esp10 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp8) - 4 - 4 - 4 - 4 - 4 - 4 + 4);
            if (eax9 == 0x103) 
                break;
            if (eax9) 
                goto addr_402ee1_8;
            eax11 = fun_402e20(reinterpret_cast<int32_t>(esp8) + 28, reinterpret_cast<int32_t>(esp10) + 20);
            esp6 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp10) - 4 - 4 - 4 + 4 + 8);
        } while (!eax11);
        goto addr_402eb9_10;
    }
    RegDeleteKeyA(v12, ebp3);
    addr_402ee1_8:
    RegCloseKey();
    goto v13;
    addr_402eb9_10:
    RegCloseKey();
    goto v14;
}

void** fun_405f40(void** ecx, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7, void** a8, void** a9) {
    void** ecx10;
    void** ebx11;
    void** esi12;
    void** edi13;
    uint32_t ecx14;
    void** eax15;
    uint32_t ecx16;
    void** edx17;

    ecx10 = a4;
    if (!ecx10) {
        addr_405fc3_2:
        return a2;
    } else {
        ebx11 = ecx10;
        esi12 = a3;
        edi13 = a2;
        if (!(reinterpret_cast<unsigned char>(esi12) & 3)) {
            ecx14 = reinterpret_cast<unsigned char>(ecx10) >> 2;
            if (!ecx14) {
                goto addr_405f85_6;
            }
        }
        do {
            eax15 = *reinterpret_cast<void***>(esi12);
            ++esi12;
            *reinterpret_cast<void***>(edi13) = eax15;
            ++edi13;
            --ecx10;
            if (!ecx10) 
                goto addr_405f92_8;
            if (!eax15) 
                break;
        } while (reinterpret_cast<unsigned char>(esi12) & 3);
        goto addr_405f79_11;
    }
    if (reinterpret_cast<unsigned char>(edi13) & 3) {
        do {
            *reinterpret_cast<void***>(edi13) = eax15;
            ++edi13;
            --ecx10;
            if (!ecx10) 
                goto addr_406036_14;
        } while (reinterpret_cast<unsigned char>(edi13) & 3);
    }
    ebx11 = ecx10;
    ecx16 = reinterpret_cast<unsigned char>(ecx10) >> 2;
    if (ecx16) 
        goto addr_406027_17; else 
        goto addr_405fbb_18;
    addr_405f79_11:
    ebx11 = ecx10;
    ecx14 = reinterpret_cast<unsigned char>(ecx10) >> 2;
    if (ecx14) {
        do {
            edx17 = *reinterpret_cast<void***>(esi12);
            esi12 = esi12 + 4;
            if ((reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(esi12)) ^ 0xffffffff ^ reinterpret_cast<uint32_t>(*reinterpret_cast<void***>(esi12) + 0x7efefeff)) & 0x81010100) {
                if (!*reinterpret_cast<signed char*>(&edx17)) 
                    break;
                if (!*reinterpret_cast<signed char*>(&edx17 + 1)) 
                    goto addr_406011_22;
                if (!(reinterpret_cast<unsigned char>(edx17) & 0xff0000)) 
                    goto addr_406007_24;
                if (!(reinterpret_cast<unsigned char>(edx17) & 0xff000000)) 
                    goto addr_406003_26;
            }
            *reinterpret_cast<void***>(edi13) = edx17;
            edi13 = edi13 + 4;
            --ecx14;
        } while (ecx14);
        goto addr_405f80_28;
    } else {
        addr_405f80_28:
        ebx11 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(ebx11) & 3);
        if (!ebx11) {
            addr_405f92_8:
            return a2;
        } else {
            do {
                addr_405f85_6:
                eax15 = *reinterpret_cast<void***>(esi12);
                ++esi12;
                *reinterpret_cast<void***>(edi13) = eax15;
                ++edi13;
                if (!eax15) 
                    goto addr_405fbe_29;
                --ebx11;
            } while (ebx11);
            goto addr_405f92_8;
        }
    }
    *reinterpret_cast<void***>(edi13) = reinterpret_cast<void**>(0);
    addr_40601f_32:
    edi13 = edi13 + 4;
    eax15 = reinterpret_cast<void**>(0);
    ecx16 = ecx14 - 1;
    if (!ecx16) {
        addr_406031_33:
        ebx11 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(ebx11) & 3);
        if (ebx11) {
            do {
                addr_405fbb_18:
                *reinterpret_cast<void***>(edi13) = eax15;
                ++edi13;
                addr_405fbe_29:
                --ebx11;
            } while (ebx11);
        } else {
            addr_406036_14:
            return a2;
        }
    } else {
        addr_406027_17:
        eax15 = reinterpret_cast<void**>(0);
        goto addr_406029_34;
    }
    goto addr_405fc3_2;
    do {
        addr_406029_34:
        *reinterpret_cast<void***>(edi13) = reinterpret_cast<void**>(0);
        edi13 = edi13 + 4;
        --ecx16;
    } while (ecx16);
    goto addr_406031_33;
    addr_406011_22:
    *reinterpret_cast<void***>(edi13) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(edx17) & 0xff);
    goto addr_40601f_32;
    addr_406007_24:
    *reinterpret_cast<void***>(edi13) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(edx17) & 0xffff);
    goto addr_40601f_32;
    addr_406003_26:
    *reinterpret_cast<void***>(edi13) = edx17;
    goto addr_40601f_32;
}

void** fun_4054e0(void** ecx, void** a2, signed char a3, void** a4, void** a5, void** a6) {
    uint32_t eax7;
    uint32_t ebx8;
    uint32_t eax9;
    void** edx10;
    uint32_t ebx11;
    uint32_t ebx12;
    uint32_t ecx13;
    void* esi14;
    void** eax15;
    uint32_t eax16;
    uint32_t eax17;

    eax7 = 0;
    *reinterpret_cast<signed char*>(&eax7) = a3;
    ebx8 = eax7;
    eax9 = eax7 << 8;
    edx10 = a2;
    if (!(reinterpret_cast<unsigned char>(edx10) & 3)) {
        addr_40550b_3:
        ebx11 = ebx8 | eax9;
        ebx12 = ebx11 << 16 | ebx11;
    } else {
        do {
            ++edx10;
            if (*reinterpret_cast<void***>(edx10) == *reinterpret_cast<void***>(&ebx8)) 
                goto addr_4054d0_5;
            if (!*reinterpret_cast<void***>(edx10)) 
                goto addr_405554_7;
        } while (reinterpret_cast<unsigned char>(edx10) & 3);
        goto addr_40550b_3;
    }
    while (1) {
        ecx13 = reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(edx10)) ^ ebx12;
        esi14 = reinterpret_cast<void*>(*reinterpret_cast<void***>(edx10) + 0x7efefeff);
        edx10 = edx10 + 4;
        if ((ecx13 ^ 0xffffffff ^ 0x7efefeff + ecx13) & 0x81010100) {
            eax15 = *reinterpret_cast<void***>(edx10 + 0xfffffffc);
            if (*reinterpret_cast<signed char*>(&eax15) == *reinterpret_cast<signed char*>(&ebx12)) 
                break;
            if (!*reinterpret_cast<signed char*>(&eax15)) 
                goto addr_405552_12;
            if (*reinterpret_cast<signed char*>(&eax15 + 1) == *reinterpret_cast<signed char*>(&ebx12)) 
                goto addr_40558e_14;
            if (!*reinterpret_cast<signed char*>(&eax15 + 1)) 
                goto addr_405552_12;
            eax16 = reinterpret_cast<unsigned char>(eax15) >> 16;
            if (*reinterpret_cast<signed char*>(&eax16) == *reinterpret_cast<signed char*>(&ebx12)) 
                goto addr_405587_17;
            if (!*reinterpret_cast<signed char*>(&eax16)) 
                goto addr_405552_12;
            if (*reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(&eax16) + 1) == *reinterpret_cast<signed char*>(&ebx12)) 
                goto addr_405580_20;
            if (!*reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(&eax16) + 1)) 
                goto addr_405552_12;
        } else {
            eax17 = (reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(edx10)) ^ 0xffffffff ^ reinterpret_cast<uint32_t>(esi14)) & 0x81010100;
            if (!eax17) 
                continue;
            if (eax17 & 0x1010100) 
                goto addr_405552_12;
            if (!(reinterpret_cast<uint32_t>(esi14) & 0x80000000)) 
                goto addr_405552_12;
        }
    }
    return edx10 + 0xfffffffc;
    addr_405552_12:
    addr_405554_7:
    return 0;
    addr_40558e_14:
    return edx10 + 0xfffffffd;
    addr_405587_17:
    return edx10 + 0xfffffffe;
    addr_405580_20:
    return edx10 + 0xffffffff;
    addr_4054d0_5:
    return edx10 + 0xffffffff;
}

int32_t GetTempPathA = 0xcb54;

void** g40e42c = reinterpret_cast<void**>(67);

void** g40e430 = reinterpret_cast<void**>(0x6f);

void** g40e434 = reinterpret_cast<void**>(0x69);

void** g40e438 = reinterpret_cast<void**>(0);

struct s1 {
    void** f0;
    signed char[1] pad2;
    void** f2;
};

void** g40e3e0 = reinterpret_cast<void**>(65);

void** g40e3e4 = reinterpret_cast<void**>(0x69);

void** g40e3e8 = reinterpret_cast<void**>(0x69);

void** g40e3ec = reinterpret_cast<void**>(68);

void** g40e3f0 = reinterpret_cast<void**>(0);

void** g410c50 = reinterpret_cast<void**>(0);

void** g40e1d8 = reinterpret_cast<void**>(65);

void** g40e1dc = reinterpret_cast<void**>(85);

void** g40e1e0 = reinterpret_cast<void**>(0x73);

void** g40e1e4 = reinterpret_cast<void**>(80);

void** g40e1e8 = reinterpret_cast<void**>(0x69);

void** g40e1ec = reinterpret_cast<void**>(92);

void** g40e1f0 = reinterpret_cast<void**>(32);

void** g40e1f4 = reinterpret_cast<void**>(0x72);

void** g40e1f6 = reinterpret_cast<void**>(0);

struct s2 {
    void** f0;
    signed char[1] pad2;
    void** f2;
};

void** g40e254 = reinterpret_cast<void**>(65);

void** g40e258 = reinterpret_cast<void**>(85);

void** g40e25c = reinterpret_cast<void**>(0x73);

void** g40e260 = reinterpret_cast<void**>(0x73);

void** g40e264 = reinterpret_cast<void**>(0x70);

struct s3 {
    void** f0;
    signed char[1] pad2;
    void** f2;
};

void** fun_403080(void** ecx, void** a2, void** a3, void** a4, void** a5) {
    void** v6;
    void** v7;
    void** ebp8;
    void** ebp9;
    void** v10;
    void** esi11;
    void** v12;
    void** edi13;
    void** v14;
    void** v15;
    void** eax16;
    void** v17;
    void** v18;
    void** eax19;
    void** eax20;
    void** v21;
    void** v22;
    void** eax23;
    void** v24;
    void** v25;
    void** eax26;
    void* esp27;
    void* esp28;
    int32_t esi29;
    void*** esp30;
    void** v31;
    void** v32;
    void** v33;
    void** v34;
    void** v35;
    int32_t eax36;
    void* esp37;
    void** ecx38;
    void** v39;
    void** edi40;
    uint32_t ecx41;
    void** edi42;
    void** edx43;
    void** eax44;
    void** v45;
    void** v46;
    void** eax47;
    void* v48;
    void* v49;
    void** v50;
    void** v51;
    void** eax52;
    void** v53;
    void** v54;
    void** eax55;
    void** v56;
    void** v57;
    void** eax58;
    void** v59;
    void** v60;
    void** eax61;
    int32_t eax62;
    void** eax63;
    void** v64;
    void** v65;
    void** v66;
    void** v67;
    int32_t eax68;
    uint32_t ecx69;
    void** edi70;
    struct s1* esi71;
    void** edi72;
    void** ecx73;
    void** edi74;
    void** edx75;
    void** dl76;
    void* edx77;
    void** v78;
    void** v79;
    void** eax80;
    void** v81;
    void** v82;
    void** eax83;
    void** v84;
    void** v85;
    void** eax86;
    void** v87;
    void** v88;
    void** eax89;
    void** v90;
    void** v91;
    void** eax92;
    void** v93;
    void** v94;
    void** edx95;
    void** eax96;
    int32_t eax97;
    void** v98;
    void** v99;
    void** edi100;
    void** edx101;
    void** edi102;
    void** eax103;
    void** v104;
    void** v105;
    void** eax106;
    void** v107;
    void** v108;
    void** v109;
    void** v110;
    void** edi111;
    uint32_t ecx112;
    void** edx113;
    void** edi114;
    void** edx115;
    void* edx116;
    void** v117;
    void** v118;
    void* edx119;
    int32_t eax120;
    void** v121;
    void** v122;
    void* edx123;
    int32_t eax124;
    void** eax125;
    void** v126;
    void** v127;
    void** eax128;
    void** v129;
    void** v130;
    void** v131;
    void** v132;
    void** edi133;
    uint32_t ecx134;
    void** edi135;
    struct s2* esi136;
    void* edx137;
    void** v138;
    void** v139;
    void** edi140;
    uint32_t ecx141;
    void** eax142;
    void** edi143;
    void** edx144;
    void** v145;
    void** v146;
    int32_t eax147;
    void** eax148;
    void** v149;
    void** v150;
    void** eax151;
    void** v152;
    void** v153;
    void** v154;
    void** v155;
    void** edi156;
    uint32_t ecx157;
    void** edi158;
    void*** esi159;
    void* edx160;
    void** v161;
    void** v162;
    void** edi163;
    uint32_t ecx164;
    void** edi165;
    void*** esi166;
    int32_t eax167;
    void** eax168;
    void** v169;
    void** v170;
    void** eax171;
    void** v172;
    void** v173;
    void** v174;
    void** v175;
    void** edi176;
    uint32_t ecx177;
    void* edx178;
    void** v179;
    void** v180;
    void** edi181;
    uint32_t ecx182;
    void** edi183;
    struct s3* esi184;
    void** v185;
    void** v186;
    int32_t eax187;
    uint32_t ecx188;
    void** edi189;
    void** edx190;
    void** edi191;
    void** edx192;

    v6 = reinterpret_cast<void**>(__return_address());
    v7 = ebp8;
    ebp9 = a2;
    v10 = esi11;
    v12 = edi13;
    eax16 = fun_4052b0(ecx, ebp9, "#Windows#", v12, v10, v7, v14, v15);
    if (!eax16) 
        goto addr_40309c_2;
    eax19 = fun_4052b0(ecx, ebp9, "#System#", v12, v10, v7, v17, v18);
    if (!eax19) {
        eax20 = reinterpret_cast<void**>(GetSystemDirectoryA(ebp9, 0x104));
        goto addr_4032f5_5;
    }
    eax23 = fun_4052b0(ecx, ebp9, "#TempDir#", v12, v10, v7, v21, v22);
    if (!eax23) {
        eax20 = reinterpret_cast<void**>(GetTempPathA(0x104, ebp9));
        goto addr_4032f5_5;
    }
    eax26 = fun_4052b0(ecx, ebp9, "#CommonFiles#", v12, v10, v7, v24, v25);
    esp27 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 8 - 4 - 4 - 4 - 4 - 4 - 4 + 4 + 8 - 4 - 4 - 4 + 4 + 8 - 4 - 4 - 4 + 4 + 8 - 4 - 4 - 4 + 4 + 8);
    if (!eax26) {
        eax20 = reinterpret_cast<void**>(RegOpenKeyExA());
        esp28 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp27) - 4 - 4 - 4 - 4 - 4 - 4 + 4);
        if (!eax20) {
            ecx = reinterpret_cast<void**>(reinterpret_cast<int32_t>(esp28) + 12);
            esi29 = RegQueryValueExA;
            esp30 = reinterpret_cast<void***>(reinterpret_cast<int32_t>(esp28) - 4);
            v31 = ecx;
            v32 = ebp9;
            v33 = reinterpret_cast<void**>(esp30 + 20);
            v34 = eax20;
            v35 = v10;
            eax36 = reinterpret_cast<int32_t>(esi29(v35, "CommonFilesDir", v34, v33, v32, v31));
            esp37 = reinterpret_cast<void*>(esp30 - 4 - 4 - 4 - 4 - 4 - 4 + 4);
            if (eax36) {
                ecx38 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(esp37) + 12);
                v39 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(esp37) - 4 + 20);
                esi29(0x80000002, "ProgramFilesDir", 0, v39, ebp9, ecx38, v35, "CommonFilesDir", v34, v33, v32, v31);
                fun_401800(ecx38, ebp9, 0x80000002, "ProgramFilesDir", 0, v39, ebp9, ecx38, v35, "CommonFilesDir", v34, v33, v32, v31);
                edi40 = ebp9;
                ecx41 = 0xffffffff;
                do {
                    if (!ecx41) 
                        break;
                    --ecx41;
                    ++edi40;
                } while (*reinterpret_cast<void***>(edi40));
                ecx = g40e42c;
                edi42 = edi40 - 1;
                *reinterpret_cast<void***>(edi42) = ecx;
                edx43 = g40e430;
                *reinterpret_cast<void***>(edi42 + 4) = edx43;
                eax44 = g40e434;
                *reinterpret_cast<void***>(edi42 + 8) = eax44;
                ecx = g40e438;
                *reinterpret_cast<void***>(edi42 + 12) = ecx;
            }
            eax20 = reinterpret_cast<void**>(RegCloseKey(0x80000002, v35, "CommonFilesDir", v34, v33, v32, v31));
            goto addr_4032f5_5;
        }
    }
    eax47 = fun_4052b0(ecx, ebp9, "#Program Files#", v12, v10, v7, v45, v46);
    if (!eax47) {
        eax20 = reinterpret_cast<void**>(RegOpenKeyExA());
        esp28 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp27) - 4 - 4 - 4 + 4 + 8 - 4 - 4 - 4 - 4 - 4 - 4 + 4);
        if (!eax20) {
            v48 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp28) + 16);
            v49 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp28) + 12);
            RegQueryValueExA(v10, "ProgramFilesDir", eax20, v49, ebp9, v48);
            ecx = reinterpret_cast<void**>(0x80000002);
            eax20 = reinterpret_cast<void**>(RegCloseKey(0x80000002, v10, "ProgramFilesDir", eax20, v49, ebp9, v48));
            goto addr_4032f5_5;
        }
    }
    eax52 = fun_4052b0(ecx, ebp9, "#MyDocuments#", v12, v10, v7, v50, v51);
    if (!eax52) {
        eax20 = fun_401000(ecx, ebp9, 5);
        goto addr_4032f5_5;
    }
    eax55 = fun_4052b0(ecx, ebp9, "#Desktop#", v12, v10, v7, v53, v54);
    if (!eax55) {
        eax20 = fun_401000(ecx, ebp9, 16);
        goto addr_4032f5_5;
    }
    eax58 = fun_4052b0(ecx, ebp9, "#AppData#", v12, v10, v7, v56, v57);
    if (!eax58) 
        goto addr_403281_24;
    eax61 = fun_4052b0(ecx, ebp9, "#LocalAppData#", v12, v10, v7, v59, v60);
    if (!eax61) {
        eax20 = fun_401000(ecx, ebp9, 28);
        if (!eax20) {
            eax62 = g410c94;
            if (!eax62 || ((eax63 = fun_401000(ecx, ebp9, 26), eax63 == 0) || (eax20 = fun_4055a0(ecx, ebp9, 92, v12, v10, v7, v64, v65, v6, a2), eax20 == 0))) {
                GetWindowsDirectoryA(ebp9, 0x104);
                fun_401800(ecx, ebp9, ebp9, 0x104, v12, v10, v7, v66, v67, v6, a2, a3, a4, a5);
                eax68 = g410c94;
                ecx69 = 0xffffffff;
                edi70 = ebp9;
                if (eax68) {
                    eax20 = reinterpret_cast<void**>(0);
                    esi71 = reinterpret_cast<struct s1*>("Profiles\\Administrator\\Local Settings\\Application Data");
                    do {
                        if (!ecx69) 
                            break;
                        --ecx69;
                        ++edi70;
                        esi71 = reinterpret_cast<struct s1*>(&esi71->pad2);
                    } while (*reinterpret_cast<void***>(edi70));
                    edi72 = edi70 - 1;
                    ecx = reinterpret_cast<void**>(13);
                    while (ecx) {
                        --ecx;
                        *reinterpret_cast<void***>(edi72) = esi71->f0;
                        edi72 = edi72 + 4;
                        esi71 = reinterpret_cast<struct s1*>(reinterpret_cast<uint32_t>(esi71) + 4);
                    }
                    *reinterpret_cast<void***>(edi72) = esi71->f0;
                    *reinterpret_cast<void***>(edi72 + 2) = esi71->f2;
                    goto addr_4032f5_5;
                } else {
                    do {
                        if (!ecx69) 
                            break;
                        --ecx69;
                        ++edi70;
                    } while (*reinterpret_cast<void***>(edi70));
                    ecx73 = g40e3e0;
                    edi74 = edi70 - 1;
                    *reinterpret_cast<void***>(edi74) = ecx73;
                    edx75 = g40e3e4;
                    *reinterpret_cast<void***>(edi74 + 4) = edx75;
                    eax20 = g40e3e8;
                    *reinterpret_cast<void***>(edi74 + 8) = eax20;
                    ecx = g40e3ec;
                    *reinterpret_cast<void***>(edi74 + 12) = ecx;
                    dl76 = g40e3f0;
                    *reinterpret_cast<void***>(edi74 + 16) = dl76;
                    goto addr_4032f5_5;
                }
            } else {
                ecx = reinterpret_cast<void**>("\\Local Settings\\Application Data");
                edx77 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(eax20) - reinterpret_cast<unsigned char>("\\Local Settings\\Application Data"));
                do {
                    eax20 = *reinterpret_cast<void***>(ecx);
                    *reinterpret_cast<void***>(reinterpret_cast<uint32_t>(edx77) + reinterpret_cast<unsigned char>(ecx)) = eax20;
                    ++ecx;
                } while (eax20);
                goto addr_4032f5_5;
            }
        }
    }
    eax80 = fun_4052b0(ecx, ebp9, "#AllUsersAppData#", v12, v10, v7, v78, v79);
    if (!eax80) 
        goto addr_4033f3_50;
    eax83 = fun_4052b0(ecx, ebp9, "#AllUsersDocuments#", v12, v10, v7, v81, v82);
    if (eax83) {
        eax86 = fun_4052b0(ecx, ebp9, "#AllUsersDesktop#", v12, v10, v7, v84, v85);
        if (eax86) {
            eax89 = fun_4052b0(ecx, ebp9, "#UserDir#", v12, v10, v7, v87, v88);
            if (eax89) {
                eax92 = fun_4052b0(ecx, ebp9, "#AllUsersDir#", v12, v10, v7, v90, v91);
                if (eax92) {
                    eax20 = fun_4052b0(ecx, ebp9, "#InstallDir#", v12, v10, v7, v93, v94);
                    if (eax20) {
                        *reinterpret_cast<void***>(ebp9) = reinterpret_cast<void**>(0);
                        return eax20;
                    } else {
                        ecx = g410c50;
                        edx95 = ebp9;
                        do {
                            eax20 = *reinterpret_cast<void***>(ecx);
                            ++ecx;
                            *reinterpret_cast<void***>(edx95) = eax20;
                            ++edx95;
                        } while (eax20);
                        goto addr_4032f5_5;
                    }
                } else {
                    eax96 = fun_401000(ecx, ebp9, 46);
                    if (!eax96) {
                        eax97 = g410c94;
                        if (!eax97) {
                            GetWindowsDirectoryA(ebp9, 0x104);
                            fun_401800(ecx, ebp9, ebp9, 0x104, v12, v10, v7, v98, v99, v6, a2, a3, a4, a5);
                            edi100 = ebp9;
                            ecx = reinterpret_cast<void**>(0xffffffff);
                            do {
                                if (!ecx) 
                                    break;
                                --ecx;
                                ++edi100;
                            } while (*reinterpret_cast<void***>(edi100));
                            edx101 = g40e1d8;
                            edi102 = edi100 - 1;
                            *reinterpret_cast<void***>(edi102) = edx101;
                            eax20 = g40e1dc;
                            *reinterpret_cast<void***>(edi102 + 4) = eax20;
                            ecx = g40e1e0;
                            *reinterpret_cast<void***>(edi102 + 8) = ecx;
                            goto addr_4032f5_5;
                        } else {
                            eax103 = fun_401000(ecx, ebp9, 26);
                            if (!eax103 || ((eax106 = fun_4055a0(ecx, ebp9, 92, v12, v10, v7, v104, v105, v6, a2), eax106 == 0) || (*reinterpret_cast<void***>(eax106) = reinterpret_cast<void**>(0), eax20 = fun_4055a0(ecx, ebp9, 92, v12, v10, v7, v107, v108, v6, a2), eax20 == 0))) {
                                GetWindowsDirectoryA(ebp9, 0x104);
                                fun_401800(ecx, ebp9, ebp9, 0x104, v12, v10, v7, v109, v110, v6, a2, a3, a4, a5);
                                edi111 = ebp9;
                                ecx112 = 0xffffffff;
                                do {
                                    if (!ecx112) 
                                        break;
                                    --ecx112;
                                    ++edi111;
                                } while (*reinterpret_cast<void***>(edi111));
                                edx113 = g40e1e4;
                                edi114 = edi111 - 1;
                                *reinterpret_cast<void***>(edi114) = edx113;
                                eax20 = g40e1e8;
                                *reinterpret_cast<void***>(edi114 + 4) = eax20;
                                ecx = g40e1ec;
                                *reinterpret_cast<void***>(edi114 + 8) = ecx;
                                edx115 = g40e1f0;
                                *reinterpret_cast<void***>(edi114 + 12) = edx115;
                                eax20 = g40e1f4;
                                *reinterpret_cast<void***>(edi114 + 16) = eax20;
                                ecx = g40e1f6;
                                *reinterpret_cast<void***>(edi114 + 18) = ecx;
                                goto addr_4032f5_5;
                            } else {
                                ecx = reinterpret_cast<void**>("\\All Users");
                                edx116 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(eax20) - reinterpret_cast<unsigned char>("\\All Users"));
                                do {
                                    eax20 = *reinterpret_cast<void***>(ecx);
                                    *reinterpret_cast<void***>(reinterpret_cast<uint32_t>(edx116) + reinterpret_cast<unsigned char>(ecx)) = eax20;
                                    ++ecx;
                                } while (eax20);
                                goto addr_4032f5_5;
                            }
                        }
                    } else {
                        eax20 = fun_4055a0(ecx, ebp9, 92, v12, v10, v7, v117, v118, v6, a2);
                        if (eax20) {
                            if (reinterpret_cast<unsigned char>(eax20) <= reinterpret_cast<unsigned char>(ebp9) || !reinterpret_cast<int1_t>(*reinterpret_cast<void***>(eax20 + 0xffffffff) == 58)) {
                                addr_40374e_76:
                                *reinterpret_cast<void***>(eax20) = reinterpret_cast<void**>(0);
                                goto addr_4032f5_5;
                            } else {
                                *reinterpret_cast<void***>(eax20 + 1) = reinterpret_cast<void**>(0);
                                goto addr_4032f5_5;
                            }
                        } else {
                            eax20 = reinterpret_cast<void**>("c:\\");
                            edx119 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(ebp9) - reinterpret_cast<unsigned char>("c:\\"));
                            do {
                                ecx = *reinterpret_cast<void***>(eax20);
                                *reinterpret_cast<void***>(reinterpret_cast<uint32_t>(edx119) + reinterpret_cast<unsigned char>(eax20)) = ecx;
                                ++eax20;
                            } while (ecx);
                            goto addr_4032f5_5;
                        }
                    }
                }
            } else {
                eax20 = fun_401000(ecx, ebp9, 40);
                if (!eax20) {
                    eax120 = g410c94;
                    if (!eax120) {
                        addr_40309c_2:
                        eax20 = reinterpret_cast<void**>(GetWindowsDirectoryA(ebp9, 0x104));
                        goto addr_4032f5_5;
                    } else {
                        fun_401000(ecx, ebp9, 26);
                        eax20 = fun_4055a0(ecx, ebp9, 92, ebp9, 26, v12, v10, v7, v121, v122);
                        if (eax20) 
                            goto addr_40374e_76;
                        eax20 = reinterpret_cast<void**>("c:\\");
                        edx123 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(ebp9) - reinterpret_cast<unsigned char>("c:\\"));
                        do {
                            ecx = *reinterpret_cast<void***>(eax20);
                            *reinterpret_cast<void***>(reinterpret_cast<uint32_t>(edx123) + reinterpret_cast<unsigned char>(eax20)) = ecx;
                            ++eax20;
                        } while (ecx);
                        goto addr_4032f5_5;
                    }
                }
            }
        } else {
            eax20 = fun_401000(ecx, ebp9, 25);
            if (!eax20) {
                eax124 = g410c94;
                if (eax124) {
                    eax125 = fun_401000(ecx, ebp9, 26);
                    if (!eax125 || ((eax128 = fun_4055a0(ecx, ebp9, 92, v12, v10, v7, v126, v127, v6, a2), eax128 == 0) || (*reinterpret_cast<void***>(eax128) = reinterpret_cast<void**>(0), eax20 = fun_4055a0(ecx, ebp9, 92, v12, v10, v7, v129, v130, v6, a2), eax20 == 0))) {
                        GetWindowsDirectoryA(ebp9, 0x104);
                        fun_401800(ecx, ebp9, ebp9, 0x104, v12, v10, v7, v131, v132, v6, a2, a3, a4, a5);
                        edi133 = ebp9;
                        ecx134 = 0xffffffff;
                        eax20 = reinterpret_cast<void**>(0);
                        do {
                            if (!ecx134) 
                                break;
                            --ecx134;
                            ++edi133;
                        } while (*reinterpret_cast<void***>(edi133));
                        edi135 = edi133 - 1;
                        ecx = reinterpret_cast<void**>(6);
                        esi136 = reinterpret_cast<struct s2*>("Profiles\\All Users\\Desktop");
                        while (ecx) {
                            --ecx;
                            *reinterpret_cast<void***>(edi135) = esi136->f0;
                            edi135 = edi135 + 4;
                            esi136 = reinterpret_cast<struct s2*>(reinterpret_cast<uint32_t>(esi136) + 4);
                        }
                        *reinterpret_cast<void***>(edi135) = esi136->f0;
                        *reinterpret_cast<void***>(edi135 + 2) = esi136->f2;
                        goto addr_4032f5_5;
                    } else {
                        ecx = reinterpret_cast<void**>("\\All Users\\Desktop");
                        edx137 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(eax20) - reinterpret_cast<unsigned char>("\\All Users\\Desktop"));
                        do {
                            eax20 = *reinterpret_cast<void***>(ecx);
                            *reinterpret_cast<void***>(reinterpret_cast<uint32_t>(edx137) + reinterpret_cast<unsigned char>(ecx)) = eax20;
                            ++ecx;
                        } while (eax20);
                        goto addr_4032f5_5;
                    }
                } else {
                    GetWindowsDirectoryA(ebp9, 0x104);
                    fun_401800(ecx, ebp9, ebp9, 0x104, v12, v10, v7, v138, v139, v6, a2, a3, a4, a5);
                    edi140 = ebp9;
                    ecx141 = 0xffffffff;
                    do {
                        if (!ecx141) 
                            break;
                        --ecx141;
                        ++edi140;
                    } while (*reinterpret_cast<void***>(edi140));
                    eax142 = g40e254;
                    edi143 = edi140 - 1;
                    *reinterpret_cast<void***>(edi143) = eax142;
                    ecx = g40e258;
                    *reinterpret_cast<void***>(edi143 + 4) = ecx;
                    edx144 = g40e25c;
                    *reinterpret_cast<void***>(edi143 + 8) = edx144;
                    eax20 = g40e260;
                    *reinterpret_cast<void***>(edi143 + 12) = eax20;
                    ecx = g40e264;
                    *reinterpret_cast<void***>(edi143 + 16) = ecx;
                    goto addr_4032f5_5;
                }
            }
        }
    }
    eax20 = fun_401000(ecx, ebp9, 46);
    if (eax20) {
        addr_4032f5_5:
        if (*reinterpret_cast<void***>(ebp9)) {
            eax20 = fun_401840(ecx, ebp9, v12, v10, v7, v145, v146, v6, a2);
        }
    } else {
        eax147 = g410c94;
        if (eax147) {
            eax148 = fun_401000(ecx, ebp9, 26);
            if (!eax148 || ((eax151 = fun_4055a0(ecx, ebp9, 92, v12, v10, v7, v149, v150, v6, a2), eax151 == 0) || (*reinterpret_cast<void***>(eax151) = reinterpret_cast<void**>(0), eax20 = fun_4055a0(ecx, ebp9, 92, v12, v10, v7, v152, v153, v6, a2), eax20 == 0))) {
                GetWindowsDirectoryA(ebp9, 0x104);
                fun_401800(ecx, ebp9, ebp9, 0x104, v12, v10, v7, v154, v155, v6, a2, a3, a4, a5);
                edi156 = ebp9;
                ecx157 = 0xffffffff;
                eax20 = reinterpret_cast<void**>(0);
                do {
                    if (!ecx157) 
                        break;
                    --ecx157;
                    ++edi156;
                } while (*reinterpret_cast<void***>(edi156));
                edi158 = edi156 - 1;
                ecx = reinterpret_cast<void**>(7);
                esi159 = reinterpret_cast<void***>("Profiles\\All Users\\Documents");
                while (ecx) {
                    --ecx;
                    *reinterpret_cast<void***>(edi158) = *esi159;
                    edi158 = edi158 + 4;
                    esi159 = esi159 + 4;
                }
                *reinterpret_cast<void***>(edi158) = *esi159;
                goto addr_4032f5_5;
            } else {
                ecx = reinterpret_cast<void**>("\\All Users\\Documents");
                edx160 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(eax20) - reinterpret_cast<unsigned char>("\\All Users\\Documents"));
                do {
                    eax20 = *reinterpret_cast<void***>(ecx);
                    *reinterpret_cast<void***>(reinterpret_cast<uint32_t>(edx160) + reinterpret_cast<unsigned char>(ecx)) = eax20;
                    ++ecx;
                } while (eax20);
                goto addr_4032f5_5;
            }
        } else {
            GetWindowsDirectoryA(ebp9, 0x104);
            fun_401800(ecx, ebp9, ebp9, 0x104, v12, v10, v7, v161, v162, v6, a2, a3, a4, a5);
            edi163 = ebp9;
            ecx164 = 0xffffffff;
            eax20 = reinterpret_cast<void**>(0);
            do {
                if (!ecx164) 
                    break;
                --ecx164;
                ++edi163;
            } while (*reinterpret_cast<void***>(edi163));
            edi165 = edi163 - 1;
            ecx = reinterpret_cast<void**>(5);
            esi166 = reinterpret_cast<void***>("All Users\\Documents");
            goto addr_4032f3_131;
        }
    }
    return eax20;
    addr_4032f3_131:
    while (ecx) {
        --ecx;
        *reinterpret_cast<void***>(edi165) = *esi166;
        edi165 = edi165 + 4;
        esi166 = esi166 + 4;
    }
    goto addr_4032f5_5;
    addr_4033f3_50:
    eax20 = fun_401000(ecx, ebp9, 35);
    if (eax20) 
        goto addr_4032f5_5;
    eax167 = g410c94;
    if (!eax167) 
        goto addr_40340f_136;
    eax168 = fun_401000(ecx, ebp9, 26);
    if (!eax168 || ((eax171 = fun_4055a0(ecx, ebp9, 92, v12, v10, v7, v169, v170, v6, a2), eax171 == 0) || (*reinterpret_cast<void***>(eax171) = reinterpret_cast<void**>(0), eax20 = fun_4055a0(ecx, ebp9, 92, v12, v10, v7, v172, v173, v6, a2), eax20 == 0))) {
        GetWindowsDirectoryA(ebp9, 0x104);
        fun_401800(ecx, ebp9, ebp9, 0x104, v12, v10, v7, v174, v175, v6, a2, a3, a4, a5);
        edi176 = ebp9;
        ecx177 = 0xffffffff;
        eax20 = reinterpret_cast<void**>(0);
        do {
            if (!ecx177) 
                break;
            --ecx177;
            ++edi176;
        } while (*reinterpret_cast<void***>(edi176));
        edi165 = edi176 - 1;
        ecx = reinterpret_cast<void**>(9);
        esi166 = reinterpret_cast<void***>("Profiles\\All Users\\Application Data");
        goto addr_4032f3_131;
    } else {
        ecx = reinterpret_cast<void**>("\\All Users\\Application Data");
        edx178 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(eax20) - reinterpret_cast<unsigned char>("\\All Users\\Application Data"));
        do {
            eax20 = *reinterpret_cast<void***>(ecx);
            *reinterpret_cast<void***>(reinterpret_cast<uint32_t>(edx178) + reinterpret_cast<unsigned char>(ecx)) = eax20;
            ++ecx;
        } while (eax20);
        goto addr_4032f5_5;
    }
    addr_40340f_136:
    GetWindowsDirectoryA(ebp9, 0x104);
    fun_401800(ecx, ebp9, ebp9, 0x104, v12, v10, v7, v179, v180, v6, a2, a3, a4, a5);
    edi181 = ebp9;
    ecx182 = 0xffffffff;
    eax20 = reinterpret_cast<void**>(0);
    do {
        if (!ecx182) 
            break;
        --ecx182;
        ++edi181;
    } while (*reinterpret_cast<void***>(edi181));
    edi183 = edi181 - 1;
    ecx = reinterpret_cast<void**>(6);
    esi184 = reinterpret_cast<struct s3*>("All Users\\Application Data");
    while (ecx) {
        --ecx;
        *reinterpret_cast<void***>(edi183) = esi184->f0;
        edi183 = edi183 + 4;
        esi184 = reinterpret_cast<struct s3*>(reinterpret_cast<uint32_t>(esi184) + 4);
    }
    *reinterpret_cast<void***>(edi183) = esi184->f0;
    *reinterpret_cast<void***>(edi183 + 2) = esi184->f2;
    goto addr_4032f5_5;
    addr_403281_24:
    eax20 = fun_401000(ecx, ebp9, 26);
    if (eax20) 
        goto addr_4032f5_5;
    GetWindowsDirectoryA(ebp9, 0x104);
    fun_401800(ecx, ebp9, ebp9, 0x104, v12, v10, v7, v185, v186, v6, a2, a3, a4, a5);
    eax187 = g410c94;
    ecx188 = 0xffffffff;
    edi189 = ebp9;
    if (!eax187) 
        goto addr_4032b3_158;
    eax20 = reinterpret_cast<void**>(0);
    esi166 = reinterpret_cast<void***>("Profiles\\Administrator\\Application Data");
    do {
        if (!ecx188) 
            break;
        --ecx188;
        ++edi189;
        ++esi166;
    } while (*reinterpret_cast<void***>(edi189));
    edi165 = edi189 - 1;
    ecx = reinterpret_cast<void**>(10);
    goto addr_4032f3_131;
    addr_4032b3_158:
    edx190 = g40e3e0;
    do {
        if (!ecx188) 
            break;
        --ecx188;
        ++edi189;
    } while (*reinterpret_cast<void***>(edi189));
    edi191 = edi189 - 1;
    *reinterpret_cast<void***>(edi191) = edx190;
    eax20 = g40e3e4;
    *reinterpret_cast<void***>(edi191 + 4) = eax20;
    ecx = g40e3e8;
    *reinterpret_cast<void***>(edi191 + 8) = ecx;
    edx192 = g40e3ec;
    *reinterpret_cast<void***>(edi191 + 12) = edx192;
    eax20 = g40e3f0;
    *reinterpret_cast<void***>(edi191 + 16) = eax20;
    goto addr_4032f5_5;
}

int32_t FindFirstFileA = 0xca2a;

void** fun_4061ec(void** a1, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7);

void** fun_4086f0(void** ecx, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7, void** a8, void** a9, void** a10);

void** fun_40603e(void** ecx, void** a2, void** a3) {
    void* ebp4;
    void** v5;
    void** eax6;
    int32_t eax7;
    int32_t v8;
    uint32_t eax9;
    uint32_t v10;
    void** v11;
    void** esi12;
    void** edi13;
    void** v14;
    void** v15;
    void** eax16;
    void** v17;
    void** v18;
    void** eax19;
    void** v20;
    void** eax21;
    void** v22;
    void** eax23;
    uint32_t* eax24;

    ebp4 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4);
    v5 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(ebp4) + 0xfffffec0);
    eax6 = reinterpret_cast<void**>(FindFirstFileA());
    if (!reinterpret_cast<int1_t>(eax6 == 0xffffffff)) {
        eax7 = v8 - 0x80;
        eax9 = reinterpret_cast<uint32_t>(-eax7);
        *reinterpret_cast<void***>(a3) = reinterpret_cast<void**>(eax9 - (eax9 + reinterpret_cast<uint1_t>(eax9 < eax9 + reinterpret_cast<uint1_t>(!!eax7))) & v10);
        v11 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(ebp4) + 0xfffffec4);
        eax16 = fun_4061ec(v11, esi12, a2, v5, edi13, v14, v15);
        *reinterpret_cast<void***>(a3 + 4) = eax16;
        v17 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(ebp4) + 0xfffffecc);
        eax19 = fun_4061ec(v17, v11, esi12, a2, v5, edi13, v18);
        *reinterpret_cast<void***>(a3 + 8) = eax19;
        v20 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(ebp4) + 0xfffffed4);
        eax21 = fun_4061ec(v20, v17, v11, esi12, a2, v5, edi13);
        *reinterpret_cast<void***>(a3 + 12) = eax21;
        *reinterpret_cast<void***>(a3 + 16) = v22;
        fun_4086f0(ecx, a3 + 20, reinterpret_cast<int32_t>(ebp4) + 0xfffffeec, v20, v17, v11, esi12, a2, v5, edi13);
        eax23 = eax6;
    } else {
        eax24 = reinterpret_cast<uint32_t*>(GetLastError());
        if (reinterpret_cast<uint32_t>(eax24) < 2) 
            goto addr_40607b_4;
        if (reinterpret_cast<uint32_t>(eax24) <= 3) 
            goto addr_406096_6;
        if (eax24 == 8) 
            goto addr_40608a_8; else 
            goto addr_406076_9;
    }
    addr_406105_10:
    return eax23;
    addr_40608a_8:
    g410cb8 = reinterpret_cast<uint32_t*>(12);
    addr_406085_11:
    eax23 = reinterpret_cast<void**>(0xffffffff);
    goto addr_406105_10;
    addr_406076_9:
    if (eax24 == 18) {
        addr_406096_6:
        g410cb8 = reinterpret_cast<uint32_t*>(2);
        goto addr_406085_11;
    } else {
        addr_40607b_4:
        g410cb8 = reinterpret_cast<uint32_t*>(22);
        goto addr_406085_11;
    }
}

int32_t fun_406108(void** ecx, void** a2, void** a3);

int32_t fun_4061cd(void** a1);

void fun_403030(void** ecx, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7, void** a8, void** a9, void** a10, void** a11);

void fun_4039c0(void** ecx, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7, void** a8, void** a9, void** a10, void** a11) {
    void** v12;
    void** v13;
    void** ebx14;
    void** eax15;
    void** ebx16;
    void** v17;
    void** ebp18;
    void** v19;
    void** esi20;
    void** v21;
    void** edi22;
    void** eax23;
    void** ebp24;
    int32_t eax25;
    void** eax26;
    void*** edi27;
    void** esi28;
    int1_t zf29;
    void*** edi30;
    void** esi31;
    int1_t zf32;
    int32_t eax33;
    void** eax34;
    int32_t eax35;
    void** ecx36;
    void** eax37;
    void** esi38;
    int32_t eax39;
    void** eax40;
    void** v41;
    int32_t eax42;
    void** eax43;
    void** ebp44;
    void*** eax45;
    void*** edi46;
    void*** esi47;
    int1_t zf48;
    void*** esi49;
    void*** edi50;
    int1_t zf51;
    int32_t eax52;

    v12 = reinterpret_cast<void**>(__return_address());
    v13 = ebx14;
    eax15 = fun_4056cd(0x118, 1, v13, v12, a2, a3);
    ebx16 = eax15;
    if (!ebx16) {
        addr_403ba2_2:
        return;
    } else {
        v17 = ebp18;
        v19 = esi20;
        v21 = edi22;
        eax23 = fun_40603e(ecx, "*.*", ebx16);
        ebp24 = eax23;
        if (ebp24 != 0xffffffff) {
            while (1) {
                if (!(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(ebx16)) & 16)) {
                    addr_403a70_5:
                    eax25 = fun_406108(ecx, ebp24, ebx16);
                    if (!eax25) 
                        continue; else 
                        break;
                } else {
                    eax26 = ebx16 + 20;
                    edi27 = reinterpret_cast<void***>(".");
                    esi28 = eax26;
                    ecx = reinterpret_cast<void**>(2);
                    zf29 = 1;
                    while (ecx) {
                        --ecx;
                        zf29 = *reinterpret_cast<void***>(esi28) == *edi27;
                        *edi27 = *reinterpret_cast<void***>(esi28);
                        ++edi27;
                        ++esi28;
                    }
                    if (zf29) 
                        goto addr_403a70_5;
                }
                edi30 = reinterpret_cast<void***>("..");
                esi31 = eax26;
                ecx = reinterpret_cast<void**>(3);
                zf32 = 1;
                while (ecx) {
                    --ecx;
                    zf32 = *reinterpret_cast<void***>(esi31) == *edi30;
                    *edi30 = *reinterpret_cast<void***>(esi31);
                    ++edi30;
                    ++esi31;
                }
                if (zf32) 
                    goto addr_403a70_5;
                eax33 = reinterpret_cast<int32_t>(SetCurrentDirectoryA(eax26));
                if (!eax33) 
                    goto addr_403a70_5;
                eax34 = fun_4056cd(0x104, 1, eax26, v21, v19, v17);
                if (!eax34) 
                    goto addr_403a70_5;
                GetCurrentDirectoryA(0x104, eax34, eax26);
                eax35 = fun_401070(ecx, eax34, 0x104, eax34, eax26);
                fun_405a1e(ecx, eax34, eax34, 0x104, eax34, eax26, v21, v19, v17, v13, v12, a2, a3, a4, a5, a6, a7, a8);
                if (eax35) 
                    goto addr_403a70_5;
                fun_4039c0(ecx, v17, 0x104, eax34, eax26, v21, v19, v17, v13, v12, a2);
                goto addr_403a70_5;
            }
            fun_4061cd(ebp24);
        }
        ecx36 = a2;
        eax37 = fun_40603e(ecx36, ecx36, ebx16);
        esi38 = eax37;
        if (esi38 != 0xffffffff) {
            do {
                if (!(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(ebx16)) & 16)) {
                    fun_405f0c(ebx16 + 20, v21, v19);
                }
                eax39 = fun_406108(ecx36, esi38, ebx16);
            } while (!eax39);
            fun_4061cd(esi38);
        }
        eax40 = fun_4056cd(0x104, 1, v21, v19, v17, v13);
        if (!eax40) 
            goto addr_403b8b_25;
        v41 = eax40;
        GetCurrentDirectoryA();
        eax42 = fun_401070(ecx36, eax40, 0x104, v41, v21);
        fun_405a1e(ecx36, eax40, eax40, 0x104, v41, v21, v19, v17, v13, v12, a2, a3, a4, a5, a6, a7, a8, a9);
        if (eax42) 
            goto addr_403b8b_25;
        v13 = reinterpret_cast<void**>(1);
        eax43 = fun_40603e(ecx36, "*.*", ebx16);
        ebp44 = eax43;
        if (ebp44 == 0xffffffff) 
            goto addr_403b78_28;
        do {
            if (!(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(ebx16)) & 16)) 
                break;
            eax45 = reinterpret_cast<void***>(ebx16 + 20);
            edi46 = reinterpret_cast<void***>(".");
            esi47 = eax45;
            ecx36 = reinterpret_cast<void**>(2);
            zf48 = 1;
            while (ecx36) {
                --ecx36;
                zf48 = *esi47 == *edi46;
                *edi46 = *esi47;
                ++edi46;
                ++esi47;
            }
            if (!zf48) {
                esi49 = eax45;
                edi50 = reinterpret_cast<void***>("..");
                ecx36 = reinterpret_cast<void**>(3);
                zf51 = 1;
                while (ecx36) {
                    --ecx36;
                    zf51 = *esi49 == *edi50;
                    *edi50 = *esi49;
                    ++edi50;
                    ++esi49;
                }
                if (!zf51) 
                    break;
            }
            eax52 = fun_406108(ecx36, ebp44, ebx16);
        } while (!eax52);
        goto addr_403b5d_39;
    }
    v13 = reinterpret_cast<void**>(0);
    addr_403b67_41:
    fun_4061cd(ebp44);
    if (!v13) {
        addr_403b8b_25:
        SetCurrentDirectoryA();
        fun_405a1e(ecx36, ebx16, "..", v21, v19, v17, v13, v12, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11);
        goto addr_403ba2_2;
    } else {
        addr_403b78_28:
        fun_403030(ecx36, 0x104, v41, v21, v19, v17, v13, v12, a2, a3, a4);
        fun_405a1e(ecx36, ebx16, 0x104, v41, v21, v19, v17, v13, v12, a2, a3, a4, a5, a6, a7, a8, a9, a10);
        goto v17;
    }
    addr_403b5d_39:
    goto addr_403b67_41;
}

int32_t FindClose = 0xca1e;

int32_t fun_4061cd(void** a1) {
    int32_t eax2;

    eax2 = reinterpret_cast<int32_t>(FindClose());
    if (eax2) {
        return 0;
    } else {
        g410cb8 = reinterpret_cast<uint32_t*>(22);
        return -1;
    }
}

int32_t FindNextFileA = 0xcfbe;

int32_t fun_406108(void** ecx, void** a2, void** a3) {
    void* ebp4;
    void** v5;
    int32_t eax6;
    int32_t eax7;
    int32_t v8;
    uint32_t eax9;
    uint32_t v10;
    void** v11;
    void** esi12;
    void** v13;
    void** v14;
    void** v15;
    void** eax16;
    void** v17;
    void** v18;
    void** v19;
    void** eax20;
    void** v21;
    void** v22;
    void** eax23;
    void** v24;
    void** v25;
    uint32_t* eax26;

    ebp4 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4);
    v5 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(ebp4) + 0xfffffec0);
    eax6 = reinterpret_cast<int32_t>(FindNextFileA(a2, v5));
    if (eax6) {
        eax7 = v8 - 0x80;
        eax9 = reinterpret_cast<uint32_t>(-eax7);
        *reinterpret_cast<void***>(a3) = reinterpret_cast<void**>(eax9 - (eax9 + reinterpret_cast<uint1_t>(eax9 < eax9 + reinterpret_cast<uint1_t>(!!eax7))) & v10);
        v11 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(ebp4) + 0xfffffec4);
        eax16 = fun_4061ec(v11, esi12, a2, v5, v13, v14, v15);
        *reinterpret_cast<void***>(a3 + 4) = eax16;
        v17 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(ebp4) + 0xfffffecc);
        eax20 = fun_4061ec(v17, v11, esi12, a2, v5, v18, v19);
        *reinterpret_cast<void***>(a3 + 8) = eax20;
        v21 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(ebp4) + 0xfffffed4);
        eax23 = fun_4061ec(v21, v17, v11, esi12, a2, v5, v22);
        *reinterpret_cast<void***>(a3 + 12) = eax23;
        *reinterpret_cast<void***>(a3 + 16) = v24;
        fun_4086f0(ecx, a3 + 20, reinterpret_cast<int32_t>(ebp4) + 0xfffffeec, v21, v17, v11, esi12, a2, v5, v25);
        return 0;
    }
    eax26 = reinterpret_cast<uint32_t*>(GetLastError(a2, v5));
    if (reinterpret_cast<uint32_t>(eax26) < 2) 
        goto addr_406141_4;
    if (reinterpret_cast<uint32_t>(eax26) <= 3) 
        goto addr_40615c_6;
    if (eax26 == 8) {
        g410cb8 = reinterpret_cast<uint32_t*>(12);
    } else {
        if (eax26 == 18) {
            addr_40615c_6:
            g410cb8 = reinterpret_cast<uint32_t*>(2);
        } else {
            addr_406141_4:
            g410cb8 = reinterpret_cast<uint32_t*>(22);
        }
    }
    return -1;
}

void fun_403030(void** ecx, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7, void** a8, void** a9, void** a10, void** a11) {
    void** esi12;
    void** eax13;

    eax13 = fun_4056cd(0x104, 1, esi12, __return_address(), a2, a3);
    if (!eax13) {
        SetCurrentDirectoryA();
        goto esi12;
    } else {
        GetCurrentDirectoryA();
        SetCurrentDirectoryA();
        fun_405ee2(eax13, "..", 0x104, eax13);
        fun_405a1e(ecx, eax13, eax13, "..", 0x104, eax13, esi12, __return_address(), a2, a3, a4, a5, a6, a7, a8, a9, a10, a11);
        goto 0x104;
    }
}

struct s4 {
    signed char[1] pad1;
    void** f1;
};

struct s4* fun_403880(void** a1, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7, void** a8, void** a9, void** a10, void** a11, void** a12) {
    void** v13;
    void** v14;
    void** esi15;
    void** esi16;
    void** v17;
    void** edi18;
    void** eax19;
    void** v20;
    void** edi21;
    uint32_t ecx22;
    void** v23;
    void** ebp24;
    void** ebp25;
    void** v26;
    void** ebx27;
    void** ecx28;
    void** eax29;
    void** ebx30;
    void* eax31;
    void** edi32;
    void* edx33;
    void** eax34;
    uint32_t ecx35;
    void** v36;
    void** eax37;
    void** esi38;
    void* edx39;
    void** edi40;
    void** v41;
    void* ecx42;
    void* ebx43;
    uint32_t ecx44;
    void** ecx45;
    void** edi46;
    uint32_t ecx47;
    void** eax48;
    void* edx49;
    void** edi50;
    uint32_t ecx51;
    void** esi52;
    void** edi53;
    void** ecx54;
    struct s4* ebp55;
    void** eax56;
    void** edx57;
    uint32_t ecx58;
    void** eax59;
    void* edx60;

    v13 = reinterpret_cast<void**>(__return_address());
    v14 = esi15;
    esi16 = a2;
    v17 = edi18;
    eax19 = fun_4056cd(0xffdc, 1, v17, v14, v13, a1);
    v20 = eax19;
    if (!eax19) {
        if (a1) {
            fun_405f40(a3, a1, esi16, a3, v17, v14, v13, a1, v20);
        }
        edi21 = esi16;
        ecx22 = 0xffffffff;
        do {
            if (!ecx22) 
                break;
            --ecx22;
            ++edi21;
        } while (*reinterpret_cast<void***>(edi21));
        return ~ecx22 - 1;
    }
    v23 = ebp24;
    ebp25 = eax19;
    v26 = ebx27;
    while (eax29 = fun_4054e0(ecx28, esi16, 35, v26, v23, v17), ebx30 = eax29, !!ebx30) {
        eax31 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(eax29) - reinterpret_cast<unsigned char>(esi16));
        edi32 = ebp25;
        ebp25 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(ebp25) + reinterpret_cast<uint32_t>(eax31));
        edx33 = eax31;
        eax34 = ebx30 + 1;
        ecx35 = reinterpret_cast<uint32_t>(eax31) >> 2;
        while (ecx35) {
            --ecx35;
            *reinterpret_cast<void***>(edi32) = *reinterpret_cast<void***>(esi16);
            edi32 = edi32 + 4;
            esi16 = esi16 + 4;
        }
        ecx28 = reinterpret_cast<void**>(reinterpret_cast<uint32_t>(edx33) & 3);
        v36 = eax34;
        while (ecx28) {
            --ecx28;
            *reinterpret_cast<void***>(edi32) = *reinterpret_cast<void***>(esi16);
            ++edi32;
            ++esi16;
        }
        *reinterpret_cast<void***>(ebp25) = reinterpret_cast<void**>(0);
        eax37 = fun_4054e0(ecx28, v36, 35, v26, v23, v17);
        if (!eax37) 
            goto addr_403952_17;
        esi38 = ebx30;
        edx39 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(eax37) - reinterpret_cast<unsigned char>(ebx30));
        edi40 = ebp25;
        v41 = ebp25;
        ecx42 = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(edx39) + 1);
        ebx43 = ecx42;
        ecx44 = reinterpret_cast<uint32_t>(ecx42) >> 2;
        while (ecx44) {
            --ecx44;
            *reinterpret_cast<void***>(edi40) = *reinterpret_cast<void***>(esi38);
            edi40 = edi40 + 4;
            esi38 = esi38 + 4;
        }
        ecx45 = reinterpret_cast<void**>(reinterpret_cast<uint32_t>(ebx43) & 3);
        while (ecx45) {
            --ecx45;
            *reinterpret_cast<void***>(edi40) = *reinterpret_cast<void***>(esi38);
            ++edi40;
            ++esi38;
        }
        *reinterpret_cast<signed char*>(reinterpret_cast<uint32_t>(edx39) + reinterpret_cast<unsigned char>(ebp25) + 1) = 0;
        esi16 = eax37 + 1;
        fun_403080(ecx45, v41, v26, v23, v17);
        edi46 = ebp25;
        ecx47 = 0xffffffff;
        do {
            if (!ecx47) 
                break;
            --ecx47;
            ++edi46;
            ++esi16;
        } while (*reinterpret_cast<void***>(edi46));
        ecx28 = reinterpret_cast<void**>(~ecx47 - 1);
        ebp25 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(ebp25) + reinterpret_cast<unsigned char>(ecx28));
    }
    eax48 = esi16;
    edx49 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(ebp25) - reinterpret_cast<unsigned char>(esi16));
    do {
        ecx28 = *reinterpret_cast<void***>(eax48);
        *reinterpret_cast<void***>(reinterpret_cast<uint32_t>(edx49) + reinterpret_cast<unsigned char>(eax48)) = ecx28;
        ++eax48;
    } while (ecx28);
    addr_403962_31:
    edi50 = ebp25;
    ecx51 = 0xffffffff;
    esi52 = v20;
    do {
        if (!ecx51) 
            break;
        --ecx51;
        ++edi50;
        ++esi52;
    } while (*reinterpret_cast<void***>(edi50));
    edi53 = a1;
    ecx54 = reinterpret_cast<void**>(~ecx51 - 1);
    ebp55 = reinterpret_cast<struct s4*>(reinterpret_cast<unsigned char>(ebp25) + reinterpret_cast<unsigned char>(ecx54) - reinterpret_cast<unsigned char>(esi52));
    if (edi53 && ((ecx54 = a3, !!ecx54) && (*reinterpret_cast<void***>(edi53) = reinterpret_cast<void**>(0), !!ebp55))) {
        eax56 = reinterpret_cast<void**>(&ebp55->f1);
        if (reinterpret_cast<unsigned char>(eax56) < reinterpret_cast<unsigned char>(ecx54)) {
            ecx54 = eax56;
        }
        edx57 = ecx54;
        ecx58 = reinterpret_cast<unsigned char>(ecx54) >> 2;
        while (ecx58) {
            --ecx58;
            *reinterpret_cast<void***>(edi53) = *reinterpret_cast<void***>(esi52);
            edi53 = edi53 + 4;
            esi52 = esi52 + 4;
        }
        ecx54 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(edx57) & 3);
        while (ecx54) {
            --ecx54;
            *reinterpret_cast<void***>(edi53) = *reinterpret_cast<void***>(esi52);
            ++edi53;
            ++esi52;
        }
        esi52 = v20;
    }
    fun_405a1e(ecx54, esi52, v23, v17, v14, v13, a1, v20, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12);
    return ebp55;
    addr_403952_17:
    eax59 = ebx30;
    edx60 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(ebp25) - reinterpret_cast<unsigned char>(ebx30));
    do {
        ecx28 = *reinterpret_cast<void***>(eax59);
        *reinterpret_cast<void***>(reinterpret_cast<uint32_t>(edx60) + reinterpret_cast<unsigned char>(eax59)) = ecx28;
        ++eax59;
    } while (ecx28);
    goto addr_403962_31;
}

int32_t CreateFileA = 0xca4c;

void** fun_401530(void** a1, int32_t a2, void** a3, void** a4, void** a5, void** a6) {
    int32_t eax7;
    int32_t eax8;

    eax7 = a2 - 1;
    if (eax7) {
        if (!(eax7 - 1)) {
        }
    }
    eax8 = reinterpret_cast<int32_t>(CreateFileA());
    if (eax8 == -1) {
        GetLastError();
    }
    goto a1;
}

void** g4108ec = reinterpret_cast<void**>(1);

void** g4106e0 = reinterpret_cast<void**>(0xea);

void** fun_408af1(void** ecx, void** a2, void** a3);

void** fun_4088a2(void** ecx, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7, void** a8, int32_t a9, void** a10, void** a11, void** a12, void** a13, ...);

void** fun_406250(void** ecx, void** a2) {
    void*** ebp3;
    void** v4;
    int1_t zf5;
    int1_t less_or_equal6;
    void** eax7;
    void** eax8;
    void** edx9;
    int32_t eax10;
    void** v11;
    void** ecx12;
    void** v13;
    void** v14;
    void** ebx15;
    void** ebp16;
    void** eax17;
    void** eax18;

    ebp3 = reinterpret_cast<void***>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4);
    v4 = ecx;
    zf5 = g410d18 == 0;
    if (!zf5) {
        if (reinterpret_cast<signed char>(a2) < reinterpret_cast<signed char>(0x100)) {
            less_or_equal6 = reinterpret_cast<signed char>(g4108ec) <= reinterpret_cast<signed char>(1);
            if (less_or_equal6) {
                eax7 = g4106e0;
                eax7 = *reinterpret_cast<void***>(eax7 + reinterpret_cast<unsigned char>(a2) * 2);
                eax8 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(eax7) & 2);
            } else {
                eax8 = fun_408af1(ecx, a2, 2);
            }
            if (!eax8) 
                goto addr_4062aa_7;
        }
        edx9 = g4106e0;
        eax10 = reinterpret_cast<signed char>(a2) >> 8;
        if (!(*reinterpret_cast<unsigned char*>(reinterpret_cast<uint32_t>(edx9 + *reinterpret_cast<unsigned char*>(&eax10) * 2) + 1) & 0x80)) {
            v11 = reinterpret_cast<void**>(1);
        } else {
            v11 = reinterpret_cast<void**>(2);
        }
        ecx12 = reinterpret_cast<void**>(ebp3 + 0xfffffffc);
        v13 = reinterpret_cast<void**>(ebp3 + 8);
        v14 = g410d18;
        eax17 = fun_4088a2(ecx12, v14, 0x200, v13, v11, ecx12, 3, 0, 1, ebx15, v4, ebp16, __return_address(), ecx12, v14, 0x200, v13, v11, ecx12, 3, 0, 1, ebx15, v4, ebp16, __return_address());
        if (!eax17) {
            addr_4062aa_7:
            eax18 = a2;
        } else {
            if (!reinterpret_cast<int1_t>(eax17 == 1)) {
                eax18 = reinterpret_cast<void**>(static_cast<uint32_t>(*reinterpret_cast<unsigned char*>(&v4 + 1)) << 8 | static_cast<uint32_t>(*reinterpret_cast<unsigned char*>(&v4)));
            } else {
                eax18 = reinterpret_cast<void**>(static_cast<uint32_t>(*reinterpret_cast<unsigned char*>(&v4)));
            }
        }
    } else {
        eax18 = a2;
        if (reinterpret_cast<signed char>(eax18) >= reinterpret_cast<signed char>(97) && reinterpret_cast<signed char>(eax18) <= reinterpret_cast<signed char>(0x7a)) {
            eax18 = eax18 - 32;
        }
    }
    return eax18;
}

int32_t g410c40 = 0;

void fun_401dc0() {
    int32_t eax1;

    eax1 = g410c40;
    if (eax1) {
        eax1(1);
    }
    return;
}

int32_t LoadIconA = 0xcd2c;

void fun_4041d0(int32_t a1, int32_t a2, int32_t a3, int32_t a4);

int32_t LoadCursorA = 0xcd1e;

int32_t GetStockObject = 0xcdb4;

int32_t RegisterClassA = 0xcd0c;

int32_t fun_405140() {
    void** eax1;
    int32_t eax2;
    int32_t eax3;
    int32_t eax4;

    eax1 = g410cac;
    eax2 = reinterpret_cast<int32_t>(LoadIconA(eax1, 0x320, 3, fun_4041d0, 0, 0, eax1));
    eax3 = reinterpret_cast<int32_t>(LoadCursorA(0, 0x7f00, eax1, 0x320, 3, fun_4041d0, 0, eax2, eax1));
    eax4 = reinterpret_cast<int32_t>(GetStockObject(5, 0, 0x7f00, eax1, 0x320, 3, fun_4041d0, eax3, eax2, eax1));
    RegisterClassA(reinterpret_cast<int32_t>(__zero_stack_offset()) - 40 - 4 - 4 - 4 + 4 - 4 - 4 - 4 + 4 - 4 - 4 + 4, 5, 0, 0x7f00, eax1, 0x320, 3, fun_4041d0, eax4, 0);
    goto "UninstItClass";
}

int32_t GetSystemMetrics = 0xcd4a;

int32_t CreateWindowExA = 0xcd38;

int32_t fun_4051c0(void** a1, void** a2, void** a3) {
    int32_t edi4;
    void** edi5;
    void** esi6;
    int32_t eax7;
    void** esi8;
    int32_t edx9;
    int32_t eax10;
    void** eax11;
    int32_t edx12;
    void** ecx13;
    void** eax14;
    void** eax15;

    edi4 = GetSystemMetrics;
    edi4(0, edi5, esi6, __return_address());
    __asm__("cdq ");
    if (!__undefined()) {
        eax7 = reinterpret_cast<int32_t>(edi4(0, 0, edi5, esi6, __return_address()));
        __asm__("cdq ");
        esi8 = reinterpret_cast<void**>(eax7 - 0x140 - edx9 >> 1);
    } else {
        esi8 = reinterpret_cast<void**>(0);
    }
    edi4(1, 0, edi5, esi6, __return_address());
    __asm__("cdq ");
    if (!__undefined()) {
        eax10 = reinterpret_cast<int32_t>(edi4(1, 1, 0, edi5, esi6, __return_address()));
        __asm__("cdq ");
        eax11 = reinterpret_cast<void**>(eax10 - 0xc8 - edx12 >> 1);
    } else {
        eax11 = reinterpret_cast<void**>(0);
    }
    ecx13 = g410cac;
    eax14 = fun_402060(0, 0, 0x2cf0000, esi8, eax11, 0x140, 0xc8, 0, 0, ecx13, 0, 1, 0, edi5, esi6, __return_address(), a1, a2);
    eax15 = reinterpret_cast<void**>(CreateWindowExA());
    g410ca8 = eax15;
    goto eax14;
}

struct s5 {
    void** f0;
    signed char[3] pad4;
    int32_t f4;
};

void** fun_402060(int32_t a1, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7, void** a8, void** a9, void** a10, void** a11, void** a12, void** a13, void** a14, void** a15, void** a16, void** a17, void** a18) {
    struct s5* eax19;
    void** ecx20;
    void** edx21;
    void** eax22;

    if (a1 >= 1) 
        goto addr_40209d_2;
    eax19 = *reinterpret_cast<struct s5**>(a1 * 4 + 0x410c64);
    if (!eax19) 
        goto addr_40209d_2;
    ecx20 = reinterpret_cast<void**>(0);
    if (!eax19->f0) 
        goto addr_40209d_2;
    edx21 = a2;
    do {
        if (ecx20 == edx21) 
            break;
        eax19 = reinterpret_cast<struct s5*>(&eax19->f4);
        ++ecx20;
    } while (eax19->f4);
    goto addr_402090_8;
    eax22 = eax19->f0;
    if (eax22) {
        addr_4020a2_10:
        return eax22;
    } else {
        addr_40209d_2:
        eax22 = reinterpret_cast<void**>(0x410cb0);
        goto addr_4020a2_10;
    }
    addr_402090_8:
    return 0x410cb0;
}

void** g410c84 = reinterpret_cast<void**>(0);

void** g410c80 = reinterpret_cast<void**>(0);

void** fun_4024e0(void** ecx, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7) {
    void** v8;
    void** ecx9;
    void** v10;
    void** ebx11;
    void** ebx12;
    void** eax13;
    void** v14;
    void** ebp15;
    void** v16;
    void** esi17;
    void** v18;
    void** edi19;
    void** v20;
    void** ebp21;
    void** edx22;
    void** ecx23;
    void** al24;
    void** ecx25;
    void** al26;
    void** ecx27;
    void** edi28;
    uint32_t ecx29;
    uint32_t ecx30;
    void*** esi31;
    void** edi32;
    uint32_t edx33;
    uint32_t ecx34;
    void** edi35;
    uint32_t ecx36;
    uint32_t ecx37;
    void** eax38;
    int32_t eax39;
    void*** edi40;
    uint32_t ecx41;
    uint32_t ecx42;
    void** edi43;
    uint32_t edx44;
    uint32_t ecx45;
    void** edi46;
    uint32_t ecx47;
    uint32_t ecx48;
    void** ecx49;
    void** eax50;

    v8 = reinterpret_cast<void**>(__return_address());
    ecx9 = g410c84;
    v10 = ebx11;
    ebx12 = g410c80;
    eax13 = reinterpret_cast<void**>(0);
    v14 = ebp15;
    v16 = esi17;
    v18 = edi19;
    v20 = reinterpret_cast<void**>(0);
    if (reinterpret_cast<unsigned char>(ecx9) <= reinterpret_cast<unsigned char>(0)) {
        addr_4025e2_2:
        return eax13;
    } else {
        do {
            ebp21 = *reinterpret_cast<void***>(ebx12);
            edx22 = g410c54;
            ecx23 = *reinterpret_cast<void***>(ebp21);
            if (!reinterpret_cast<int1_t>(*reinterpret_cast<void***>(ecx23) == 46)) {
                do {
                    al24 = *reinterpret_cast<void***>(ecx23);
                    ++ecx23;
                    *reinterpret_cast<void***>(edx22) = al24;
                    ++edx22;
                } while (al24);
            } else {
                ecx25 = g410c50;
                do {
                    al26 = *reinterpret_cast<void***>(ecx25);
                    ++ecx25;
                    *reinterpret_cast<void***>(edx22) = al26;
                    ++edx22;
                } while (al26);
                if (reinterpret_cast<int1_t>(*reinterpret_cast<void***>(*reinterpret_cast<void***>(ebp21) + 1) == 92)) 
                    goto addr_402528_8;
            }
            addr_402560_9:
            if (*reinterpret_cast<void***>(*reinterpret_cast<void***>(ebp21 + 4))) {
                ecx27 = g410c54;
                fun_401800(ecx27, ecx27, v18, v16, v14, v10, v20, v8, a2, a3, a4, a5, a6, a7);
                edi28 = *reinterpret_cast<void***>(ebp21 + 4);
                ecx29 = 0xffffffff;
                do {
                    if (!ecx29) 
                        break;
                    --ecx29;
                    ++edi28;
                } while (*reinterpret_cast<void***>(edi28));
                ecx30 = ~ecx29;
                esi31 = reinterpret_cast<void***>(reinterpret_cast<unsigned char>(edi28) - ecx30);
                edi32 = g410c54;
                edx33 = ecx30;
                ecx34 = 0xffffffff;
                do {
                    if (!ecx34) 
                        break;
                    --ecx34;
                    ++edi32;
                    ++esi31;
                } while (*reinterpret_cast<void***>(edi32));
                edi35 = edi32 - 1;
                ecx36 = edx33 >> 2;
                while (ecx36) {
                    --ecx36;
                    *reinterpret_cast<void***>(edi35) = *esi31;
                    edi35 = edi35 + 4;
                    esi31 = esi31 + 4;
                }
                ecx37 = edx33 & 3;
                while (ecx37) {
                    --ecx37;
                    *reinterpret_cast<void***>(edi35) = *esi31;
                    ++edi35;
                    ++esi31;
                }
                if (!(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(ebp21 + 8)) & 8)) 
                    continue;
                eax38 = g410c54;
                eax39 = fun_4016b0(eax38, v18);
                if (eax39) 
                    goto addr_4025dd_24; else 
                    continue;
            }
            addr_402528_8:
            edi40 = reinterpret_cast<void***>(*reinterpret_cast<void***>(ebp21) + 2);
            ecx41 = 0xffffffff;
            do {
                if (!ecx41) 
                    break;
                --ecx41;
                ++edi40;
            } while (*edi40);
            ecx42 = ~ecx41;
            esi31 = reinterpret_cast<void***>(reinterpret_cast<uint32_t>(edi40) - ecx42);
            edi43 = g410c54;
            edx44 = ecx42;
            ecx45 = 0xffffffff;
            do {
                if (!ecx45) 
                    break;
                --ecx45;
                ++edi43;
                ++esi31;
            } while (*reinterpret_cast<void***>(edi43));
            edi46 = edi43 - 1;
            ecx47 = edx44 >> 2;
            while (ecx47) {
                --ecx47;
                *reinterpret_cast<void***>(edi46) = *esi31;
                edi46 = edi46 + 4;
                esi31 = esi31 + 4;
            }
            ecx48 = edx44 & 3;
            while (ecx48) {
                --ecx48;
                *reinterpret_cast<void***>(edi46) = *esi31;
                ++edi46;
                ++esi31;
            }
            goto addr_402560_9;
            ecx49 = g410c84;
            eax50 = v20 + 1;
            ebx12 = ebx12 + 4;
            v20 = eax50;
        } while (reinterpret_cast<unsigned char>(eax50) < reinterpret_cast<unsigned char>(ecx49));
    }
    return 0;
    addr_4025dd_24:
    eax13 = reinterpret_cast<void**>(1);
    goto addr_4025e2_2;
}

int32_t fun_401e40(void** ecx, void** a2, void** a3, void* a4);

int32_t fun_401dd0(void** a1, void** a2, void** a3) {
    int32_t eax4;
    void* esp5;
    int32_t eax6;
    int32_t* esp7;
    int32_t v8;
    int32_t esi9;
    int32_t esi10;
    void* esp11;
    int32_t eax12;

    eax4 = fun_401e40(a2, a1, a2, reinterpret_cast<int32_t>(__zero_stack_offset()) + 8);
    esp5 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4 - 4 - 4 - 4 + 4 + 12);
    if (!eax4) {
        return 0;
    } else {
        if (a3 && (eax6 = fun_401fb0(reinterpret_cast<int32_t>(esp5) + 8), esp5 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp5) - 4 - 4 + 4 + 4), !!eax6)) {
            esp7 = reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(esp5) - 4);
            v8 = esi9;
            esi10 = Sleep;
            do {
                fun_4022b0(0, v8);
                esi10();
                esp11 = reinterpret_cast<void*>(esp7 - 1 - 1 + 1 + 1 - 1 - 1 + 1);
                eax12 = fun_401fb0(reinterpret_cast<int32_t>(esp11) + 12);
                esp7 = reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(esp11) - 4 - 4 + 4 + 4);
            } while (eax12);
        }
        return 1;
    }
}

void* g410c7c = reinterpret_cast<void*>(0);

void** g410c78 = reinterpret_cast<void**>(0);

void** g410c98 = reinterpret_cast<void**>(0);

void fun_402c00(void** a1, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7) {
    void** v8;
    void* eax9;
    void** v10;
    void** ebx11;
    void* ebx12;
    void** v13;
    void** ebp14;
    void** ebp15;
    void** v16;
    void** esi17;
    void** v18;
    void** edi19;
    void** esi20;
    void** ecx21;
    void** edx22;
    void** al23;
    void** ecx24;
    void** v25;
    void** edi26;
    uint32_t ecx27;
    uint32_t ecx28;
    void*** esi29;
    void** edi30;
    uint32_t edx31;
    uint32_t ecx32;
    void** edi33;
    uint32_t ecx34;
    uint32_t ecx35;
    void** eax36;
    void** ecx37;
    void** edx38;
    void* eax39;
    void* eax40;
    void* eax41;

    v8 = reinterpret_cast<void**>(__return_address());
    eax9 = g410c7c;
    v10 = ebx11;
    ebx12 = reinterpret_cast<void*>(0);
    v13 = ebp14;
    ebp15 = g410c78;
    if (eax9) {
        v16 = esi17;
        v18 = edi19;
        do {
            esi20 = *reinterpret_cast<void***>(ebp15);
            if (*reinterpret_cast<void***>(*reinterpret_cast<void***>(esi20 + 12))) {
                ecx21 = *reinterpret_cast<void***>(esi20 + 4);
                edx22 = g410c54;
                do {
                    al23 = *reinterpret_cast<void***>(ecx21);
                    ++ecx21;
                    *reinterpret_cast<void***>(edx22) = al23;
                    ++edx22;
                } while (al23);
                ecx24 = g410c54;
                v25 = ecx24;
                fun_401800(ecx24, v25, v18, v16, v13, v10, v8, a1, a2, a3, a4, a5, a6, a7);
                edi26 = *reinterpret_cast<void***>(esi20 + 12);
                ecx27 = 0xffffffff;
                do {
                    if (!ecx27) 
                        break;
                    --ecx27;
                    ++edi26;
                } while (*reinterpret_cast<void***>(edi26));
                ecx28 = ~ecx27;
                esi29 = reinterpret_cast<void***>(reinterpret_cast<unsigned char>(edi26) - ecx28);
                edi30 = g410c54;
                edx31 = ecx28;
                ecx32 = 0xffffffff;
                do {
                    if (!ecx32) 
                        break;
                    --ecx32;
                    ++edi30;
                    ++esi29;
                } while (*reinterpret_cast<void***>(edi30));
                edi33 = edi30 - 1;
                ecx34 = edx31 >> 2;
                while (ecx34) {
                    --ecx34;
                    *reinterpret_cast<void***>(edi33) = *esi29;
                    edi33 = edi33 + 4;
                    esi29 = esi29 + 4;
                }
                ecx35 = edx31 & 3;
                while (ecx35) {
                    --ecx35;
                    *reinterpret_cast<void***>(edi33) = *esi29;
                    ++edi33;
                    ++esi29;
                }
                eax36 = g410c54;
                fun_405f0c(eax36, v25, v18);
            }
            ecx37 = g410c98;
            if (ecx37) {
                edx38 = g410c84;
                eax39 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(edx38) + reinterpret_cast<uint32_t>(ebx12));
                eax40 = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(eax39) + reinterpret_cast<uint32_t>(eax39) * 4);
                fun_402340((reinterpret_cast<uint32_t>(eax40) + reinterpret_cast<uint32_t>(eax40) * 4 << 2) / reinterpret_cast<unsigned char>(ecx37));
            }
            eax41 = g410c7c;
            ebx12 = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(ebx12) + 1);
            ebp15 = ebp15 + 4;
        } while (reinterpret_cast<uint32_t>(ebx12) < reinterpret_cast<uint32_t>(eax41));
    }
    return;
}

void fun_402cc0() {
    void* eax1;
    void** v2;
    void** ebp3;
    void** ebp4;
    void** v5;
    void** edi6;
    void* edi7;
    void** v8;
    void** ebx9;
    void** ebx10;
    void*** esp11;
    void** v12;
    void** esi13;
    void** esi14;
    void** ecx15;
    int32_t eax16;
    void** v17;
    int32_t eax18;
    void** v19;
    void* esp20;
    void** v21;
    void** v22;
    void* esp23;
    void** edx24;
    void** ecx25;
    void** eax26;
    void* esp27;
    void** v28;
    void** eax29;
    void** eax30;
    void* esp31;
    void** v32;
    void** eax33;
    void** v34;
    void** v35;
    void** eax36;
    void** eax37;
    void** v38;
    void** eax39;
    void** ecx40;
    void** edx41;
    void* eax42;
    void* eax43;
    void* eax44;

    eax1 = g410c7c;
    v2 = ebp3;
    ebp4 = g410c78;
    v5 = edi6;
    edi7 = reinterpret_cast<void*>(0);
    if (eax1) {
        v8 = ebx9;
        ebx10 = SetCurrentDirectoryA;
        esp11 = reinterpret_cast<void***>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 0x108 - 4 - 4 - 4 - 4);
        v12 = esi13;
        do {
            esi14 = *reinterpret_cast<void***>(ebp4);
            if (*reinterpret_cast<void***>(*reinterpret_cast<void***>(esi14 + 4))) {
                while ((ecx15 = *reinterpret_cast<void***>(esi14 + 4), eax16 = fun_401070(ecx15, ecx15, v12, v8, v5), esp11 = esp11 - 4 - 4 + 4 + 4, !eax16) && (!*reinterpret_cast<void***>(*reinterpret_cast<void***>(esi14 + 8)) || (v17 = *reinterpret_cast<void***>(esi14 + 8), eax18 = fun_401070(ecx15, v17, v12, v8, v5), esp11 = esp11 - 4 - 4 + 4 + 4, !eax18))) {
                    v19 = reinterpret_cast<void**>(esp11 + 16);
                    GetCurrentDirectoryA(0x104, v19);
                    esp20 = reinterpret_cast<void*>(esp11 - 4 - 4 - 4 + 4);
                    v21 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(esp20) + 16);
                    fun_401840(ecx15, v21, 0x104, v19, v12, v8, v5, v2, v22);
                    esp23 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp20) - 4 - 4 + 4);
                    edx24 = *reinterpret_cast<void***>(esi14 + 4);
                    ecx25 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(esp23) + 20);
                    eax26 = fun_4052b0(ecx25, edx24, ecx25, v21, 0x104, v19, v12, v8);
                    esp27 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp23) - 4 - 4 - 4 + 4 + 12);
                    if (!eax26) {
                        ebx10("..", 0x104, v19);
                        esp27 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp27) - 4 - 4 + 4);
                    }
                    v28 = *reinterpret_cast<void***>(esi14 + 4);
                    fun_405ee2(v28, 0x104, v19, v12);
                    eax29 = *reinterpret_cast<void***>(esi14 + 8);
                    esp11 = reinterpret_cast<void***>(reinterpret_cast<int32_t>(esp27) - 4 - 4 + 4 + 4);
                    if (*reinterpret_cast<void***>(eax29)) {
                        ecx25 = reinterpret_cast<void**>(esp11 + 16);
                        eax30 = fun_4052b0(ecx25, eax29, ecx25, 0x104, v19, v12, v8, v5);
                        esp31 = reinterpret_cast<void*>(esp11 - 4 - 4 - 4 + 4 + 8);
                        if (!eax30) {
                            ebx10("..", 0x104, v19);
                            esp31 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp31) - 4 - 4 + 4);
                        }
                        v32 = *reinterpret_cast<void***>(esi14 + 8);
                        fun_405ee2(v32, 0x104, v19, v12);
                        esp11 = reinterpret_cast<void***>(reinterpret_cast<int32_t>(esp31) - 4 - 4 + 4 + 4);
                    }
                    if (!*reinterpret_cast<void***>(esi14)) 
                        break;
                    eax33 = *reinterpret_cast<void***>(esi14) - 1;
                    *reinterpret_cast<void***>(esi14) = eax33;
                    v34 = *reinterpret_cast<void***>(esi14 + 4);
                    eax36 = fun_4055a0(ecx25, v34, 92, 0x104, v19, v12, v8, v5, v2, v35);
                    esp11 = esp11 - 4 - 4 - 4 + 4 + 8;
                    if (!eax36) 
                        break;
                    *reinterpret_cast<void***>(eax36) = reinterpret_cast<void**>(0);
                    eax37 = *reinterpret_cast<void***>(esi14 + 8);
                    if (!*reinterpret_cast<void***>(eax37)) 
                        continue;
                    eax39 = fun_4055a0(ecx25, eax37, 92, 0x104, v19, v12, v8, v5, v2, v38);
                    esp11 = esp11 - 4 - 4 - 4 + 4 + 8;
                    if (!eax39) 
                        break;
                    *reinterpret_cast<void***>(eax39) = reinterpret_cast<void**>(0);
                }
            }
            ecx40 = g410c98;
            if (ecx40) {
                edx41 = g410c84;
                eax42 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(edx41) + reinterpret_cast<uint32_t>(edi7));
                eax43 = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(eax42) + reinterpret_cast<uint32_t>(eax42) * 4);
                fun_402340((reinterpret_cast<uint32_t>(eax43) + reinterpret_cast<uint32_t>(eax43) * 4 << 2) / reinterpret_cast<unsigned char>(ecx40));
                esp11 = esp11 - 4 - 4 + 4 + 4;
            }
            eax44 = g410c7c;
            edi7 = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(edi7) + 1);
            ebp4 = ebp4 + 4;
        } while (reinterpret_cast<uint32_t>(edi7) < reinterpret_cast<uint32_t>(eax44));
    }
    return;
}

void** g410c74 = reinterpret_cast<void**>(0);

void** g410c70 = reinterpret_cast<void**>(0);

void fun_402f10(void** ecx, void** a2) {
    void** v3;
    void** v4;
    void** eax5;
    void** v6;
    void** ebx7;
    void** ebx8;
    void** v9;
    void** ebp10;
    void** ebp11;
    void** v12;
    void** esi13;
    void*** esp14;
    void** v15;
    void** edi16;
    void** esi17;
    void** eax18;
    void** eax19;
    void** eax20;
    void** eax21;
    void** eax22;
    void* edx23;
    void* eax24;
    void* eax25;
    void** ecx26;
    void** eax27;
    void* esp28;
    int32_t eax29;
    void** edx30;
    void** v31;
    void** eax32;
    void** v33;
    void** eax34;
    void** v35;
    int32_t eax36;
    void** v37;
    void** eax38;

    v3 = reinterpret_cast<void**>(__return_address());
    v4 = ecx;
    eax5 = g410c74;
    v6 = ebx7;
    ebx8 = g410c70;
    v9 = ebp10;
    ebp11 = reinterpret_cast<void**>(0);
    if (eax5) {
        v12 = esi13;
        esp14 = reinterpret_cast<void***>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4 - 4 - 4 - 4 - 4);
        v15 = edi16;
        do {
            esi17 = *reinterpret_cast<void***>(ebx8);
            eax18 = *reinterpret_cast<void***>(esi17 + 4);
            if (!*reinterpret_cast<void***>(eax18) || ((eax19 = fun_4052b0(ecx, eax18, "Software", v15, v12, v9, v6, v4), esp14 = esp14 - 4 - 4 - 4 + 4 + 8, eax19 == 0) || (eax20 = *reinterpret_cast<void***>(esi17 + 4), eax21 = fun_4052b0(ecx, eax20, "System", v15, v12, v9, v6, v4), esp14 = esp14 - 4 - 4 - 4 + 4 + 8, eax21 == 0))) {
                addr_402fe7_4:
                ecx = g410c98;
                if (ecx) {
                    eax22 = g410c84;
                    edx23 = g410c7c;
                    eax24 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(eax22) + reinterpret_cast<uint32_t>(edx23) + reinterpret_cast<unsigned char>(ebp11));
                    eax25 = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(eax24) + reinterpret_cast<uint32_t>(eax24) * 4);
                    fun_402340((reinterpret_cast<uint32_t>(eax25) + reinterpret_cast<uint32_t>(eax25) * 4 << 2) / reinterpret_cast<unsigned char>(ecx));
                    esp14 = esp14 - 4 - 4 + 4 + 4;
                }
            } else {
                ecx26 = *reinterpret_cast<void***>(esi17 + 4);
                eax27 = fun_4055a0(ecx26, ecx26, 92, v15, v12, v9, v6, v4, v3, a2);
                esp28 = reinterpret_cast<void*>(esp14 - 4 - 4 - 4 + 4 + 8);
                if (!eax27 || (eax27 == *reinterpret_cast<void***>(esi17 + 4) || !reinterpret_cast<int1_t>(*reinterpret_cast<void***>(eax27 + 0xffffffff) == 92))) {
                    eax29 = g410c94;
                    if (!eax29) {
                        edx30 = *reinterpret_cast<void***>(esi17);
                        v31 = *reinterpret_cast<void***>(esi17 + 4);
                        RegDeleteKeyA(edx30, v31);
                        esp14 = reinterpret_cast<void***>(reinterpret_cast<int32_t>(esp28) - 4 - 4 - 4 + 4);
                        goto addr_402fe7_4;
                    } else {
                        eax32 = *reinterpret_cast<void***>(esi17);
                        v33 = *reinterpret_cast<void***>(esi17 + 4);
                        fun_402e20(eax32, v33);
                        esp14 = reinterpret_cast<void***>(reinterpret_cast<int32_t>(esp28) - 4 - 4 - 4 + 4 + 8);
                        goto addr_402fe7_4;
                    }
                } else {
                    *reinterpret_cast<void***>(eax27 + 0xffffffff) = reinterpret_cast<void**>(0);
                    eax34 = *reinterpret_cast<void***>(esi17 + 4);
                    ecx = *reinterpret_cast<void***>(esi17);
                    v35 = ecx;
                    eax36 = reinterpret_cast<int32_t>(RegOpenKeyA(v35, eax34));
                    esp14 = reinterpret_cast<void***>(reinterpret_cast<int32_t>(esp28) - 4 - 4 - 4 - 4 + 4);
                    if (!eax36) {
                        v37 = eax27 + 1;
                        RegDeleteValueA(v12, v37, v35, eax34);
                        ecx = reinterpret_cast<void**>(reinterpret_cast<int32_t>(esp28) + 16);
                        RegCloseKey(ecx, v12, v37, v35, eax34);
                        esp14 = esp14 - 4 - 4 - 4 + 4 - 4 - 4 + 4;
                    }
                    *reinterpret_cast<void***>(eax27 + 0xffffffff) = reinterpret_cast<void**>(92);
                }
            }
            eax38 = g410c74;
            ++ebp11;
            ebx8 = ebx8 + 4;
        } while (reinterpret_cast<unsigned char>(ebp11) < reinterpret_cast<unsigned char>(eax38));
    }
    return;
}

int32_t ShellExecuteA = 0xceb8;

int32_t WinExec = 0xca92;

void fun_401950(void** a1, void** a2, void** a3, void** a4, void** a5) {
    void** v6;
    void** v7;
    void** ebp8;
    void** v9;
    void** edi10;
    void** eax11;
    void** edi12;
    void** eax13;
    void** ebp14;
    void** v15;
    void** ebx16;
    void** ebx17;
    void** v18;
    void** esi19;
    void** esi20;
    void** eax21;
    void* edx22;
    void** ecx23;
    void** eax24;
    void** eax25;
    void** eax26;
    uint32_t eax27;
    int32_t eax28;
    int32_t ebx29;
    int32_t eax30;
    void** eax31;
    void** esi32;
    void** eax33;
    void* eax34;

    v6 = reinterpret_cast<void**>(__return_address());
    v7 = ebp8;
    v9 = edi10;
    eax11 = fun_4056cd(0x208, 1, v9, v7, v6, a1);
    edi12 = eax11;
    eax13 = fun_4056cd(0x208, 1, 0x208, 1, v9, v7);
    ebp14 = eax13;
    if (!edi12 || !ebp14) {
        addr_401a8b_2:
        return;
    } else {
        v15 = ebx16;
        ebx17 = a1;
        v18 = esi19;
        esi20 = reinterpret_cast<void**>(0);
        eax21 = ebx17;
        edx22 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(ebp14) - reinterpret_cast<unsigned char>(ebx17));
        do {
            ecx23 = *reinterpret_cast<void***>(eax21);
            *reinterpret_cast<void***>(reinterpret_cast<uint32_t>(edx22) + reinterpret_cast<unsigned char>(eax21)) = ecx23;
            ++eax21;
        } while (ecx23);
        eax24 = fun_40b170(ebp14, "http://", 7);
        if (!eax24) 
            goto addr_4019d5_6;
        eax25 = fun_40b170(ebp14, "https://", 8);
        if (!eax25) 
            goto addr_4019d5_6;
        eax26 = fun_4055a0(ecx23, ebp14, 92, v18, v15, v9, v7, v6, a1, a2);
        if (eax26) 
            goto addr_4019d0_9;
    }
    addr_4019d5_6:
    eax27 = reinterpret_cast<uint32_t>(ShellExecuteA());
    if (eax27 <= 32 && ((eax28 = fun_401a90(0x80000000, v18, edi12, 0, "open", ebx17, 0, esi20, 5, v18, v15), !eax28) && (ebx29 = lstrcatA, ebx29(edi12, "\\shell\\open\\command"), eax30 = fun_401a90(0x80000000, edi12, edi12, edi12, "\\shell\\open\\command", 0, "open", ebx17, 0, esi20, 5), !eax30))) {
        eax31 = fun_405a90(edi12, "\"%1\"", edi12, "\\shell\\open\\command", 0, "open", ebx17, 0, esi20, 5);
        esi32 = eax31;
        if (esi32 || (eax33 = fun_405a90(edi12, "%1", edi12, "\\shell\\open\\command", 0, "open", ebx17, 0, esi20, 5), esi32 = eax33, !!esi32)) {
            *reinterpret_cast<void***>(esi32) = reinterpret_cast<void**>(0);
        } else {
            eax34 = reinterpret_cast<void*>(lstrlenA(edi12, edi12, "\\shell\\open\\command"));
            esi32 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(eax34) + reinterpret_cast<unsigned char>(edi12) + 0xffffffff);
        }
        ebx29(esi32, " ", edi12, "\\shell\\open\\command");
        ecx23 = reinterpret_cast<void**>("open");
        ebx29(esi32, "open", esi32, " ", edi12, "\\shell\\open\\command");
        WinExec(edi12, 5, esi32, "open", esi32, " ", edi12, "\\shell\\open\\command");
    }
    fun_405a1e(ecx23, ebp14, 0, "open", ebx17, 0, esi20, 5, v18, v15, v9, v7, v6, a1, a2, a3, a4, a5);
    fun_405a1e(ecx23, edi12, ebp14, 0, "open", ebx17, 0, esi20, 5, v18, v15, v9, v7, v6, a1, a2, a3, a4);
    goto addr_401a8b_2;
    addr_4019d0_9:
    *reinterpret_cast<void***>(eax26) = reinterpret_cast<void**>(0);
    esi20 = ebp14;
    goto addr_4019d5_6;
}

int32_t GetModuleFileNameA = 0xcb78;

int32_t fun_403f40(void** a1, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7, void** a8, void** a9, void** a10);

int32_t CharToOemA = 0xcca6;

int32_t WriteFile = 0xca66;

struct s6 {
    signed char[4252792] pad4252792;
    signed char f4252792;
};

struct s7 {
    signed char[4252812] pad4252812;
    signed char f4252812;
};

void fun_403fc0(void** ecx) {
    void** eax2;
    void** v3;
    void** v4;
    void** v5;
    void** v6;
    void** v7;
    void** v8;
    void** v9;
    void** ecx10;
    void** edx11;
    void** v12;
    int32_t eax13;
    void* esp14;
    void** v15;
    void* esp16;
    void*** esp17;
    void** esi18;
    void** ebx19;
    void* esp20;
    void* esp21;
    int32_t eax22;
    int32_t esi23;
    int32_t v24;
    void** eax25;
    int32_t* esp26;
    int32_t v27;
    int32_t ebp28;
    int32_t v29;
    int32_t edi30;
    void*** esp31;
    void** eax32;
    void* esp33;
    void* v34;
    void* v35;
    void* esp36;
    void** esp37;
    void* v38;
    uint32_t ecx39;
    signed char v40;
    int32_t v41;
    void* v42;
    int32_t ebx43;
    void* esp44;
    uint32_t ecx45;
    int32_t eax46;
    struct s6* eax47;
    uint32_t ecx48;
    signed char v49;
    uint32_t ebp50;
    uint32_t ecx51;
    signed char v52;
    uint32_t ecx53;
    uint32_t ecx54;
    uint32_t ecx55;
    signed char v56;
    int32_t eax57;
    int32_t v58;
    struct s7* eax59;

    eax2 = g410c50;
    fun_401840(ecx, eax2, v3, v4, v5, v6, v7, v8, v9);
    ecx10 = g410c54;
    edx11 = g410cac;
    v12 = ecx10;
    GetModuleFileNameA(edx11, v12, 0x104);
    eax13 = g410c94;
    esp14 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 0x97c - 4 - 4 + 4 + 4 - 4 - 4 - 4 - 4 + 4 - 4);
    if (!eax13) {
        ecx10 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(esp14) + 0x160);
        v15 = ecx10;
        GetWindowsDirectoryA(v15, 0x208, edx11, v12, 0x104);
        esp16 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp14) - 4 - 4 + 4);
    } else {
        v15 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(esp14) + 0x160);
        GetSystemDirectoryA(v15, 0x208, edx11, v12, 0x104);
        esp16 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp14) - 4 - 4 + 4);
    }
    esp17 = reinterpret_cast<void***>(reinterpret_cast<int32_t>(esp16) - 4);
    fun_401840(ecx10, esp17 + 0x160, esi18, ebx19, v15, 0x208, edx11, v12, 0x104);
    esp20 = reinterpret_cast<void*>(esp17 - 4 - 4 - 4 + 4 + 4);
    SetCurrentDirectoryA();
    esp21 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp20) - 4 - 4 + 4);
    eax22 = fun_403f40(reinterpret_cast<int32_t>(esp21) + 96, "delme%d.bat", reinterpret_cast<int32_t>(esp20) + 0x164, esi18, ebx19, v15, 0x208, edx11, v12, 0x104);
    esi23 = eax22;
    if (esi23 == -1) {
        addr_4041c2_5:
        goto v24;
    } else {
        eax25 = g410c50;
        esp26 = reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(esp21) - 4 - 4 - 4 + 4 + 8 - 4);
        v27 = ebp28;
        v29 = edi30;
        esp31 = reinterpret_cast<void***>(esp26 - 1 - 1 - 1);
        eax32 = g410c54;
        wsprintfA(esp31 + 0x174, "@echo off\r\n:Repeat\r\ndel \"%s\"\r\nif exist \"%s\" goto Repeat\r\nrmdir \"%s\"\r\ndel \"%s\"\r\n", eax32, eax32, eax25, esp26 + 25, v29, v27);
        esp33 = reinterpret_cast<void*>(esp31 - 4 - 4 - 4 - 4 - 4 + 4 + 24);
        v34 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp33) + 0x57c);
        v35 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp33) + 0x16c);
        CharToOemA(v35, v34, v29, v27);
        esp36 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp33) - 4 - 4 - 4 + 4);
        esp37 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(esp36) - 4 - 4);
        v38 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp36) + 32);
        ecx39 = 0xffffffff;
        do {
            if (!ecx39) 
                break;
            --ecx39;
            ++esi23;
        } while (v40);
        v41 = reinterpret_cast<int32_t>(~ecx39) - 1;
        v42 = reinterpret_cast<void*>(esp37 + 0x161);
        WriteFile(esi23, v42, v41, v38, 0, v35, v34, v29, v27);
        ebx43 = CloseHandle;
        ebx43(esi23, esi23, v42, v41, v38, 0, v35, v34, v29, v27);
        esp44 = reinterpret_cast<void*>(esp37 - 1 - 1 - 1 - 1 + 1 - 1 - 1 + 1);
        ecx45 = 17;
        while (ecx45) {
            --ecx45;
        }
        eax46 = g410c94;
        if (eax46) 
            goto addr_404102_13;
    }
    eax47 = reinterpret_cast<struct s6*>(0);
    do {
        *reinterpret_cast<signed char*>(&ecx45) = *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(eax47) + reinterpret_cast<int32_t>("command.com /C \""));
        *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(esp44) + reinterpret_cast<int32_t>(eax47) + 0x16c) = *reinterpret_cast<signed char*>(&ecx45);
        eax47 = reinterpret_cast<struct s6*>(reinterpret_cast<int32_t>(eax47) + 1);
    } while (*reinterpret_cast<signed char*>(&ecx45));
    addr_40412c_16:
    ecx48 = 0xffffffff;
    do {
        if (!ecx48) 
            break;
        --ecx48;
    } while (v49);
    ebp50 = ~ecx48;
    ecx51 = 0xffffffff;
    do {
        if (!ecx51) 
            break;
        --ecx51;
    } while (v52);
    ecx53 = ebp50 >> 2;
    while (ecx53) {
        --ecx53;
    }
    ecx54 = ebp50 & 3;
    while (ecx54) {
        --ecx54;
    }
    ecx55 = 0xffffffff;
    do {
        if (!ecx55) 
            break;
        --ecx55;
    } while (v56);
    eax57 = reinterpret_cast<int32_t>(CreateProcessA());
    if (!eax57) {
        fun_405f0c(reinterpret_cast<int32_t>(esp44) - 4 - 4 - 4 - 4 - 4 - 4 - 4 - 4 - 4 - 4 - 4 + 4 + 4 + 4 + 96, 0, 0);
        goto addr_4041c2_5;
    } else {
        ebx43();
        ebx43();
        goto v58;
    }
    addr_404102_13:
    eax59 = reinterpret_cast<struct s7*>(0);
    do {
        *reinterpret_cast<signed char*>(&ecx45) = *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(eax59) + reinterpret_cast<int32_t>("cmd.exe /C \""));
        *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(esp44) + reinterpret_cast<int32_t>(eax59) + 0x16c) = *reinterpret_cast<signed char*>(&ecx45);
        eax59 = reinterpret_cast<struct s7*>(reinterpret_cast<int32_t>(eax59) + 1);
    } while (*reinterpret_cast<signed char*>(&ecx45));
    goto addr_40412c_16;
}

void** fun_40645b(void** ecx, void** a2, void** a3) {
    void* ebp4;
    void** v5;
    int1_t zf6;
    int1_t less_or_equal7;
    void** eax8;
    void** eax9;
    void** edx10;
    int32_t eax11;
    void** eax12;
    void** ecx13;
    void** v14;
    void** v15;
    void** edi16;
    void** esi17;
    void** ebx18;
    void** eax19;
    void** eax20;

    ebp4 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4);
    v5 = ecx;
    zf6 = g410d18 == 0;
    if (!zf6) {
        if (reinterpret_cast<signed char>(a2) < reinterpret_cast<signed char>(0x100)) {
            less_or_equal7 = reinterpret_cast<signed char>(g4108ec) <= reinterpret_cast<signed char>(1);
            if (less_or_equal7) {
                eax8 = g4106e0;
                eax8 = *reinterpret_cast<void***>(eax8 + reinterpret_cast<unsigned char>(a2) * 2);
                eax9 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(eax8) & reinterpret_cast<unsigned char>(1));
            } else {
                eax9 = fun_408af1(ecx, a2, 1);
            }
            if (!eax9) 
                goto addr_4064b8_7;
        }
        edx10 = g4106e0;
        eax11 = reinterpret_cast<signed char>(a2) >> 8;
        if (!(*reinterpret_cast<unsigned char*>(reinterpret_cast<uint32_t>(edx10 + *reinterpret_cast<unsigned char*>(&eax11) * 2) + 1) & 0x80)) {
            eax12 = reinterpret_cast<void**>(1);
        } else {
            eax12 = reinterpret_cast<void**>(2);
        }
        ecx13 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(ebp4) + 0xfffffffc);
        v14 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(ebp4) + 8);
        v15 = g410d18;
        eax19 = fun_4088a2(ecx13, v15, 0x100, v14, eax12, ecx13, 3, 0, 1, edi16, esi17, ebx18, v5, ecx13, v15, 0x100, v14, eax12, ecx13, 3, 0, 1, edi16, esi17, ebx18, v5);
        if (!eax19) {
            addr_4064b8_7:
            eax20 = a2;
        } else {
            if (!reinterpret_cast<int1_t>(eax19 == 1)) {
                eax20 = reinterpret_cast<void**>(static_cast<uint32_t>(*reinterpret_cast<unsigned char*>(&v5 + 1)) << 8 | static_cast<uint32_t>(*reinterpret_cast<unsigned char*>(&v5)));
            } else {
                eax20 = reinterpret_cast<void**>(static_cast<uint32_t>(*reinterpret_cast<unsigned char*>(&v5)));
            }
        }
    } else {
        eax20 = a2;
        if (reinterpret_cast<signed char>(eax20) >= reinterpret_cast<signed char>(65) && reinterpret_cast<signed char>(eax20) <= reinterpret_cast<signed char>(90)) {
            eax20 = eax20 + 32;
        }
    }
    return eax20;
}

uint32_t* fun_406526(uint32_t a1) {
    uint32_t ecx2;
    int32_t edx3;
    uint32_t* eax4;
    uint32_t* eax5;

    ecx2 = a1;
    edx3 = 0;
    g410cbc = ecx2;
    eax4 = reinterpret_cast<uint32_t*>(0x40e528);
    do {
        if (ecx2 == *eax4) 
            break;
        eax4 = eax4 + 2;
        ++edx3;
    } while (reinterpret_cast<int32_t>(eax4) < reinterpret_cast<int32_t>(0x40e690));
    goto addr_406546_4;
    eax5 = *reinterpret_cast<uint32_t**>(edx3 * 8 + 0x40e52c);
    g410cb8 = eax5;
    return eax5;
    addr_406546_4:
    if (ecx2 < 19 || ecx2 > 36) {
        if (ecx2 < 0xbc || (g410cb8 = reinterpret_cast<uint32_t*>(8), ecx2 > 0xca)) {
            g410cb8 = reinterpret_cast<uint32_t*>(22);
        }
        return eax4;
    } else {
        g410cb8 = reinterpret_cast<uint32_t*>(13);
        return eax4;
    }
}

void** fun_405463(void** ecx, void** a2, void** a3, void** a4, void** a5) {
    void** esi6;
    void** eax7;

    esi6 = a2;
    while (reinterpret_cast<unsigned char>(esi6) < reinterpret_cast<unsigned char>(a3)) {
        eax7 = *reinterpret_cast<void***>(esi6);
        if (eax7) {
            eax7 = reinterpret_cast<void**>(eax7());
        }
        esi6 = esi6 + 4;
    }
    return eax7;
}

void** fun_4053ca(int32_t a1, int32_t a2, int32_t a3);

void** fun_4053a8(void** ecx) {
    void** eax2;

    eax2 = fun_4053ca(__return_address(), 0, 0);
    return eax2;
}

void** g4112b0;

void** g4112a8;

int32_t VirtualFree = 0xd07c;

uint32_t g4112b4;

void** g4112b8;

void** fun_409830(void** ecx, void** a2, void** a3, void** a4, void** a5, int32_t a6, void** a7, void** a8, void*** a9, int32_t a10, void** a11, int32_t a12, void** a13);

void** fun_4072a6(int32_t a1, void** a2) {
    void** eax3;
    void** ecx4;
    void** ecx5;
    void** ecx6;
    void** eax7;
    void** eax8;
    void** ecx9;
    void** eax10;
    int1_t less_or_equal11;
    void** v12;
    void** v13;
    uint32_t eax14;
    void** edx15;
    void** eax16;
    void** ecx17;

    eax3 = g4112b0;
    if (eax3) {
        ecx4 = g4112a8;
        ecx5 = reinterpret_cast<void**>((reinterpret_cast<unsigned char>(ecx4) << 15) + reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax3 + 12)));
        VirtualFree(ecx5, 0x8000, 0x4000);
        ecx6 = g4112a8;
        eax7 = g4112b0;
        *reinterpret_cast<void***>(eax7 + 8) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax7 + 8)) | 0x80000000 >> *reinterpret_cast<signed char*>(&ecx6));
        eax8 = g4112b0;
        ecx9 = g4112a8;
        *reinterpret_cast<uint32_t*>(reinterpret_cast<uint32_t>(*reinterpret_cast<void***>(eax8 + 16) + reinterpret_cast<unsigned char>(ecx9) * 4) + 0xc4) = 0;
        eax10 = g4112b0;
        *reinterpret_cast<signed char*>(*reinterpret_cast<void***>(eax10 + 16) + 67) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(*reinterpret_cast<void***>(eax10 + 16) + 67) - 1);
        eax3 = g4112b0;
        if (!*reinterpret_cast<signed char*>(*reinterpret_cast<void***>(eax3 + 16) + 67)) {
            *reinterpret_cast<void***>(eax3 + 4) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax3 + 4)) & 0xfffffffe);
            eax3 = g4112b0;
        }
        if (reinterpret_cast<int1_t>(*reinterpret_cast<void***>(eax3 + 8) == 0xffffffff) && (less_or_equal11 = reinterpret_cast<int32_t>(g4112b4) <= reinterpret_cast<int32_t>(1), !less_or_equal11)) {
            v12 = *reinterpret_cast<void***>(eax3 + 16);
            v13 = g4112c0;
            HeapFree(v13, 0, v12, ecx5, 0x8000, 0x4000);
            eax14 = g4112b4;
            edx15 = g4112b8;
            eax16 = g4112b0;
            ecx17 = eax16 + 20;
            eax3 = fun_409830(ecx17, eax16, ecx17, (eax14 + eax14 * 4 << 2) - reinterpret_cast<unsigned char>(eax16) + reinterpret_cast<unsigned char>(edx15) + 0xffffffec, v13, 0, v12, ecx5, 0x8000, 0x4000, __return_address(), a1, a2);
            --g4112b4;
        }
        g4112b0 = reinterpret_cast<void**>(0);
    }
    return eax3;
}

void** g40e69c = reinterpret_cast<void**>(0x98);

int32_t g410d30 = 0;

void fun_4074bb(void** a1);

void fun_407511(void** ecx) {
    void** esi2;
    int1_t zf3;
    int32_t v4;
    uint32_t v5;
    void** edi6;
    int32_t ebx7;
    uint32_t eax8;
    int32_t eax9;
    int32_t* eax10;
    int32_t edx11;

    esi2 = g40e69c;
    while (1) {
        if (*reinterpret_cast<void***>(esi2 + 16) == 0xffffffff) {
            addr_4075bc_3:
            zf3 = esi2 == g40e69c;
            if (zf3) 
                break;
            if (v4 > 0) 
                continue; else 
                break;
        } else {
            v5 = 0;
            edi6 = esi2 + 0x2010;
            ebx7 = 0x3ff000;
            do {
                if (reinterpret_cast<int1_t>(*reinterpret_cast<void***>(edi6) == 0xf0) && (eax8 = ebx7 + reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(esi2 + 16)), eax9 = reinterpret_cast<int32_t>(VirtualFree(ecx, eax8, 0x1000, 0x4000)), !!eax9)) {
                    *reinterpret_cast<void***>(edi6) = reinterpret_cast<void**>(0xffffffff);
                    --g410d30;
                    if (!*reinterpret_cast<void***>(esi2 + 12) || reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(esi2 + 12)) > reinterpret_cast<unsigned char>(edi6)) {
                        *reinterpret_cast<void***>(esi2 + 12) = edi6;
                    }
                    ++v5;
                    --v4;
                    if (!v4) 
                        break;
                }
                ebx7 = ebx7 - 0x1000;
                edi6 = edi6 - 8;
            } while (ebx7 >= 0);
            ecx = esi2;
            esi2 = *reinterpret_cast<void***>(esi2 + 4);
            if (!v5) 
                goto addr_4075bc_3;
            if (!reinterpret_cast<int1_t>(*reinterpret_cast<void***>(ecx + 24) == 0xffffffff)) 
                goto addr_4075bc_3;
        }
        eax10 = reinterpret_cast<int32_t*>(ecx + 32);
        edx11 = 1;
        do {
            if (*eax10 != -1) 
                break;
            ++edx11;
            eax10 = eax10 + 2;
        } while (edx11 < 0x400);
        if (edx11 != 0x400) 
            goto addr_4075bc_3;
        fun_4074bb(ecx);
        ecx = ecx;
        goto addr_4075bc_3;
    }
    return;
}

void** fun_405659(void** ecx, void** a2) {
    void*** eax3;
    void** esi4;
    int1_t below_or_equal5;
    void** eax6;
    void** esi7;
    int1_t below_or_equal8;
    void** v9;
    void** v10;
    void** eax11;

    eax3 = g4112c4;
    esi4 = a2;
    if (reinterpret_cast<int1_t>(eax3 == 3)) {
        below_or_equal5 = reinterpret_cast<unsigned char>(esi4) <= reinterpret_cast<unsigned char>(g4112bc);
        if (below_or_equal5 && (eax6 = fun_406afb(ecx, esi4), ecx = esi4, !!eax6)) {
            return eax6;
        }
    }
    if (!reinterpret_cast<int1_t>(eax3 == 2)) {
        if (!esi4) {
            esi4 = reinterpret_cast<void**>(1);
        }
    } else {
        if (!a2) {
            esi7 = reinterpret_cast<void**>(16);
        } else {
            esi7 = reinterpret_cast<void**>(reinterpret_cast<uint32_t>(a2 + 15) & 0xfffffff0);
        }
        below_or_equal8 = reinterpret_cast<unsigned char>(esi7) <= reinterpret_cast<unsigned char>(g4106bc);
        if (!below_or_equal8) 
            goto addr_4056bc_11; else 
            goto addr_40569d_12;
    }
    esi7 = reinterpret_cast<void**>(reinterpret_cast<uint32_t>(esi4 + 15) & 0xfffffff0);
    addr_4056bc_11:
    v9 = g4112c0;
    HeapAlloc(ecx, v9, 0, esi7);
    goto addr_4056cb_14;
    addr_40569d_12:
    v10 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(esi7) >> 4);
    eax11 = fun_40766f(ecx, v10);
    ecx = v10;
    if (eax11) {
        addr_4056cb_14:
        goto __return_address();
    } else {
        goto addr_4056bc_11;
    }
}

int32_t g410d38 = 0;

int32_t fun_407a44(void** ecx) {
    int32_t eax2;
    int32_t eax3;

    eax2 = g410d38;
    if (!eax2 || (eax3 = reinterpret_cast<int32_t>(eax2()), eax3 == 0)) {
        return 0;
    } else {
        return 1;
    }
}

void** g4112ac;

void** fun_406eb5(uint32_t ecx, void** a2);

struct s8 {
    uint32_t f0;
    signed char[128] pad132;
    uint32_t f132;
};

struct s9 {
    void* f0;
    struct s9* f4;
    struct s9* f8;
};

struct s10 {
    uint32_t f0;
    void** f4;
};

void** fun_406e04();

void** fun_406afb(void** ecx, void** a2) {
    uint32_t eax3;
    void** edx4;
    void** edi5;
    void** v6;
    void* ecx7;
    void* v8;
    uint32_t ecx9;
    uint32_t esi10;
    uint32_t v11;
    uint32_t v12;
    void** eax13;
    void** ebx14;
    void** v15;
    int1_t zf16;
    int1_t zf17;
    void** eax18;
    void** eax19;
    void** edx20;
    void** v21;
    uint32_t edx22;
    uint32_t esi23;
    struct s8* ecx24;
    uint32_t edx25;
    void** eax26;
    int1_t zf27;
    void* edi28;
    void** v29;
    uint32_t ecx30;
    uint32_t ecx31;
    struct s9* edx32;
    void* ecx33;
    void* esi34;
    uint32_t ecx35;
    signed char* edi36;
    uint32_t* ecx37;
    uint32_t ebx38;
    int1_t zf39;
    void* ecx40;
    signed char* edi41;
    uint32_t ebx42;
    struct s9* ecx43;
    signed char cl44;
    uint32_t ecx45;
    uint32_t* edi46;
    uint32_t ecx47;
    void* ecx48;
    void* ecx49;
    struct s10* edx50;
    uint32_t ecx51;
    int1_t zf52;
    int1_t zf53;
    int1_t zf54;
    void** eax55;

    eax3 = g4112b4;
    edx4 = g4112b8;
    edi5 = edx4 + (eax3 + eax3 * 4) * 4;
    v6 = edi5;
    ecx7 = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(a2 + 23) & 0xfffffff0);
    v8 = ecx7;
    ecx9 = (reinterpret_cast<int32_t>(ecx7) >> 4) - 1;
    if (reinterpret_cast<int32_t>(ecx9) >= reinterpret_cast<int32_t>(32)) {
        ecx9 = ecx9 + 0xffffffe0;
        esi10 = 0;
        v11 = 0;
        v12 = 0xffffffff >> *reinterpret_cast<signed char*>(&ecx9);
    } else {
        esi10 = 0xffffffff >> *reinterpret_cast<signed char*>(&ecx9);
        v12 = 0xffffffff;
        v11 = esi10;
    }
    eax13 = g4112ac;
    ebx14 = eax13;
    v15 = ebx14;
    if (reinterpret_cast<unsigned char>(ebx14) < reinterpret_cast<unsigned char>(edi5)) {
        do {
            ecx9 = reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(ebx14 + 4)) & v12 | reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(ebx14)) & esi10;
            if (ecx9) 
                break;
            ebx14 = ebx14 + 20;
            v15 = ebx14;
        } while (reinterpret_cast<unsigned char>(ebx14) < reinterpret_cast<unsigned char>(v6));
    }
    if (ebx14 != v6) 
        goto addr_406bf0_8;
    ebx14 = edx4;
    while (zf16 = ebx14 == eax13, v15 = ebx14, reinterpret_cast<unsigned char>(ebx14) < reinterpret_cast<unsigned char>(eax13)) {
        ecx9 = reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(ebx14 + 4)) & v12 | reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(ebx14)) & esi10;
        if (ecx9) 
            goto addr_406b93_12;
        ebx14 = ebx14 + 20;
    }
    addr_406b95_14:
    if (!zf16) 
        goto addr_406bf0_8;
    while (zf17 = ebx14 == v6, reinterpret_cast<unsigned char>(ebx14) < reinterpret_cast<unsigned char>(v6)) {
        if (*reinterpret_cast<void***>(ebx14 + 8)) 
            goto addr_406baa_17;
        ebx14 = ebx14 + 20;
        v15 = ebx14;
    }
    addr_406bad_19:
    if (!zf17) {
        addr_406bd5_20:
        eax18 = fun_406eb5(ecx9, ebx14);
        *reinterpret_cast<void***>(*reinterpret_cast<void***>(ebx14 + 16)) = eax18;
        if (!reinterpret_cast<int1_t>(*reinterpret_cast<void***>(*reinterpret_cast<void***>(ebx14 + 16)) == 0xffffffff)) {
            addr_406bf0_8:
            g4112ac = ebx14;
            eax19 = *reinterpret_cast<void***>(ebx14 + 16);
            edx20 = *reinterpret_cast<void***>(eax19);
            v21 = edx20;
            if (edx20 == 0xffffffff || !(*reinterpret_cast<uint32_t*>(reinterpret_cast<uint32_t>(eax19 + reinterpret_cast<unsigned char>(edx20) * 4) + 0xc4) & v12 | *reinterpret_cast<uint32_t*>(reinterpret_cast<uint32_t>(eax19 + reinterpret_cast<unsigned char>(edx20) * 4) + 68) & esi10)) {
                edx22 = *reinterpret_cast<uint32_t*>(eax19 + 0xc4) & v12;
                esi23 = *reinterpret_cast<uint32_t*>(eax19 + 68) & v11;
                v21 = reinterpret_cast<void**>(0);
                ecx24 = reinterpret_cast<struct s8*>(eax19 + 68);
                esi10 = v11;
                if (!(edx22 | esi23)) {
                    do {
                        edx25 = ecx24->f132;
                        ++v21;
                        ecx24 = reinterpret_cast<struct s8*>(&ecx24->pad132);
                    } while (!(edx25 & v12 | esi10 & ecx24->f0));
                }
                edx20 = v21;
            }
        } else {
            addr_406be9_24:
            eax26 = reinterpret_cast<void**>(0);
            goto addr_406dff_25;
        }
    } else {
        ebx14 = edx4;
        while (zf27 = ebx14 == eax13, v15 = ebx14, reinterpret_cast<unsigned char>(ebx14) < reinterpret_cast<unsigned char>(eax13)) {
            if (*reinterpret_cast<void***>(ebx14 + 8)) 
                goto addr_406bc3_29;
            ebx14 = ebx14 + 20;
        }
        goto addr_406bc5_31;
    }
    edi28 = reinterpret_cast<void*>(0);
    v29 = reinterpret_cast<void**>(reinterpret_cast<uint32_t>(eax19 + reinterpret_cast<unsigned char>(edx20) * 0x204) + 0x144);
    ecx30 = *reinterpret_cast<uint32_t*>(reinterpret_cast<uint32_t>(eax19 + reinterpret_cast<unsigned char>(edx20) * 4) + 68) & esi10;
    if (!ecx30) {
        ecx31 = *reinterpret_cast<uint32_t*>(reinterpret_cast<uint32_t>(eax19 + reinterpret_cast<unsigned char>(edx20) * 4) + 0xc4);
        ecx30 = ecx31 & v12;
        edi28 = reinterpret_cast<void*>(32);
    }
    while (reinterpret_cast<int32_t>(ecx30) >= reinterpret_cast<int32_t>(0)) {
        ecx30 = ecx30 << 1;
        edi28 = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(edi28) + 1);
    }
    edx32 = *reinterpret_cast<struct s9**>(v29 + reinterpret_cast<uint32_t>(edi28) * 2 + 1);
    ecx33 = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(edx32->f0) - reinterpret_cast<uint32_t>(v8));
    esi34 = reinterpret_cast<void*>((reinterpret_cast<int32_t>(ecx33) >> 4) - 1);
    if (reinterpret_cast<int32_t>(esi34) > reinterpret_cast<int32_t>(63)) {
        esi34 = reinterpret_cast<void*>(63);
    }
    if (esi34 == edi28) {
        addr_406db2_39:
        if (ecx33) {
            edx32->f0 = ecx33;
            *reinterpret_cast<void**>(reinterpret_cast<uint32_t>(ecx33) + reinterpret_cast<uint32_t>(edx32) + 0xfffffffc) = ecx33;
        }
    } else {
        if (edx32->f4 == edx32->f8) {
            if (reinterpret_cast<int32_t>(edi28) >= reinterpret_cast<int32_t>(32)) {
                ecx35 = reinterpret_cast<uint32_t>(edi28) + 0xffffffe0;
                edi36 = reinterpret_cast<signed char*>(reinterpret_cast<unsigned char>(eax19) + reinterpret_cast<uint32_t>(edi28) + 4);
                ecx37 = reinterpret_cast<uint32_t*>(reinterpret_cast<uint32_t>(eax19 + reinterpret_cast<unsigned char>(v21) * 4) + 0xc4);
                ebx38 = ~(0x80000000 >> *reinterpret_cast<signed char*>(&ecx35));
                *ecx37 = *ecx37 & ebx38;
                *edi36 = reinterpret_cast<signed char>(*edi36 - 1);
                zf39 = *edi36 == 0;
                if (!zf39) {
                    addr_406d0b_44:
                    ebx14 = v15;
                } else {
                    ebx14 = v15;
                    *reinterpret_cast<void***>(ebx14 + 4) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(ebx14 + 4)) & ebx38);
                }
            } else {
                ecx40 = edi28;
                edi41 = reinterpret_cast<signed char*>(reinterpret_cast<unsigned char>(eax19) + reinterpret_cast<uint32_t>(edi28) + 4);
                ebx42 = ~(0x80000000 >> *reinterpret_cast<signed char*>(&ecx40));
                *reinterpret_cast<uint32_t*>(reinterpret_cast<uint32_t>(eax19 + reinterpret_cast<unsigned char>(v21) * 4) + 68) = ebx42 & *reinterpret_cast<uint32_t*>(reinterpret_cast<uint32_t>(eax19 + reinterpret_cast<unsigned char>(v21) * 4) + 68);
                *edi41 = reinterpret_cast<signed char>(*edi41 - 1);
                if (*edi41) 
                    goto addr_406d0b_44;
                ebx14 = v15;
                *reinterpret_cast<void***>(ebx14) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(ebx14)) & ebx42);
            }
        }
        edx32->f8->f4 = edx32->f4;
        edx32->f4->f8 = edx32->f8;
        if (!ecx33) {
            ecx33 = ecx33;
        } else {
            ecx43 = reinterpret_cast<struct s9*>(v29 + reinterpret_cast<uint32_t>(esi34) * 2);
            edx32->f4 = *reinterpret_cast<struct s9**>(v29 + reinterpret_cast<uint32_t>(esi34) * 2 + 1);
            edx32->f8 = ecx43;
            ecx43->f4 = edx32;
            edx32->f4->f8 = edx32;
            if (edx32->f4 == edx32->f8) {
                cl44 = *reinterpret_cast<signed char*>(reinterpret_cast<uint32_t>(esi34) + reinterpret_cast<unsigned char>(eax19) + 4);
                if (reinterpret_cast<int32_t>(esi34) >= reinterpret_cast<int32_t>(32)) {
                    *reinterpret_cast<signed char*>(reinterpret_cast<uint32_t>(esi34) + reinterpret_cast<unsigned char>(eax19) + 4) = reinterpret_cast<signed char>(cl44 + 1);
                    if (!cl44) {
                        ecx45 = reinterpret_cast<uint32_t>(esi34) + 0xffffffe0;
                        *reinterpret_cast<void***>(ebx14 + 4) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(ebx14 + 4)) | 0x80000000 >> *reinterpret_cast<signed char*>(&ecx45));
                    }
                    edi46 = reinterpret_cast<uint32_t*>(reinterpret_cast<uint32_t>(eax19 + reinterpret_cast<unsigned char>(v21) * 4) + 0xc4);
                    ecx47 = reinterpret_cast<uint32_t>(esi34) + 0xffffffe0;
                    *edi46 = *edi46 | 0x80000000 >> *reinterpret_cast<signed char*>(&ecx47);
                } else {
                    *reinterpret_cast<signed char*>(reinterpret_cast<uint32_t>(esi34) + reinterpret_cast<unsigned char>(eax19) + 4) = reinterpret_cast<signed char>(cl44 + 1);
                    if (!cl44) {
                        ecx48 = esi34;
                        *reinterpret_cast<void***>(ebx14) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(ebx14)) | 0x80000000 >> *reinterpret_cast<signed char*>(&ecx48));
                    }
                    ecx49 = esi34;
                    *reinterpret_cast<uint32_t*>(reinterpret_cast<uint32_t>(eax19 + reinterpret_cast<unsigned char>(v21) * 4) + 68) = *reinterpret_cast<uint32_t*>(reinterpret_cast<uint32_t>(eax19 + reinterpret_cast<unsigned char>(v21) * 4) + 68) | 0x80000000 >> *reinterpret_cast<signed char*>(&ecx49);
                }
            }
            ecx33 = ecx33;
            goto addr_406db2_39;
        }
    }
    edx50 = reinterpret_cast<struct s10*>(reinterpret_cast<uint32_t>(edx32) + reinterpret_cast<uint32_t>(ecx33));
    ecx51 = reinterpret_cast<uint32_t>(v8) + 1;
    edx50->f0 = ecx51;
    *reinterpret_cast<uint32_t*>(reinterpret_cast<uint32_t>(edx50) + reinterpret_cast<uint32_t>(v8) + 0xfffffffc) = ecx51;
    zf52 = *v29 == 0;
    *v29 = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(*v29) + 1);
    if (zf52 && ((zf53 = ebx14 == g4112b0, zf53) && (zf54 = v21 == g4112a8, zf54))) {
        g4112b0 = reinterpret_cast<void**>(0);
    }
    *reinterpret_cast<void***>(eax19) = v21;
    eax26 = reinterpret_cast<void**>(&edx50->f4);
    addr_406dff_25:
    return eax26;
    addr_406bc5_31:
    if (!zf27) 
        goto addr_406bd5_20;
    eax55 = fun_406e04();
    ebx14 = eax55;
    v15 = ebx14;
    if (!ebx14) 
        goto addr_406be9_24; else 
        goto addr_406bd5_20;
    addr_406bc3_29:
    zf27 = ebx14 == eax13;
    goto addr_406bc5_31;
    addr_406baa_17:
    zf17 = ebx14 == v6;
    goto addr_406bad_19;
    addr_406b93_12:
    zf16 = ebx14 == eax13;
    goto addr_406b95_14;
}

void** g4106b8 = reinterpret_cast<void**>(0x98);

void** fun_407877(void** ecx, void** a2, void** a3, void** a4);

int32_t VirtualAlloc = 0xd08a;

struct s11 {
    void** f0;
    signed char[243] pad244;
    unsigned char f244;
};

void** fun_407377();

void** fun_40766f(void** ecx, void** a2) {
    void** v3;
    void** esi4;
    void** esi5;
    void** v6;
    void** edi7;
    void** ebx8;
    void** edi9;
    void** eax10;
    void** v11;
    void** ecx12;
    void** eax13;
    void** eax14;
    void** v15;
    void** v16;
    void** eax17;
    int1_t zf18;
    void** edi19;
    void** ebx20;
    uint32_t v21;
    void** eax22;
    void** esi23;
    void** v24;
    void** eax25;
    void** ecx26;
    struct s11* eax27;
    uint32_t v28;
    void** eax29;
    uint1_t cf30;
    void** eax31;
    void** eax32;
    void** ecx33;

    v3 = esi4;
    esi5 = g4106b8;
    v6 = edi7;
    while (1) {
        if (*reinterpret_cast<void***>(esi5 + 16) == 0xffffffff) {
            ebx8 = a2;
        } else {
            edi9 = *reinterpret_cast<void***>(esi5 + 8);
            eax10 = reinterpret_cast<void**>((reinterpret_cast<int32_t>(reinterpret_cast<unsigned char>(edi9) - reinterpret_cast<unsigned char>(esi5) - 24) >> 3 << 12) + reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(esi5 + 16)));
            v11 = eax10;
            if (reinterpret_cast<unsigned char>(edi9) >= reinterpret_cast<unsigned char>(esi5 + 0x2018)) {
                ebx8 = a2;
            } else {
                do {
                    ecx12 = *reinterpret_cast<void***>(edi9);
                    ebx8 = a2;
                    if (reinterpret_cast<signed char>(ecx12) >= reinterpret_cast<signed char>(ebx8) && reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(edi9 + 4)) > reinterpret_cast<unsigned char>(ebx8)) {
                        eax13 = fun_407877(ecx12, eax10, ecx12, ebx8);
                        if (eax13) 
                            goto addr_40773a_8;
                        eax10 = v11;
                        *reinterpret_cast<void***>(edi9 + 4) = ebx8;
                    }
                    edi9 = edi9 + 8;
                    eax10 = eax10 + 0x1000;
                    v11 = eax10;
                } while (reinterpret_cast<unsigned char>(edi9) < reinterpret_cast<unsigned char>(esi5 + 0x2018));
            }
            eax14 = *reinterpret_cast<void***>(esi5 + 8);
            ecx = *reinterpret_cast<void***>(esi5 + 16);
            edi9 = esi5 + 24;
            v15 = eax14;
            v16 = ecx;
            if (reinterpret_cast<unsigned char>(edi9) < reinterpret_cast<unsigned char>(eax14)) {
                do {
                    eax17 = *reinterpret_cast<void***>(edi9);
                    if (reinterpret_cast<signed char>(eax17) >= reinterpret_cast<signed char>(ebx8) && reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(edi9 + 4)) > reinterpret_cast<unsigned char>(ebx8)) {
                        eax13 = fun_407877(ecx, v16, eax17, ebx8);
                        if (eax13) 
                            goto addr_40773a_8;
                        *reinterpret_cast<void***>(edi9 + 4) = ebx8;
                    }
                    v16 = v16 + 0x1000;
                    edi9 = edi9 + 8;
                } while (reinterpret_cast<unsigned char>(edi9) < reinterpret_cast<unsigned char>(v15));
            }
        }
        esi5 = *reinterpret_cast<void***>(esi5);
        zf18 = esi5 == g4106b8;
        if (zf18) 
            break;
    }
    edi19 = reinterpret_cast<void**>(0x40e698);
    while (*reinterpret_cast<void***>(edi19 + 16) == 0xffffffff || !*reinterpret_cast<void***>(edi19 + 12)) {
        edi19 = *reinterpret_cast<void***>(edi19);
        if (edi19 == 0x40e698) 
            goto addr_40783e_23;
    }
    ebx20 = *reinterpret_cast<void***>(edi19 + 12);
    v21 = 0;
    eax22 = ebx20;
    esi23 = reinterpret_cast<void**>((reinterpret_cast<int32_t>(reinterpret_cast<unsigned char>(ebx20) - reinterpret_cast<unsigned char>(edi19) - 24) >> 3 << 12) + reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(edi19 + 16)));
    if (reinterpret_cast<int1_t>(*reinterpret_cast<void***>(ebx20) == 0xffffffff)) {
        do {
            if (reinterpret_cast<int32_t>(v21) >= reinterpret_cast<int32_t>(16)) 
                break;
            eax22 = eax22 + 8;
            ++v21;
        } while (*reinterpret_cast<void***>(eax22) == 0xffffffff);
    }
    v24 = reinterpret_cast<void**>(v21 << 12);
    eax25 = reinterpret_cast<void**>(VirtualAlloc(esi23, v24, 0x1000, 4));
    if (eax25 != esi23) {
        addr_407870_29:
        eax13 = reinterpret_cast<void**>(0);
    } else {
        fun_407a60(ecx, esi23, 0, 0, esi23, v24, 0x1000, 4, v6, v3);
        ecx26 = ebx20;
        if (!(reinterpret_cast<uint1_t>(reinterpret_cast<int32_t>(v21) < reinterpret_cast<int32_t>(0)) | reinterpret_cast<uint1_t>(v21 == 0))) {
            eax27 = reinterpret_cast<struct s11*>(esi23 + 4);
            v28 = v21;
            do {
                eax27->f244 = 0xff;
                *reinterpret_cast<uint32_t*>(reinterpret_cast<uint32_t>(eax27) - 4) = reinterpret_cast<uint32_t>(eax27) + 4;
                eax27->f0 = reinterpret_cast<void**>(0xf0);
                *reinterpret_cast<void***>(ecx26) = reinterpret_cast<void**>(0xf0);
                *reinterpret_cast<void***>(ecx26 + 4) = reinterpret_cast<void**>(0xf1);
                eax27 = reinterpret_cast<struct s11*>(reinterpret_cast<uint32_t>(eax27) + 0x1000);
                ecx26 = ecx26 + 8;
                --v28;
            } while (v28);
        }
        g4106b8 = edi19;
        eax29 = edi19 + 0x2018;
        while (cf30 = reinterpret_cast<uint1_t>(reinterpret_cast<unsigned char>(ecx26) < reinterpret_cast<unsigned char>(eax29)), cf30) {
            if (*reinterpret_cast<void***>(ecx26) == 0xffffffff) 
                goto addr_407819_36;
            ecx26 = ecx26 + 8;
        }
        goto addr_40781b_38;
    }
    addr_407872_39:
    return eax13;
    addr_40781b_38:
    *reinterpret_cast<void***>(edi19 + 12) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(eax29) - (reinterpret_cast<unsigned char>(eax29) + reinterpret_cast<uint1_t>(reinterpret_cast<unsigned char>(eax29) < reinterpret_cast<unsigned char>(reinterpret_cast<unsigned char>(eax29) + cf30))) & reinterpret_cast<unsigned char>(ecx26));
    eax31 = a2;
    *reinterpret_cast<void***>(esi23 + 8) = eax31;
    *reinterpret_cast<void***>(edi19 + 8) = ebx20;
    *reinterpret_cast<void***>(ebx20) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(ebx20)) - reinterpret_cast<unsigned char>(eax31));
    *reinterpret_cast<void***>(esi23 + 4) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(esi23 + 4)) - reinterpret_cast<unsigned char>(eax31));
    eax13 = esi23 + 0x100;
    *reinterpret_cast<void***>(esi23) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(esi23) + reinterpret_cast<unsigned char>(eax31) + 8);
    goto addr_407872_39;
    addr_407819_36:
    cf30 = reinterpret_cast<uint1_t>(reinterpret_cast<unsigned char>(ecx26) < reinterpret_cast<unsigned char>(eax29));
    goto addr_40781b_38;
    addr_40783e_23:
    eax32 = fun_407377();
    if (!eax32) 
        goto addr_407870_29;
    ecx33 = *reinterpret_cast<void***>(eax32 + 16);
    *reinterpret_cast<void***>(ecx33 + 8) = ebx8;
    g4106b8 = eax32;
    *reinterpret_cast<void***>(ecx33) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(ecx33) + reinterpret_cast<unsigned char>(ebx8) + 8);
    *reinterpret_cast<void***>(ecx33 + 4) = reinterpret_cast<void**>(0xf0 - reinterpret_cast<unsigned char>(ebx8));
    *reinterpret_cast<void***>(eax32 + 24) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax32 + 24)) - reinterpret_cast<unsigned char>(ebx8));
    eax13 = ecx33 + 0x100;
    goto addr_407872_39;
    addr_40773a_8:
    g4106b8 = esi5;
    *reinterpret_cast<void***>(edi9) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(edi9)) - reinterpret_cast<unsigned char>(ebx8));
    *reinterpret_cast<void***>(esi5 + 8) = edi9;
    goto addr_407872_39;
}

void** fun_4067a7(void** ecx, void** a2, void** a3, void** a4, void** a5) {
    uint32_t eax6;
    void** eax7;
    void** ecx8;

    eax6 = g4112b4;
    eax7 = g4112b8;
    ecx8 = eax7 + (eax6 + eax6 * 4) * 4;
    while (reinterpret_cast<unsigned char>(eax7) < reinterpret_cast<unsigned char>(ecx8)) {
        if (reinterpret_cast<unsigned char>(a2) - reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax7 + 12)) < 0x100000) 
            goto addr_4067d1_4;
        eax7 = eax7 + 20;
    }
    eax7 = reinterpret_cast<void**>(0);
    addr_4067d1_4:
    return eax7;
}

struct s13 {
    signed char[4] pad4;
    struct s13* f4;
    struct s13* f8;
};

struct s12 {
    signed char[4] pad4;
    struct s13* f4;
    struct s13* f8;
};

struct s15 {
    signed char[4] pad4;
    struct s14* f4;
    struct s14* f8;
};

struct s14 {
    void* f0;
    struct s15* f4;
    struct s15* f8;
};

struct s16 {
    signed char[4] pad4;
    struct s16* f4;
    struct s16* f8;
};

int32_t fun_406fb0(void** ecx, void** a2, void** a3, void** a4) {
    void** eax5;
    void** esi6;
    uint32_t edx7;
    void* v8;
    void** ecx9;
    void* ebx10;
    struct s12* edi11;
    void* v12;
    void* v13;
    void** ecx14;
    struct s14* ebx15;
    void* esi16;
    void* esi17;
    uint32_t ecx18;
    signed char* ecx19;
    uint32_t ebx20;
    void* ecx21;
    signed char* esi22;
    uint32_t ebx23;
    void* esi24;
    struct s15* ecx25;
    signed char cl26;
    uint32_t ecx27;
    uint32_t* eax28;
    void* ecx29;
    void* ecx30;
    int32_t eax31;
    void* ecx32;
    void* v33;
    uint32_t ecx34;
    signed char* ecx35;
    uint32_t ebx36;
    signed char* ecx37;
    uint32_t ebx38;
    void* v39;
    void** edx40;
    void* edi41;
    struct s16* ecx42;
    struct s16* ebx43;
    signed char cl44;
    uint32_t ecx45;
    uint32_t* eax46;
    void* ecx47;
    void* ecx48;
    void** eax49;
    void** eax50;

    eax5 = *reinterpret_cast<void***>(a2 + 16);
    esi6 = reinterpret_cast<void**>(reinterpret_cast<uint32_t>(a4 + 23) & 0xfffffff0);
    edx7 = reinterpret_cast<unsigned char>(a3) - reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(a2 + 12)) >> 15;
    v8 = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(eax5 + edx7 * 0x204) + 0x144);
    ecx9 = *reinterpret_cast<void***>(a3 + 0xfffffffc) - 1;
    ebx10 = *reinterpret_cast<void**>(reinterpret_cast<unsigned char>(ecx9) + reinterpret_cast<unsigned char>(a3) + 0xfffffffc);
    edi11 = reinterpret_cast<struct s12*>(reinterpret_cast<unsigned char>(ecx9) + reinterpret_cast<unsigned char>(a3) + 0xfffffffc);
    v12 = ebx10;
    if (reinterpret_cast<signed char>(esi6) <= reinterpret_cast<signed char>(ecx9)) {
        if (reinterpret_cast<signed char>(esi6) < reinterpret_cast<signed char>(ecx9)) {
            v13 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(ecx9) - reinterpret_cast<unsigned char>(esi6));
            ecx14 = esi6 + 1;
            *reinterpret_cast<void***>(a3 + 0xfffffffc) = ecx14;
            ebx15 = reinterpret_cast<struct s14*>(reinterpret_cast<unsigned char>(a3) + reinterpret_cast<unsigned char>(esi6) + 0xfffffffc);
            esi16 = reinterpret_cast<void*>((reinterpret_cast<int32_t>(v13) >> 4) - 1);
            *reinterpret_cast<void***>(reinterpret_cast<uint32_t>(ebx15) - 4) = ecx14;
            if (reinterpret_cast<uint32_t>(esi16) > 63) {
                esi16 = reinterpret_cast<void*>(63);
            }
            if (!(*reinterpret_cast<unsigned char*>(&v12) & 1)) {
                esi17 = reinterpret_cast<void*>((reinterpret_cast<int32_t>(v12) >> 4) - 1);
                if (reinterpret_cast<uint32_t>(esi17) > 63) {
                    esi17 = reinterpret_cast<void*>(63);
                }
                if (edi11->f4 == edi11->f8) {
                    if (reinterpret_cast<uint32_t>(esi17) >= 32) {
                        ecx18 = reinterpret_cast<uint32_t>(esi17) - 32;
                        ecx19 = reinterpret_cast<signed char*>(reinterpret_cast<uint32_t>(esi17) + reinterpret_cast<unsigned char>(eax5) + 4);
                        ebx20 = ~(0x80000000 >> *reinterpret_cast<signed char*>(&ecx18));
                        *reinterpret_cast<uint32_t*>(reinterpret_cast<uint32_t>(eax5 + edx7 * 4) + 0xc4) = *reinterpret_cast<uint32_t*>(reinterpret_cast<uint32_t>(eax5 + edx7 * 4) + 0xc4) & ebx20;
                        *ecx19 = reinterpret_cast<signed char>(*ecx19 - 1);
                        if (!*ecx19) {
                            *reinterpret_cast<void***>(a2 + 4) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(a2 + 4)) & ebx20);
                        }
                    } else {
                        ecx21 = esi17;
                        esi22 = reinterpret_cast<signed char*>(reinterpret_cast<uint32_t>(esi17) + reinterpret_cast<unsigned char>(eax5) + 4);
                        ebx23 = ~(0x80000000 >> *reinterpret_cast<signed char*>(&ecx21));
                        *reinterpret_cast<uint32_t*>(reinterpret_cast<uint32_t>(eax5 + edx7 * 4) + 68) = *reinterpret_cast<uint32_t*>(reinterpret_cast<uint32_t>(eax5 + edx7 * 4) + 68) & ebx23;
                        *esi22 = reinterpret_cast<signed char>(*esi22 - 1);
                        if (!*esi22) {
                            *reinterpret_cast<void***>(a2) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(a2)) & ebx23);
                        }
                    }
                    ebx15 = ebx15;
                }
                edi11->f8->f4 = edi11->f4;
                edi11->f4->f8 = edi11->f8;
                esi24 = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(v13) + reinterpret_cast<uint32_t>(v12));
                v13 = esi24;
                esi16 = reinterpret_cast<void*>((reinterpret_cast<int32_t>(esi24) >> 4) - 1);
                if (reinterpret_cast<uint32_t>(esi16) > 63) {
                    esi16 = reinterpret_cast<void*>(63);
                }
            }
            ecx25 = reinterpret_cast<struct s15*>(reinterpret_cast<uint32_t>(v8) + reinterpret_cast<uint32_t>(esi16) * 8);
            ebx15->f4 = *reinterpret_cast<struct s15**>(reinterpret_cast<uint32_t>(v8) + reinterpret_cast<uint32_t>(esi16) * 8 + 4);
            ebx15->f8 = ecx25;
            ecx25->f4 = ebx15;
            ebx15->f4->f8 = ebx15;
            if (ebx15->f4 == ebx15->f8) {
                cl26 = *reinterpret_cast<signed char*>(reinterpret_cast<uint32_t>(esi16) + reinterpret_cast<unsigned char>(eax5) + 4);
                *reinterpret_cast<signed char*>(reinterpret_cast<uint32_t>(esi16) + reinterpret_cast<unsigned char>(eax5) + 4) = reinterpret_cast<signed char>(cl26 + 1);
                if (reinterpret_cast<uint32_t>(esi16) >= 32) {
                    if (!cl26) {
                        ecx27 = reinterpret_cast<uint32_t>(esi16) - 32;
                        *reinterpret_cast<void***>(a2 + 4) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(a2 + 4)) | 0x80000000 >> *reinterpret_cast<signed char*>(&ecx27));
                    }
                    eax28 = reinterpret_cast<uint32_t*>(reinterpret_cast<uint32_t>(eax5 + edx7 * 4) + 0xc4);
                    ecx29 = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(esi16) - 32);
                } else {
                    if (!cl26) {
                        ecx30 = esi16;
                        *reinterpret_cast<void***>(a2) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(a2)) | 0x80000000 >> *reinterpret_cast<signed char*>(&ecx30));
                    }
                    eax28 = reinterpret_cast<uint32_t*>(reinterpret_cast<uint32_t>(eax5 + edx7 * 4) + 68);
                    ecx29 = esi16;
                }
                *eax28 = *eax28 | 0x80000000 >> *reinterpret_cast<signed char*>(&ecx29);
            }
            ebx15->f0 = v13;
            *reinterpret_cast<void**>(reinterpret_cast<uint32_t>(v13) + reinterpret_cast<uint32_t>(ebx15) - 4) = v13;
        }
    } else {
        if (*reinterpret_cast<unsigned char*>(&ebx10) & 1 || reinterpret_cast<signed char>(esi6) > reinterpret_cast<signed char>(reinterpret_cast<uint32_t>(ebx10) + reinterpret_cast<unsigned char>(ecx9))) {
            eax31 = 0;
            goto addr_4072a1_29;
        } else {
            ecx32 = reinterpret_cast<void*>((reinterpret_cast<int32_t>(v12) >> 4) - 1);
            v33 = ecx32;
            if (reinterpret_cast<uint32_t>(ecx32) > 63) {
                ecx32 = reinterpret_cast<void*>(63);
                v33 = reinterpret_cast<void*>(63);
            }
            if (edi11->f4 == edi11->f8) {
                if (reinterpret_cast<uint32_t>(ecx32) >= 32) {
                    ecx34 = reinterpret_cast<uint32_t>(ecx32) - 32;
                    ecx35 = reinterpret_cast<signed char*>(reinterpret_cast<uint32_t>(v33) + reinterpret_cast<unsigned char>(eax5) + 4);
                    ebx36 = ~(0x80000000 >> *reinterpret_cast<signed char*>(&ecx34));
                    *reinterpret_cast<uint32_t*>(reinterpret_cast<uint32_t>(eax5 + edx7 * 4) + 0xc4) = *reinterpret_cast<uint32_t*>(reinterpret_cast<uint32_t>(eax5 + edx7 * 4) + 0xc4) & ebx36;
                    *ecx35 = reinterpret_cast<signed char>(*ecx35 - 1);
                    if (!*ecx35) {
                        *reinterpret_cast<void***>(a2 + 4) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(a2 + 4)) & ebx36);
                    }
                } else {
                    ecx37 = reinterpret_cast<signed char*>(reinterpret_cast<uint32_t>(v33) + reinterpret_cast<unsigned char>(eax5) + 4);
                    ebx38 = ~(0x80000000 >> *reinterpret_cast<signed char*>(&ecx32));
                    *reinterpret_cast<uint32_t*>(reinterpret_cast<uint32_t>(eax5 + edx7 * 4) + 68) = *reinterpret_cast<uint32_t*>(reinterpret_cast<uint32_t>(eax5 + edx7 * 4) + 68) & ebx38;
                    *ecx37 = reinterpret_cast<signed char>(*ecx37 - 1);
                    if (!*ecx37) {
                        *reinterpret_cast<void***>(a2) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(a2)) & ebx38);
                    }
                }
            }
            edi11->f8->f4 = edi11->f4;
            edi11->f4->f8 = edi11->f8;
            v39 = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(v12) + (reinterpret_cast<unsigned char>(ecx9) - reinterpret_cast<unsigned char>(esi6)));
            if (reinterpret_cast<int32_t>(v39) <= reinterpret_cast<int32_t>(0)) {
                edx40 = a3;
            } else {
                edi41 = reinterpret_cast<void*>((reinterpret_cast<int32_t>(v39) >> 4) - 1);
                ecx42 = reinterpret_cast<struct s16*>(reinterpret_cast<unsigned char>(a3) + reinterpret_cast<unsigned char>(esi6) + 0xfffffffc);
                if (reinterpret_cast<uint32_t>(edi41) > 63) {
                    edi41 = reinterpret_cast<void*>(63);
                }
                ebx43 = reinterpret_cast<struct s16*>(reinterpret_cast<uint32_t>(v8) + reinterpret_cast<uint32_t>(edi41) * 8);
                ecx42->f4 = ebx43->f4;
                ecx42->f8 = ebx43;
                ebx43->f4 = ecx42;
                ecx42->f4->f8 = ecx42;
                if (ecx42->f4 == ecx42->f8) {
                    cl44 = *reinterpret_cast<signed char*>(reinterpret_cast<uint32_t>(edi41) + reinterpret_cast<unsigned char>(eax5) + 4);
                    *reinterpret_cast<signed char*>(reinterpret_cast<uint32_t>(edi41) + reinterpret_cast<unsigned char>(eax5) + 4) = reinterpret_cast<signed char>(cl44 + 1);
                    if (reinterpret_cast<uint32_t>(edi41) >= 32) {
                        if (!cl44) {
                            ecx45 = reinterpret_cast<uint32_t>(edi41) - 32;
                            *reinterpret_cast<void***>(a2 + 4) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(a2 + 4)) | 0x80000000 >> *reinterpret_cast<signed char*>(&ecx45));
                        }
                        eax46 = reinterpret_cast<uint32_t*>(reinterpret_cast<uint32_t>(eax5 + edx7 * 4) + 0xc4);
                        ecx47 = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(edi41) - 32);
                    } else {
                        if (!cl44) {
                            ecx48 = edi41;
                            *reinterpret_cast<void***>(a2) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(a2)) | 0x80000000 >> *reinterpret_cast<signed char*>(&ecx48));
                        }
                        eax46 = reinterpret_cast<uint32_t*>(reinterpret_cast<uint32_t>(eax5 + edx7 * 4) + 68);
                        ecx47 = edi41;
                    }
                    *eax46 = *eax46 | 0x80000000 >> *reinterpret_cast<signed char*>(&ecx47);
                }
                edx40 = a3;
                eax49 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(edx40) + reinterpret_cast<unsigned char>(esi6) + 0xfffffffc);
                *eax49 = v39;
                *reinterpret_cast<void**>(reinterpret_cast<uint32_t>(v39) + reinterpret_cast<uint32_t>(eax49) - 4) = v39;
            }
            eax50 = esi6 + 1;
            *reinterpret_cast<void***>(edx40 + 0xfffffffc) = eax50;
            *reinterpret_cast<void***>(reinterpret_cast<unsigned char>(edx40) + reinterpret_cast<unsigned char>(esi6) + 0xfffffff8) = eax50;
        }
    }
    eax31 = 1;
    addr_4072a1_29:
    return eax31;
}

void** fun_4075d3(void** ecx, void** a2, struct s0** a3, void*** a4) {
    void** eax5;
    struct s0* ecx6;
    void** ecx7;

    eax5 = a2;
    ecx6 = reinterpret_cast<struct s0*>(0x40e698);
    while (reinterpret_cast<unsigned char>(eax5) <= reinterpret_cast<unsigned char>(ecx6->f16) || reinterpret_cast<unsigned char>(eax5) >= reinterpret_cast<unsigned char>(ecx6->f20)) {
        ecx6 = ecx6->f0;
        if (ecx6 == 0x40e698) 
            goto addr_407626_4;
    }
    if (!(*reinterpret_cast<unsigned char*>(&eax5) & 15) && (reinterpret_cast<unsigned char>(eax5) & 0xfff) >= 0x100) {
        *a3 = ecx6;
        ecx7 = eax5;
        *reinterpret_cast<uint16_t*>(&ecx7) = reinterpret_cast<uint16_t>(*reinterpret_cast<uint16_t*>(&ecx7) & 0xf000);
        *a4 = ecx7;
        return (reinterpret_cast<int32_t>(reinterpret_cast<unsigned char>(eax5) - reinterpret_cast<unsigned char>(ecx7) - 0x100) >> 4) + reinterpret_cast<unsigned char>(ecx7) + 8;
    }
    addr_407626_4:
    return 0;
}

struct s17 {
    uint32_t f0;
    int32_t f4;
};

uint32_t fun_40799b(void** ecx, void** a2, void** a3, void** a4, void** a5) {
    void** edx6;
    void** ebx7;
    void** ecx8;
    uint32_t v9;
    struct s17* edi10;
    void** esi11;
    void** eax12;
    int1_t zf13;
    void** eax14;
    void** eax15;

    edx6 = a4;
    ebx7 = a3;
    ecx8 = reinterpret_cast<void**>(static_cast<uint32_t>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(edx6))));
    v9 = 0;
    edi10 = reinterpret_cast<struct s17*>(reinterpret_cast<uint32_t>(a2 + (reinterpret_cast<int32_t>(reinterpret_cast<unsigned char>(ebx7) - reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(a2 + 16))) >> 12) * 8) + 24);
    if (reinterpret_cast<unsigned char>(ecx8) <= reinterpret_cast<unsigned char>(a5)) {
        if (reinterpret_cast<unsigned char>(ecx8) >= reinterpret_cast<unsigned char>(a5)) 
            goto addr_407a3c_3;
        esi11 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(edx6) + reinterpret_cast<unsigned char>(a5));
        if (reinterpret_cast<unsigned char>(ebx7 + 0xf8) < reinterpret_cast<unsigned char>(esi11)) 
            goto addr_407a3c_3;
        eax12 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(ecx8) + reinterpret_cast<unsigned char>(edx6));
        while (zf13 = eax12 == esi11, reinterpret_cast<unsigned char>(eax12) < reinterpret_cast<unsigned char>(esi11)) {
            if (*reinterpret_cast<void***>(eax12)) 
                goto addr_4079f6_8;
            ++eax12;
        }
    } else {
        eax14 = a5;
        *reinterpret_cast<void***>(edx6) = eax14;
        edi10->f0 = edi10->f0 + (reinterpret_cast<unsigned char>(ecx8) - reinterpret_cast<unsigned char>(eax14));
        edi10->f4 = 0xf1;
        goto addr_407a35_11;
    }
    addr_4079f8_12:
    if (!zf13) {
        addr_407a3c_3:
        return v9;
    } else {
        *reinterpret_cast<void***>(edx6) = a5;
        if (reinterpret_cast<unsigned char>(edx6) <= reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(ebx7)) && reinterpret_cast<unsigned char>(esi11) > reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(ebx7))) {
            if (reinterpret_cast<unsigned char>(esi11) >= reinterpret_cast<unsigned char>(ebx7 + 0xf8)) {
                *reinterpret_cast<void***>(ebx7 + 4) = reinterpret_cast<void**>(0);
                *reinterpret_cast<void***>(ebx7) = ebx7 + 8;
            } else {
                eax15 = reinterpret_cast<void**>(0);
                *reinterpret_cast<void***>(ebx7) = esi11;
                if (!*reinterpret_cast<void***>(esi11)) {
                    do {
                        ++eax15;
                    } while (!*reinterpret_cast<signed char*>(reinterpret_cast<unsigned char>(esi11) + reinterpret_cast<unsigned char>(eax15)));
                }
                *reinterpret_cast<void***>(ebx7 + 4) = eax15;
            }
        }
        edi10->f0 = edi10->f0 + (reinterpret_cast<unsigned char>(ecx8) - reinterpret_cast<unsigned char>(a5));
    }
    addr_407a35_11:
    v9 = 1;
    goto addr_407a3c_3;
    addr_4079f6_8:
    zf13 = eax12 == esi11;
    goto addr_4079f8_12;
}

struct s19 {
    signed char[4] pad4;
    struct s19* f4;
    struct s19* f8;
};

struct s18 {
    signed char[4] pad4;
    struct s19* f4;
    struct s19* f8;
};

void fun_4067d2(void** ecx, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7, void** a8, void** a9) {
    void** eax10;
    void** esi11;
    void** edi12;
    void*** v13;
    void** ecx14;
    void** v15;
    struct s18* ebx16;
    void* v17;
    void** v18;
    void* edx19;
    struct s18* v20;
    void* edx21;
    void** ecx22;
    uint32_t ecx23;
    signed char* ecx24;
    uint32_t ebx25;
    void* ecx26;
    signed char* ecx27;
    uint32_t ebx28;
    void** edx29;
    uint32_t ebx30;
    void** ebx31;
    void** v32;
    void** ecx33;
    uint32_t ecx34;
    uint32_t esi35;
    void** ecx36;
    uint32_t esi37;
    void** ecx38;
    signed char cl39;
    uint32_t ecx40;
    uint32_t ecx41;
    uint32_t* eax42;
    void** ecx43;
    void** ecx44;
    uint32_t* eax45;
    void** eax46;
    void** ecx47;
    int32_t esi48;
    void** ecx49;
    void** ecx50;
    void** eax51;
    void** eax52;
    void** ecx53;
    void** eax54;
    void** eax55;
    void** v56;
    void** eax57;
    void** v58;
    void** v59;
    uint32_t eax60;
    void** edx61;
    void** eax62;
    void** ecx63;
    int1_t below_or_equal64;
    void** eax65;

    eax10 = *reinterpret_cast<void***>(a2 + 16);
    esi11 = a3 + 0xfffffffc;
    edi12 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(a3) - reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(a2 + 12)) >> 15);
    v13 = reinterpret_cast<void***>(reinterpret_cast<uint32_t>(eax10 + reinterpret_cast<unsigned char>(edi12) * 0x204) + 0x144);
    ecx14 = *reinterpret_cast<void***>(esi11) - 1;
    v15 = ecx14;
    if (!(*reinterpret_cast<unsigned char*>(&ecx14) & 1)) {
        ebx16 = reinterpret_cast<struct s18*>(reinterpret_cast<unsigned char>(ecx14) + reinterpret_cast<unsigned char>(esi11));
        v17 = *reinterpret_cast<void**>(reinterpret_cast<unsigned char>(ecx14) + reinterpret_cast<unsigned char>(esi11));
        v18 = *reinterpret_cast<void***>(esi11 + 0xfffffffc);
        edx19 = v17;
        v20 = ebx16;
        if (!(*reinterpret_cast<unsigned char*>(&edx19) & 1)) {
            edx21 = reinterpret_cast<void*>((reinterpret_cast<int32_t>(edx19) >> 4) - 1);
            if (reinterpret_cast<uint32_t>(edx21) > 63) {
                edx21 = reinterpret_cast<void*>(63);
            }
            if (ebx16->f4 != ebx16->f8) {
                ecx22 = v15;
            } else {
                if (reinterpret_cast<uint32_t>(edx21) >= 32) {
                    ecx23 = reinterpret_cast<uint32_t>(edx21) - 32;
                    ecx24 = reinterpret_cast<signed char*>(reinterpret_cast<uint32_t>(edx21) + reinterpret_cast<unsigned char>(eax10) + 4);
                    ebx25 = ~(0x80000000 >> *reinterpret_cast<signed char*>(&ecx23));
                    *reinterpret_cast<uint32_t*>(reinterpret_cast<uint32_t>(eax10 + reinterpret_cast<unsigned char>(edi12) * 4) + 0xc4) = *reinterpret_cast<uint32_t*>(reinterpret_cast<uint32_t>(eax10 + reinterpret_cast<unsigned char>(edi12) * 4) + 0xc4) & ebx25;
                    *ecx24 = reinterpret_cast<signed char>(*ecx24 - 1);
                    if (!*ecx24) {
                        *reinterpret_cast<void***>(a2 + 4) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(a2 + 4)) & ebx25);
                    }
                } else {
                    ecx26 = edx21;
                    ecx27 = reinterpret_cast<signed char*>(reinterpret_cast<uint32_t>(edx21) + reinterpret_cast<unsigned char>(eax10) + 4);
                    ebx28 = ~(0x80000000 >> *reinterpret_cast<signed char*>(&ecx26));
                    *reinterpret_cast<uint32_t*>(reinterpret_cast<uint32_t>(eax10 + reinterpret_cast<unsigned char>(edi12) * 4) + 68) = *reinterpret_cast<uint32_t*>(reinterpret_cast<uint32_t>(eax10 + reinterpret_cast<unsigned char>(edi12) * 4) + 68) & ebx28;
                    *ecx27 = reinterpret_cast<signed char>(*ecx27 - 1);
                    if (!*ecx27) {
                        *reinterpret_cast<void***>(a2) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(a2)) & ebx28);
                    }
                }
                ecx22 = v15;
                ebx16 = v20;
            }
            ecx14 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(ecx22) + reinterpret_cast<uint32_t>(v17));
            ebx16->f8->f4 = ebx16->f4;
            v15 = ecx14;
            v20->f4->f8 = v20->f8;
        }
        edx29 = reinterpret_cast<void**>((reinterpret_cast<signed char>(ecx14) >> 4) - 1);
        if (reinterpret_cast<unsigned char>(edx29) > reinterpret_cast<unsigned char>(63)) {
            edx29 = reinterpret_cast<void**>(63);
        }
        ebx30 = reinterpret_cast<unsigned char>(v18) & 1;
        if (ebx30) {
            ebx31 = a2;
        } else {
            v32 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(esi11) - reinterpret_cast<unsigned char>(v18));
            ebx31 = reinterpret_cast<void**>((reinterpret_cast<signed char>(v18) >> 4) - 1);
            if (reinterpret_cast<unsigned char>(ebx31) > reinterpret_cast<unsigned char>(63)) {
                ebx31 = reinterpret_cast<void**>(63);
            }
            ecx33 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(ecx14) + reinterpret_cast<unsigned char>(v18));
            v15 = ecx33;
            edx29 = reinterpret_cast<void**>((reinterpret_cast<signed char>(ecx33) >> 4) - 1);
            if (reinterpret_cast<unsigned char>(edx29) > reinterpret_cast<unsigned char>(63)) {
                edx29 = reinterpret_cast<void**>(63);
            }
            if (ebx31 != edx29) {
                if (*reinterpret_cast<void***>(v32 + 4) == *reinterpret_cast<void***>(v32 + 8)) {
                    if (reinterpret_cast<unsigned char>(ebx31) >= reinterpret_cast<unsigned char>(32)) {
                        ecx34 = reinterpret_cast<uint32_t>(ebx31 + 0xffffffe0);
                        esi35 = ~(0x80000000 >> *reinterpret_cast<signed char*>(&ecx34));
                        *reinterpret_cast<uint32_t*>(reinterpret_cast<uint32_t>(eax10 + reinterpret_cast<unsigned char>(edi12) * 4) + 0xc4) = *reinterpret_cast<uint32_t*>(reinterpret_cast<uint32_t>(eax10 + reinterpret_cast<unsigned char>(edi12) * 4) + 0xc4) & esi35;
                        *reinterpret_cast<signed char*>(reinterpret_cast<unsigned char>(ebx31) + reinterpret_cast<unsigned char>(eax10) + 4) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(reinterpret_cast<unsigned char>(ebx31) + reinterpret_cast<unsigned char>(eax10) + 4) - 1);
                        if (!*reinterpret_cast<signed char*>(reinterpret_cast<unsigned char>(ebx31) + reinterpret_cast<unsigned char>(eax10) + 4)) {
                            *reinterpret_cast<void***>(a2 + 4) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(a2 + 4)) & esi35);
                        }
                    } else {
                        ecx36 = ebx31;
                        esi37 = ~(0x80000000 >> *reinterpret_cast<signed char*>(&ecx36));
                        *reinterpret_cast<uint32_t*>(reinterpret_cast<uint32_t>(eax10 + reinterpret_cast<unsigned char>(edi12) * 4) + 68) = *reinterpret_cast<uint32_t*>(reinterpret_cast<uint32_t>(eax10 + reinterpret_cast<unsigned char>(edi12) * 4) + 68) & esi37;
                        *reinterpret_cast<signed char*>(reinterpret_cast<unsigned char>(ebx31) + reinterpret_cast<unsigned char>(eax10) + 4) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(reinterpret_cast<unsigned char>(ebx31) + reinterpret_cast<unsigned char>(eax10) + 4) - 1);
                        if (!*reinterpret_cast<signed char*>(reinterpret_cast<unsigned char>(ebx31) + reinterpret_cast<unsigned char>(eax10) + 4)) {
                            *reinterpret_cast<void***>(a2) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(a2)) & esi37);
                        }
                    }
                }
                *reinterpret_cast<void***>(*reinterpret_cast<void***>(v32 + 8) + 4) = *reinterpret_cast<void***>(v32 + 4);
                *reinterpret_cast<void***>(*reinterpret_cast<void***>(v32 + 4) + 8) = *reinterpret_cast<void***>(v32 + 8);
            }
            esi11 = v32;
        }
        if ((ebx30 || ebx31 != edx29) && (ecx38 = reinterpret_cast<void**>(v13 + reinterpret_cast<unsigned char>(edx29) * 8), *reinterpret_cast<void***>(esi11 + 4) = (v13 + reinterpret_cast<unsigned char>(edx29) * 8)[4], *reinterpret_cast<void***>(esi11 + 8) = ecx38, *reinterpret_cast<void***>(ecx38 + 4) = esi11, *reinterpret_cast<void***>(*reinterpret_cast<void***>(esi11 + 4) + 8) = esi11, *reinterpret_cast<void***>(esi11 + 4) == *reinterpret_cast<void***>(esi11 + 8))) {
            cl39 = *reinterpret_cast<signed char*>(reinterpret_cast<unsigned char>(edx29) + reinterpret_cast<unsigned char>(eax10) + 4);
            *reinterpret_cast<signed char*>(reinterpret_cast<unsigned char>(edx29) + reinterpret_cast<unsigned char>(eax10) + 4) = reinterpret_cast<signed char>(cl39 + 1);
            if (reinterpret_cast<unsigned char>(edx29) >= reinterpret_cast<unsigned char>(32)) {
                if (!cl39) {
                    ecx40 = reinterpret_cast<uint32_t>(edx29 + 0xffffffe0);
                    *reinterpret_cast<void***>(a2 + 4) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(a2 + 4)) | 0x80000000 >> *reinterpret_cast<signed char*>(&ecx40));
                }
                ecx41 = reinterpret_cast<uint32_t>(edx29 + 0xffffffe0);
                eax42 = reinterpret_cast<uint32_t*>(reinterpret_cast<uint32_t>(eax10 + reinterpret_cast<unsigned char>(edi12) * 4) + 0xc4);
                *eax42 = *eax42 | 0x80000000 >> *reinterpret_cast<signed char*>(&ecx41);
            } else {
                if (!cl39) {
                    ecx43 = edx29;
                    *reinterpret_cast<void***>(a2) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(a2)) | 0x80000000 >> *reinterpret_cast<signed char*>(&ecx43));
                }
                ecx44 = edx29;
                eax45 = reinterpret_cast<uint32_t*>(reinterpret_cast<uint32_t>(eax10 + reinterpret_cast<unsigned char>(edi12) * 4) + 68);
                *eax45 = *eax45 | 0x80000000 >> *reinterpret_cast<signed char*>(&ecx44);
            }
        }
        *reinterpret_cast<void***>(esi11) = v15;
        *reinterpret_cast<void***>(reinterpret_cast<unsigned char>(v15) + reinterpret_cast<unsigned char>(esi11) + 0xfffffffc) = v15;
        *v13 = *v13 - 1;
        if (!*v13) {
            eax46 = g4112b0;
            if (eax46) {
                ecx47 = g4112a8;
                esi48 = VirtualFree;
                ecx49 = reinterpret_cast<void**>((reinterpret_cast<unsigned char>(ecx47) << 15) + reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax46 + 12)));
                esi48(ecx49, 0x8000, 0x4000);
                ecx50 = g4112a8;
                eax51 = g4112b0;
                *reinterpret_cast<void***>(eax51 + 8) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax51 + 8)) | 0x80000000 >> *reinterpret_cast<signed char*>(&ecx50));
                eax52 = g4112b0;
                ecx53 = g4112a8;
                *reinterpret_cast<uint32_t*>(reinterpret_cast<uint32_t>(*reinterpret_cast<void***>(eax52 + 16) + reinterpret_cast<unsigned char>(ecx53) * 4) + 0xc4) = 0;
                eax54 = g4112b0;
                *reinterpret_cast<signed char*>(*reinterpret_cast<void***>(eax54 + 16) + 67) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(*reinterpret_cast<void***>(eax54 + 16) + 67) - 1);
                eax55 = g4112b0;
                if (!*reinterpret_cast<signed char*>(*reinterpret_cast<void***>(eax55 + 16) + 67)) {
                    *reinterpret_cast<void***>(eax55 + 4) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax55 + 4)) & 0xfffffffe);
                    eax55 = g4112b0;
                }
                if (reinterpret_cast<int1_t>(*reinterpret_cast<void***>(eax55 + 8) == 0xffffffff)) {
                    v56 = *reinterpret_cast<void***>(eax55 + 12);
                    esi48(v56, 0, 0x8000, ecx49, 0x8000, 0x4000);
                    eax57 = g4112b0;
                    v58 = *reinterpret_cast<void***>(eax57 + 16);
                    v59 = g4112c0;
                    HeapFree(v59, 0, v58, v56, 0, 0x8000, ecx49, 0x8000, 0x4000);
                    eax60 = g4112b4;
                    edx61 = g4112b8;
                    eax62 = g4112b0;
                    ecx63 = eax62 + 20;
                    fun_409830(ecx63, eax62, ecx63, (eax60 + eax60 * 4 << 2) - reinterpret_cast<unsigned char>(eax62) + reinterpret_cast<unsigned char>(edx61) + 0xffffffec, v59, 0, v58, v56, 0, 0x8000, ecx49, 0x8000, 0x4000);
                    --g4112b4;
                    below_or_equal64 = reinterpret_cast<unsigned char>(a2) <= reinterpret_cast<unsigned char>(g4112b0);
                    if (!below_or_equal64) {
                        a2 = a2 - 20;
                    }
                    eax65 = g4112b8;
                    g4112ac = eax65;
                }
            }
            g4112a8 = edi12;
            g4112b0 = a2;
        }
    }
    return;
}

struct s20 {
    uint32_t f0;
    int32_t f4;
};

void fun_40762a(void** ecx, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7, void** a8, void** a9, void** a10) {
    struct s20* eax11;
    int1_t zf12;
    int1_t zf13;

    eax11 = reinterpret_cast<struct s20*>(reinterpret_cast<uint32_t>(a2 + (reinterpret_cast<int32_t>(reinterpret_cast<unsigned char>(a3) - reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(a2 + 16))) >> 12) * 8) + 24);
    eax11->f0 = eax11->f0 + reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(a4));
    *reinterpret_cast<void***>(a4) = reinterpret_cast<void**>(0);
    zf12 = eax11->f0 == 0xf0;
    eax11->f4 = 0xf1;
    if (zf12 && (++g410d30, zf13 = g410d30 == 32, zf13)) {
        fun_407511(a4);
    }
    return;
}

void fun_40b160();

void fun_405b52(void** ecx, void** a2, void** a3, int32_t a4, int32_t a5, void** a6, void** a7, void** a8) {
    void** eax9;
    void** eax10;
    void** eax11;

    eax9 = g0;
    fun_40b160();
    eax10 = *reinterpret_cast<void***>(a3 + 4);
    *reinterpret_cast<unsigned char*>(&eax10) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&eax10) & 0xfd);
    *reinterpret_cast<void***>(a3 + 4) = eax10;
    eax11 = g0;
    *reinterpret_cast<void***>(eax9) = eax11;
    g0 = eax9;
    return;
}

int32_t g4106d4 = 0x40863c;

void fun_4086e3(void** ecx, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7, void** a8, void** a9);

int32_t g410d48 = 0;

void fun_40868d(void** ecx, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7, void** a8, void** a9, void** a10, void** a11, void** a12, void** a13, void** a14, void** a15, void** a16, void** a17, void** a18, void** a19);

void fun_409441(void** ecx, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7, void** a8, void** a9, void** a10);

uint32_t fun_40a894(void** a1, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7, void** a8, void** a9, void** a10);

void** fun_4053b9(void** ecx, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7, void** a8, void** a9, void** a10);

int32_t g410f20 = 0;

void fun_409cd0(void** ecx, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7, void** a8, void** a9, void** a10, void** a11, void** a12, void** a13, void** a14, void** a15, void** a16, void** a17, void** a18, void** a19, void** a20);

void** fun_408692(void** ecx) {
    void** esp2;
    void** eax3;
    void** esp4;
    void** esp5;
    void** v6;
    int32_t eax7;
    void** edi8;
    void** esi9;
    void** ebx10;
    void** eax11;
    void** esp12;
    void** v13;
    int32_t eax14;
    void** edi15;
    void** esi16;
    void** ebx17;
    int1_t zf18;

    esp2 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4);
    eax3 = g0;
    esp4 = reinterpret_cast<void**>(reinterpret_cast<uint32_t>(esp2 - 4) - 4 - 4 - 4);
    g0 = esp4;
    esp5 = reinterpret_cast<void**>(reinterpret_cast<uint32_t>(esp4 - 4) - 4 - 4 - 4 - 4);
    v6 = esp5;
    eax7 = g4106d4;
    if (eax7) {
        eax7(edi8, esi9, ebx10, v6, ecx, eax3, 0x409330, 0x40c330);
        esp5 = reinterpret_cast<void**>(reinterpret_cast<uint32_t>(esp5 - 4) + 4);
    }
    fun_4086e3(ecx, edi8, esi9, ebx10, v6, ecx, eax3, 0x409330, 0x40c330);
    eax11 = g0;
    esp12 = reinterpret_cast<void**>(reinterpret_cast<uint32_t>(esp5 - 4) + 4 - 4 - 4 - 4 - 4 - 4);
    g0 = esp12;
    v13 = reinterpret_cast<void**>(reinterpret_cast<uint32_t>(esp12 - 4) - 4 - 4 - 4 - 4);
    eax14 = g410d48;
    if (eax14) {
        eax14(edi15, esi16, ebx17, v13, ecx, eax11, 0x409330, 0x40c318);
    }
    fun_40868d(ecx, edi15, esi16, ebx17, v13, ecx, eax11, 0x409330, 0x40c318, 0xffffffff, esp2, edi8, esi9, ebx10, v6, ecx, eax3, 0x409330, 0x40c330);
    fun_409441(ecx, 10, edi15, esi16, ebx17, v13, ecx, eax11, 0x409330, 0x40c318);
    fun_40a894(22, 10, edi15, esi16, ebx17, v13, ecx, eax11, 0x409330, 0x40c318);
    fun_4053b9(10, 3, edi15, esi16, ebx17, v13, ecx, eax11, 0x409330, 0x40c318);
    zf18 = g410f20 == 0;
    if (zf18) {
        fun_409cd0(10, 3, edi15, esi16, ebx17, v13, ecx, eax11, 0x409330, 0x40c318, 0xffffffff, esp2, edi8, esi9, ebx10, v6, ecx, eax3, 0x409330, 0x40c330);
        ++g410f20;
    }
    goto 3;
}

struct s21 {
    signed char[4] pad4;
    int32_t f4;
    int32_t* f8;
    int32_t f12;
};

void fun_405eca(int32_t ecx, int32_t a2);

void fun_405e36(struct s21* a1, int32_t a2) {
    void** v3;
    int32_t* ebx4;
    int32_t esi5;
    int32_t ecx6;

    v3 = g0;
    g0 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4 - 4 - 4 - 4 - 4 - 4 - 4);
    while ((ebx4 = a1->f8, a1->f12 != -1) && a1->f12 != a2) {
        esi5 = a1->f12 + a1->f12 * 2;
        ecx6 = ebx4[esi5];
        a1->f12 = ecx6;
        if (!(ebx4 + esi5)[1]) {
            fun_405eca(ecx6, 0x101);
            (ebx4 + esi5)[2]();
        }
    }
    g0 = v3;
    return;
}

int32_t g40e518 = 0;

struct s22 {
    signed char[8] pad8;
    int32_t f8;
};

int32_t g40e514 = 0;

int32_t g40e51c = 0;

void fun_405eca(int32_t ecx, int32_t a2) {
    struct s22* ebp3;
    int32_t eax4;
    int32_t ebp5;

    g40e518 = ebp3->f8;
    g40e514 = eax4;
    g40e51c = ebp5;
    return;
}

void fun_409cbb(void** ecx, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7, void** a8, void** a9, void** a10, void** a11, void** a12, void** a13, void** a14, void** a15, void** a16, void** a17, void** a18, void** a19);

void** g410a20 = reinterpret_cast<void**>(0x80);

void** g410a24 = reinterpret_cast<void**>(1);

void** fun_409f2e(void** a1, void** a2, void** a3, uint32_t a4, void** a5, void* a6, void** a7, uint32_t a8);

void** g410a28 = reinterpret_cast<void**>(0xf0);

void** fun_4087e0(void** ecx, void** a2, void** a3, void** a4, void** a5, uint32_t a6, void* a7, int32_t a8, void* a9, void* a10, void** a11, void** a12) {
    uint32_t ebx13;
    void** eax14;
    void* esi15;
    void** edi16;
    void** esi17;
    void** ebx18;
    void** v19;
    void** v20;
    void** v21;
    void** v22;
    void** v23;
    void** v24;
    void** v25;
    void** v26;
    void** v27;
    void** ebp28;
    void* eax29;
    void*** tmp32_30;
    void** ecx31;
    int1_t zf32;
    void** v33;
    uint32_t v34;
    void* v35;
    void** eax36;
    void** tmp32_37;

    ebx13 = reinterpret_cast<uint32_t>(a2 - 0x76c);
    if (reinterpret_cast<int32_t>(ebx13) < reinterpret_cast<int32_t>(70) || reinterpret_cast<int32_t>(ebx13) > reinterpret_cast<int32_t>(0x8a)) {
        eax14 = reinterpret_cast<void**>(0xffffffff);
    } else {
        esi15 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(*reinterpret_cast<void**>(reinterpret_cast<unsigned char>(a3) * 4 + 0x410b04)) + reinterpret_cast<unsigned char>(a4));
        if (!(*reinterpret_cast<unsigned char*>(&ebx13) & 3) && reinterpret_cast<signed char>(a3) > reinterpret_cast<signed char>(2)) {
            esi15 = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(esi15) + 1);
        }
        fun_409cbb(ecx, edi16, esi17, ebx18, v19, v20, v21, v22, v23, v24, v25, v26, v27, ebp28, __return_address(), a2, a3, a4, a5);
        eax29 = reinterpret_cast<void*>(ebx13 * 0x16d + (reinterpret_cast<uint32_t>(esi15) + (reinterpret_cast<int32_t>(ebx13 + 0xffffffff) >> 2)));
        tmp32_30 = reinterpret_cast<void***>(g410a20 + (reinterpret_cast<uint32_t>(a5 + (reinterpret_cast<uint32_t>(eax29) + reinterpret_cast<uint32_t>(eax29) * 2) * 8) * 60 + a6) * 60);
        ecx31 = reinterpret_cast<void**>(reinterpret_cast<uint32_t>(tmp32_30) + reinterpret_cast<uint32_t>(a7) + 0x7c558180);
        if (a8 == 1 || a8 == -1 && ((zf32 = g410a24 == 0, !zf32) && (eax36 = fun_409f2e(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4 + 0xffffffdc, ebx18, v33, v34, a5, v35, a3 - 1, ebx13), ecx31 = ecx31, !!eax36))) {
            tmp32_37 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(ecx31) + reinterpret_cast<unsigned char>(g410a28));
            ecx31 = tmp32_37;
        }
        eax14 = ecx31;
    }
    return eax14;
}

void** fun_40a21a(void** ecx, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7, int32_t a8, int16_t a9, void* a10, int32_t a11);

void** fun_408af1(void** ecx, void** a2, void** a3) {
    void** ebp4;
    void** eax5;
    void** esi6;
    int32_t ecx7;
    int16_t v8;
    void** v9;
    void** ecx10;
    void* ebp11;
    void** eax12;
    uint32_t eax13;
    void** ecx14;

    ebp4 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4);
    eax5 = a2;
    if (reinterpret_cast<unsigned char>(eax5 + 1) > reinterpret_cast<unsigned char>(0x100)) {
        esi6 = g4106e0;
        ecx7 = reinterpret_cast<signed char>(eax5) >> 8;
        if (!(*reinterpret_cast<unsigned char*>(reinterpret_cast<uint32_t>(esi6 + *reinterpret_cast<unsigned char*>(&ecx7) * 2) + 1) & 0x80)) {
            *reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&v8) + 1) = 0;
            *reinterpret_cast<unsigned char*>(&v8) = *reinterpret_cast<unsigned char*>(&eax5);
            v9 = reinterpret_cast<void**>(1);
        } else {
            *reinterpret_cast<unsigned char*>(&v8) = *reinterpret_cast<unsigned char*>(&ecx7);
            *reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&v8) + 1) = *reinterpret_cast<unsigned char*>(&eax5);
            v9 = reinterpret_cast<void**>(2);
        }
        ecx10 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(ebp4) + 10);
        eax12 = fun_40a21a(ecx10, 1, ebp4 + 0xffffffff, v9, ecx10, 0, 0, 1, v8, ebp11, __return_address());
        if (eax12) {
            eax13 = *reinterpret_cast<uint16_t*>(&a2 + 2);
        } else {
            return eax12;
        }
    } else {
        ecx14 = g4106e0;
        eax13 = reinterpret_cast<uint16_t>(*reinterpret_cast<void***>(ecx14 + reinterpret_cast<unsigned char>(eax5) * 2));
    }
    return eax13 & reinterpret_cast<unsigned char>(a3);
}

int32_t g410d0c = 0;

void fun_409408(void** ecx, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7, void** a8);

int32_t ExitProcess = 0xcf3a;

void fun_406437(void** ecx, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7, void** a8) {
    int1_t zf9;

    zf9 = g410d0c == 1;
    if (zf9) {
        fun_409408(ecx, __return_address(), a2, a3, a4, a5, a6, a7);
    }
    fun_409441(ecx, __return_address(), __return_address(), a2, a3, a4, a5, a6, a7, a8);
    ExitProcess(__return_address());
    goto 0xff;
}

void fun_406412(void** ecx, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7, void** a8);

void** g4111a0;

uint32_t g4112a0;

int32_t GetStartupInfoA = 0xd014;

struct s23 {
    uint32_t f0;
    unsigned char f4;
};

struct s24 {
    void** f0;
    signed char[3] pad4;
    unsigned char f4;
};

int32_t GetStdHandle = 0xd18a;

int32_t GetFileType = 0xd19a;

int32_t SetHandleCount = 0xd178;

struct s25 {
    void** f0;
    signed char[3] pad4;
    unsigned char f4;
};

void fun_40917a(void** ecx, void** a2, void** a3, void** a4) {
    void** v5;
    void** ebx6;
    void** v7;
    void** ebp8;
    void** v9;
    void** esi10;
    void** v11;
    void** edi12;
    void** v13;
    void** v14;
    void** v15;
    void** v16;
    void** v17;
    void** v18;
    void** v19;
    void** eax20;
    void** esi21;
    void** ecx22;
    void* esp23;
    void** v24;
    void** v25;
    void** eax26;
    void** eax27;
    void** v28;
    int16_t v29;
    struct s23* v30;
    int32_t ebx31;
    uint32_t esi32;
    unsigned char* ebp33;
    void*** ebx34;
    int1_t less35;
    void** eax36;
    struct s24* esi37;
    int32_t eax38;
    uint32_t eax39;
    uint32_t eax40;
    void** eax41;
    uint32_t eax42;
    uint32_t eax43;
    int32_t v44;
    uint32_t edi45;
    void** v46;
    int32_t eax47;
    struct s25* eax48;
    void*** edi49;
    void** v50;
    void** v51;
    void** v52;
    void** v53;
    void** v54;
    void** v55;
    void** eax56;
    uint32_t tmp32_57;
    int1_t less58;

    v5 = ebx6;
    v7 = ebp8;
    v9 = esi10;
    v11 = edi12;
    eax20 = fun_40561b(ecx, 0x100, v11, v9, v7, v5, v13, v14, v15, v16, v17, v18, v19);
    esi21 = eax20;
    ecx22 = reinterpret_cast<void**>(0x100);
    esp23 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 68 - 4 - 4 - 4 - 4 - 4 - 4 + 4 + 4);
    if (!esi21) {
        fun_406412(0x100, 27, v11, v9, v7, v5, v24, v25);
        ecx22 = reinterpret_cast<void**>(27);
        esp23 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp23) - 4 - 4 + 4 + 4);
    }
    g4111a0 = esi21;
    g4112a0 = 32;
    eax26 = esi21 + 0x100;
    while (reinterpret_cast<unsigned char>(esi21) < reinterpret_cast<unsigned char>(eax26)) {
        *reinterpret_cast<void***>(esi21 + 4) = reinterpret_cast<void**>(0);
        *reinterpret_cast<void***>(esi21) = reinterpret_cast<void**>(0xffffffff);
        *reinterpret_cast<signed char*>(esi21 + 5) = 10;
        eax27 = g4111a0;
        esi21 = esi21 + 8;
        eax26 = eax27 + 0x100;
    }
    v28 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(esp23) + 16);
    GetStartupInfoA(ecx22);
    if (!v29 || !v30) {
        addr_4092aa_7:
        ebx31 = 0;
    } else {
        esi32 = v30->f0;
        ebp33 = &v30->f4;
        ebx34 = reinterpret_cast<void***>(esi32 + reinterpret_cast<uint32_t>(ebp33));
        if (reinterpret_cast<int32_t>(esi32) >= reinterpret_cast<int32_t>(0x800)) {
            esi32 = 0x800;
        }
        less35 = reinterpret_cast<int32_t>(g4112a0) < reinterpret_cast<int32_t>(esi32);
        if (!less35) 
            goto addr_40925e_11; else 
            goto addr_40920c_12;
    }
    do {
        eax36 = g4111a0;
        esi37 = reinterpret_cast<struct s24*>(eax36 + ebx31 * 8);
        if (!reinterpret_cast<int1_t>(*reinterpret_cast<void***>(eax36 + ebx31 * 8) == 0xffffffff)) {
            esi37->f4 = reinterpret_cast<unsigned char>(esi37->f4 | 0x80);
        } else {
            esi37->f4 = 0x81;
            if (ebx31) {
                eax38 = ebx31 - 1;
                eax39 = reinterpret_cast<uint32_t>(-eax38);
                eax40 = eax39 - (eax39 + reinterpret_cast<uint1_t>(eax39 < eax39 + reinterpret_cast<uint1_t>(!!eax38))) - 11;
            } else {
                eax40 = 0xf6;
            }
            eax41 = reinterpret_cast<void**>(GetStdHandle(ecx22, eax40));
            if (eax41 == 0xffffffff || ((eax42 = reinterpret_cast<uint32_t>(GetFileType(ecx22, eax41, eax40)), eax42 == 0) || (eax43 = eax42 & 0xff, esi37->f0 = eax41, eax43 == 2))) {
                esi37->f4 = reinterpret_cast<unsigned char>(esi37->f4 | 64);
            } else {
                if (eax43 == 3) {
                    esi37->f4 = reinterpret_cast<unsigned char>(esi37->f4 | 8);
                }
            }
        }
        ++ebx31;
    } while (ebx31 < 3);
    SetHandleCount(ecx22);
    goto v44;
    addr_40925e_11:
    edi45 = 0;
    if (!(reinterpret_cast<uint1_t>(reinterpret_cast<int32_t>(esi32) < reinterpret_cast<int32_t>(0)) | reinterpret_cast<uint1_t>(esi32 == 0))) {
        do {
            if (*ebx34 != 0xffffffff && ((*reinterpret_cast<unsigned char*>(&ecx22) = *ebp33, !!(*reinterpret_cast<unsigned char*>(&ecx22) & 1)) && (*reinterpret_cast<unsigned char*>(&ecx22) & 8 || (v46 = *ebx34, eax47 = reinterpret_cast<int32_t>(GetFileType(v46)), !!eax47)))) {
                eax48 = reinterpret_cast<struct s25*>(*reinterpret_cast<void****>((reinterpret_cast<int32_t>(edi45) >> 5) * 4 + 0x4111a0) + (edi45 & 31) * 8);
                ecx22 = *ebx34;
                eax48->f0 = ecx22;
                *reinterpret_cast<unsigned char*>(&ecx22) = *ebp33;
                eax48->f4 = *reinterpret_cast<unsigned char*>(&ecx22);
            }
            ++edi45;
            ++ebp33;
            ebx34 = ebx34 + 4;
        } while (reinterpret_cast<int32_t>(edi45) < reinterpret_cast<int32_t>(esi32));
        goto addr_4092aa_7;
    }
    addr_40920c_12:
    edi49 = reinterpret_cast<void***>(0x4111a4);
    do {
        eax56 = fun_40561b(ecx22, 0x100, v28, v11, v9, v7, v5, v50, v51, v52, v53, v54, v55);
        ecx22 = reinterpret_cast<void**>(0x100);
        if (!eax56) 
            break;
        tmp32_57 = g4112a0 + 32;
        g4112a0 = tmp32_57;
        *edi49 = eax56;
        ecx22 = eax56 + 0x100;
        while (reinterpret_cast<unsigned char>(eax56) < reinterpret_cast<unsigned char>(ecx22)) {
            *reinterpret_cast<void***>(eax56 + 4) = reinterpret_cast<void**>(0);
            *reinterpret_cast<void***>(eax56) = reinterpret_cast<void**>(0xffffffff);
            *reinterpret_cast<signed char*>(eax56 + 5) = 10;
            eax56 = eax56 + 8;
            ecx22 = *edi49 + 0x100;
        }
        edi49 = edi49 + 4;
        less58 = reinterpret_cast<int32_t>(g4112a0) < reinterpret_cast<int32_t>(esi32);
    } while (less58);
    goto addr_409256_32;
    esi32 = g4112a0;
    goto addr_40925e_11;
    addr_409256_32:
    goto addr_40925e_11;
}

void** g410e58 = reinterpret_cast<void**>(0);

int32_t GetEnvironmentStringsW = 0xd15e;

int32_t GetEnvironmentStrings = 0xd146;

int32_t FreeEnvironmentStringsA = 0xd112;

int32_t WideCharToMultiByte = 0xd0aa;

int32_t FreeEnvironmentStringsW = 0xd12c;

void** fun_409048(void** ecx, void** a2, void** a3, void** a4, void** a5) {
    void** v6;
    void** v7;
    void** v8;
    void** eax9;
    void** v10;
    void** ebx11;
    void** v12;
    void** ebp13;
    int32_t ebp14;
    void** v15;
    void** esi16;
    void** v17;
    void** edi18;
    void** ebx19;
    void** esi20;
    void** edi21;
    void** eax22;
    void** eax23;
    void** eax24;
    void** eax25;
    void** eax26;
    void** ebp27;
    void** eax28;
    void** esi29;
    void** eax30;
    void** eax31;
    int32_t edi32;
    void** v33;
    void** v34;
    void** eax35;
    void** eax36;
    void** v37;
    int32_t eax38;

    v6 = reinterpret_cast<void**>(__return_address());
    v7 = ecx;
    v8 = ecx;
    eax9 = g410e58;
    v10 = ebx11;
    v12 = ebp13;
    ebp14 = GetEnvironmentStringsW;
    v15 = esi16;
    v17 = edi18;
    ebx19 = reinterpret_cast<void**>(0);
    esi20 = reinterpret_cast<void**>(0);
    edi21 = reinterpret_cast<void**>(0);
    if (eax9) {
        if (!reinterpret_cast<int1_t>(eax9 == 1)) {
            if (!reinterpret_cast<int1_t>(eax9 == 2)) 
                goto addr_409171_4;
        } else {
            addr_40909f_5:
            if (esi20) 
                goto addr_4090af_6;
            eax22 = reinterpret_cast<void**>(ebp14());
            esi20 = eax22;
            if (!esi20) 
                goto addr_409171_4; else 
                goto addr_4090af_6;
        }
    } else {
        eax23 = reinterpret_cast<void**>(ebp14());
        esi20 = eax23;
        if (!esi20) {
            eax24 = reinterpret_cast<void**>(GetEnvironmentStrings());
            edi21 = eax24;
            if (!edi21) 
                goto addr_409171_4;
            g410e58 = reinterpret_cast<void**>(2);
        } else {
            g410e58 = reinterpret_cast<void**>(1);
            goto addr_40909f_5;
        }
    }
    if (edi21 || (eax25 = reinterpret_cast<void**>(GetEnvironmentStrings()), edi21 = eax25, !!edi21)) {
        eax26 = edi21;
        if (*reinterpret_cast<void***>(edi21)) {
            addr_40913b_14:
            ++eax26;
            if (*reinterpret_cast<void***>(eax26)) 
                goto addr_40913b_14;
            ++eax26;
            if (*reinterpret_cast<void***>(eax26)) 
                goto addr_40913b_14;
        }
        ebp27 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(eax26) - reinterpret_cast<unsigned char>(edi21) + 1);
        eax28 = fun_40561b(ecx, ebp27, v17, v15, v12, v10, v8, v7, v6, a2, a3, a4, a5);
        esi29 = eax28;
        if (esi29) {
            fun_407ac0(ebp27, esi29, edi21, ebp27, v17, v15, v12);
        } else {
            esi29 = reinterpret_cast<void**>(0);
        }
        FreeEnvironmentStringsA(ebp27, edi21);
        eax30 = esi29;
    } else {
        addr_409171_4:
        eax30 = reinterpret_cast<void**>(0);
    }
    addr_409173_20:
    return eax30;
    addr_4090af_6:
    eax31 = esi20;
    if (*reinterpret_cast<void***>(esi20)) {
        addr_4090b6_21:
        eax31 = eax31 + 1 + 1;
        if (*reinterpret_cast<void***>(eax31)) 
            goto addr_4090b6_21;
        eax31 = eax31 + 1 + 1;
        if (*reinterpret_cast<void***>(eax31)) 
            goto addr_4090b6_21;
    }
    edi32 = WideCharToMultiByte;
    v33 = reinterpret_cast<void**>(0);
    v34 = reinterpret_cast<void**>((reinterpret_cast<int32_t>(reinterpret_cast<unsigned char>(eax31) - reinterpret_cast<unsigned char>(esi20)) >> 1) + 1);
    eax35 = reinterpret_cast<void**>(edi32(0, 0, esi20, v34, 0, 0, 0, 0));
    if (eax35 && (eax36 = fun_40561b(ecx, eax35, 0, 0, esi20, v34, 0, 0, 0, 0, v17, v15, v12), ecx = eax35, v33 = eax36, !!eax36)) {
        v37 = eax36;
        eax38 = reinterpret_cast<int32_t>(edi32(ecx, 0, 0, esi20));
        if (!eax38) {
            fun_405a1e(ecx, v33, 0, 0, esi20, v33, v37, eax35, 0, 0, 0, 0, esi20, v34, v33, 0, 0, 0);
            ecx = v33;
            v37 = reinterpret_cast<void**>(0);
        }
        ebx19 = v37;
    }
    FreeEnvironmentStringsW(ecx, esi20, 0, 0, esi20, v34, v33, 0, 0, 0);
    eax30 = ebx19;
    goto addr_409173_20;
}

void** g4112d0;

uint32_t fun_40a769(void** a1, void** a2, void** a3);

void** g4112c8;

void** g410cf0 = reinterpret_cast<void**>(0);

void fun_408e94(void** ecx, void** a2, void** a3, void** a4, void** a5, void** a6);

void** g410cd8 = reinterpret_cast<void**>(0);

void** g410cd4 = reinterpret_cast<void**>(0);

void fun_408dfb(void** ecx, void** a2, void** a3, void** a4) {
    void* ebp5;
    int1_t zf6;
    void** edi7;
    void** esi8;
    void** ebx9;
    void** eax10;
    void** edi11;
    void** v12;
    void** v13;
    void** ecx14;
    void** eax15;

    ebp5 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4);
    zf6 = g4112d0 == 0;
    if (zf6) {
        fun_40a769(edi7, esi8, ebx9);
    }
    GetModuleFileNameA();
    eax10 = g4112c8;
    g410cf0 = reinterpret_cast<void**>(0x410d54);
    edi11 = reinterpret_cast<void**>(0x410d54);
    if (*reinterpret_cast<void***>(eax10)) {
        edi11 = eax10;
    }
    v12 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(ebp5) + 0xfffffff8);
    v13 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(ebp5) + 0xfffffffc);
    fun_408e94(ecx, edi11, 0, 0, v13, v12);
    ecx14 = ecx;
    eax15 = fun_40561b(ecx14, ecx + reinterpret_cast<unsigned char>(ecx14) * 4, edi11, 0, 0, v13, v12, 0, 0x410d54, 0x104, edi7, esi8, ebx9);
    if (!eax15) {
        fun_406412(ecx14, 8, 0, 0x410d54, 0x104, edi7, esi8, ebx9);
        ecx14 = reinterpret_cast<void**>(8);
    }
    fun_408e94(ecx14, edi11, eax15, eax15 + reinterpret_cast<unsigned char>(ecx) * 4, reinterpret_cast<int32_t>(ebp5) + 0xfffffffc, reinterpret_cast<int32_t>(ebp5) + 0xfffffff8);
    g410cd8 = eax15;
    g410cd4 = ecx - 1;
    return;
}

void** g410d04 = reinterpret_cast<void**>(0);

void** fun_40a790(void** ecx, void** a2, void** a3, void** a4, void** a5, void** a6);

void** g410ce0 = reinterpret_cast<void**>(0);

int32_t g4112cc;

void fun_408d42(void** ecx, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7, void** a8, void** a9, void** a10, void** a11, void** a12, void** a13) {
    void** v14;
    void** v15;
    void** ebx16;
    int1_t zf17;
    void** v18;
    void** esi19;
    void** v20;
    void** edi21;
    void** esi22;
    int32_t edi23;
    void** eax24;
    void** v25;
    void** eax26;
    void** esi27;
    void** ecx28;
    void** edi29;
    void** v30;
    void** ebp31;
    void** eax32;
    void** ebp33;
    void** eax34;
    void** ecx35;
    void** v36;
    void** v37;

    v14 = reinterpret_cast<void**>(__return_address());
    v15 = ebx16;
    zf17 = g4112d0 == 0;
    v18 = esi19;
    v20 = edi21;
    if (zf17) {
        fun_40a769(v20, v18, v15);
    }
    esi22 = g410d04;
    edi23 = 0;
    while (*reinterpret_cast<void***>(esi22)) {
        if (*reinterpret_cast<void***>(esi22) != 61) {
            ++edi23;
        }
        eax24 = fun_40a790(ecx, esi22, v20, v18, v15, v14);
        ecx = esi22;
        esi22 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(esi22) + reinterpret_cast<unsigned char>(eax24) + 1);
    }
    v25 = reinterpret_cast<void**>(edi23 * 4 + 4);
    eax26 = fun_40561b(ecx, v25, v20, v18, v15, v14, a2, a3, a4, a5, a6, a7, a8);
    esi27 = eax26;
    ecx28 = v25;
    g410ce0 = esi27;
    if (!esi27) {
        fun_406412(ecx28, 9, v20, v18, v15, v14, a2, a3);
        ecx28 = reinterpret_cast<void**>(9);
    }
    edi29 = g410d04;
    if (*reinterpret_cast<void***>(edi29)) {
        v30 = ebp31;
        do {
            eax32 = fun_40a790(ecx28, edi29, v30, v20, v18, v15);
            ecx28 = edi29;
            ebp33 = eax32 + 1;
            if (*reinterpret_cast<void***>(edi29) != 61) {
                eax34 = fun_40561b(ecx28, ebp33, v30, v20, v18, v15, v14, a2, a3, a4, a5, a6, a7);
                ecx35 = ebp33;
                *reinterpret_cast<void***>(esi27) = eax34;
                if (!eax34) {
                    fun_406412(ecx35, 9, v30, v20, v18, v15, v14, a2);
                    ecx35 = reinterpret_cast<void**>(9);
                }
                v36 = *reinterpret_cast<void***>(esi27);
                fun_4086f0(ecx35, v36, edi29, v30, v20, v18, v15, v14, a2, a3);
                esi27 = esi27 + 4;
                ecx28 = edi29;
            }
            edi29 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(edi29) + reinterpret_cast<unsigned char>(ebp33));
        } while (*reinterpret_cast<void***>(edi29));
    }
    v37 = g410d04;
    fun_405a1e(ecx28, v37, v20, v18, v15, v14, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13);
    g410d04 = reinterpret_cast<void**>(0);
    *reinterpret_cast<void***>(esi27) = reinterpret_cast<void**>(0);
    g4112cc = 1;
    return;
}

int32_t g4112dc;

void** fun_40537b(void** ecx, void** a2, void** a3, void** a4) {
    int32_t eax5;
    void** eax6;

    eax5 = g4112dc;
    if (eax5) {
        eax5();
    }
    fun_405463(ecx, 0x40e008, 0x40e014, __return_address(), a2);
    eax6 = fun_405463(ecx, 0x40e000, 0x40e004, 0x40e008, 0x40e014);
    return eax6;
}

uint32_t fun_40a363(void** ecx);

void** fun_408cea(void** ecx, void** a2, void** a3, void** a4, void** a5) {
    int1_t zf6;
    void** esi7;
    void** v8;
    uint32_t eax9;

    zf6 = g4112d0 == 0;
    if (zf6) {
        fun_40a769(__return_address(), a2, a3);
    }
    esi7 = g4112c8;
    if (!reinterpret_cast<int1_t>(*reinterpret_cast<void***>(esi7) == 34)) {
        if (reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(esi7)) > 32) {
            do {
                ++esi7;
            } while (reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(esi7)) > 32);
        }
    } else {
        while ((++esi7, *reinterpret_cast<void***>(esi7 + 1) != 34) && *reinterpret_cast<void***>(esi7 + 1)) {
            v8 = reinterpret_cast<void**>(static_cast<uint32_t>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(esi7 + 1))));
            eax9 = fun_40a363(ecx);
            ecx = v8;
            if (!eax9) 
                continue;
            ++esi7;
        }
        if (reinterpret_cast<int1_t>(*reinterpret_cast<void***>(esi7) == 34)) 
            goto addr_408d27_10;
    }
    while (*reinterpret_cast<void***>(esi7) && reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(esi7)) <= 32) {
        addr_408d27_10:
        ++esi7;
    }
    return esi7;
}

int32_t g40e524 = 2;

int32_t g410e5c = 0;

void fun_409408(void** ecx, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7, void** a8) {
    int32_t eax9;
    int1_t zf10;
    int32_t eax11;

    eax9 = g410d0c;
    if (eax9 == 1 || !eax9 && (zf10 = g40e524 == 1, zf10)) {
        fun_409441(ecx, 0xfc, __return_address(), a2, a3, a4, a5, a6, a7, a8);
        eax11 = g410e5c;
        if (eax11) {
            eax11(0xfc);
        }
        fun_409441(0xfc, 0xff, __return_address(), a2, a3, a4, a5, a6, a7, a8);
    }
    return;
}

void** fun_408700(void** ecx, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7, void** a8, void** a9, void** a10, void** a11, void** a12, void** a13);

void fun_40a80b(void** ecx, void* a2, int32_t a3, int32_t a4, void** a5, void** a6, void** a7, void** a8, void** a9, void** a10, void** a11, void** a12);

void fun_409441(void** ecx, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7, void** a8, void** a9, void** a10) {
    void* ebp11;
    void** edx12;
    void** ecx13;
    void*** eax14;
    uint32_t esi15;
    int32_t eax16;
    int1_t zf17;
    void*** esi18;
    void** v19;
    void** v20;
    void** esi21;
    void** v22;
    void** eax23;
    void** v24;
    int32_t eax25;
    void** v26;
    int32_t eax27;
    void** v28;
    void** v29;
    void** v30;
    void** v31;
    void** edi32;
    void** edi33;
    void** eax34;
    void** v35;
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
    void** v46;
    void** v47;

    ebp11 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4);
    edx12 = a2;
    ecx13 = reinterpret_cast<void**>(0);
    eax14 = reinterpret_cast<void***>(0x410988);
    do {
        if (edx12 == *eax14) 
            break;
        eax14 = eax14 + 8;
        ++ecx13;
    } while (reinterpret_cast<int32_t>(eax14) < 0x410a18);
    esi15 = reinterpret_cast<unsigned char>(ecx13) << 3;
    if (edx12 == *reinterpret_cast<void***>(esi15 + 0x410988)) {
        eax16 = g410d0c;
        if (eax16 == 1 || !eax16 && (zf17 = g40e524 == 1, zf17)) {
            esi18 = reinterpret_cast<void***>(esi15 + 0x41098c);
            v19 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(ebp11) + 8);
            v20 = *esi18;
            eax23 = fun_40a790(ecx13, v20, v19, 0, esi21, v22);
            v24 = *esi18;
            eax25 = reinterpret_cast<int32_t>(GetStdHandle(v20, 0xf4, v24, eax23, v19, 0));
            WriteFile(v20, eax25, 0xf4, v24, eax23, v19, 0);
        } else {
            if (edx12 != 0xfc) {
                v26 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(ebp11) + 0xfffffe5c);
                eax27 = reinterpret_cast<int32_t>(GetModuleFileNameA(0, v26, 0x104));
                if (!eax27) {
                    fun_4086f0(ecx13, reinterpret_cast<int32_t>(ebp11) + 0xfffffe5c, "<program name unknown>", 0, v26, 0x104, esi21, v28, v29, v30);
                    ecx13 = reinterpret_cast<void**>("<program name unknown>");
                }
                v31 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(ebp11) + 0xfffffe5c);
                edi32 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(ebp11) + 0xfffffe5c);
                eax34 = fun_40a790(ecx13, v31, edi33, 0, v26, 0x104);
                if (reinterpret_cast<unsigned char>(eax34 + 1) > reinterpret_cast<unsigned char>(60)) {
                    v35 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(ebp11) + 0xfffffe5c);
                    eax36 = fun_40a790(v31, v35, edi33, 0, v26, 0x104);
                    edi32 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(eax36) + (reinterpret_cast<int32_t>(ebp11) - 0x1a4 - 59));
                    fun_405f40(v31, edi32, "...", 3, v35, edi33, 0, v26, 0x104);
                }
                v37 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(ebp11) + 0xffffff60);
                fun_4086f0(v31, v37, "Runtime Error!\n\nProgram: ", edi33, 0, v26, 0x104, esi21, v38, v39);
                v40 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(ebp11) + 0xffffff60);
                fun_408700(v31, v40, edi32, v37, "Runtime Error!\n\nProgram: ", edi33, 0, v26, 0x104, esi21, v41, v42, v43);
                v44 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(ebp11) + 0xffffff60);
                fun_408700(v31, v44, "\n\n", v40, edi32, v37, "Runtime Error!\n\nProgram: ", edi33, 0, v26, 0x104, esi21, v45);
                v46 = *reinterpret_cast<void***>(esi15 + 0x41098c);
                v47 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(ebp11) + 0xffffff60);
                fun_408700(v31, v47, v46, v44, "\n\n", v40, edi32, v37, "Runtime Error!\n\nProgram: ", edi33, 0, v26, 0x104);
                fun_40a80b(v31, reinterpret_cast<int32_t>(ebp11) - 0xa0, "Microsoft Visual C++ Runtime Library", 0x12010, v47, v46, v44, "\n\n", v40, edi32, v37, "Runtime Error!\n\nProgram: ");
            }
        }
    }
    return;
}

int32_t fun_4097c0(signed char* a1, signed char* a2, int32_t a3, void** a4, void** a5, void** a6) {
    int32_t ecx7;
    int32_t ebx8;
    signed char* edi9;
    signed char* esi10;
    int32_t ecx11;
    signed char* edi12;
    signed char* esi13;

    ecx7 = a3;
    if (ecx7) 
        goto addr_4097f1_2;
    ebx8 = ecx7;
    edi9 = a1;
    esi10 = edi9;
    do {
        if (!ecx7) 
            break;
        --ecx7;
        ++edi9;
        ++esi10;
    } while (*edi9);
    ecx11 = -ecx7 + ebx8;
    edi12 = esi10;
    esi13 = a2;
    while (ecx11) {
        --ecx11;
        *edi12 = *esi13;
        ++edi12;
        ++esi13;
    }
    ecx7 = 0;
    if (*reinterpret_cast<unsigned char*>(esi13 - 1) <= *reinterpret_cast<unsigned char*>(edi12 - 1)) 
        goto addr_4097eb_10;
    addr_4097ef_11:
    ecx7 = ~ecx7;
    goto addr_4097f1_2;
    addr_4097eb_10:
    if (*reinterpret_cast<unsigned char*>(esi13 - 1) == *reinterpret_cast<unsigned char*>(edi12 - 1)) {
        addr_4097f1_2:
        return ecx7;
    } else {
        ecx7 = -2;
        goto addr_4097ef_11;
    }
}

void*** fun_4095ab(void** a1, void** a2, void** a3, uint32_t a4);

void*** fun_409594(void** a1, void** a2, int32_t a3, void** a4, void** a5, void** a6) {
    void*** eax7;

    eax7 = fun_4095ab(__return_address(), a1, a2, 0);
    return eax7;
}

struct s26 {
    unsigned char f0;
    signed char f1;
};

int32_t GetModuleHandleA = 0xd000;

struct s27 {
    int16_t f0;
    signed char[58] pad60;
    int32_t f60;
};

struct s28 {
    signed char[26] pad26;
    unsigned char f26;
    signed char f27;
};

void* fun_40658d(void** ecx, struct s26* a2, void** a3, void** a4, void** a5) {
    struct s27* eax6;
    struct s28* eax7;
    int32_t esi8;

    a2->f0 = reinterpret_cast<unsigned char>(0);
    eax6 = reinterpret_cast<struct s27*>(GetModuleHandleA());
    if (eax6->f0 == 0x5a4d && eax6->f60) {
        eax7 = reinterpret_cast<struct s28*>(reinterpret_cast<int32_t>(eax6) + eax6->f60);
        a2->f0 = eax7->f26;
        a2->f1 = eax7->f27;
    }
    goto esi8;
}

void fun_409800(void** ecx, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7, void** a8, void** a9, void** a10, void** a11, void** a12, void** a13, void** a14, void** a15, void** a16, void** a17, void** a18, void** a19, void** a20, void** a21);

int32_t GetVersionExA = 0xcb8e;

int32_t GetEnvironmentVariableA = 0xd046;

void*** fun_4065ba(void** ecx, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7, void** a8, void** a9, void** a10, void** a11, void** a12, void** a13, void** a14, void** a15, void** a16, void** a17, void** a18, void** a19) {
    void*** ebp20;
    void** ebp21;
    void** v22;
    void** ebx23;
    void** v24;
    int32_t eax25;
    int32_t v26;
    uint32_t v27;
    void** v28;
    int32_t eax29;
    void* eax30;
    void*** eax31;
    void** v32;
    void** v33;
    void** v34;
    int32_t eax35;
    void** v36;
    void** v37;
    void** v38;
    void** v39;
    void** v40;
    void** eax41;
    void** eax42;
    void** eax43;

    ebp20 = reinterpret_cast<void***>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4);
    fun_409800(ecx, ebp21, __return_address(), a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15, a16, a17, a18, a19);
    v22 = ebx23;
    v24 = reinterpret_cast<void**>(ebp20 + 0xffffff68);
    eax25 = reinterpret_cast<int32_t>(GetVersionExA());
    if (!eax25 || (v26 != 2 || v27 < 5)) {
        v28 = reinterpret_cast<void**>(ebp20 + 0xffffedd4);
        eax29 = reinterpret_cast<int32_t>(GetEnvironmentVariableA("__MSVCRT_HEAP_SELECT", v28, 0x1090));
        if (!eax29) {
            addr_4066ec_3:
            eax30 = fun_40658d(ecx, ebp20 - 4, "__MSVCRT_HEAP_SELECT", v28, 0x1090);
            eax31 = reinterpret_cast<void***>(reinterpret_cast<uint32_t>(eax30) - (reinterpret_cast<uint32_t>(eax30) + reinterpret_cast<uint1_t>(reinterpret_cast<uint32_t>(eax30) < reinterpret_cast<uint32_t>(eax30) + reinterpret_cast<uint1_t>(*reinterpret_cast<unsigned char*>(&v22) < 6))) + 3);
        } else {
            ecx = reinterpret_cast<void**>(ebp20 + 0xffffedd4);
            if (v32) {
                do {
                    if (reinterpret_cast<signed char>(v33) >= reinterpret_cast<signed char>(97) && reinterpret_cast<signed char>(v33) <= reinterpret_cast<signed char>(0x7a)) {
                    }
                    ++ecx;
                } while (v34);
            }
            eax35 = fun_4097c0("__GLOBAL_HEAP_SELECTED", ebp20 - 0x122c, 22, "__MSVCRT_HEAP_SELECT", v28, 0x1090);
            if (eax35) {
                v36 = reinterpret_cast<void**>(ebp20 + 0xfffffe64);
                GetModuleFileNameA(0, v36, 0x104, "__MSVCRT_HEAP_SELECT", v28, 0x1090);
                if (v37) {
                    do {
                        if (reinterpret_cast<signed char>(v38) >= reinterpret_cast<signed char>(97) && reinterpret_cast<signed char>(v38) <= reinterpret_cast<signed char>(0x7a)) {
                        }
                    } while (v39);
                }
                v40 = reinterpret_cast<void**>(ebp20 + 0xfffffe64);
                eax41 = fun_405a90(ebp20 + 0xffffedd4, v40, 0, v36, 0x104, "__MSVCRT_HEAP_SELECT", v28, 0x1090, v24, v22);
                ecx = v40;
            } else {
                eax41 = reinterpret_cast<void**>(ebp20 + 0xffffedd4);
            }
            if (!eax41) 
                goto addr_4066ec_3;
            eax42 = fun_4054e0(ecx, eax41, 44, "__MSVCRT_HEAP_SELECT", v28, 0x1090);
            ecx = reinterpret_cast<void**>(44);
            if (!eax42) 
                goto addr_4066ec_3; else 
                goto addr_4066bc_17;
        }
    } else {
        eax31 = reinterpret_cast<void***>(1);
    }
    addr_4066ff_19:
    return eax31;
    addr_4066bc_17:
    eax43 = eax42 + 1;
    ecx = eax43;
    if (*reinterpret_cast<void***>(eax43)) {
        do {
            if (!reinterpret_cast<int1_t>(*reinterpret_cast<void***>(ecx) == 59)) {
                ++ecx;
            } else {
                *reinterpret_cast<void***>(ecx) = reinterpret_cast<void**>(0);
            }
        } while (*reinterpret_cast<void***>(ecx));
    }
    eax31 = fun_409594(eax43, 0, 10, "__MSVCRT_HEAP_SELECT", v28, 0x1090);
    if (eax31 == 2) 
        goto addr_4066ff_19;
    if (eax31 == 3) 
        goto addr_4066ff_19;
    if (eax31 == 1) 
        goto addr_4066ff_19; else 
        goto addr_4066ec_3;
}

uint32_t g4112a4;

void** fun_40675f() {
    void** v1;
    void** eax2;

    v1 = g4112c0;
    eax2 = reinterpret_cast<void**>(HeapAlloc());
    g4112b8 = eax2;
    if (eax2) {
        g4112b0 = reinterpret_cast<void**>(0);
        g4112b4 = 0;
        g4112ac = eax2;
        g4112bc = reinterpret_cast<void**>(0);
        g4112a4 = 16;
        goto v1;
    } else {
        goto v1;
    }
}

uint32_t g40e6a8 = 0xffffffff;

void** g40e698 = reinterpret_cast<void**>(0x98);

void** fun_407377() {
    int1_t zf1;
    int32_t v2;
    int32_t esi3;
    void** v4;
    void** eax5;
    void** esi6;
    int32_t ebp7;
    void** eax8;
    void** edi9;
    void** v10;
    void** v11;
    int32_t eax12;
    void** eax13;
    int1_t zf14;
    int1_t zf15;
    void** eax16;
    int32_t ebp17;
    int32_t edx18;

    zf1 = g40e6a8 == 0xffffffff;
    v2 = esi3;
    if (!zf1) {
        v4 = g4112c0;
        eax5 = reinterpret_cast<void**>(HeapAlloc());
        esi6 = eax5;
        if (!esi6) {
            addr_4074b4_3:
        } else {
            addr_4073a8_4:
            ebp7 = VirtualAlloc;
            v4 = reinterpret_cast<void**>(0x400000);
            eax8 = reinterpret_cast<void**>(ebp7(0));
            edi9 = eax8;
            if (!edi9) {
                addr_40749d_5:
                if (esi6 != 0x40e698) {
                    v10 = g4112c0;
                    HeapFree(v10, 0, esi6, 0);
                    goto addr_4074b4_3;
                }
            } else {
                v11 = edi9;
                eax12 = reinterpret_cast<int32_t>(ebp7(v11, 0x10000, 0x1000, 4, 0));
                if (!eax12) {
                    VirtualFree(edi9, 0, 0x8000, v11, 0x10000, 0x1000, 4, 0);
                    goto addr_40749d_5;
                } else {
                    if (!reinterpret_cast<int1_t>(esi6 == 0x40e698)) {
                        *reinterpret_cast<void***>(esi6) = reinterpret_cast<void**>(0x40e698);
                        eax13 = g40e69c;
                        *reinterpret_cast<void***>(esi6 + 4) = eax13;
                        g40e69c = esi6;
                        *reinterpret_cast<void***>(*reinterpret_cast<void***>(esi6 + 4)) = esi6;
                    } else {
                        zf14 = g40e698 == 0;
                        if (zf14) {
                            g40e698 = reinterpret_cast<void**>(0x40e698);
                        }
                        zf15 = g40e69c == 0;
                        if (zf15) {
                            g40e69c = reinterpret_cast<void**>(0x40e698);
                        }
                    }
                    *reinterpret_cast<void***>(esi6 + 20) = edi9 + 0x400000;
                    eax16 = esi6 + 24;
                    *reinterpret_cast<void***>(esi6 + 12) = esi6 + 0x98;
                    *reinterpret_cast<void***>(esi6 + 16) = edi9;
                    *reinterpret_cast<void***>(esi6 + 8) = eax16;
                    ebp17 = 0;
                    do {
                        edx18 = 0;
                        *reinterpret_cast<unsigned char*>(&edx18) = reinterpret_cast<uint1_t>(ebp17 >= 16);
                        ++ebp17;
                        *reinterpret_cast<void***>(eax16) = reinterpret_cast<void**>((reinterpret_cast<uint32_t>(edx18 - 1) & reinterpret_cast<unsigned char>(0xf1)) - 1);
                        *reinterpret_cast<void***>(eax16 + 4) = reinterpret_cast<void**>(0xf1);
                        eax16 = eax16 + 8;
                    } while (ebp17 < 0x400);
                    fun_407a60(0xf1, edi9, 0, 0x10000, v11, 0x10000, 0x1000, 4, 0, v4);
                    while (reinterpret_cast<unsigned char>(edi9) < reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(esi6 + 16) + 0x10000)) {
                        *reinterpret_cast<void***>(edi9 + 0xf8) = reinterpret_cast<void**>(0xff);
                        *reinterpret_cast<void***>(edi9) = edi9 + 8;
                        *reinterpret_cast<void***>(edi9 + 4) = reinterpret_cast<void**>(0xf0);
                        edi9 = edi9 + 0x1000;
                    }
                }
            }
        }
        goto v2;
    } else {
        esi6 = reinterpret_cast<void**>(0x40e698);
        goto addr_4073a8_4;
    }
}

struct s29 {
    void** f0;
    void** f1;
    void** f2;
    void** f3;
};

void** fun_409830(void** ecx, void** a2, void** a3, void** a4, void** a5, int32_t a6, void** a7, void** a8, void*** a9, int32_t a10, void** a11, int32_t a12, void** a13) {
    void** esi14;
    void** edi15;
    void** eax16;
    uint32_t ecx17;
    uint32_t edx18;
    struct s29* esi19;
    void** edi20;
    uint32_t ecx21;
    uint32_t edx22;

    esi14 = a3;
    edi15 = a2;
    eax16 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(a4) + reinterpret_cast<unsigned char>(esi14));
    if (reinterpret_cast<unsigned char>(edi15) <= reinterpret_cast<unsigned char>(esi14) || reinterpret_cast<unsigned char>(edi15) >= reinterpret_cast<unsigned char>(eax16)) {
        if (reinterpret_cast<unsigned char>(edi15) & 3) {
            if (reinterpret_cast<unsigned char>(a4) < reinterpret_cast<unsigned char>(4)) {
                goto *reinterpret_cast<int32_t*>(reinterpret_cast<unsigned char>(a4 - 4) * 4 + 0x409988);
            } else {
                goto *reinterpret_cast<int32_t*>((reinterpret_cast<unsigned char>(edi15) & 3) * 4 + 0x409890);
            }
        }
        ecx17 = reinterpret_cast<unsigned char>(a4) >> 2;
        edx18 = reinterpret_cast<unsigned char>(a4) & 3;
        if (ecx17 >= 8) 
            goto addr_409863_7;
    } else {
        esi19 = reinterpret_cast<struct s29*>(reinterpret_cast<unsigned char>(a4) + reinterpret_cast<unsigned char>(esi14) + 0xfffffffc);
        edi20 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(a4) + reinterpret_cast<unsigned char>(edi15) + 0xfffffffc);
        if (reinterpret_cast<unsigned char>(edi20) & 3) {
            eax16 = edi20;
            if (reinterpret_cast<unsigned char>(a4) >= reinterpret_cast<unsigned char>(4)) {
                goto *reinterpret_cast<int32_t*>((reinterpret_cast<unsigned char>(eax16) & 3) * 4 + 0x409a18);
            }
            goto *reinterpret_cast<int32_t*>(reinterpret_cast<unsigned char>(a4) * 4 + 0x409b10);
        } else {
            ecx21 = reinterpret_cast<unsigned char>(a4) >> 2;
            edx22 = reinterpret_cast<unsigned char>(a4) & 3;
            if (ecx21 < 8) {
                goto *reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(-ecx21) * 4 + 0x409ac0);
                goto *reinterpret_cast<int32_t*>(edx22 * 4 + 0x409b10);
            } else {
                while (ecx21) {
                    --ecx21;
                    *reinterpret_cast<void***>(edi20) = esi19->f0;
                    edi20 = edi20 + 0xfffffffc;
                    --esi19;
                }
                goto *reinterpret_cast<int32_t*>(edx22 * 4 + 0x409b10);
            }
        }
    }
    switch (ecx17) {
        addr_40996f_20:
    case 0:
        switch (edx18) {
        case 0:
            return eax16;
        case 1:
            *reinterpret_cast<void***>(edi15) = *reinterpret_cast<void***>(esi14);
            return a2;
        case 2:
            *reinterpret_cast<void***>(edi15) = *reinterpret_cast<void***>(esi14);
            *reinterpret_cast<void***>(edi15 + 1) = *reinterpret_cast<void***>(esi14 + 1);
            return a2;
        case 3:
            *reinterpret_cast<void***>(edi15) = *reinterpret_cast<void***>(esi14);
            *reinterpret_cast<void***>(edi15 + 1) = *reinterpret_cast<void***>(esi14 + 1);
            *reinterpret_cast<void***>(edi15 + 2) = *reinterpret_cast<void***>(esi14 + 2);
            return a2;
        }
        addr_40995c_25:
    case 1:
        *reinterpret_cast<int32_t*>(reinterpret_cast<uint32_t>(edi15 + ecx17 * 4) - 4) = *reinterpret_cast<int32_t*>(reinterpret_cast<uint32_t>(esi14 + ecx17 * 4) - 4);
        eax16 = reinterpret_cast<void**>(ecx17 * 4);
        esi14 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(esi14) + reinterpret_cast<unsigned char>(eax16));
        edi15 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(edi15) + reinterpret_cast<unsigned char>(eax16));
        goto addr_40996f_20;
        addr_409954_26:
    case 2:
        *reinterpret_cast<int32_t*>(reinterpret_cast<uint32_t>(edi15 + ecx17 * 4) - 8) = *reinterpret_cast<int32_t*>(reinterpret_cast<uint32_t>(esi14 + ecx17 * 4) - 8);
        goto addr_40995c_25;
        addr_40994c_27:
    case 3:
        *reinterpret_cast<int32_t*>(reinterpret_cast<uint32_t>(edi15 + ecx17 * 4) - 12) = *reinterpret_cast<int32_t*>(reinterpret_cast<uint32_t>(esi14 + ecx17 * 4) - 12);
        goto addr_409954_26;
        addr_409944_28:
    case 4:
        *reinterpret_cast<int32_t*>(reinterpret_cast<uint32_t>(edi15 + ecx17 * 4) - 16) = *reinterpret_cast<int32_t*>(reinterpret_cast<uint32_t>(esi14 + ecx17 * 4) - 16);
        goto addr_40994c_27;
        addr_40993c_29:
    case 5:
        *reinterpret_cast<int32_t*>(reinterpret_cast<uint32_t>(edi15 + ecx17 * 4) - 20) = *reinterpret_cast<int32_t*>(reinterpret_cast<uint32_t>(esi14 + ecx17 * 4) - 20);
        goto addr_409944_28;
    case 6:
        *reinterpret_cast<void***>(reinterpret_cast<uint32_t>(edi15 + ecx17 * 4) - 24) = eax16;
        goto addr_40993c_29;
    case 7:
    }
    addr_409863_7:
    while (ecx17) {
        --ecx17;
        *reinterpret_cast<void***>(edi15) = *reinterpret_cast<void***>(esi14);
        edi15 = edi15 + 4;
        esi14 = esi14 + 4;
    }
    goto *reinterpret_cast<int32_t*>(edx18 * 4 + 0x409978);
    return eax16;
    *reinterpret_cast<void***>(edi20 + 3) = esi19->f3;
    return a2;
    *reinterpret_cast<void***>(edi20 + 3) = esi19->f3;
    *reinterpret_cast<void***>(edi20 + 2) = esi19->f2;
    return a2;
    *reinterpret_cast<void***>(edi20 + 3) = esi19->f3;
    *reinterpret_cast<void***>(edi20 + 2) = esi19->f2;
    *reinterpret_cast<void***>(edi20 + 1) = esi19->f1;
    return a2;
}

struct s30 {
    void** f0;
    signed char[3] pad4;
    void** f4;
    signed char[3] pad8;
    uint32_t f8;
    void** f12;
    signed char[3] pad16;
    void** f16;
};

void** fun_406e04() {
    uint32_t eax1;
    uint32_t ecx2;
    uint32_t v3;
    void** v4;
    void** eax5;
    uint32_t tmp32_6;
    void** ecx7;
    struct s30* esi8;
    void** eax9;
    void** eax10;
    void** v11;
    void** v12;

    eax1 = g4112b4;
    ecx2 = g4112a4;
    if (eax1 == ecx2) {
        v3 = ecx2 + ecx2 * 4 + 80 << 2;
        v4 = g4112c0;
        eax5 = reinterpret_cast<void**>(HeapReAlloc(v4));
        if (!eax5) 
            goto addr_406e97_3;
        tmp32_6 = g4112a4 + 16;
        g4112a4 = tmp32_6;
        g4112b8 = eax5;
        eax1 = g4112b4;
    }
    ecx7 = g4112b8;
    v3 = 0x41c4;
    esi8 = reinterpret_cast<struct s30*>(ecx7 + (eax1 + eax1 * 4) * 4);
    eax9 = reinterpret_cast<void**>(HeapAlloc());
    esi8->f16 = eax9;
    if (!eax9) {
        addr_406e97_3:
    } else {
        eax10 = reinterpret_cast<void**>(VirtualAlloc(0, 0x100000, 0x2000, 4));
        esi8->f12 = eax10;
        if (eax10) {
            esi8->f8 = 0xffffffff;
            esi8->f0 = reinterpret_cast<void**>(0);
            esi8->f4 = reinterpret_cast<void**>(0);
            ++g4112b4;
            *reinterpret_cast<void***>(esi8->f16) = reinterpret_cast<void**>(0xffffffff);
        } else {
            v11 = esi8->f16;
            v12 = g4112c0;
            HeapFree(v12, 0, v11, 0, 0x100000, 0x2000, 4);
            goto addr_406e97_3;
        }
    }
    goto v3;
}

struct s31 {
    signed char[4] pad4;
    struct s31* f4;
    struct s31* f8;
};

struct s32 {
    void** f0;
    signed char[15] pad16;
    uint32_t f16;
};

struct s33 {
    uint32_t f0;
    uint32_t f4;
    signed char[4064] pad4072;
    int32_t f4072;
    uint32_t f4076;
};

struct s35 {
    signed char[4] pad4;
    struct s34* f4;
    struct s34* f8;
};

struct s34 {
    signed char[4] pad4;
    struct s35* f4;
    struct s35* f8;
};

void** fun_406eb5(uint32_t ecx, void** a2) {
    void** ecx3;
    void** esi4;
    void** eax5;
    void** ebx6;
    int32_t edx7;
    struct s31* eax8;
    struct s31* v9;
    struct s32* edi10;
    uint32_t eax11;
    struct s32* edx12;
    struct s33* eax13;
    struct s34* ecx14;
    struct s35* eax15;
    struct s34* ecx16;
    int1_t zf17;
    void** ecx18;
    void** eax19;

    ecx3 = a2;
    esi4 = *reinterpret_cast<void***>(ecx3 + 16);
    eax5 = *reinterpret_cast<void***>(ecx3 + 8);
    ebx6 = reinterpret_cast<void**>(0);
    while (reinterpret_cast<signed char>(eax5) >= reinterpret_cast<signed char>(0)) {
        eax5 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(eax5) << 1);
        ++ebx6;
    }
    edx7 = 63;
    eax8 = reinterpret_cast<struct s31*>(reinterpret_cast<uint32_t>(esi4 + reinterpret_cast<unsigned char>(ebx6) * 0x204) + 0x144);
    v9 = eax8;
    do {
        eax8->f8 = eax8;
        eax8->f4 = eax8;
        eax8 = reinterpret_cast<struct s31*>(&eax8->f8);
        --edx7;
    } while (edx7);
    edi10 = reinterpret_cast<struct s32*>((reinterpret_cast<unsigned char>(ebx6) << 15) + reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(ecx3 + 12)));
    eax11 = reinterpret_cast<uint32_t>(VirtualAlloc());
    if (eax11) {
        edx12 = reinterpret_cast<struct s32*>(reinterpret_cast<uint32_t>(edi10) + 0x7000);
        if (reinterpret_cast<uint32_t>(edi10) <= reinterpret_cast<uint32_t>(edx12)) {
            eax13 = reinterpret_cast<struct s33*>(&edi10->f16);
            do {
                *reinterpret_cast<uint32_t*>(reinterpret_cast<uint32_t>(eax13) + 0xfffffff8) = 0xffffffff;
                eax13->f4076 = 0xffffffff;
                *reinterpret_cast<int32_t*>(reinterpret_cast<uint32_t>(eax13) + 0xfffffffc) = 0xff0;
                eax13->f0 = reinterpret_cast<uint32_t>(eax13) + 0xffc;
                eax13->f4 = reinterpret_cast<uint32_t>(eax13) + 0xffffeffc;
                eax13->f4072 = 0xff0;
                eax13 = reinterpret_cast<struct s33*>(reinterpret_cast<uint32_t>(eax13) + 0x1000);
            } while (reinterpret_cast<uint32_t>(eax13) + 0xfffffff0 <= reinterpret_cast<uint32_t>(edx12));
        }
        ecx14 = reinterpret_cast<struct s34*>(reinterpret_cast<uint32_t>(edi10) + 12);
        eax15 = reinterpret_cast<struct s35*>(v9 + 42);
        eax15->f4 = ecx14;
        ecx14->f8 = eax15;
        ecx16 = reinterpret_cast<struct s34*>(reinterpret_cast<uint32_t>(edx12) + 12);
        eax15->f8 = ecx16;
        ecx16->f4 = eax15;
        *reinterpret_cast<uint32_t*>(reinterpret_cast<uint32_t>(esi4 + reinterpret_cast<unsigned char>(ebx6) * 4) + 68) = 0;
        *reinterpret_cast<uint32_t*>(reinterpret_cast<uint32_t>(esi4 + reinterpret_cast<unsigned char>(ebx6) * 4) + 0xc4) = 1;
        zf17 = *reinterpret_cast<signed char*>(esi4 + 67) == 0;
        *reinterpret_cast<signed char*>(esi4 + 67) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(esi4 + 67) + 1);
        if (zf17) {
            *reinterpret_cast<void***>(a2 + 4) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(a2 + 4)) | 1);
        }
        ecx18 = ebx6;
        *reinterpret_cast<void***>(a2 + 8) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(a2 + 8)) & ~(0x80000000 >> *reinterpret_cast<signed char*>(&ecx18)));
        eax19 = ebx6;
    } else {
        eax19 = reinterpret_cast<void**>(0xffffffff);
    }
    return eax19;
}

void** fun_407a60(void** ecx, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7, void** a8, void** a9, void** a10) {
    void** edx11;
    void** eax12;
    void** edi13;
    uint32_t ecx14;
    void*** eax15;
    void** ecx16;
    uint32_t ecx17;

    edx11 = a4;
    if (!edx11) {
        return a2;
    }
    eax12 = reinterpret_cast<void**>(0);
    eax12 = a3;
    edi13 = a2;
    if (reinterpret_cast<unsigned char>(edx11) < reinterpret_cast<unsigned char>(4)) {
        do {
            addr_407aa7_4:
            *reinterpret_cast<void***>(edi13) = eax12;
            ++edi13;
            --edx11;
        } while (edx11);
    } else {
        ecx14 = reinterpret_cast<uint32_t>(-reinterpret_cast<unsigned char>(a2)) & 3;
        if (ecx14) {
            edx11 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(edx11) - ecx14);
            do {
                *reinterpret_cast<void***>(edi13) = eax12;
                ++edi13;
                --ecx14;
            } while (ecx14);
        }
        eax15 = reinterpret_cast<void***>((reinterpret_cast<unsigned char>(eax12) << 8) + reinterpret_cast<unsigned char>(eax12));
        eax12 = reinterpret_cast<void**>((reinterpret_cast<uint32_t>(eax15) << 16) + reinterpret_cast<uint32_t>(eax15));
        ecx16 = edx11;
        edx11 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(edx11) & 3);
        ecx17 = reinterpret_cast<unsigned char>(ecx16) >> 2;
        if (!ecx17) 
            goto addr_407aa7_4; else 
            goto addr_407aa1_9;
    }
    addr_407aad_10:
    return a2;
    addr_407aa1_9:
    while (ecx17) {
        --ecx17;
        *reinterpret_cast<void***>(edi13) = eax12;
        edi13 = edi13 + 4;
    }
    if (!edx11) 
        goto addr_407aad_10; else 
        goto addr_407aa7_4;
}

void fun_4074bb(void** a1) {
    int1_t zf2;
    void** eax3;
    void** ecx4;

    VirtualFree();
    zf2 = g4106b8 == a1;
    if (zf2) {
        g4106b8 = *reinterpret_cast<void***>(a1 + 4);
    }
    if (a1 == 0x40e698) {
        g40e6a8 = 0xffffffff;
        goto 0;
    } else {
        eax3 = *reinterpret_cast<void***>(a1 + 4);
        ecx4 = *reinterpret_cast<void***>(a1);
        *reinterpret_cast<void***>(eax3) = ecx4;
        *reinterpret_cast<void***>(*reinterpret_cast<void***>(a1) + 4) = *reinterpret_cast<void***>(a1 + 4);
        HeapFree();
        goto 0;
    }
}

void** fun_407877(void** ecx, void** a2, void** a3, void** a4) {
    void** ecx5;
    void** edx6;
    void** esi7;
    void** edi8;
    void** ebx9;
    void** v10;
    void** eax11;
    void** v12;
    void** esi13;
    void** eax14;
    void** esi15;
    void** ebx16;
    void** eax17;
    void** eax18;
    void** ebx19;
    void** ebx20;
    void** esi21;
    void** ebx22;

    ecx5 = a2;
    edx6 = a4;
    esi7 = *reinterpret_cast<void***>(ecx5 + 4);
    edi8 = *reinterpret_cast<void***>(ecx5);
    ebx9 = ecx5 + 0xf8;
    v10 = edi8;
    eax11 = edi8;
    v12 = ebx9;
    if (reinterpret_cast<unsigned char>(esi7) < reinterpret_cast<unsigned char>(edx6)) {
        esi13 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(esi7) + reinterpret_cast<unsigned char>(edi8));
        if (*reinterpret_cast<void***>(esi13)) {
            eax11 = esi13;
        }
        if (reinterpret_cast<unsigned char>(reinterpret_cast<unsigned char>(eax11) + reinterpret_cast<unsigned char>(edx6)) < reinterpret_cast<unsigned char>(ebx9)) 
            goto addr_4078cc_5;
    } else {
        *reinterpret_cast<void***>(edi8) = edx6;
        if (reinterpret_cast<unsigned char>(reinterpret_cast<unsigned char>(edi8) + reinterpret_cast<unsigned char>(edx6)) >= reinterpret_cast<unsigned char>(ebx9)) {
            *reinterpret_cast<void***>(ecx5 + 4) = reinterpret_cast<void**>(0);
            *reinterpret_cast<void***>(ecx5) = ecx5 + 8;
        } else {
            *reinterpret_cast<void***>(ecx5) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(ecx5)) + reinterpret_cast<unsigned char>(edx6));
            *reinterpret_cast<void***>(ecx5 + 4) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(ecx5 + 4)) - reinterpret_cast<unsigned char>(edx6));
        }
        eax14 = edi8 + 8;
        goto addr_40798a_10;
    }
    addr_40790f_11:
    esi15 = ecx5 + 8;
    while (reinterpret_cast<unsigned char>(esi15) < reinterpret_cast<unsigned char>(edi8) && reinterpret_cast<unsigned char>(reinterpret_cast<unsigned char>(esi15) + reinterpret_cast<unsigned char>(edx6)) < reinterpret_cast<unsigned char>(v12)) {
        if (*reinterpret_cast<void***>(esi15)) {
            esi15 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(esi15) + reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(esi15)));
        } else {
            ebx16 = esi15 + 1;
            eax17 = reinterpret_cast<void**>(1);
            while (!*reinterpret_cast<void***>(ebx16)) {
                ++ebx16;
                ++eax17;
            }
            if (reinterpret_cast<unsigned char>(eax17) >= reinterpret_cast<unsigned char>(edx6)) 
                goto addr_40796b_19;
            a3 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(a3) - reinterpret_cast<unsigned char>(eax17));
            if (reinterpret_cast<unsigned char>(a3) < reinterpret_cast<unsigned char>(edx6)) 
                break;
            esi15 = ebx16;
        }
    }
    addr_407994_22:
    eax18 = reinterpret_cast<void**>(0);
    addr_407996_23:
    return eax18;
    addr_40796b_19:
    ebx19 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(esi15) + reinterpret_cast<unsigned char>(edx6));
    if (reinterpret_cast<unsigned char>(ebx19) >= reinterpret_cast<unsigned char>(v12)) {
        *reinterpret_cast<void***>(ecx5 + 4) = reinterpret_cast<void**>(0);
        *reinterpret_cast<void***>(ecx5) = ecx5 + 8;
    } else {
        *reinterpret_cast<void***>(ecx5) = ebx19;
        *reinterpret_cast<void***>(ecx5 + 4) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(eax17) - reinterpret_cast<unsigned char>(edx6));
    }
    *reinterpret_cast<void***>(esi15) = edx6;
    eax14 = esi15 + 8;
    addr_40798a_10:
    eax18 = reinterpret_cast<void**>((reinterpret_cast<unsigned char>(eax14) << 4) - reinterpret_cast<unsigned char>(ecx5) * 15);
    goto addr_407996_23;
    do {
        addr_4078cc_5:
        if (*reinterpret_cast<void***>(eax11)) {
            eax11 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(eax11) + reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax11)));
            continue;
        } else {
            ebx20 = eax11 + 1;
            esi21 = reinterpret_cast<void**>(1);
            while (!*reinterpret_cast<void***>(ebx20)) {
                ++ebx20;
                ++esi21;
            }
            if (reinterpret_cast<unsigned char>(esi21) >= reinterpret_cast<unsigned char>(edx6)) 
                break;
            if (eax11 == v10) 
                goto addr_4078ea_33;
        }
        a3 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(a3) - reinterpret_cast<unsigned char>(esi21));
        if (reinterpret_cast<unsigned char>(a3) < reinterpret_cast<unsigned char>(edx6)) 
            goto addr_407994_22;
        addr_4078fb_35:
        edi8 = v10;
        eax11 = ebx20;
        continue;
        addr_4078ea_33:
        *reinterpret_cast<void***>(ecx5 + 4) = esi21;
        goto addr_4078fb_35;
    } while (reinterpret_cast<unsigned char>(reinterpret_cast<unsigned char>(eax11) + reinterpret_cast<unsigned char>(edx6)) < reinterpret_cast<unsigned char>(v12));
    goto addr_40790f_11;
    ebx22 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(eax11) + reinterpret_cast<unsigned char>(edx6));
    if (reinterpret_cast<unsigned char>(ebx22) >= reinterpret_cast<unsigned char>(v12)) {
        *reinterpret_cast<void***>(ecx5 + 4) = reinterpret_cast<void**>(0);
        *reinterpret_cast<void***>(ecx5) = ecx5 + 8;
    } else {
        *reinterpret_cast<void***>(ecx5) = ebx22;
        *reinterpret_cast<void***>(ecx5 + 4) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(esi21) - reinterpret_cast<unsigned char>(edx6));
    }
    *reinterpret_cast<void***>(eax11) = edx6;
    eax14 = eax11 + 8;
    goto addr_40798a_10;
}

int32_t fun_4085f0(void** ecx, int32_t a2, void** a3, int32_t a4);

void fun_40813c(void** ecx, void** a2, int32_t a3, void** a4, void** a5) {
    void** eax6;
    void** v7;
    void** ebx8;
    void** esi9;
    void** edi10;
    int32_t eax11;

    eax6 = g0;
    v7 = eax6;
    g0 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4 - 4 - 4 - 4 - 4);
    ebx8 = a2;
    esi9 = *reinterpret_cast<void***>(ebx8 + 8);
    edi10 = a4;
    while (esi9 != a5) {
        if (reinterpret_cast<signed char>(esi9) <= reinterpret_cast<signed char>(0xffffffff) || reinterpret_cast<signed char>(esi9) >= reinterpret_cast<signed char>(*reinterpret_cast<void***>(edi10 + 4))) {
            fun_408692(ecx);
        }
        eax11 = *reinterpret_cast<int32_t*>(reinterpret_cast<uint32_t>(*reinterpret_cast<void***>(edi10 + 8) + reinterpret_cast<unsigned char>(esi9) * 8) + 4);
        if (eax11) {
            fun_4085f0(ecx, eax11, ebx8, 0x103);
        }
        esi9 = *reinterpret_cast<void***>(*reinterpret_cast<void***>(edi10 + 8) + reinterpret_cast<unsigned char>(esi9) * 8);
    }
    *reinterpret_cast<void***>(ebx8 + 8) = esi9;
    g0 = v7;
    return;
}

int32_t IsBadReadPtr = 0xd1c6;

int32_t fun_409bc9(void** a1) {
    int32_t eax2;

    eax2 = reinterpret_cast<int32_t>(IsBadReadPtr());
    if (eax2) {
    }
    goto a1;
}

struct s37 {
    unsigned char f0;
    signed char[3] pad4;
    void** f4;
    signed char[3] pad8;
    void** f8;
    signed char[3] pad12;
    int32_t f12;
};

struct s36 {
    void** f0;
    signed char[3] pad4;
    void** f4;
    signed char[7] pad12;
    int32_t f12;
    struct s37* f16;
};

struct s36* fun_405d79(void** ecx, void** a2, void** a3, void** a4, void*** a5, void** a6) {
    void** edi7;
    void** esi8;
    void** ebx9;
    void** eax10;
    void** v11;
    void** v12;
    void*** eax13;
    void** esi14;

    edi7 = a2;
    esi8 = *reinterpret_cast<void***>(edi7 + 12);
    ebx9 = *reinterpret_cast<void***>(edi7 + 16);
    eax10 = esi8;
    v11 = esi8;
    v12 = eax10;
    if (reinterpret_cast<signed char>(a3) >= reinterpret_cast<signed char>(0)) {
        do {
            if (reinterpret_cast<int1_t>(esi8 == 0xffffffff)) {
                fun_408692(ecx);
            }
            ecx = a4;
            --esi8;
            eax13 = reinterpret_cast<void***>(esi8 + reinterpret_cast<unsigned char>(esi8) * 4);
            if (reinterpret_cast<signed char>(*reinterpret_cast<void***>(reinterpret_cast<uint32_t>(ebx9 + reinterpret_cast<uint32_t>(eax13) * 4) + 4)) < reinterpret_cast<signed char>(ecx) && reinterpret_cast<signed char>(ecx) <= reinterpret_cast<signed char>(*reinterpret_cast<void***>(reinterpret_cast<uint32_t>(ebx9 + reinterpret_cast<uint32_t>(eax13) * 4) + 8)) || reinterpret_cast<int1_t>(esi8 == 0xffffffff)) {
                --a3;
                v12 = v11;
                v11 = esi8;
            }
        } while (reinterpret_cast<signed char>(a3) >= reinterpret_cast<signed char>(0));
        eax10 = v12;
    }
    esi14 = esi8 + 1;
    *a5 = esi14;
    *reinterpret_cast<void***>(a6) = eax10;
    if (reinterpret_cast<unsigned char>(eax10) > reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(edi7 + 12)) || reinterpret_cast<unsigned char>(esi14) > reinterpret_cast<unsigned char>(eax10)) {
        fun_408692(a6);
    }
    return ebx9 + reinterpret_cast<uint32_t>(esi14 + reinterpret_cast<unsigned char>(esi14) * 4) * 4;
}

struct s38 {
    unsigned char f0;
    signed char[3] pad4;
    void** f4;
    signed char[3] pad8;
    void** f8;
    signed char[11] pad20;
    void** f20;
    signed char[3] pad24;
    void** f24;
};

struct s40 {
    int32_t f0;
    struct s38* f4;
};

struct s39 {
    int32_t f0;
    void** f4;
    signed char[3] pad8;
    int32_t f8;
    struct s40* f12;
};

uint32_t fun_409c20(void** ecx, void** a2, void** a3);

int32_t fun_4080df(struct s37* a1, struct s38* a2, struct s39* a3) {
    void** edx4;
    void** ecx5;
    uint32_t eax6;
    int32_t eax7;
    int32_t eax8;

    if (!a1->f4 || ((edx4 = a1->f4 + 8, *reinterpret_cast<void***>(a1->f4 + 8) == 0) || (a1->f4 == a2->f4 || (ecx5 = a2->f4 + 8, eax6 = fun_409c20(ecx5, edx4, ecx5), !eax6)) && ((!(a2->f0 & 2) || a1->f0 & 8) && (((eax7 = a3->f0, (*reinterpret_cast<unsigned char*>(&eax7) & 1) == 0) || a1->f0 & 1) && (!(*reinterpret_cast<unsigned char*>(&eax7) & 2) || a1->f0 & 2))))) {
        eax8 = 1;
    } else {
        eax8 = 0;
    }
    return eax8;
}

void** fun_405b44(void** ecx, void** a2, void** a3, void** a4);

void** fun_408565(void** ecx, void** a2) {
    void** eax3;
    void** eax4;
    void** ecx5;
    void** v6;
    void** edi7;

    eax3 = g0;
    g0 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4 - 4 - 4 - 4 - 4);
    eax4 = a2;
    if (eax4 && (ecx5 = (*reinterpret_cast<struct s39**>(eax4 + 28))->f4, !!ecx5)) {
        v6 = *reinterpret_cast<void***>(eax4 + 24);
        eax4 = fun_405b44(ecx5, v6, ecx5, edi7);
    }
    g0 = eax3;
    return eax4;
}

int32_t g410d44 = 0;

void** fun_405c50(void** a1, void** a2, void** a3, int32_t a4, void** a5, void** a6, void** a7);

void fun_4081f0(void** ecx, void** a2, void** a3, void** a4, int32_t a5, void** a6, struct s37* a7, struct s38* a8, struct s36* a9, void** a10, void** a11, void** a12);

void** fun_408037(void** ecx, void** a2, void** a3, void** a4, int32_t a5, void** a6, void** a7, void** a8, void** a9) {
    void* ebp10;
    void** v11;
    void** v12;
    int1_t zf13;
    void** eax14;
    void** edi15;
    struct s36* eax16;
    struct s36* esi17;
    unsigned char* eax18;
    void** ecx19;

    ebp10 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4);
    v11 = ecx;
    v12 = ecx;
    zf13 = g410d44 == 0;
    if (zf13 || (eax14 = fun_405c50(a2, a3, a4, a5, a6, a8, a9), !eax14)) {
        edi15 = a7;
        eax16 = fun_405d79(ecx, a6, a8, edi15, reinterpret_cast<int32_t>(ebp10) + 0xfffffffc, reinterpret_cast<int32_t>(ebp10) + 0xfffffff8);
        esi17 = eax16;
        while (eax14 = v11, reinterpret_cast<unsigned char>(eax14) < reinterpret_cast<unsigned char>(v12)) {
            if (reinterpret_cast<signed char>(edi15) >= reinterpret_cast<signed char>(esi17->f0) && (reinterpret_cast<signed char>(edi15) <= reinterpret_cast<signed char>(esi17->f4) && ((eax18 = reinterpret_cast<unsigned char*>((esi17->f12 << 4) + reinterpret_cast<int32_t>(esi17->f16)), ecx19 = *reinterpret_cast<void***>(eax18 - 12), ecx19 == 0) || !*reinterpret_cast<void***>(ecx19 + 8)))) {
                fun_4081f0(ecx19, a2, a3, a4, a5, a6, eax18 - 16, 0, esi17, a8, a9, 1);
            }
            ++v11;
            ++esi17;
        }
    }
    return eax14;
}

void** fun_405c50(void** a1, void** a2, void** a3, int32_t a4, void** a5, void** a6, void** a7) {
    void** eax8;
    void** ebx9;

    eax8 = g0;
    g0 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4 + 0xffffffd8);
    g410d44();
    if (1) {
        g0 = eax8;
    } else {
        ebx9 = g0;
        *reinterpret_cast<void***>(eax8) = *reinterpret_cast<void***>(ebx9);
        g0 = eax8;
    }
    return 0;
}

void** fun_4083a1(void** a1, void** a2, struct s37* a3, struct s38* a4);

int32_t fun_40826b(void** a1, void** a2, void** a3, void** a4, int32_t a5, void** a6, int32_t a7, void** a8, int32_t a9, void** a10, void** a11);

void fun_405b10(void** ecx, int32_t a2, void** a3);

void fun_4081f0(void** ecx, void** a2, void** a3, void** a4, int32_t a5, void** a6, struct s37* a7, struct s38* a8, struct s36* a9, void** a10, void** a11, void** a12) {
    void** v13;
    int32_t edi14;
    int32_t esi15;
    void** ebx16;
    void** ebp17;
    void** v18;
    void** eax19;
    int32_t v20;
    int32_t eax21;

    if (a8) {
        fun_4083a1(a2, a3, a7, a8);
    }
    if (a11) {
        v13 = a11;
    } else {
        v13 = a3;
    }
    fun_405b52(ecx, v13, a2, edi14, esi15, ebx16, ebp17, __return_address());
    v18 = a9->f0;
    fun_40813c(ecx, a3, a5, a6, v18);
    eax19 = a9->f4;
    *reinterpret_cast<void***>(a3 + 8) = eax19 + 1;
    v20 = a7->f12;
    eax21 = fun_40826b(a2, a3, a4, a6, v20, a10, 0x100, a3, a5, a6, v18);
    if (eax21) {
        fun_405b10(ecx, eax21, a3);
    }
    return;
}

uint32_t fun_409c20(void** ecx, void** a2, void** a3) {
    void** edx4;
    void** ecx5;
    void** eax6;
    uint1_t cf7;

    edx4 = a2;
    ecx5 = a3;
    if (reinterpret_cast<unsigned char>(edx4) & 3) {
        if (!(reinterpret_cast<unsigned char>(edx4) & 1)) {
            addr_409c88_3:
            eax6 = *reinterpret_cast<void***>(edx4);
            edx4 = edx4 + 2;
            cf7 = reinterpret_cast<uint1_t>(reinterpret_cast<unsigned char>(eax6) < reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(ecx5)));
            if (eax6 != *reinterpret_cast<void***>(ecx5)) {
                addr_409c64_4:
                return (reinterpret_cast<unsigned char>(eax6) - (reinterpret_cast<unsigned char>(eax6) + reinterpret_cast<uint1_t>(reinterpret_cast<unsigned char>(eax6) < reinterpret_cast<unsigned char>(reinterpret_cast<unsigned char>(eax6) + cf7))) << 1) + 1;
            } else {
                if (!eax6) 
                    goto addr_409c60_6;
                cf7 = reinterpret_cast<uint1_t>(reinterpret_cast<unsigned char>((&eax6)[1]) < reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(ecx5 + 1)));
                if ((&eax6)[1] != *reinterpret_cast<void***>(ecx5 + 1)) 
                    goto addr_409c64_4;
            }
        } else {
            eax6 = *reinterpret_cast<void***>(edx4);
            ++edx4;
            cf7 = reinterpret_cast<uint1_t>(reinterpret_cast<unsigned char>(eax6) < reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(ecx5)));
            if (eax6 != *reinterpret_cast<void***>(ecx5)) 
                goto addr_409c64_4;
            ++ecx5;
            if (!eax6) 
                goto addr_409c60_6;
            if (!(reinterpret_cast<unsigned char>(edx4) & 2)) 
                goto addr_409c30_11; else 
                goto addr_409c88_3;
        }
    } else {
        do {
            addr_409c30_11:
            eax6 = *reinterpret_cast<void***>(edx4);
            cf7 = reinterpret_cast<uint1_t>(reinterpret_cast<unsigned char>(eax6) < reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(ecx5)));
            if (eax6 != *reinterpret_cast<void***>(ecx5)) 
                goto addr_409c64_4;
            if (!eax6) 
                goto addr_409c60_6;
            cf7 = reinterpret_cast<uint1_t>(reinterpret_cast<unsigned char>((&eax6)[1]) < reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(ecx5 + 1)));
            if ((&eax6)[1] != *reinterpret_cast<void***>(ecx5 + 1)) 
                goto addr_409c64_4;
            if (!(&eax6)[1]) 
                goto addr_409c60_6;
            eax6 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(eax6) >> 16);
            cf7 = reinterpret_cast<uint1_t>(reinterpret_cast<unsigned char>(eax6) < reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(ecx5 + 2)));
            if (eax6 != *reinterpret_cast<void***>(ecx5 + 2)) 
                goto addr_409c64_4;
            if (!eax6) 
                goto addr_409c60_6;
            cf7 = reinterpret_cast<uint1_t>(reinterpret_cast<unsigned char>((&eax6)[1]) < reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(ecx5 + 3)));
            if ((&eax6)[1] != *reinterpret_cast<void***>(ecx5 + 3)) 
                goto addr_409c64_4;
            ecx5 = ecx5 + 4;
            edx4 = edx4 + 4;
        } while ((&eax6)[1]);
        goto addr_409c5e_19;
    }
    if (!(&eax6)[1]) {
        addr_409c60_6:
        return 0;
    } else {
        ecx5 = ecx5 + 2;
        goto addr_409c30_11;
    }
    addr_409c5e_19:
    goto addr_409c60_6;
}

int32_t fun_405ec1(int32_t ecx, int32_t a2);

int32_t fun_4085f0(void** ecx, int32_t a2, void** a3, int32_t a4) {
    int32_t eax5;
    int32_t ecx6;
    int32_t eax7;

    eax5 = fun_405ec1(a4, a4);
    eax5(a4);
    ecx6 = a4;
    if (ecx6 == 0x100) {
        ecx6 = 2;
    }
    eax7 = fun_405ec1(ecx6, ecx6);
    return eax7;
}

int32_t fun_409be5(void** ecx, void** a2);

int32_t fun_409c01(void** ecx);

void** fun_4085cc(void** ecx, void** a2, void** a3, void** a4);

void** fun_405b4b(void** ecx, void** a2, void** a3, void** a4, void** a5);

void** fun_4083a1(void** a1, void** a2, struct s37* a3, struct s38* a4) {
    void** eax5;
    void** esp6;
    void*** v7;
    void** eax8;
    void** edi9;
    int1_t zf10;
    void** v11;
    int32_t eax12;
    void** ecx13;
    int32_t eax14;
    void** v15;
    int32_t eax16;
    void** v17;
    void** v18;
    void** edi19;
    void** eax20;
    void** v21;
    void** v22;
    void** v23;
    void** eax24;
    void** v25;
    int32_t eax26;
    int32_t eax27;
    void** v28;
    void** v29;
    void** eax30;
    int32_t esi31;
    void** ebx32;
    void** v33;
    int32_t v34;
    void** v35;
    int32_t eax36;
    int32_t eax37;
    void** v38;
    void** v39;
    void** v40;
    int32_t v41;
    void** v42;
    int32_t eax43;
    int32_t eax44;
    void** v45;

    eax5 = g0;
    esp6 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4 - 4 - 4 - 4 - 4);
    g0 = esp6;
    v7 = reinterpret_cast<void***>(reinterpret_cast<uint32_t>(esp6 - 12) - 4 - 4 - 4);
    eax8 = a3->f4;
    if (!eax8 || (!*reinterpret_cast<void***>(eax8 + 8) || (eax8 = a3->f8, eax8 == 0))) {
        addr_40854a_2:
        g0 = eax5;
        return eax8;
    } else {
        edi9 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(eax8) + reinterpret_cast<unsigned char>(a2) + 12);
        if (!(a3->f0 & 8)) {
            if (!(a4->f0 & 1)) {
                zf10 = a4->f24 == 0;
                v11 = *reinterpret_cast<void***>(a1 + 24);
                if (!zf10) {
                    eax12 = fun_409bc9(v11);
                    ecx13 = reinterpret_cast<void**>(1);
                    if (!eax12 || ((eax14 = fun_409be5(1, edi9), ecx13 = reinterpret_cast<void**>(1), eax14 == 0) || (v15 = a4->f24, eax16 = fun_409c01(1), ecx13 = v15, eax16 == 0))) {
                        addr_408541_7:
                        eax8 = fun_408692(ecx13);
                    } else {
                        if (!(a4->f0 & 4)) {
                            v17 = reinterpret_cast<void**>(&a4->f8);
                            v18 = *reinterpret_cast<void***>(a1 + 24);
                            eax20 = fun_4085cc(ecx13, v18, v17, edi19);
                            v21 = a4->f24;
                            eax8 = fun_405b44(v17, edi9, v21, eax20);
                        } else {
                            v22 = reinterpret_cast<void**>(&a4->f8);
                            v23 = *reinterpret_cast<void***>(a1 + 24);
                            eax24 = fun_4085cc(ecx13, v23, v22, 1);
                            v25 = a4->f24;
                            eax8 = fun_405b4b(v22, edi9, v25, eax24, 1);
                        }
                    }
                } else {
                    eax26 = fun_409bc9(v11);
                    ecx13 = reinterpret_cast<void**>(1);
                    if (!eax26) 
                        goto addr_408541_7;
                    eax27 = fun_409be5(1, edi9);
                    ecx13 = reinterpret_cast<void**>(1);
                    if (!eax27) 
                        goto addr_408541_7;
                    v28 = a4->f20;
                    v29 = *reinterpret_cast<void***>(a1 + 24);
                    eax30 = fun_4085cc(1, v29, &a4->f8, v28);
                    eax8 = fun_409830(&a4->f8, edi9, eax30, v28, edi19, esi31, ebx32, v33, v7, v34, eax5, 0x409330, 0x40c2f8);
                }
            } else {
                v35 = *reinterpret_cast<void***>(a1 + 24);
                eax36 = fun_409bc9(v35);
                ecx13 = reinterpret_cast<void**>(1);
                if (!eax36) 
                    goto addr_408541_7;
                eax37 = fun_409be5(1, edi9);
                ecx13 = reinterpret_cast<void**>(1);
                if (!eax37) 
                    goto addr_408541_7;
                v38 = a4->f20;
                v39 = *reinterpret_cast<void***>(a1 + 24);
                eax8 = fun_409830(1, edi9, v39, v38, edi19, esi31, ebx32, v40, v7, v41, eax5, 0x409330, 0x40c2f8);
                if (!reinterpret_cast<int1_t>(a4->f20 == 4)) 
                    goto addr_408546_17;
                eax8 = *reinterpret_cast<void***>(edi9);
                if (eax8) 
                    goto addr_408492_19;
            }
        } else {
            v42 = *reinterpret_cast<void***>(a1 + 24);
            eax43 = fun_409bc9(v42);
            ecx13 = reinterpret_cast<void**>(1);
            if (!eax43) 
                goto addr_408541_7;
            eax44 = fun_409be5(1, edi9);
            ecx13 = reinterpret_cast<void**>(1);
            if (!eax44) 
                goto addr_408541_7;
            eax8 = *reinterpret_cast<void***>(a1 + 24);
            *reinterpret_cast<void***>(edi9) = eax8;
            ecx13 = reinterpret_cast<void**>(&a4->f8);
            v45 = ecx13;
            goto addr_40842f_23;
        }
    }
    addr_408546_17:
    goto addr_40854a_2;
    addr_408492_19:
    v45 = reinterpret_cast<void**>(&a4->f8);
    addr_40842f_23:
    eax8 = fun_4085cc(ecx13, eax8, v45, edi19);
    *reinterpret_cast<void***>(edi9) = eax8;
    goto addr_408546_17;
}

void fun_405b10(void** ecx, int32_t a2, void** a3) {
    void** ebx4;

    ebx4 = g0;
    g0 = *reinterpret_cast<void***>(ebx4);
    goto a2;
}

void** g410d3c = reinterpret_cast<void**>(0);

void** g410d40 = reinterpret_cast<void**>(0);

int32_t fun_405bd7(void** a1, void** a2, int32_t a3, void** a4, int32_t a5);

void** fun_408331(void** ecx);

int32_t fun_40826b(void** a1, void** a2, void** a3, void** a4, int32_t a5, void** a6, int32_t a7, void** a8, int32_t a9, void** a10, void** a11) {
    void** eax12;
    int32_t eax13;

    eax12 = g0;
    g0 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4 - 4 - 4 - 4 - 4);
    g410d3c = a1;
    g410d40 = a3;
    eax13 = fun_405bd7(a2, a4, a5, a6, a7);
    fun_408331(a3);
    g0 = eax12;
    return eax13;
}

struct s41 {
    signed char[4] pad4;
    uint32_t f4;
};

int32_t fun_405e14(struct s41* a1, int32_t a2);

int32_t fun_405e9e() {
    int32_t eax1;
    void** ecx2;

    eax1 = 0;
    ecx2 = g0;
    if (reinterpret_cast<int1_t>(*reinterpret_cast<void***>(ecx2 + 4) == fun_405e14) && *reinterpret_cast<void***>(ecx2 + 8) == *reinterpret_cast<void***>(*reinterpret_cast<void***>(ecx2 + 12) + 12)) {
        eax1 = 1;
    }
    return eax1;
}

int32_t IsBadWritePtr = 0xd09a;

int32_t fun_409be5(void** ecx, void** a2) {
    int32_t eax3;

    eax3 = reinterpret_cast<int32_t>(IsBadWritePtr());
    if (eax3) {
    }
    goto a2;
}

void** fun_4085cc(void** ecx, void** a2, void** a3, void** a4) {
    void** eax5;

    eax5 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(a3)) + reinterpret_cast<unsigned char>(a2));
    if (reinterpret_cast<signed char>(*reinterpret_cast<void***>(a3 + 4)) >= reinterpret_cast<signed char>(0)) {
        eax5 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(eax5) + (reinterpret_cast<int32_t>(*reinterpret_cast<void**>(reinterpret_cast<int32_t>(*reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(a3 + 4)) + reinterpret_cast<unsigned char>(a2))) + reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(a3 + 8)))) + reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(a3 + 4))));
    }
    return eax5;
}

int32_t IsBadCodePtr = 0xd1d6;

int32_t fun_409c01(void** ecx) {
    int32_t eax2;
    int32_t esi3;

    eax2 = reinterpret_cast<int32_t>(IsBadCodePtr());
    if (eax2) {
    }
    goto esi3;
}

void** fun_405b4b(void** ecx, void** a2, void** a3, void** a4, void** a5) {
    goto a3;
}

void** fun_405b44(void** ecx, void** a2, void** a3, void** a4) {
    goto a3;
}

int32_t fun_405ec1(int32_t ecx, int32_t a2) {
    int32_t eax3;
    int32_t ebp4;
    int32_t eax5;

    g40e518 = ecx;
    g40e514 = eax3;
    g40e51c = ebp4;
    return eax5;
}

void** g410ab8 = reinterpret_cast<void**>(0xff);

void** g410ac8 = reinterpret_cast<void**>(0xff);

void** g410e68 = reinterpret_cast<void**>(0);

void fun_40a0da(int32_t a1, void** a2, void** a3, uint32_t a4, void** a5, void** a6, void** a7, uint32_t a8, void** a9, void* a10, void** a11, int32_t a12, void** a13, void** a14, uint32_t a15, void** a16, void** a17, void** a18, uint32_t a19, void** a20, void* a21, void** a22);

uint16_t g410f16 = 0;

int16_t g410f08 = 0;

uint16_t g410f14 = 0;

uint16_t g410f12 = 0;

uint16_t g410f10 = 0;

uint16_t g410f0e = 0;

uint16_t g410f0a = 0;

uint16_t g410f0c = 0;

uint16_t g410ec2 = 0;

int16_t g410eb4 = 0;

uint16_t g410ec0 = 0;

uint16_t g410ebe = 0;

uint16_t g410ebc = 0;

uint16_t g410eba = 0;

uint16_t g410eb6 = 0;

uint16_t g410eb8 = 0;

struct s39* g410abc = reinterpret_cast<struct s39*>(0);

struct s39* g410acc = reinterpret_cast<struct s39*>(0);

void*** g410ad0 = reinterpret_cast<void***>(0);

void*** g410ac0 = reinterpret_cast<void***>(0);

void** fun_409f2e(void** a1, void** a2, void** a3, uint32_t a4, void** a5, void* a6, void** a7, uint32_t a8) {
    int1_t zf9;
    void** eax10;
    int1_t zf11;
    int1_t zf12;
    int1_t zf13;
    int32_t edi14;
    void** esi15;
    void** ebx16;
    void** v17;
    void** ecx18;
    int1_t zf19;
    void* ecx20;
    void** ecx21;
    uint32_t ecx22;
    void** ecx23;
    void** v24;
    void** v25;
    uint32_t ecx26;
    void** v27;
    uint32_t v28;
    void** v29;
    void** v30;
    void** ecx31;
    void** ecx32;
    uint32_t ecx33;
    void** eax34;
    int1_t zf35;
    void* eax36;
    void** eax37;
    uint32_t eax38;
    void** eax39;
    void** v40;
    void** v41;
    uint32_t eax42;
    void** v43;
    uint32_t v44;
    void** v45;
    void** v46;
    void** eax47;
    void** eax48;
    uint32_t eax49;
    struct s39* edx50;
    struct s39* eax51;
    void** eax52;
    void*** eax53;
    void** ecx54;
    uint1_t less55;
    int1_t less56;

    zf9 = g410a24 == 0;
    if (zf9) 
        goto addr_409f3b_2;
    eax10 = *reinterpret_cast<void***>(a1 + 20);
    zf11 = eax10 == g410ab8;
    if (!zf11 || (zf12 = eax10 == g410ac8, !zf12)) {
        zf13 = g410e68 == 0;
        if (zf13) {
            fun_40a0da(1, 1, eax10, 4, 1, 0, 0, 2, 0, 0, 0, edi14, esi15, ebx16, __return_address(), a1, a2, a3, a4, a5, a6, a7);
            v17 = *reinterpret_cast<void***>(a1 + 20);
            fun_40a0da(0, 1, v17, 10, 5, 0, 0, 2, 0, 0, 0, 1, 1, eax10, 4, 1, 0, 0, 2, 0, 0, 0);
        } else {
            ecx18 = reinterpret_cast<void**>(static_cast<uint32_t>(g410f16));
            zf19 = g410f08 == 0;
            ecx20 = reinterpret_cast<void*>(static_cast<uint32_t>(g410f14));
            ecx21 = reinterpret_cast<void**>(static_cast<uint32_t>(g410f12));
            ecx22 = g410f10;
            if (!zf19) {
                ecx23 = reinterpret_cast<void**>(static_cast<uint32_t>(g410f0e));
                v24 = ecx23;
                v25 = reinterpret_cast<void**>(0);
                ecx26 = g410f0a;
                v27 = reinterpret_cast<void**>(0);
                v28 = ecx26;
                v29 = eax10;
                v30 = reinterpret_cast<void**>(0);
            } else {
                ecx31 = reinterpret_cast<void**>(static_cast<uint32_t>(g410f0c));
                v24 = reinterpret_cast<void**>(0);
                v25 = ecx31;
                ecx32 = reinterpret_cast<void**>(static_cast<uint32_t>(g410f0e));
                v27 = ecx32;
                ecx33 = g410f0a;
                v28 = ecx33;
                v29 = eax10;
                v30 = reinterpret_cast<void**>(1);
            }
            fun_40a0da(1, v30, v29, v28, v27, v25, v24, ecx22, ecx21, ecx20, ecx18, edi14, esi15, ebx16, __return_address(), a1, a2, a3, a4, a5, a6, a7);
            eax34 = reinterpret_cast<void**>(static_cast<uint32_t>(g410ec2));
            zf35 = g410eb4 == 0;
            eax36 = reinterpret_cast<void*>(static_cast<uint32_t>(g410ec0));
            eax37 = reinterpret_cast<void**>(static_cast<uint32_t>(g410ebe));
            eax38 = g410ebc;
            if (!zf35) {
                eax39 = reinterpret_cast<void**>(static_cast<uint32_t>(g410eba));
                v40 = eax39;
                v41 = reinterpret_cast<void**>(0);
                eax42 = g410eb6;
                v43 = reinterpret_cast<void**>(0);
                v44 = eax42;
                v45 = *reinterpret_cast<void***>(a1 + 20);
                v46 = reinterpret_cast<void**>(0);
            } else {
                eax47 = reinterpret_cast<void**>(static_cast<uint32_t>(g410eb8));
                v40 = reinterpret_cast<void**>(0);
                v41 = eax47;
                eax48 = reinterpret_cast<void**>(static_cast<uint32_t>(g410eba));
                v43 = eax48;
                eax49 = g410eb6;
                v44 = eax49;
                v45 = *reinterpret_cast<void***>(a1 + 20);
                v46 = reinterpret_cast<void**>(1);
            }
            fun_40a0da(0, v46, v45, v44, v43, v41, v40, eax38, eax37, eax36, eax34, edi14, esi15, ebx16, __return_address(), a1, a2, a3, a4, a5, a6, a7);
        }
    }
    edx50 = g410abc;
    eax51 = g410acc;
    if (reinterpret_cast<int32_t>(edx50) < reinterpret_cast<int32_t>(eax51)) 
        goto addr_40a074_14;
    if (reinterpret_cast<int32_t>(*reinterpret_cast<struct s39**>(a1 + 28)) < reinterpret_cast<int32_t>(eax51) || reinterpret_cast<int32_t>(*reinterpret_cast<struct s39**>(a1 + 28)) > reinterpret_cast<int32_t>(edx50)) {
        addr_40a08c_16:
        eax52 = reinterpret_cast<void**>(1);
    } else {
        if (reinterpret_cast<int32_t>(*reinterpret_cast<struct s39**>(a1 + 28)) <= reinterpret_cast<int32_t>(eax51) || reinterpret_cast<int32_t>(*reinterpret_cast<struct s39**>(a1 + 28)) >= reinterpret_cast<int32_t>(edx50)) {
            addr_40a0a6_18:
            eax53 = reinterpret_cast<void***>(reinterpret_cast<uint32_t>(*reinterpret_cast<void***>(a1) + reinterpret_cast<uint32_t>(*reinterpret_cast<void***>(a1 + 4) + reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(a1 + 8)) * 60) * 60) * 0x3e8);
            if (*reinterpret_cast<struct s39**>(a1 + 28) != edx50) {
                ecx54 = reinterpret_cast<void**>(0);
                less55 = reinterpret_cast<uint1_t>(reinterpret_cast<int32_t>(eax53) < reinterpret_cast<int32_t>(g410ad0));
                *reinterpret_cast<unsigned char*>(&ecx54) = less55;
                goto addr_40a0c9_20;
            } else {
                ecx54 = reinterpret_cast<void**>(0);
                less56 = reinterpret_cast<int32_t>(eax53) < reinterpret_cast<int32_t>(g410ac0);
                *reinterpret_cast<unsigned char*>(&ecx54) = reinterpret_cast<uint1_t>(!less56);
                goto addr_40a0c9_20;
            }
        } else {
            addr_409f3b_2:
            eax52 = reinterpret_cast<void**>(0);
        }
    }
    addr_40a08e_22:
    return eax52;
    addr_40a0c9_20:
    eax52 = ecx54;
    goto addr_40a08e_22;
    addr_40a074_14:
    if (reinterpret_cast<int32_t>(*reinterpret_cast<struct s39**>(a1 + 28)) < reinterpret_cast<int32_t>(edx50)) 
        goto addr_409f3b_2;
    if (reinterpret_cast<int32_t>(*reinterpret_cast<struct s39**>(a1 + 28)) > reinterpret_cast<int32_t>(eax51)) 
        goto addr_409f3b_2;
    if (reinterpret_cast<int32_t>(*reinterpret_cast<struct s39**>(a1 + 28)) <= reinterpret_cast<int32_t>(edx50)) 
        goto addr_40a0a6_18;
    if (reinterpret_cast<int32_t>(*reinterpret_cast<struct s39**>(a1 + 28)) >= reinterpret_cast<int32_t>(eax51)) 
        goto addr_40a0a6_18; else 
        goto addr_40a08c_16;
}

void** fun_408ac6(void** ecx, void** a2, void** a3) {
    void** edx4;
    void** eax5;
    void** ecx6;
    void** esi7;

    edx4 = a3;
    eax5 = a2;
    ecx6 = edx4 + 0xffffffff;
    if (edx4) {
        do {
            if (!*reinterpret_cast<void***>(eax5)) 
                break;
            ++eax5;
            esi7 = ecx6;
            --ecx6;
        } while (esi7);
    }
    if (*reinterpret_cast<void***>(eax5)) {
        return edx4;
    } else {
        return reinterpret_cast<unsigned char>(eax5) - reinterpret_cast<unsigned char>(a2);
    }
}

void fun_409800(void** ecx, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7, void** a8, void** a9, void** a10, void** a11, void** a12, void** a13, void** a14, void** a15, void** a16, void** a17, void** a18, void** a19, void** a20, void** a21) {
    int32_t v22;
    void* ecx23;
    uint32_t eax24;
    uint32_t eax25;
    int32_t* esp26;

    v22 = reinterpret_cast<int32_t>(__return_address());
    ecx23 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4 + 8);
    if (eax24 >= 0x1000) {
        do {
            ecx23 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(ecx23) - 0x1000);
            eax25 = eax25 - 0x1000;
        } while (eax25 >= 0x1000);
    }
    esp26 = reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(ecx23) - eax25 - 4);
    *esp26 = v22;
    goto *esp26;
}

uint32_t fun_40a3a5(void** a1);

uint32_t fun_40a769(void** a1, void** a2, void** a3) {
    int1_t zf4;
    uint32_t eax5;

    zf4 = g4112d0 == 0;
    if (zf4) {
        eax5 = fun_40a3a5(0xfd);
        g4112d0 = reinterpret_cast<void**>(1);
    }
    return eax5;
}

uint32_t fun_40a374(unsigned char a1, uint32_t a2, unsigned char a3);

uint32_t fun_40a363(void** ecx) {
    int32_t v2;
    uint32_t eax3;

    v2 = reinterpret_cast<int32_t>(__return_address());
    eax3 = fun_40a374(*reinterpret_cast<unsigned char*>(&v2), 0, 4);
    return eax3;
}

int32_t g40e520 = 0x4053b9;

void fun_406412(void** ecx, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7, void** a8) {
    int1_t zf9;

    zf9 = g410d0c == 1;
    if (zf9) {
        fun_409408(ecx, __return_address(), a2, a3, a4, a5, a6, a7);
    }
    fun_409441(ecx, __return_address(), __return_address(), a2, a3, a4, a5, a6, a7, a8);
    g40e520();
    return;
}

void** fun_40a790(void** ecx, void** a2, void** a3, void** a4, void** a5, void** a6) {
    void** ecx7;
    void** eax8;

    ecx7 = a2;
    if (!(reinterpret_cast<unsigned char>(ecx7) & 3)) {
        while (1) {
            addr_40a7b0_2:
            ecx7 = ecx7 + 4;
            if (!((reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(ecx7)) ^ 0xffffffff ^ reinterpret_cast<uint32_t>(*reinterpret_cast<void***>(ecx7) + 0x7efefeff)) & 0x81010100)) 
                continue;
            eax8 = *reinterpret_cast<void***>(ecx7 + 0xfffffffc);
            if (!*reinterpret_cast<signed char*>(&eax8)) 
                break;
            if (!*reinterpret_cast<signed char*>(&eax8 + 1)) 
                goto addr_40a7f7_5;
            if (!(reinterpret_cast<unsigned char>(eax8) & 0xff0000)) 
                goto addr_40a7ed_7;
            if (!(reinterpret_cast<unsigned char>(eax8) & 0xff000000)) 
                goto addr_40a7e3_9;
        }
    } else {
        do {
            ++ecx7;
            if (!*reinterpret_cast<void***>(ecx7)) 
                goto addr_40a7e3_9;
        } while (reinterpret_cast<unsigned char>(ecx7) & 3);
        goto addr_40a7ab_13;
    }
    return reinterpret_cast<unsigned char>(ecx7 + 0xfffffffc) - reinterpret_cast<unsigned char>(a2);
    addr_40a7f7_5:
    return reinterpret_cast<unsigned char>(ecx7 + 0xfffffffd) - reinterpret_cast<unsigned char>(a2);
    addr_40a7ed_7:
    return reinterpret_cast<unsigned char>(ecx7 + 0xfffffffe) - reinterpret_cast<unsigned char>(a2);
    addr_40a7e3_9:
    return reinterpret_cast<unsigned char>(ecx7 + 0xffffffff) - reinterpret_cast<unsigned char>(a2);
    addr_40a7ab_13:
    goto addr_40a7b0_2;
}

void fun_408e94(void** ecx, void** a2, void** a3, void** a4, void** a5, void** a6) {
    void** ecx7;
    void** esi8;
    void** edi9;
    void** eax10;
    void** dl11;
    uint32_t v12;
    uint32_t v13;
    uint32_t ebx14;
    uint32_t edx15;
    uint32_t ebx16;

    ecx7 = a6;
    *reinterpret_cast<void***>(ecx7) = reinterpret_cast<void**>(0);
    esi8 = a4;
    edi9 = a3;
    *reinterpret_cast<void***>(a5) = reinterpret_cast<void**>(1);
    eax10 = a2;
    if (edi9) {
        *reinterpret_cast<void***>(edi9) = esi8;
        edi9 = edi9 + 4;
        a3 = edi9;
    }
    if (!reinterpret_cast<int1_t>(*reinterpret_cast<void***>(eax10) == 34)) {
        do {
            *reinterpret_cast<void***>(ecx7) = *reinterpret_cast<void***>(ecx7) + 1;
            if (esi8) {
                *reinterpret_cast<void***>(esi8) = *reinterpret_cast<void***>(eax10);
                ++esi8;
            }
            dl11 = *reinterpret_cast<void***>(eax10);
            ++eax10;
            if (*reinterpret_cast<unsigned char*>(dl11 + 0x411081) & 4) {
                *reinterpret_cast<void***>(ecx7) = *reinterpret_cast<void***>(ecx7) + 1;
                if (esi8) {
                    *reinterpret_cast<void***>(esi8) = *reinterpret_cast<void***>(eax10);
                    ++esi8;
                }
                ++eax10;
            }
            if (dl11 == 32) 
                break;
            if (!dl11) 
                goto addr_408f3f_12;
        } while (!reinterpret_cast<int1_t>(dl11 == 9));
        if (dl11) {
            if (esi8) {
                *reinterpret_cast<void***>(esi8 + 0xffffffff) = reinterpret_cast<void**>(0);
            }
        } else {
            addr_408f3f_12:
            --eax10;
        }
    } else {
        while ((++eax10, *reinterpret_cast<void***>(eax10 + 1) != 34) && *reinterpret_cast<void***>(eax10 + 1)) {
            if (*reinterpret_cast<unsigned char*>(*reinterpret_cast<void***>(eax10 + 1) + 0x411081) & 4 && (*reinterpret_cast<void***>(ecx7) = *reinterpret_cast<void***>(ecx7) + 1, !!esi8)) {
                *reinterpret_cast<void***>(esi8) = *reinterpret_cast<void***>(eax10);
                ++esi8;
                ++eax10;
            }
            *reinterpret_cast<void***>(ecx7) = *reinterpret_cast<void***>(ecx7) + 1;
            if (!esi8) 
                continue;
            *reinterpret_cast<void***>(esi8) = *reinterpret_cast<void***>(eax10);
            ++esi8;
        }
        *reinterpret_cast<void***>(ecx7) = *reinterpret_cast<void***>(ecx7) + 1;
        if (!esi8) 
            goto addr_408eff_23; else 
            goto addr_408efb_24;
    }
    addr_408f4a_25:
    v12 = 0;
    while (*reinterpret_cast<void***>(eax10)) {
        while (*reinterpret_cast<void***>(eax10) == 32 || reinterpret_cast<int1_t>(*reinterpret_cast<void***>(eax10) == 9)) {
            ++eax10;
        }
        if (!*reinterpret_cast<void***>(eax10)) 
            break;
        if (edi9) {
            *reinterpret_cast<void***>(edi9) = esi8;
            edi9 = edi9 + 4;
            a3 = edi9;
        }
        *reinterpret_cast<void***>(a5) = *reinterpret_cast<void***>(a5) + 1;
        while (1) {
            v13 = 1;
            ebx14 = 0;
            while (reinterpret_cast<int1_t>(*reinterpret_cast<void***>(eax10) == 92)) {
                ++eax10;
                ++ebx14;
            }
            if (reinterpret_cast<int1_t>(*reinterpret_cast<void***>(eax10) == 34)) {
                if (!(*reinterpret_cast<unsigned char*>(&ebx14) & 1)) {
                    if (!v12 || !reinterpret_cast<int1_t>(*reinterpret_cast<void***>(eax10 + 1) == 34)) {
                        v13 = 0;
                    } else {
                        ++eax10;
                    }
                    edi9 = a3;
                    edx15 = 0;
                    *reinterpret_cast<unsigned char*>(&edx15) = reinterpret_cast<uint1_t>(v12 == 0);
                    v12 = edx15;
                }
                ebx14 = ebx14 >> 1;
            }
            if (ebx14) {
                ebx16 = ebx14 - 1 + 1;
                do {
                    if (esi8) {
                        *reinterpret_cast<void***>(esi8) = reinterpret_cast<void**>(92);
                        ++esi8;
                    }
                    *reinterpret_cast<void***>(ecx7) = *reinterpret_cast<void***>(ecx7) + 1;
                    --ebx16;
                } while (ebx16);
            }
            if (!*reinterpret_cast<void***>(eax10)) 
                break;
            if (v12) 
                goto addr_408fee_50;
            if (*reinterpret_cast<void***>(eax10) == 32) 
                break;
            if (*reinterpret_cast<void***>(eax10) == 9) 
                break;
            addr_408fee_50:
            if (v13) {
                if (!esi8) {
                    if (*reinterpret_cast<unsigned char*>(*reinterpret_cast<void***>(eax10) + 0x411081) & 4) {
                        ++eax10;
                        *reinterpret_cast<void***>(ecx7) = *reinterpret_cast<void***>(ecx7) + 1;
                    }
                } else {
                    if (*reinterpret_cast<unsigned char*>(*reinterpret_cast<void***>(eax10) + 0x411081) & 4) {
                        *reinterpret_cast<void***>(esi8) = *reinterpret_cast<void***>(eax10);
                        ++esi8;
                        ++eax10;
                        *reinterpret_cast<void***>(ecx7) = *reinterpret_cast<void***>(ecx7) + 1;
                    }
                    *reinterpret_cast<void***>(esi8) = *reinterpret_cast<void***>(eax10);
                    ++esi8;
                }
                *reinterpret_cast<void***>(ecx7) = *reinterpret_cast<void***>(ecx7) + 1;
            }
            ++eax10;
        }
        if (esi8) {
            *reinterpret_cast<void***>(esi8) = reinterpret_cast<void**>(0);
            ++esi8;
        }
        *reinterpret_cast<void***>(ecx7) = *reinterpret_cast<void***>(ecx7) + 1;
    }
    if (edi9) {
        *reinterpret_cast<void***>(edi9) = reinterpret_cast<void**>(0);
    }
    *reinterpret_cast<void***>(a5) = *reinterpret_cast<void***>(a5) + 1;
    return;
    addr_408eff_23:
    if (reinterpret_cast<int1_t>(*reinterpret_cast<void***>(eax10) == 34)) {
        ++eax10;
        goto addr_408f4a_25;
    }
    addr_408efb_24:
    *reinterpret_cast<void***>(esi8) = reinterpret_cast<void**>(0);
    ++esi8;
    goto addr_408eff_23;
}

void fun_405df4(struct s21* a1) {
    fun_40b160();
    goto a1->f4;
}

void** fun_4086f0(void** ecx, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7, void** a8, void** a9, void** a10) {
    void** edi11;
    void** ecx12;
    void** edx13;

    edi11 = a2;
    ecx12 = a3;
    if (!(reinterpret_cast<unsigned char>(ecx12) & 3)) {
        while (1) {
            addr_408786_3:
            edx13 = *reinterpret_cast<void***>(ecx12);
            ecx12 = ecx12 + 4;
            if ((reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(ecx12)) ^ 0xffffffff ^ reinterpret_cast<uint32_t>(*reinterpret_cast<void***>(ecx12) + 0x7efefeff)) & 0x81010100) {
                if (!edx13) 
                    break;
                if (!*reinterpret_cast<signed char*>(&edx13 + 1)) 
                    goto addr_4087cf_6;
                if (!(reinterpret_cast<unsigned char>(edx13) & 0xff0000)) 
                    goto addr_4087c2_8;
                if (!(reinterpret_cast<unsigned char>(edx13) & 0xff000000)) 
                    goto addr_4087ba_10;
            }
            *reinterpret_cast<void***>(edi11) = edx13;
            edi11 = edi11 + 4;
        }
    } else {
        do {
            edx13 = *reinterpret_cast<void***>(ecx12);
            ++ecx12;
            if (!edx13) 
                break;
            *reinterpret_cast<void***>(edi11) = edx13;
            ++edi11;
        } while (reinterpret_cast<unsigned char>(ecx12) & 3);
        goto addr_40877f_15;
    }
    *reinterpret_cast<void***>(edi11) = edx13;
    return a2;
    addr_4087cf_6:
    *reinterpret_cast<void***>(edi11) = edx13;
    return a2;
    addr_4087c2_8:
    *reinterpret_cast<void***>(edi11) = edx13;
    *reinterpret_cast<void***>(edi11 + 2) = reinterpret_cast<void**>(0);
    return a2;
    addr_4087ba_10:
    *reinterpret_cast<void***>(edi11) = edx13;
    return a2;
    addr_40877f_15:
    goto addr_408786_3;
}

void** fun_408700(void** ecx, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7, void** a8, void** a9, void** a10, void** a11, void** a12, void** a13) {
    void** ecx14;
    void** eax15;
    void** edi16;
    void** ecx17;
    void** edx18;

    ecx14 = a2;
    if (!(reinterpret_cast<unsigned char>(ecx14) & 3)) {
        while (1) {
            addr_40871c_2:
            ecx14 = ecx14 + 4;
            if (!((reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(ecx14)) ^ 0xffffffff ^ reinterpret_cast<uint32_t>(*reinterpret_cast<void***>(ecx14) + 0x7efefeff)) & 0x81010100)) 
                continue;
            eax15 = *reinterpret_cast<void***>(ecx14 + 0xfffffffc);
            if (!*reinterpret_cast<signed char*>(&eax15)) 
                break;
            if (!*reinterpret_cast<signed char*>(&eax15 + 1)) 
                goto addr_408759_5;
            if (!(reinterpret_cast<unsigned char>(eax15) & 0xff0000)) 
                goto addr_408754_7;
            if (!(reinterpret_cast<unsigned char>(eax15) & 0xff000000)) 
                goto addr_40874f_9;
        }
    } else {
        do {
            ++ecx14;
            if (!*reinterpret_cast<void***>(ecx14)) 
                goto addr_40874f_9;
        } while (reinterpret_cast<unsigned char>(ecx14) & 3);
        goto addr_40871c_2;
    }
    edi16 = ecx14 + 0xfffffffc;
    addr_408761_14:
    ecx17 = a3;
    if (!(reinterpret_cast<unsigned char>(ecx17) & 3)) {
        while (1) {
            addr_408786_15:
            edx18 = *reinterpret_cast<void***>(ecx17);
            ecx17 = ecx17 + 4;
            if ((reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(ecx17)) ^ 0xffffffff ^ reinterpret_cast<uint32_t>(*reinterpret_cast<void***>(ecx17) + 0x7efefeff)) & 0x81010100) {
                if (!edx18) 
                    break;
                if (!*reinterpret_cast<signed char*>(&edx18 + 1)) 
                    goto addr_4087cf_18;
                if (!(reinterpret_cast<unsigned char>(edx18) & 0xff0000)) 
                    goto addr_4087c2_20;
                if (!(reinterpret_cast<unsigned char>(edx18) & 0xff000000)) 
                    goto addr_4087ba_22;
            }
            *reinterpret_cast<void***>(edi16) = edx18;
            edi16 = edi16 + 4;
        }
    } else {
        do {
            edx18 = *reinterpret_cast<void***>(ecx17);
            ++ecx17;
            if (!edx18) 
                break;
            *reinterpret_cast<void***>(edi16) = edx18;
            ++edi16;
        } while (reinterpret_cast<unsigned char>(ecx17) & 3);
        goto addr_40877f_27;
    }
    *reinterpret_cast<void***>(edi16) = edx18;
    return a2;
    addr_4087cf_18:
    *reinterpret_cast<void***>(edi16) = edx18;
    return a2;
    addr_4087c2_20:
    *reinterpret_cast<void***>(edi16) = edx18;
    *reinterpret_cast<void***>(edi16 + 2) = reinterpret_cast<void**>(0);
    return a2;
    addr_4087ba_22:
    *reinterpret_cast<void***>(edi16) = edx18;
    return a2;
    addr_40877f_27:
    goto addr_408786_15;
    addr_408759_5:
    edi16 = ecx14 + 0xfffffffd;
    goto addr_408761_14;
    addr_408754_7:
    edi16 = ecx14 + 0xfffffffe;
    goto addr_408761_14;
    addr_40874f_9:
    edi16 = ecx14 + 0xffffffff;
    goto addr_408761_14;
}

int32_t g410f2c = 0;

int32_t g410f30 = 0;

int32_t g410f34 = 0;

void fun_40a80b(void** ecx, void* a2, int32_t a3, int32_t a4, void** a5, void** a6, void** a7, void** a8, void** a9, void** a10, void** a11, void** a12) {
    int32_t ebx13;
    int1_t zf14;
    int32_t eax15;
    int32_t eax16;
    int32_t eax17;
    int32_t eax18;
    int32_t eax19;
    int32_t esi20;
    int32_t eax21;
    int32_t eax22;
    int32_t eax23;
    int32_t ebx24;

    ebx13 = 0;
    zf14 = g410f2c == 0;
    if (!zf14) {
        addr_40a85a_2:
        eax15 = g410f30;
        if (eax15 && ((eax16 = reinterpret_cast<int32_t>(eax15()), ebx13 = eax16, !!ebx13) && (eax17 = g410f34, !!eax17))) {
            eax18 = reinterpret_cast<int32_t>(eax17(ebx13));
            ebx13 = eax18;
        }
    } else {
        eax19 = reinterpret_cast<int32_t>(LoadLibraryA());
        if (!eax19 || (esi20 = GetProcAddress, eax21 = reinterpret_cast<int32_t>(esi20(eax19, "MessageBoxA")), g410f2c = eax21, eax21 == 0)) {
            goto addr_40a88c_6;
        } else {
            eax22 = reinterpret_cast<int32_t>(esi20(eax19, "GetActiveWindow", eax19, "MessageBoxA"));
            g410f30 = eax22;
            eax23 = reinterpret_cast<int32_t>(esi20(eax19, "GetLastActivePopup", eax19, "GetActiveWindow", eax19, "MessageBoxA"));
            g410f34 = eax23;
            goto addr_40a85a_2;
        }
    }
    g410f2c(ebx13, __return_address(), a2);
    addr_40a88c_6:
    goto ebx24;
}

void** fun_40aa91(void** ecx, void** a2);

int32_t GetTimeZoneInformation = 0xd1e6;

int32_t g410e70 = 0;

uint32_t g410ec4 = 0;

void** g410f18 = reinterpret_cast<void**>(0);

void** g410aac = reinterpret_cast<void**>(44);

void** g410d28 = reinterpret_cast<void**>(0);

void** g410ab0 = reinterpret_cast<void**>(0x6c);

void** g410f1c = reinterpret_cast<void**>(0);

void* fun_40aa06(void** ecx, void** a2);

void fun_409cd0(void** ecx, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7, void** a8, void** a9, void** a10, void** a11, void** a12, void** a13, void** a14, void** a15, void** a16, void** a17, void** a18, void** a19, void** a20) {
    void** v21;
    void** v22;
    void** ebx23;
    void** v24;
    void** ebp25;
    void** v26;
    void** esi27;
    void** v28;
    void** edi29;
    void** edi30;
    void** eax31;
    void** ecx32;
    void** eax33;
    int32_t eax34;
    uint32_t ecx35;
    void** eax36;
    int1_t zf37;
    int1_t zf38;
    void** eax39;
    int32_t esi40;
    void** v41;
    void** v42;
    int32_t eax43;
    void** eax44;
    void** eax45;
    void** v46;
    void** v47;
    int32_t eax48;
    void** eax49;
    void** eax50;
    uint32_t eax51;
    void** v52;
    void** eax53;
    void** eax54;
    void** v55;
    void** eax56;
    void** esi57;
    void* eax58;
    void** ecx59;
    void** eax60;
    void** eax61;
    void** v62;
    void** eax63;
    void* eax64;
    void** ecx65;
    void* eax66;
    void** ecx67;

    v21 = ecx;
    v22 = ebx23;
    v24 = ebp25;
    v26 = esi27;
    v28 = edi29;
    edi30 = reinterpret_cast<void**>(0);
    g410e68 = reinterpret_cast<void**>(0);
    g410ac8 = reinterpret_cast<void**>(0xffffffff);
    g410ab8 = reinterpret_cast<void**>(0xffffffff);
    eax31 = fun_40aa91(ecx, "TZ");
    ecx32 = reinterpret_cast<void**>("TZ");
    if (!eax31) {
        eax33 = reinterpret_cast<void**>(GetTimeZoneInformation("TZ", 0x410e70));
        if (eax33 != 0xffffffff) {
            eax34 = g410e70;
            ecx35 = g410ec4;
            eax36 = reinterpret_cast<void**>(eax34 * 60);
            zf37 = g410eb6 == 0;
            g410a20 = eax36;
            g410e68 = reinterpret_cast<void**>(1);
            if (!zf37) {
                g410a20 = eax36 + ecx35 * 60;
            }
            zf38 = g410f0a == 0;
            if (zf38 || (eax39 = g410f18, eax39 == 0)) {
                g410a24 = reinterpret_cast<void**>(0);
                g410a28 = reinterpret_cast<void**>(0);
            } else {
                g410a24 = reinterpret_cast<void**>(1);
                g410a28 = reinterpret_cast<void**>((reinterpret_cast<unsigned char>(eax39) - ecx35) * 60);
            }
            esi40 = WideCharToMultiByte;
            v41 = g410aac;
            v42 = g410d28;
            eax43 = reinterpret_cast<int32_t>(esi40(v42, 0x220, 0x410e74, -1));
            if (!eax43 || v41) {
                eax44 = g410aac;
                *reinterpret_cast<void***>(eax44) = reinterpret_cast<void**>(0);
            } else {
                eax45 = g410aac;
                *reinterpret_cast<unsigned char*>(eax45 + 63) = 0;
            }
            v46 = g410ab0;
            v47 = g410d28;
            eax48 = reinterpret_cast<int32_t>(esi40(v47, 0x220, 0x410ec8, -1));
            if (!eax48) 
                goto addr_409f20_12;
            if (v46) 
                goto addr_409f20_12;
            eax49 = g410ab0;
            *reinterpret_cast<unsigned char*>(eax49 + 63) = 0;
            goto addr_409f28_15;
        }
    }
    if (!*reinterpret_cast<void***>(eax31) || ((eax50 = g410f1c, !!eax50) && (eax51 = fun_409c20("TZ", eax31, eax50), ecx32 = eax50, eax51 == 0) || (v52 = g410f1c, fun_405a1e(ecx32, v52, v28, v26, v24, v22, v21, __return_address(), a2, a3, a4, a5, a6, a7, a8, a9, a10, a11), eax53 = fun_40a790(ecx32, eax31, v52, v28, v26, v24), eax54 = fun_40561b(ecx32, eax53 + 1, eax31, v52, v28, v26, v24, v22, v21, __return_address(), a2, a3, a4), g410f1c = eax54, eax54 == 0))) {
        addr_409f28_15:
        return;
    } else {
        fun_4086f0(ecx32, eax54, eax31, v28, v26, v24, v22, v21, __return_address(), a2);
        v55 = g410aac;
        fun_405f40(ecx32, v55, eax31, 3, eax54, eax31, v28, v26, v24);
        eax56 = g410aac;
        esi57 = eax31 + 3;
        *reinterpret_cast<void***>(eax56 + 3) = reinterpret_cast<void**>(0);
        if (reinterpret_cast<int1_t>(*reinterpret_cast<void***>(esi57) == 45)) {
            ++esi57;
            edi30 = reinterpret_cast<void**>(1);
        }
        eax58 = fun_40aa06(ecx32, esi57);
        ecx59 = reinterpret_cast<void**>(reinterpret_cast<uint32_t>(eax58) * 0xe10);
        g410a20 = ecx59;
        while (*reinterpret_cast<void***>(esi57) == 43 || reinterpret_cast<signed char>(*reinterpret_cast<void***>(esi57)) >= reinterpret_cast<signed char>(48) && reinterpret_cast<signed char>(*reinterpret_cast<void***>(esi57)) <= reinterpret_cast<signed char>(57)) {
            ++esi57;
        }
        if (reinterpret_cast<int1_t>(*reinterpret_cast<void***>(esi57) == 58)) 
            goto addr_409e9e_23;
    }
    addr_409eec_24:
    if (edi30) {
        ecx59 = reinterpret_cast<void**>(-reinterpret_cast<unsigned char>(ecx59));
        g410a20 = ecx59;
    }
    eax60 = reinterpret_cast<void**>(static_cast<int32_t>(reinterpret_cast<signed char>(*reinterpret_cast<void***>(esi57))));
    g410a24 = eax60;
    if (!eax60) {
        addr_409f20_12:
        eax61 = g410ab0;
        *reinterpret_cast<void***>(eax61) = reinterpret_cast<void**>(0);
        goto addr_409f28_15;
    } else {
        v62 = g410ab0;
        fun_405f40(ecx59, v62, esi57, 3, v28, v26, v24, v22, v21);
        eax63 = g410ab0;
        *reinterpret_cast<void***>(eax63 + 3) = reinterpret_cast<void**>(0);
        goto addr_409f28_15;
    }
    addr_409e9e_23:
    ++esi57;
    eax64 = fun_40aa06(ecx59, esi57);
    ecx65 = g410a20;
    ecx59 = ecx65 + reinterpret_cast<uint32_t>(eax64) * 60;
    g410a20 = ecx59;
    while (reinterpret_cast<signed char>(*reinterpret_cast<void***>(esi57)) >= reinterpret_cast<signed char>(48) && reinterpret_cast<signed char>(*reinterpret_cast<void***>(esi57)) <= reinterpret_cast<signed char>(57)) {
        ++esi57;
    }
    if (!reinterpret_cast<int1_t>(*reinterpret_cast<void***>(esi57) == 58)) 
        goto addr_409eec_24;
    ++esi57;
    eax66 = fun_40aa06(ecx59, esi57);
    ecx67 = g410a20;
    ecx59 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(ecx67) + reinterpret_cast<uint32_t>(eax66));
    g410a20 = ecx59;
    while (reinterpret_cast<signed char>(*reinterpret_cast<void***>(esi57)) >= reinterpret_cast<signed char>(48) && reinterpret_cast<signed char>(*reinterpret_cast<void***>(esi57)) <= reinterpret_cast<signed char>(57)) {
        ++esi57;
    }
    goto addr_409eec_24;
}

void* fun_40aa06(void** ecx, void** a2) {
    void** edi3;
    int1_t less_or_equal4;
    uint32_t eax5;
    void** eax6;
    void** eax7;
    void** esi8;
    void** edi9;
    void** ebp10;
    void* ebx11;
    int1_t less_or_equal12;
    void** eax13;
    void** eax14;
    void* eax15;

    edi3 = a2;
    while (1) {
        less_or_equal4 = reinterpret_cast<signed char>(g4108ec) <= reinterpret_cast<signed char>(1);
        if (less_or_equal4) {
            eax5 = reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(edi3));
            ecx = g4106e0;
            *reinterpret_cast<void***>(&eax5) = *reinterpret_cast<void***>(ecx + eax5 * 2);
            eax6 = reinterpret_cast<void**>(eax5 & 8);
        } else {
            eax7 = reinterpret_cast<void**>(static_cast<uint32_t>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(edi3))));
            eax6 = fun_408af1(ecx, eax7, 8);
            ecx = reinterpret_cast<void**>(8);
        }
        if (!eax6) 
            break;
        ++edi3;
    }
    esi8 = reinterpret_cast<void**>(static_cast<uint32_t>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(edi3))));
    edi9 = edi3 + 1;
    ebp10 = esi8;
    if (esi8 == 45 || reinterpret_cast<int1_t>(esi8 == 43)) {
        esi8 = reinterpret_cast<void**>(static_cast<uint32_t>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(edi9))));
        ++edi9;
    }
    ebx11 = reinterpret_cast<void*>(0);
    while (1) {
        less_or_equal12 = reinterpret_cast<signed char>(g4108ec) <= reinterpret_cast<signed char>(1);
        if (less_or_equal12) {
            eax13 = g4106e0;
            eax13 = *reinterpret_cast<void***>(eax13 + reinterpret_cast<unsigned char>(esi8) * 2);
            eax14 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(eax13) & 4);
        } else {
            eax14 = fun_408af1(ecx, esi8, 4);
            ecx = reinterpret_cast<void**>(4);
        }
        if (!eax14) 
            break;
        ebx11 = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(esi8 + (reinterpret_cast<uint32_t>(ebx11) + reinterpret_cast<uint32_t>(ebx11) * 4) * 2) + 0xffffffd0);
        esi8 = reinterpret_cast<void**>(static_cast<uint32_t>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(edi9))));
        ++edi9;
    }
    eax15 = ebx11;
    if (reinterpret_cast<int1_t>(ebp10 == 45)) {
        eax15 = reinterpret_cast<void*>(-reinterpret_cast<uint32_t>(eax15));
    }
    return eax15;
}

void fun_40a0da(int32_t a1, void** a2, void** a3, uint32_t a4, void** a5, void** a6, void** a7, uint32_t a8, void** a9, void* a10, void** a11, int32_t a12, void** a13, void** a14, uint32_t a15, void** a16, void** a17, void** a18, uint32_t a19, void** a20, void* a21, void** a22) {
    void** ebx23;
    void* ecx24;
    struct s39* ecx25;
    uint32_t v26;
    uint32_t esi27;
    void* eax28;
    void* ecx29;
    void** edx30;
    struct s39* esi31;
    void*** tmp32_32;
    void*** eax33;
    struct s39* ecx34;

    ebx23 = a3;
    if (!reinterpret_cast<int1_t>(a2 == 1)) {
        if (*reinterpret_cast<unsigned char*>(&ebx23) & 3) {
            ecx24 = *reinterpret_cast<void**>(a4 * 4 + 0x410b04);
        } else {
            ecx24 = *reinterpret_cast<void**>(a4 * 4 + 0x410ad0);
        }
        ecx25 = reinterpret_cast<struct s39*>(reinterpret_cast<int32_t>(ecx24) + reinterpret_cast<unsigned char>(a7));
    } else {
        v26 = reinterpret_cast<unsigned char>(ebx23) & 3;
        if (v26) {
            esi27 = a4 << 2;
            eax28 = *reinterpret_cast<void**>(esi27 + 0x410b04);
        } else {
            esi27 = a4 << 2;
            eax28 = *reinterpret_cast<void**>(esi27 + 0x410ad0);
        }
        ecx29 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(eax28) + 1);
        __asm__("cdq ");
        edx30 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(reinterpret_cast<unsigned char>(ebx23) * 0x16d + (reinterpret_cast<int32_t>(ecx29) + reinterpret_cast<uint32_t>(reinterpret_cast<signed char>(ebx23 + 0xffffffff) >> 2)) + 0xffff9c25) % 7);
        if (reinterpret_cast<signed char>(edx30) > reinterpret_cast<signed char>(a6)) {
            ecx25 = reinterpret_cast<struct s39*>(reinterpret_cast<int32_t>(ecx29) + (reinterpret_cast<unsigned char>(a5) * 7 - reinterpret_cast<unsigned char>(edx30) + reinterpret_cast<unsigned char>(a6)));
        } else {
            ecx25 = reinterpret_cast<struct s39*>(reinterpret_cast<int32_t>(ecx29) + (reinterpret_cast<unsigned char>(a5) * 7 - reinterpret_cast<unsigned char>(edx30) + reinterpret_cast<unsigned char>(a6)) + 0xfffffff9);
        }
        if (reinterpret_cast<int1_t>(a5 == 5)) {
            if (v26) {
                esi31 = *reinterpret_cast<struct s39**>(esi27 + 0x410b08);
            } else {
                esi31 = *reinterpret_cast<struct s39**>(esi27 + 0x410ad4);
            }
            if (reinterpret_cast<int32_t>(ecx25) > reinterpret_cast<int32_t>(esi31)) {
                ecx25 = reinterpret_cast<struct s39*>(reinterpret_cast<uint32_t>(ecx25) - 7);
            }
        }
    }
    if (a1 != 1) {
        g410acc = ecx25;
        tmp32_32 = reinterpret_cast<void***>(g410a28 + reinterpret_cast<uint32_t>(a9 + a8 * 60) * 60);
        eax33 = reinterpret_cast<void***>(a11 + (reinterpret_cast<uint32_t>(tmp32_32) + reinterpret_cast<uint32_t>(a10)) * 0x3e8);
        g410ad0 = eax33;
        if (reinterpret_cast<int32_t>(eax33) >= reinterpret_cast<int32_t>(0)) {
            if (reinterpret_cast<int32_t>(eax33) < reinterpret_cast<int32_t>(0x5265c00)) {
                addr_40a210_21:
                g410ac8 = ebx23;
            } else {
                ecx34 = reinterpret_cast<struct s39*>(reinterpret_cast<uint32_t>(ecx25) + 1);
                g410ad0 = eax33 - 0x5265c00;
                goto addr_40a20a_23;
            }
        } else {
            ecx34 = reinterpret_cast<struct s39*>(reinterpret_cast<uint32_t>(ecx25) - 1);
            g410ad0 = eax33 + 0x5265c00;
            goto addr_40a20a_23;
        }
    } else {
        g410abc = ecx25;
        g410ab8 = ebx23;
        g410ac0 = reinterpret_cast<void***>(a11 + (reinterpret_cast<uint32_t>(a9 + a8 * 60) * 60 + reinterpret_cast<uint32_t>(a10)) * 0x3e8);
    }
    return;
    addr_40a20a_23:
    g410acc = ecx34;
    goto addr_40a210_21;
}

void** fun_40a588(void** a1, void** a2, void* a3) {
    uint32_t eax4;
    uint32_t eax5;
    uint32_t eax6;

    eax4 = reinterpret_cast<uint32_t>(a1 - 0x3a4);
    if (!eax4) {
        return 0x411;
    } else {
        eax5 = eax4 - 4;
        if (!eax5) {
            return 0x804;
        } else {
            eax6 = eax5 - 13;
            if (!eax6) {
                return 0x412;
            } else {
                if (!(eax6 - 1)) {
                    return 0x404;
                } else {
                    return 0;
                }
            }
        }
    }
}

void** g410f50 = reinterpret_cast<void**>(0);

void** g410f6c = reinterpret_cast<void**>(0);

void** g411184;

void** g410f60 = reinterpret_cast<void**>(0);

void** g410f64 = reinterpret_cast<void**>(0);

void** g410f68 = reinterpret_cast<void**>(0);

void fun_40a5bb(void** ecx) {
    int32_t ecx2;
    signed char* edi3;

    ecx2 = 64;
    edi3 = reinterpret_cast<signed char*>(0x411080);
    while (ecx2) {
        --ecx2;
        *edi3 = reinterpret_cast<signed char>(0);
        edi3 = edi3 + 4;
    }
    *edi3 = 0;
    g410f50 = reinterpret_cast<void**>(0);
    g410f6c = reinterpret_cast<void**>(0);
    g411184 = reinterpret_cast<void**>(0);
    g410f60 = reinterpret_cast<void**>(0);
    g410f64 = reinterpret_cast<void**>(0);
    g410f68 = reinterpret_cast<void**>(0);
    return;
}

int32_t GetCPInfo = 0xd224;

void fun_40a5e4(void** ecx) {
    int32_t v2;
    int32_t ebp3;
    int32_t* ebp4;
    int32_t v5;
    int32_t esi6;
    void* v7;
    void** v8;
    int32_t eax9;
    uint32_t eax10;
    unsigned char cl11;
    void** eax12;
    void** esi13;
    unsigned char al14;
    unsigned char v15;
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
    void** v26;
    void** v27;
    void** eax28;
    int16_t dx29;
    int16_t v30;
    unsigned char dl31;
    unsigned char v32;
    void** eax33;
    signed char* edi34;
    void* ecx35;
    void* ebx36;
    uint32_t ecx37;

    v2 = ebp3;
    ebp4 = reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4);
    v5 = esi6;
    v7 = reinterpret_cast<void*>(ebp4 - 5);
    v8 = g410f50;
    eax9 = reinterpret_cast<int32_t>(GetCPInfo());
    if (eax9 != 1) {
        eax10 = 0;
        do {
            if (eax10 < 65 || eax10 > 90) {
                if (eax10 < 97 || eax10 > 0x7a) {
                    *reinterpret_cast<unsigned char*>(eax10 + 0x410f80) = 0;
                    continue;
                } else {
                    *reinterpret_cast<unsigned char*>(eax10 + 0x411081) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(eax10 + 0x411081) | 32);
                    cl11 = reinterpret_cast<unsigned char>(*reinterpret_cast<signed char*>(&eax10) - 32);
                }
            } else {
                *reinterpret_cast<unsigned char*>(eax10 + 0x411081) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(eax10 + 0x411081) | 16);
                cl11 = reinterpret_cast<unsigned char>(*reinterpret_cast<signed char*>(&eax10) + 32);
            }
            *reinterpret_cast<unsigned char*>(eax10 + 0x410f80) = cl11;
            ++eax10;
        } while (eax10 < 0x100);
    } else {
        eax12 = reinterpret_cast<void**>(0);
        esi13 = reinterpret_cast<void**>(0x100);
        do {
            *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(ebp4) + reinterpret_cast<unsigned char>(eax12) + 0xfffffeec) = *reinterpret_cast<signed char*>(&eax12);
            ++eax12;
        } while (reinterpret_cast<unsigned char>(eax12) < reinterpret_cast<unsigned char>(0x100));
        al14 = v15;
        if (!al14) 
            goto addr_40a65f_13; else 
            goto addr_40a628_14;
    }
    addr_40a766_15:
    return;
    addr_40a65f_13:
    v16 = g411184;
    v17 = g410f50;
    v18 = reinterpret_cast<void**>(ebp4 + 0xfffffebb);
    v19 = reinterpret_cast<void**>(ebp4 + 0xffffffbb);
    fun_40a21a(ecx, 1, v19, esi13, v18, v17, v16, 0, *reinterpret_cast<int16_t*>(&v8), v7, v5);
    v20 = g410f50;
    v21 = reinterpret_cast<void**>(ebp4 + 0xffffff7b);
    v22 = reinterpret_cast<void**>(ebp4 + 0xffffffbb);
    v23 = g411184;
    fun_4088a2(ecx, v23, esi13, v22, esi13, v21, esi13, v20, 0, 1, v19, esi13, v18, ecx, v23, esi13, v22, esi13, v21, esi13, v20, 0, 1, v19, esi13, v18);
    v24 = g410f50;
    v25 = reinterpret_cast<void**>(ebp4 + 0xffffff3b);
    v26 = reinterpret_cast<void**>(ebp4 + 0xffffffbb);
    v27 = g411184;
    fun_4088a2(ecx, v27, 0x200, v26, esi13, v25, esi13, v24, 0, v23, esi13, v22, esi13, ecx, v27, 0x200, v26, esi13, v25, esi13, v24, 0, v23, esi13, v22, esi13);
    eax28 = reinterpret_cast<void**>(0);
    do {
        dx29 = v30;
        if (!(*reinterpret_cast<unsigned char*>(&dx29) & 1)) {
            if (!(*reinterpret_cast<unsigned char*>(&dx29) & 2)) {
                *reinterpret_cast<unsigned char*>(eax28 + 0x410f80) = 0;
                continue;
            } else {
                *reinterpret_cast<unsigned char*>(eax28 + 0x411081) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(eax28 + 0x411081) | 32);
                dl31 = *reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(ebp4) + reinterpret_cast<unsigned char>(eax28) + 0xfffffcec);
            }
        } else {
            *reinterpret_cast<unsigned char*>(eax28 + 0x411081) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(eax28 + 0x411081) | 16);
            dl31 = *reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(ebp4) + reinterpret_cast<unsigned char>(eax28) + 0xfffffdec);
        }
        *reinterpret_cast<unsigned char*>(eax28 + 0x410f80) = dl31;
        ++eax28;
    } while (reinterpret_cast<unsigned char>(eax28) < reinterpret_cast<unsigned char>(esi13));
    goto addr_40a766_15;
    addr_40a628_14:
    do {
        ecx = reinterpret_cast<void**>(static_cast<uint32_t>(v32));
        eax33 = reinterpret_cast<void**>(static_cast<uint32_t>(al14));
        if (reinterpret_cast<unsigned char>(eax33) <= reinterpret_cast<unsigned char>(ecx)) {
            edi34 = reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(ebp4) + reinterpret_cast<unsigned char>(eax33) + 0xfffffeec);
            ecx35 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(ecx) - reinterpret_cast<unsigned char>(eax33) + 1);
            ebx36 = ecx35;
            ecx37 = reinterpret_cast<uint32_t>(ecx35) >> 2;
            while (ecx37) {
                --ecx37;
                *edi34 = reinterpret_cast<signed char>(0x20202020);
                edi34 = edi34 + 4;
                esi13 = esi13 + 4;
            }
            ecx = reinterpret_cast<void**>(reinterpret_cast<uint32_t>(ebx36) & 3);
            while (ecx) {
                --ecx;
                *edi34 = 32;
                ++edi34;
                ++esi13;
            }
        }
        al14 = *reinterpret_cast<unsigned char*>(&v2);
    } while (al14);
    goto addr_40a65f_13;
}

void** fun_40a53e(void** a1);

struct s42 {
    unsigned char f0;
    unsigned char f1;
};

struct s43 {
    void** f0;
    signed char[3] pad4;
    void** f4;
};

struct s44 {
    void** f0;
    signed char[3] pad4;
    void** f4;
};

void** g410f28 = reinterpret_cast<void**>(0);

uint32_t fun_40a3a5(void** a1) {
    void* ebp2;
    void* v3;
    void* esi4;
    void** v5;
    void** edi6;
    void** eax7;
    void** esi8;
    void** ecx9;
    int1_t zf10;
    void** v11;
    uint32_t eax12;
    int32_t edx13;
    void*** eax14;
    int32_t ecx15;
    signed char* edi16;
    void** v17;
    int32_t esi18;
    struct s42* ebx19;
    struct s42* ecx20;
    uint32_t eax21;
    uint32_t edi22;
    unsigned char dl23;
    void** eax24;
    struct s43* esi25;
    struct s44* esi26;
    void* v27;
    void** v28;
    uint32_t eax29;
    int1_t zf30;
    signed char* edi31;
    int1_t below_or_equal32;
    uint32_t v33;
    void** esi34;
    signed char v35;
    unsigned char v36;
    uint32_t eax37;
    unsigned char v38;
    uint32_t edx39;
    signed char v40;
    uint32_t eax41;
    void** eax42;

    ebp2 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4);
    v3 = esi4;
    v5 = edi6;
    eax7 = fun_40a53e(a1);
    esi8 = eax7;
    ecx9 = a1;
    zf10 = esi8 == g410f50;
    v11 = esi8;
    if (zf10) {
        addr_40a532_2:
        eax12 = 0;
    } else {
        if (!esi8) 
            goto addr_40a528_4;
        edx13 = 0;
        eax14 = reinterpret_cast<void***>(0x410b48);
        do {
            if (*eax14 == esi8) 
                goto addr_40a44f_7;
            eax14 = eax14 + 48;
            ++edx13;
        } while (reinterpret_cast<int32_t>(eax14) < 0x410c38);
        goto addr_40a3e8_9;
    }
    addr_40a539_10:
    return eax12;
    addr_40a44f_7:
    ecx15 = 64;
    edi16 = reinterpret_cast<signed char*>(0x411080);
    while (ecx15) {
        --ecx15;
        *edi16 = reinterpret_cast<signed char>(0);
        edi16 = edi16 + 4;
    }
    v17 = reinterpret_cast<void**>(0);
    *edi16 = 0;
    esi18 = (edx13 + edx13 * 2 << 4) + 1;
    ebx19 = reinterpret_cast<struct s42*>(esi18 + 0x410b58);
    do {
        ecx20 = ebx19;
        if (ebx19->f0) {
            do {
                if (!ecx20->f1) 
                    break;
                eax21 = ecx20->f0;
                edi22 = ecx20->f1;
                if (eax21 <= edi22) {
                    dl23 = *reinterpret_cast<unsigned char*>(v17 + 0x410b40);
                    do {
                        *reinterpret_cast<unsigned char*>(eax21 + 0x411081) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(eax21 + 0x411081) | dl23);
                        ++eax21;
                    } while (eax21 <= edi22);
                }
                ecx20 = reinterpret_cast<struct s42*>(&ecx20->f1 + 1);
            } while (ecx20->f0);
        }
        ++v17;
        ebx19 = ebx19 + 4;
    } while (reinterpret_cast<unsigned char>(v17) < reinterpret_cast<unsigned char>(4));
    g410f6c = reinterpret_cast<void**>(1);
    g410f50 = v11;
    eax24 = fun_40a588(v11, v5, v3);
    esi25 = reinterpret_cast<struct s43*>(esi18 + 0x410b4c);
    g410f60 = esi25->f0;
    esi26 = reinterpret_cast<struct s44*>(&esi25->f4);
    g410f64 = esi26->f0;
    ecx9 = v11;
    g411184 = eax24;
    g410f68 = esi26->f4;
    addr_40a52d_34:
    fun_40a5e4(ecx9);
    goto addr_40a532_2;
    addr_40a3e8_9:
    v27 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(ebp2) - 24);
    v28 = esi8;
    eax29 = reinterpret_cast<uint32_t>(GetCPInfo(ecx9, v28, v27));
    if (eax29 != 1) {
        zf30 = g410f28 == 0;
        if (zf30) {
            eax12 = 0xffffffff;
            goto addr_40a539_10;
        } else {
            addr_40a528_4:
            fun_40a5bb(ecx9);
            goto addr_40a52d_34;
        }
    } else {
        ecx9 = reinterpret_cast<void**>(64);
        edi31 = reinterpret_cast<signed char*>(0x411080);
        below_or_equal32 = v33 <= 1;
        g410f50 = esi8;
        while (ecx9) {
            --ecx9;
            *edi31 = reinterpret_cast<signed char>(0);
            edi31 = edi31 + 4;
            esi8 = esi8 + 4;
        }
        *edi31 = 0;
        esi34 = esi8 + 1;
        g411184 = reinterpret_cast<void**>(0);
        if (!below_or_equal32) 
            goto addr_40a41f_44;
    }
    g410f6c = reinterpret_cast<void**>(0);
    addr_40a514_46:
    g410f60 = reinterpret_cast<void**>(0);
    g410f64 = reinterpret_cast<void**>(0);
    g410f68 = reinterpret_cast<void**>(0);
    goto addr_40a52d_34;
    addr_40a41f_44:
    if (v35) {
        do {
            if (!v36) 
                break;
            eax37 = v38;
            edx39 = v36;
            while (eax37 <= edx39) {
                *reinterpret_cast<unsigned char*>(eax37 + 0x411081) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(eax37 + 0x411081) | 4);
                ++eax37;
            }
        } while (v40);
    }
    eax41 = 1;
    do {
        *reinterpret_cast<unsigned char*>(eax41 + 0x411081) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(eax41 + 0x411081) | 8);
        ++eax41;
    } while (eax41 < 0xff);
    eax42 = fun_40a588(esi34, v28, v27);
    ecx9 = esi34;
    g411184 = eax42;
    g410f6c = reinterpret_cast<void**>(1);
    goto addr_40a514_46;
}

void** fun_4053b9(void** ecx, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7, void** a8, void** a9, void** a10) {
    void** eax11;

    eax11 = fun_4053ca(__return_address(), 1, 0);
    return eax11;
}

void** g410ce8 = reinterpret_cast<void**>(0);

void** fun_40ab83(void** ecx);

void** fun_40ab44(void** ecx, void** a2, void** a3, void** a4);

void** fun_40aa91(void** ecx, void** a2) {
    void** v3;
    int1_t zf4;
    void** v5;
    void** ebx6;
    void** v7;
    void** esi8;
    void** esi9;
    void** v10;
    void** edi11;
    int1_t zf12;
    void** eax13;
    void** ebx14;
    void** eax15;
    void** eax16;
    void** ecx17;
    void** edi18;
    void** v19;
    void** eax20;
    void** eax21;
    void** eax22;

    v3 = reinterpret_cast<void**>(__return_address());
    zf4 = g4112cc == 0;
    v5 = ebx6;
    v7 = esi8;
    esi9 = g410ce0;
    v10 = edi11;
    if (zf4 || (!esi9 && ((zf12 = g410ce8 == esi9, zf12) || ((eax13 = fun_40ab83(ecx), !!eax13) || (esi9 = g410ce0, esi9 == 0))) || (ebx14 = a2, ebx14 == 0))) {
        addr_40ab08_2:
        eax15 = reinterpret_cast<void**>(0);
    } else {
        eax16 = fun_40a790(ecx, ebx14, v10, v7, v5, v3);
        ecx17 = ebx14;
        edi18 = eax16;
        while (*reinterpret_cast<void***>(esi9)) {
            v19 = *reinterpret_cast<void***>(esi9);
            eax20 = fun_40a790(ecx17, v19, v10, v7, v5, v3);
            ecx17 = v19;
            if (reinterpret_cast<unsigned char>(eax20) <= reinterpret_cast<unsigned char>(edi18)) 
                goto addr_40aafb_6;
            eax21 = *reinterpret_cast<void***>(esi9);
            if (*reinterpret_cast<signed char*>(reinterpret_cast<unsigned char>(eax21) + reinterpret_cast<unsigned char>(edi18)) != 61) 
                goto addr_40aafb_6;
            eax22 = fun_40ab44(ecx17, eax21, ebx14, edi18);
            if (!eax22) 
                goto addr_40ab00_9;
            addr_40aafb_6:
            esi9 = esi9 + 4;
        }
        goto addr_40ab08_2;
    }
    addr_40ab0a_10:
    return eax15;
    addr_40ab00_9:
    eax15 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(esi9)) + reinterpret_cast<unsigned char>(edi18) + 1);
    goto addr_40ab0a_10;
}

uint32_t fun_40ae6e(void** ecx, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7, void** a8, void** a9, void** a10, int32_t a11, void** a12, void** a13, void** a14, void** a15, void** a16, void** a17, void** a18, void** a19);

void** fun_40ab83(void** ecx) {
    void** v2;
    void** ebp3;
    void** v4;
    void** esi5;
    void** esi6;
    void** v7;
    void** edi8;
    void** eax9;
    void** eax10;
    int32_t ebx11;
    void** eax12;
    void** ebp13;
    void** v14;
    void** v15;
    void** v16;

    v2 = ebp3;
    v4 = esi5;
    esi6 = g410ce8;
    v7 = edi8;
    eax9 = *reinterpret_cast<void***>(esi6);
    if (!eax9) {
        addr_40abe4_2:
        eax10 = reinterpret_cast<void**>(0);
    } else {
        ebx11 = WideCharToMultiByte;
        do {
            eax12 = reinterpret_cast<void**>(ebx11(ecx, 1, 0, eax9, 0xff, 0, 0, 0, 0));
            ebp13 = eax12;
            if (!ebp13) 
                goto addr_40abec_5;
            eax12 = fun_40561b(ecx, ebp13, 1, 0, eax9, 0xff, 0, 0, 0, 0, v7, v4, v2);
            v14 = eax12;
            if (!eax12) 
                goto addr_40abec_5;
            v15 = eax12;
            v16 = *reinterpret_cast<void***>(esi6);
            eax12 = reinterpret_cast<void**>(ebx11(ebp13, 1, 0, v16));
            if (!eax12) 
                goto addr_40abec_5;
            fun_40ae6e(ebp13, 0xff, 0, 1, 0, v16, 0xff, v15, ebp13, 0, 0, 1, 0, eax9, 0xff, v14, 0, 0, 0);
            eax9 = *reinterpret_cast<void***>(esi6 + 4);
            esi6 = esi6 + 4;
            ecx = reinterpret_cast<void**>(0);
        } while (eax9);
        goto addr_40abe4_2;
    }
    addr_40abe6_9:
    return eax10;
    addr_40abec_5:
    eax10 = reinterpret_cast<void**>(0xffffffff);
    goto addr_40abe6_9;
}

void** fun_40abf1(void** ecx, void** a2, int32_t a3, void** a4, void** a5, void** a6, void** a7, void** a8);

void** fun_40ab44(void** ecx, void** a2, void** a3, void** a4) {
    void** v5;
    void** v6;
    void** eax7;

    if (a4) {
        v5 = g410f50;
        v6 = g411184;
        eax7 = fun_40abf1(ecx, v6, 1, a2, a4, a3, a4, v5);
        if (eax7) {
            return eax7 + 0xfffffffe;
        } else {
            return 0x7fffffff;
        }
    } else {
        return 0;
    }
}

void** fun_40b0b4(void** ecx, void** a2, void** a3);

void** g410ce4 = reinterpret_cast<void**>(0);

void** fun_40b04d(void** ecx, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7);

uint32_t fun_40aff5(void** ecx);

struct s45 {
    void** f0;
    signed char[3] pad4;
    void** f4;
};

int32_t SetEnvironmentVariableA = 0xd26a;

uint32_t fun_40ae6e(void** ecx, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7, void** a8, void** a9, void** a10, int32_t a11, void** a12, void** a13, void** a14, void** a15, void** a16, void** a17, void** a18, void** a19) {
    void** v20;
    void** v21;
    void** ebp22;
    void** v23;
    void** ebx24;
    void** v25;
    void** esi26;
    void** v27;
    void** edi28;
    void** eax29;
    void** esi30;
    void** ecx31;
    void** v32;
    void** eax33;
    void** ebx34;
    int1_t zf35;
    void** v36;
    void** edi37;
    void** v38;
    uint32_t eax39;
    uint32_t esi40;
    void** ecx41;
    uint32_t eax42;
    void** v43;
    struct s45* edi44;
    void** ecx45;
    void** v46;
    void** eax47;
    void** eax48;
    unsigned char* eax49;
    uint32_t ebx50;
    void** v51;
    int1_t zf52;
    int1_t zf53;

    v20 = reinterpret_cast<void**>(__return_address());
    v21 = ebp22;
    v23 = ebx24;
    v25 = esi26;
    v27 = edi28;
    if (!a2) 
        goto addr_40aed2_2;
    eax29 = fun_40b0b4(ecx, a2, 61);
    esi30 = eax29;
    ecx31 = reinterpret_cast<void**>(61);
    v32 = esi30;
    if (!esi30) 
        goto addr_40aed2_2;
    if (a2 == esi30) 
        goto addr_40aed2_2;
    eax33 = g410ce0;
    ebx34 = reinterpret_cast<void**>(0);
    ebx34 = reinterpret_cast<void**>(static_cast<unsigned char>(reinterpret_cast<uint1_t>(*reinterpret_cast<void***>(esi30 + 1) == 0)));
    zf35 = eax33 == g410ce4;
    if (zf35) {
        v36 = eax33;
        eax33 = fun_40b04d(61, v36, v27, v25, v23, v32, ecx);
        ecx31 = v36;
        g410ce0 = eax33;
    }
    if (!eax33) 
        goto addr_40aebc_8;
    addr_40af10_9:
    edi37 = g410ce0;
    v38 = edi37;
    eax39 = fun_40aff5(ecx31);
    esi40 = eax39;
    ecx41 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(esi30) - reinterpret_cast<unsigned char>(a2));
    if (reinterpret_cast<int32_t>(esi40) < reinterpret_cast<int32_t>(0) || !*reinterpret_cast<void***>(edi37)) {
        if (ebx34) {
            addr_40afee_11:
            eax42 = 0;
        } else {
            if (reinterpret_cast<int32_t>(esi40) < reinterpret_cast<int32_t>(0)) {
                esi40 = -esi40;
            }
            eax29 = fun_40577e(ecx41, edi37, esi40 * 4 + 8, v27, v25, v23, v32, v38, v21, v20, a2);
            if (!eax29) 
                goto addr_40aed2_2; else 
                goto addr_40af92_15;
        }
    } else {
        if (!ebx34) {
            *reinterpret_cast<void***>(edi37 + esi40 * 4) = a2;
            goto addr_40afa2_18;
        } else {
            v43 = *reinterpret_cast<void***>(edi37 + esi40 * 4);
            edi44 = reinterpret_cast<struct s45*>(edi37 + esi40 * 4);
            fun_405a1e(ecx41, v43, v27, v25, v23, v32, v38, v21, v20, a2, a3, a4, a5, a6, a7, a8, a9, a10);
            ecx45 = v43;
            while (edi44->f0) {
                ++esi40;
                edi44->f0 = edi44->f4;
                edi44 = reinterpret_cast<struct s45*>(&edi44->f4);
            }
            v46 = reinterpret_cast<void**>(esi40 << 2);
            eax29 = fun_40577e(ecx45, v38, v46, v27, v25, v23, v32, v38, v21, v20, a2);
            ecx41 = v46;
            if (!eax29) 
                goto addr_40afa2_18; else 
                goto addr_40af66_23;
        }
    }
    addr_40aed5_24:
    return eax42;
    addr_40af92_15:
    ecx41 = a2;
    *reinterpret_cast<void***>(eax29 + esi40 * 4) = ecx41;
    *reinterpret_cast<uint32_t*>(reinterpret_cast<uint32_t>(eax29 + esi40 * 4) + 4) = 0;
    addr_40af9d_25:
    g410ce0 = eax29;
    addr_40afa2_18:
    if (a3 && (eax47 = fun_40a790(ecx41, a2, v27, v25, v23, v32), eax48 = fun_40561b(ecx41, eax47 + 1 + 1, a2, v27, v25, v23, v32, v38, v21, v20, a2, a3, a4), !!eax48)) {
        fun_4086f0(a2, eax48, a2, v27, v25, v23, v32, v38, v21, v20);
        eax49 = reinterpret_cast<unsigned char*>(reinterpret_cast<unsigned char>(eax48) - reinterpret_cast<unsigned char>(a2) + reinterpret_cast<unsigned char>(v32));
        *eax49 = 0;
        ebx50 = -reinterpret_cast<unsigned char>(ebx34);
        v51 = reinterpret_cast<void**>(~(ebx50 - (ebx50 + reinterpret_cast<uint1_t>(ebx50 < ebx50 + reinterpret_cast<uint1_t>(!!ebx34)))) & reinterpret_cast<uint32_t>(eax49 + 1));
        SetEnvironmentVariableA(a2, eax48, v51);
        fun_405a1e(a2, eax48, eax48, v51, v27, v25, v23, v32, v38, v21, v20, a2, a3, a4, a5, a6, a7, a8);
        goto addr_40afee_11;
    }
    addr_40af66_23:
    goto addr_40af9d_25;
    addr_40aebc_8:
    if (!a3 || (zf52 = g410ce8 == 0, zf52)) {
        if (ebx34) 
            goto addr_40afee_11;
        eax29 = fun_40561b(ecx31, 4, v27, v25, v23, v32, ecx, v21, v20, a2, a3, a4, a5);
        ecx31 = reinterpret_cast<void**>(4);
        g410ce0 = eax29;
        if (!eax29) 
            goto addr_40aed2_2;
        *reinterpret_cast<void***>(eax29) = reinterpret_cast<void**>(0);
        zf53 = g410ce8 == 0;
        if (!zf53) 
            goto addr_40af10_9;
    } else {
        eax29 = fun_40ab83(ecx31);
        if (!eax29) 
            goto addr_40af10_9; else 
            goto addr_40aed2_2;
    }
    eax29 = fun_40561b(4, 4, v27, v25, v23, v32, ecx, v21, v20, a2, a3, a4, a5);
    ecx31 = reinterpret_cast<void**>(4);
    g410ce8 = eax29;
    if (!eax29) {
        addr_40aed2_2:
        eax42 = 0xffffffff;
        goto addr_40aed5_24;
    } else {
        *reinterpret_cast<void***>(eax29) = reinterpret_cast<void**>(0);
        goto addr_40af10_9;
    }
}

void** fun_40b0b4(void** ecx, void** a2, void** a3) {
    int1_t zf4;
    void** v5;
    void** ebp6;
    void** eax7;
    void** ecx8;
    uint16_t ax9;
    uint32_t eax10;
    uint32_t eax11;

    zf4 = g410f6c == 0;
    if (zf4) {
        v5 = a3;
        eax7 = fun_4054e0(ecx, a2, *reinterpret_cast<signed char*>(&v5), ebp6, __return_address(), a2);
        return eax7;
    }
    ecx8 = a2;
    while (ax9 = reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(ecx8)), !!ax9) {
        if (!(*reinterpret_cast<unsigned char*>(*reinterpret_cast<unsigned char*>(&ax9) + 0x411081) & 4)) {
            if (a3 == static_cast<uint32_t>(ax9)) 
                break;
        } else {
            ++ecx8;
            if (!*reinterpret_cast<void***>(ecx8 + 1)) 
                goto addr_40b10c_8;
            if (a3 == (static_cast<uint32_t>(ax9) << 8 | static_cast<uint32_t>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(ecx8 + 1))))) 
                goto addr_40b110_10;
        }
        ++ecx8;
    }
    eax10 = reinterpret_cast<unsigned char>(a3) - ax9;
    eax11 = -eax10;
    return ~(eax11 - (eax11 + reinterpret_cast<uint1_t>(eax11 < eax11 + reinterpret_cast<uint1_t>(!!eax10)))) & reinterpret_cast<unsigned char>(ecx8);
    addr_40b10c_8:
    return 0;
    addr_40b110_10:
    return ecx8 + 0xffffffff;
}

void** fun_40b127(void** ecx, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7, void** a8, void** a9);

void** fun_40b04d(void** ecx, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7) {
    void** v8;
    void** v9;
    void** edi10;
    void** edi11;
    void** ecx12;
    struct s11* eax13;
    void** v14;
    void** ebx15;
    void** v16;
    void** ebp17;
    void** v18;
    void** esi19;
    void** v20;
    void** eax21;
    void** esi22;
    void** ecx23;
    void** ebp24;
    void** eax25;
    void** ebx26;
    void** v27;
    void** eax28;

    v8 = reinterpret_cast<void**>(__return_address());
    v9 = edi10;
    edi11 = a2;
    ecx12 = reinterpret_cast<void**>(0);
    if (edi11) {
        eax13 = reinterpret_cast<struct s11*>(edi11 + 4);
        if (*reinterpret_cast<void***>(edi11)) {
            do {
                ++ecx12;
                eax13 = reinterpret_cast<struct s11*>(reinterpret_cast<uint32_t>(eax13) + 4);
            } while (eax13->f0);
        }
        v14 = ebx15;
        v16 = ebp17;
        v18 = esi19;
        v20 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(ecx12) * 4 + 4);
        eax21 = fun_40561b(ecx12, v20, v18, v16, v14, v9, v8, a2, a3, a4, a5, a6, a7);
        esi22 = eax21;
        ecx23 = v20;
        ebp24 = esi22;
        if (!esi22) {
            fun_406412(ecx23, 9, v18, v16, v14, v9, v8, a2);
            ecx23 = reinterpret_cast<void**>(9);
        }
        eax25 = *reinterpret_cast<void***>(edi11);
        ebx26 = edi11;
        while (eax25) {
            v27 = eax25;
            ebx26 = ebx26 + 4;
            eax28 = fun_40b127(ecx23, v27, v18, v16, v14, v9, v8, a2, a3);
            *reinterpret_cast<void***>(esi22) = eax28;
            eax25 = *reinterpret_cast<void***>(ebx26);
            ecx23 = v27;
            esi22 = esi22 + 4;
        }
        *reinterpret_cast<void***>(esi22) = reinterpret_cast<void**>(0);
        return ebp24;
    } else {
        return 0;
    }
}

void** fun_40b127(void** ecx, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7, void** a8, void** a9) {
    void** esi10;
    void** eax11;
    void** eax12;
    void** eax13;

    if (!a2 || (eax11 = fun_40a790(ecx, a2, esi10, __return_address(), a2, a3), eax12 = fun_40561b(ecx, eax11 + 1, a2, esi10, __return_address(), a2, a3, a4, a5, a6, a7, a8, a9), eax12 == 0)) {
        return 0;
    } else {
        eax13 = fun_4086f0(a2, eax12, a2, esi10, __return_address(), a2, a3, a4, a5, a6);
        return eax13;
    }
}

void** fun_40562d(uint32_t a1, void** a2) {
    void** v3;
    void** eax4;
    void** ecx5;
    int32_t eax6;

    v3 = reinterpret_cast<void**>(__return_address());
    if (a1 > 0xffffffe0) {
        addr_405656_2:
        eax4 = reinterpret_cast<void**>(0);
    } else {
        do {
            eax4 = fun_405659(ecx5, v3);
            if (eax4) 
                break;
            if (a2 == eax4) 
                break;
            eax6 = fun_407a44(v3);
            ecx5 = v3;
        } while (eax6);
        goto addr_405656_2;
    }
    return eax4;
}

void** fun_401ae0(void** a1, void** a2, int32_t a3) {
    void** v4;
    void** ebx5;
    void** ebx6;
    void** v7;
    void** esi8;
    void** v9;
    void** v10;
    void** eax11;
    void** esi12;
    void** v13;
    void** ebp14;
    void*** esp15;
    void** v16;
    void** edi17;
    uint32_t eax18;
    uint32_t v19;
    uint32_t edx20;
    void* esp21;
    uint32_t edi22;
    uint32_t ebp23;
    void** eax24;
    int32_t v25;
    void** v26;
    uint32_t v27;
    void** v28;
    void* esp29;
    int32_t eax30;
    int32_t v31;
    uint32_t ecx32;
    uint32_t v33;
    void** v34;
    void** eax35;
    uint32_t ebx36;
    uint32_t eax37;
    uint32_t v38;
    uint32_t eax39;
    uint32_t v40;
    uint32_t ebx41;
    uint32_t v42;
    void** v43;
    uint32_t eax44;
    uint32_t v45;
    uint32_t edx46;
    void** v47;
    uint32_t eax48;
    uint32_t v49;
    uint32_t edx50;
    uint32_t eax51;
    void** eax52;

    v4 = ebx5;
    ebx6 = a2;
    v7 = esi8;
    *reinterpret_cast<void***>(ebx6) = reinterpret_cast<void**>(0);
    eax11 = fun_401530(a1, 0, v7, v4, v9, v10);
    esi12 = eax11;
    if (esi12 == 0xffffffff) {
        addr_401cf5_2:
        return eax11;
    } else {
        v13 = ebp14;
        esp15 = reinterpret_cast<void***>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 68 - 4 - 4 - 4 - 4 - 4 + 4 + 8 - 4 - 4);
        v16 = edi17;
        fun_4015b0(esi12, esp15 + 56, 12, v16, v13, v7);
        eax18 = v19;
        edx20 = 0;
        *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(&edx20) + 1) = *reinterpret_cast<signed char*>(&eax18);
        esp21 = reinterpret_cast<void*>(esp15 - 4 - 4 - 4 - 4 + 4 + 12);
        edi22 = (eax18 & 0xffff) >> 8 | edx20 & 0xffff;
        ebp23 = 0;
        if (!edi22) {
            addr_401cea_4:
            eax11 = fun_4016a0(esi12);
            goto addr_401cf5_2;
        } else {
            do {
                if (ebp23 >= 40) 
                    goto addr_401cea_4;
                eax24 = fun_4015b0(esi12, reinterpret_cast<int32_t>(esp21) + 40, 16, v16, v13, v7);
                esp21 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp21) - 4 - 4 - 4 - 4 + 4 + 12);
                if (eax24) 
                    goto addr_401cea_4;
                if (v25 == 0x656d616e) 
                    break;
                ++ebp23;
            } while (ebp23 < edi22);
            goto addr_401b6e_9;
        }
    }
    v26 = reinterpret_cast<void**>((v27 & 0xff0000 | v27 >> 16) >> 8 | (v27 & 0xff00 | v27 << 16) << 8);
    fun_401610(esi12, v26, v16, v13, v7, v4, v28);
    esp29 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp21) - 4 - 4 - 4 + 4);
    fun_4015b0(esi12, reinterpret_cast<int32_t>(esp29) + 24, 6, esi12, v26, v16);
    eax30 = v31;
    ecx32 = 0;
    *reinterpret_cast<signed char*>(&ecx32) = *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(&eax30) + 1);
    esp21 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp29) - 4 - 4 - 4 - 4 + 4 + 20);
    *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(&ecx32) + 1) = *reinterpret_cast<signed char*>(&eax30);
    if (!0) {
        v33 = ecx32 & 0xffff;
        do {
            v34 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(esp21) + 24);
            fun_4015b0(esi12, v34, 12, v16, v13, v7);
            eax35 = fun_4015f0(esi12, esi12, v34, 12);
            esp21 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp21) - 4 - 4 - 4 - 4 + 4 - 4 - 4 + 4 + 16);
            if (!1 && !1) {
                ebx36 = 0;
                eax37 = v38;
                *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(&ebx36) + 1) = *reinterpret_cast<signed char*>(&eax37);
                eax39 = v40;
                ebx41 = 0;
                *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(&ebx41) + 1) = *reinterpret_cast<signed char*>(&eax39);
                fun_401610(esi12, ((v42 & 0xff0000 | v42 >> 16) >> 8 | (v42 & 0xff00 | v42 << 16) << 8) + ((eax37 & 0xffff) >> 8 | ebx36 & 0xffff) + ((eax39 & 0xffff) >> 8 | ebx41 & 0xffff), v16, v13, v7, v4, v43);
                eax44 = v45;
                ebx6 = ebx6;
                edx46 = 0;
                *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(&edx46) + 1) = *reinterpret_cast<signed char*>(&eax44);
                v47 = reinterpret_cast<void**>((eax44 & 0xffff) >> 8 | edx46 & 0xffff);
                fun_4015b0(esi12, ebx6, v47, esi12, ((v42 & 0xff0000 | v42 >> 16) >> 8 | (v42 & 0xff00 | v42 << 16) << 8) + ((eax37 & 0xffff) >> 8 | ebx36 & 0xffff) + ((eax39 & 0xffff) >> 8 | ebx41 & 0xffff), v16);
                eax48 = v49;
                edx50 = 0;
                *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(&edx50) + 1) = *reinterpret_cast<signed char*>(&eax48);
                *reinterpret_cast<signed char*>(((eax48 & 0xffff) >> 8 | edx50 & 0xffff) + reinterpret_cast<unsigned char>(ebx6)) = 0;
                fun_401610(esi12, eax35, esi12, ebx6, v47, esi12, ((v42 & 0xff0000 | v42 >> 16) >> 8 | (v42 & 0xff00 | v42 << 16) << 8) + ((eax37 & 0xffff) >> 8 | ebx36 & 0xffff) + ((eax39 & 0xffff) >> 8 | ebx41 & 0xffff));
                esp21 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp21) - 4 - 4 - 4 + 4 - 4 - 4 - 4 - 4 + 4 - 4 - 4 - 4 + 4 + 28);
            }
            eax51 = v33 - 1;
            v33 = eax51;
        } while (eax51);
        goto addr_401cea_4;
    }
    addr_401b6e_9:
    eax52 = fun_4016a0(esi12);
    return eax52;
}

int32_t fun_401580(void** a1) {
    int32_t eax2;

    eax2 = reinterpret_cast<int32_t>(CreateFileA());
    if (eax2 == -1) {
        GetLastError();
    }
    goto a1;
}

int32_t fun_403f40(void** a1, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7, void** a8, void** a9, void** a10) {
    void** v11;
    void** v12;
    void** ebx13;
    void** v14;
    void** ebp15;
    void** ebp16;
    void** v17;
    void** esi18;
    void** esi19;
    void** v20;
    void** edi21;
    void** ebx22;
    void** v23;
    void** ecx24;
    void** edi25;
    uint32_t ecx26;
    void** v27;
    void** eax28;
    int32_t eax29;

    v11 = reinterpret_cast<void**>(__return_address());
    v12 = ebx13;
    v14 = ebp15;
    ebp16 = a2;
    v17 = esi18;
    esi19 = a1;
    v20 = edi21;
    ebx22 = reinterpret_cast<void**>(1);
    do {
        GetTempPathA();
        v23 = esi19;
        fun_401800(ecx24, v23, 0x104, esi19, v20, v17, v14, v12, v11, a1, a2, a3, a4, a5);
        edi25 = esi19;
        ecx26 = 0xffffffff;
        v27 = ebx22;
        do {
            if (!ecx26) 
                break;
            --ecx26;
            ++edi25;
            ++esi19;
        } while (*reinterpret_cast<void***>(edi25));
        ecx24 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(~ecx26) - 1 + reinterpret_cast<unsigned char>(esi19));
        wsprintfA(ecx24, ebp16, v27, v23);
        eax28 = fun_401530(esi19, 0, ecx24, ebp16, v27, v23);
        if (eax28 == 0xffffffff) {
            eax29 = fun_401580(esi19);
            if (eax29 != -1) 
                break;
        } else {
            fun_4016a0(eax28);
        }
        ++ebx22;
    } while (reinterpret_cast<signed char>(ebx22) < reinterpret_cast<signed char>(0x3e7));
    goto v14;
}

int32_t OleInitialize = 0xced4;

void fun_401fe0(void** a1, void** a2);

int32_t fun_404700(void** ecx, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7, void** a8) {
    void** ecx9;
    void** edx10;
    void** eax11;
    void** eax12;
    void** ecx13;

    g410cac = a2;
    OleInitialize(0, __return_address());
    fun_401fe0(0, __return_address());
    fun_4018b0(ecx, 0x104, 0x410c8c, 0, __return_address(), a2, a3, a4, a5);
    fun_4018b0(ecx, 0x104, 0x410c54, 0x104, 0x410c8c, 0, __return_address(), a2, a3);
    fun_4018b0(ecx, 0x104, 0x410c50, 0x104, 0x410c54, 0x104, 0x410c8c, 0, __return_address());
    ecx9 = g410c50;
    edx10 = g410cac;
    GetModuleFileNameA();
    eax11 = g410c50;
    eax12 = fun_4055a0(ecx9, eax11, 92, edx10, ecx9, 0x104, 0, __return_address(), a2, a3);
    if (eax12) {
        *reinterpret_cast<void***>(eax12) = reinterpret_cast<void**>(0);
    }
    ecx13 = g410c50;
    fun_401800(ecx13, ecx13, edx10, ecx9, 0x104, 0, __return_address(), a2, a3, a4, a5, a6, a7, a8);
    goto edx10;
}

void** g40e0fe = reinterpret_cast<void**>(0);

void** g410c8c = reinterpret_cast<void**>(0);

int32_t g400214;

void** fun_404b00(void** a1);

void** fun_404d10(void** a1, void** a2);

void** fun_404f90(void** ecx, void** a2, void** a3, void** a4);

void** fun_401630(void** a1, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7, void** a8, void** a9, void** a10);

void** g410c6c = reinterpret_cast<void**>(0);

void** g410c68 = reinterpret_cast<void**>(0);

int32_t fun_4018f0(void** ecx, void** a2, void** a3, void** a4, void** a5, void** a6);

int32_t fun_4047c0() {
    void** eax1;
    void** v2;
    void** ebx3;
    void** v4;
    void** esi5;
    void** eax6;
    void** ecx7;
    void** v8;
    void** v9;
    int32_t eax10;
    void** edx11;
    void** eax12;
    void** ebx13;
    void** eax14;
    void** v15;
    void** v16;
    void** ebp17;
    void*** esp18;
    void** v19;
    void** edi20;
    void** ecx21;
    void** eax22;
    void** v23;
    int32_t v24;
    void** eax25;
    void** v26;
    void* v27;
    uint32_t ebp28;
    int32_t eax29;
    int32_t v30;
    void** eax31;
    void** ecx32;
    void** esi33;
    int32_t eax34;
    void** esi35;
    int32_t edi36;
    void** v37;
    void** ecx38;
    uint32_t v39;
    int32_t eax40;
    uint32_t eax41;
    uint32_t v42;
    void** edx43;
    void** eax44;
    void* esp45;
    void*** esp46;
    void** eax47;
    void** ecx48;
    void** edx49;
    int32_t eax50;
    void** eax51;
    void** ecx52;
    signed char* edi53;
    void** v54;
    signed char* esi55;
    signed char* v56;
    void** edx57;
    uint32_t ecx58;
    uint32_t ecx59;
    void** ecx60;
    void** v61;
    void** v62;
    void** v63;
    void** v64;
    void* esp65;
    void* esp66;
    int32_t v67;
    void** ecx68;
    void** v69;
    int32_t eax70;
    void** edx71;
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

    eax1 = g40e0fe;
    v2 = ebx3;
    v4 = esi5;
    if (!eax1 || ((eax6 = g410c8c, ecx7 = g410cac, v8 = eax6, v9 = ecx7, eax10 = reinterpret_cast<int32_t>(GetModuleFileNameA()), eax10 == 0) || (edx11 = g410c8c, eax12 = fun_401530(edx11, 0, v9, v8, 0x104, v4), ebx13 = eax12, ebx13 == 0xffffffff))) {
        addr_404acf_2:
        return 0;
    } else {
        eax14 = g40e0fe;
        fun_401610(ebx13, eax14, v9, v8, 0x104, v4, v2);
        *reinterpret_cast<int16_t*>(&v15) = 0;
        v16 = ebp17;
        esp18 = reinterpret_cast<void***>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 36 - 4 - 4 - 4 - 4 - 4 - 4 + 4 - 4 - 4 - 4 + 4 + 8 - 4 - 4 - 4 + 4 + 8 - 4 - 4);
        v19 = edi20;
        while (ecx21 = reinterpret_cast<void**>(esp18 + 44), eax22 = fun_4015b0(ebx13, ecx21, 8, v19, v16, v9), esp18 = esp18 - 4 - 4 - 4 - 4 + 4 + 12, v23 = eax22, !eax22) {
            if (!v24) {
                addr_404a5a_6:
                if (1) 
                    continue; else 
                    goto addr_404a67_7;
            } else {
                eax25 = fun_4015f0(ebx13, v19, v16, v9);
                v26 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(eax25) + reinterpret_cast<uint32_t>(v27));
                esp18 = esp18 - 4 - 4 + 4 + 4;
                if (1) 
                    goto addr_404a44_9;
                goto g400214;
            }
            fun_4015b0(ebx13, esp18 + 36, 2, v19, v16, v9);
            esp18 = esp18 - 4 - 4 - 4 - 4 + 4 + 12;
            ebp28 = 0;
            while (1) {
                eax29 = v30;
                if (*reinterpret_cast<uint16_t*>(&eax29) >= 1) {
                    eax29 = 1;
                }
                if (*reinterpret_cast<uint16_t*>(&ebp28) >= *reinterpret_cast<uint16_t*>(&eax29)) 
                    goto addr_404a44_9;
                fun_4015b0(ebx13, esp18 + 20, 2, v19, v16, v9);
                eax31 = v4;
                esp18 = esp18 - 4 - 4 - 4 - 4 + 4 + 12;
                if (!*reinterpret_cast<int16_t*>(&eax31)) {
                    addr_40497e_16:
                    ++ebp28;
                    continue;
                } else {
                    ecx32 = reinterpret_cast<void**>(ebp28 & 0xffff);
                    esi33 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(ecx32) * 4 + 0x410c64);
                    eax34 = fun_4018b0(ecx32, (reinterpret_cast<unsigned char>(eax31) & 0xffff) * 4 + 4, esi33, v19, v16, v9, v8, v23, v4);
                    esp18 = esp18 - 4 - 4 - 4 + 4 + 8;
                    if (!eax34) 
                        goto addr_404a69_18;
                    esi35 = *reinterpret_cast<void***>(esi33);
                    edi36 = 0;
                    if (*reinterpret_cast<uint16_t*>(&v4) <= 0) 
                        goto addr_40497e_16;
                }
                do {
                    v37 = reinterpret_cast<void**>(esp18 + 28);
                    fun_4015b0(ebx13, v37, 2, v19, v16, v9);
                    ecx38 = reinterpret_cast<void**>((v39 & 0xffff) + 1);
                    eax40 = fun_4018b0(ecx38, ecx38, esi35, ebx13, v37, 2, v19, v16, v9);
                    esp18 = esp18 - 4 - 4 - 4 - 4 + 4 - 4 - 4 - 4 + 4 + 20;
                    if (!eax40) 
                        break;
                    eax41 = v42;
                    if (*reinterpret_cast<int16_t*>(&eax41)) {
                        edx43 = *reinterpret_cast<void***>(esi35);
                        fun_4015b0(ebx13, edx43, eax41 & 0xffff, v19, v16, v9);
                        esp18 = esp18 - 4 - 4 - 4 - 4 + 4 + 12;
                    }
                    esi35 = esi35 + 4;
                    ++edi36;
                } while (*reinterpret_cast<uint16_t*>(&edi36) < *reinterpret_cast<uint16_t*>(&v4));
                goto addr_404970_24;
                v23 = reinterpret_cast<void**>(7);
                goto addr_40497e_16;
                addr_404970_24:
                ++ebp28;
            }
            eax44 = fun_404b00(ebx13);
            esp45 = reinterpret_cast<void*>(esp18 - 4 - 4 + 4);
            addr_404a3d_27:
            esp18 = reinterpret_cast<void***>(reinterpret_cast<int32_t>(esp45) + 4);
            addr_404a40_28:
            v23 = eax44;
            goto addr_404a44_9;
            eax44 = fun_404d10(ebx13, v19);
            esp45 = reinterpret_cast<void*>(esp18 - 4 - 4 + 4);
            goto addr_404a3d_27;
            eax44 = fun_404f90(ecx21, ebx13, v19, v16);
            esp45 = reinterpret_cast<void*>(esp18 - 4 - 4 + 4);
            goto addr_404a3d_27;
            esp46 = esp18 - 4;
            eax47 = fun_401630(ebx13, esp46 + 48, esp18 + 32, esp18 + 24, v19, v16, v9, v8, v23, v4);
            v23 = eax47;
            esp18 = esp46 - 4 - 4 - 4 - 4 + 4 + 16;
            if (!v2) {
                addr_404a44_9:
                if (v23) 
                    goto addr_404a7b_32;
            } else {
                ecx48 = g410c6c;
                if (ecx48) {
                    edx49 = g410c68;
                    eax50 = fun_4018f0(ecx48, reinterpret_cast<unsigned char>(edx49) + reinterpret_cast<unsigned char>(v2), 0x410c6c, v19, v16, v9);
                    esp18 = esp18 - 4 - 4 - 4 + 4 + 8;
                    if (!eax50) 
                        goto addr_404a69_18;
                    eax51 = g410c6c;
                    ecx52 = g410c68;
                    edi53 = reinterpret_cast<signed char*>(reinterpret_cast<unsigned char>(ecx52) + reinterpret_cast<unsigned char>(eax51) + 0xffffffff);
                    if (*reinterpret_cast<signed char*>(reinterpret_cast<unsigned char>(ecx52) + reinterpret_cast<unsigned char>(eax51) + 0xffffffff)) 
                        goto addr_404a44_9; else 
                        goto addr_404a03_36;
                } else {
                    g410c68 = v2;
                    g410c6c = v54;
                    goto addr_404a44_9;
                }
            }
            fun_401610(ebx13, v26, v19, v16, v9, v8, v23);
            esp18 = esp18 - 4 - 4 - 4 + 4 + 8;
            goto addr_404a5a_6;
            addr_404a03_36:
            esi55 = v56;
            edx57 = v2;
            ecx58 = reinterpret_cast<unsigned char>(v2) >> 2;
            while (ecx58) {
                --ecx58;
                *edi53 = *esi55;
                edi53 = edi53 + 4;
                esi55 = esi55 + 4;
            }
            ecx59 = reinterpret_cast<unsigned char>(edx57) & 3;
            while (ecx59) {
                --ecx59;
                *edi53 = *esi55;
                ++edi53;
                ++esi55;
            }
            ecx60 = g410c68;
            g410c68 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(ecx60) + reinterpret_cast<unsigned char>(v2) + 0xffffffff);
            goto addr_404a44_9;
            fun_401930(ecx21, 0x410c88, v19, v16, v9, v8, v23, v4, v2, v61, v62, v63, v26, v15, v64);
            esp65 = reinterpret_cast<void*>(esp18 - 4 - 4 + 4 - 4);
            eax44 = fun_401630(ebx13, reinterpret_cast<int32_t>(esp65) + 52, 0x410c88, 0, 0x410c88, v19, v16, v9, v8, v23);
            esp18 = reinterpret_cast<void***>(reinterpret_cast<int32_t>(esp65) - 4 - 4 - 4 - 4 + 4 + 20);
            goto addr_404a40_28;
        }
    }
    v23 = reinterpret_cast<void**>(8);
    addr_404a7b_32:
    fun_4016a0(ebx13);
    esp66 = reinterpret_cast<void*>(esp18 - 4 - 4 + 4 + 4 + 4 + 4);
    if (!v23) {
        goto v67;
    } else {
        ecx68 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(esp66) + 16);
        eax70 = fun_4018b0(ecx68, 0x400, ecx68, v9, v8, v23, v4, v2, v69);
        if (eax70) {
            edx71 = g410c8c;
            fun_4020e0(v2, v23, edx71, v9, v8, v23, v4, v2, v72, v73, v74, v26, v15, v75, v76);
            fun_4020b0(v2, 64, v2, v23, edx71, v9, v8, v23, v4, v2, v77, v78, v79, v26);
            fun_401930(v2, reinterpret_cast<int32_t>(esp66) - 4 - 4 - 4 + 4 + 8 - 4 - 4 - 4 - 4 + 4 - 4 - 4 - 4 + 4 + 36, v2, 64, v2, v23, edx71, v9, v8, v23, v4, v2, v80, v81, v82);
            goto addr_404acf_2;
        }
    }
    addr_404a67_7:
    goto addr_404a7b_32;
    addr_404a69_18:
    v23 = reinterpret_cast<void**>(7);
    goto addr_404a7b_32;
}

int32_t DestroyWindow = 0xccd8;

void fun_405260() {
    void** eax1;
    int32_t esi2;
    int32_t esi3;
    int32_t eax4;
    int32_t* esp5;
    int32_t v6;
    int32_t edi7;
    int32_t edi8;
    int32_t eax9;
    int32_t v10;

    eax1 = g410ca8;
    DestroyWindow(eax1, esi2);
    esi3 = GetMessageA;
    eax4 = reinterpret_cast<int32_t>(esi3());
    if (eax4) {
        esp5 = reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 28 - 4 - 4 - 4 + 4 - 4 - 4 - 4 - 4 - 4 + 4 - 4);
        v6 = edi7;
        edi8 = DispatchMessageA;
        do {
            edi8(esp5 + 2, v6);
            eax9 = reinterpret_cast<int32_t>(esi3());
            esp5 = esp5 - 1 - 1 + 1 - 1 - 1 - 1 - 1 - 1 + 1;
        } while (eax9);
    }
    goto v10;
}

void fun_402210(void** ecx, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7, void** a8, void** a9, void** a10, void** a11);

void fun_4021d0(void** ecx, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7, void** a8, void** a9, void** a10, void** a11);

void fun_402190(void** ecx, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7, void** a8, void** a9, void** a10, void** a11);

void** g410c64 = reinterpret_cast<void**>(0);

void fun_402130(void** ecx, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7, void** a8, void** a9, void** a10, void** a11, void** a12) {
    void** v13;
    void** v14;
    void** esi15;
    void** esi16;

    v13 = reinterpret_cast<void**>(__return_address());
    v14 = esi15;
    fun_401930(ecx, 0x410c6c, v14, v13, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12);
    fun_402210(ecx, 0x410c6c, v14, v13, a2, a3, a4, a5, a6, a7, a8);
    fun_4021d0(ecx, 0x410c6c, v14, v13, a2, a3, a4, a5, a6, a7, a8);
    fun_402190(ecx, 0x410c6c, v14, v13, a2, a3, a4, a5, a6, a7, a8);
    fun_401930(ecx, 0x410c88, 0x410c6c, v14, v13, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11);
    esi16 = g410c64;
    if (esi16) {
        if (*reinterpret_cast<void***>(esi16)) {
            do {
                fun_401930(ecx, esi16, v14, v13, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12);
                esi16 = esi16 + 4;
            } while (*reinterpret_cast<void***>(esi16 + 4));
        }
        fun_401930(ecx, 0x410c64, v14, v13, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12);
    }
    return;
}

void** g40e080 = reinterpret_cast<void**>(32);

int32_t fun_401e40(void** ecx, void** a2, void** a3, void* a4) {
    void** v5;
    void** ebx6;
    void** v7;
    void** ebp8;
    void** v9;
    void** esi10;
    void** v11;
    void** edi12;
    void** v13;
    void** v14;
    void** v15;
    void** v16;
    void** v17;
    void** v18;
    void** v19;
    void** eax20;
    void** ebp21;
    void** edx22;
    void* esp23;
    void** edi24;
    uint32_t ecx25;
    void** edi26;
    uint32_t ecx27;
    uint32_t ecx28;
    void*** esi29;
    uint32_t edx30;
    void** edi31;
    uint32_t ecx32;
    void** edi33;
    uint32_t ecx34;
    void** v35;
    void** v36;
    void** v37;
    void** v38;
    void** v39;
    void** v40;
    void** v41;
    void** eax42;
    void** esi43;
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
    void* esp57;
    void** eax58;
    void** v59;
    void** edi60;
    void** ecx61;
    void* edx62;
    void** v63;
    void** eax64;
    void* esp65;
    void** ecx66;
    void** v67;
    void** eax68;
    int32_t* v69;
    int32_t v70;
    int32_t v71;

    v5 = ebx6;
    v7 = ebp8;
    v9 = esi10;
    v11 = edi12;
    eax20 = fun_40561b(ecx, 0x208, v11, v9, v7, v5, v13, v14, v15, v16, v17, v18, v19);
    ebp21 = eax20;
    if (!ebp21) {
        return 0;
    }
    wsprintfA(ebp21, "\"%s\"", a2);
    edx22 = a3;
    esp23 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 84 - 4 - 4 - 4 - 4 - 4 - 4 + 4 + 4 - 4 - 4 - 4 - 4 + 4 + 12);
    if (edx22 && *reinterpret_cast<void***>(edx22)) {
        edi24 = ebp21;
        ecx25 = 0xffffffff;
        do {
            if (!ecx25) 
                break;
            --ecx25;
            ++edi24;
        } while (*reinterpret_cast<void***>(edi24));
        *reinterpret_cast<void***>(&ecx25) = g40e080;
        *reinterpret_cast<void***>(edi24 + 0xffffffff) = *reinterpret_cast<void***>(&ecx25);
        edi26 = edx22;
        ecx27 = 0xffffffff;
        do {
            if (!ecx27) 
                break;
            --ecx27;
            ++edi26;
        } while (*reinterpret_cast<void***>(edi26));
        ecx28 = ~ecx27;
        esi29 = reinterpret_cast<void***>(reinterpret_cast<unsigned char>(edi26) - ecx28);
        edx30 = ecx28;
        edi31 = ebp21;
        ecx32 = 0xffffffff;
        do {
            if (!ecx32) 
                break;
            --ecx32;
            ++edi31;
            ++esi29;
        } while (*reinterpret_cast<void***>(edi31));
        edi33 = edi31 - 1;
        ecx34 = edx30 >> 2;
        while (ecx34) {
            --ecx34;
            *reinterpret_cast<void***>(edi33) = *esi29;
            edi33 = edi33 + 4;
            esi29 = esi29 + 4;
        }
        ecx = reinterpret_cast<void**>(edx30 & 3);
        while (ecx) {
            --ecx;
            *reinterpret_cast<void***>(edi33) = *esi29;
            ++edi33;
            ++esi29;
        }
    }
    eax42 = fun_40561b(ecx, 0x208, v11, v9, v7, v5, v35, v36, v37, v38, v39, v40, v41);
    esi43 = eax42;
    if (!esi43) {
        fun_405a1e(ecx, ebp21, v11, v9, v7, v5, v44, v45, v46, v47, v48, v49, v50, v51, v52, v53, v54, v55);
        return 0;
    }
    v56 = esi43;
    GetCurrentDirectoryA(0x104, v56);
    esp57 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp23) - 4 - 4 + 4 + 4 - 4 - 4 - 4 + 4);
    eax58 = v59;
    edi60 = esi43 + 0x104;
    ecx61 = eax58;
    edx62 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(edi60) - reinterpret_cast<unsigned char>(ecx61));
    do {
        ecx61 = *reinterpret_cast<void***>(eax58);
        *reinterpret_cast<void***>(reinterpret_cast<uint32_t>(edx62) + reinterpret_cast<unsigned char>(eax58)) = ecx61;
        ++eax58;
    } while (ecx61);
    eax64 = fun_4055a0(ecx61, edi60, 92, 0x104, v56, v11, v9, v7, v5, v63);
    esp65 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp57) - 4 - 4 - 4 + 4 + 8);
    if (eax64) 
        goto addr_401f1a_24;
    addr_401f23_25:
    ecx66 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(esp65) + 16);
    v67 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(esp65) + 32);
    *reinterpret_cast<void***>(a2) = reinterpret_cast<void**>(0);
    eax68 = reinterpret_cast<void**>(CreateProcessA());
    SetCurrentDirectoryA();
    fun_405a1e(ecx66, esi43, esi43, 0, ebp21, 0, 0, 1, 32, 0, 0, v67, ecx66, 0x104, v56, v11, v9, v7, ecx66, esi43, esi43, 0, ebp21, 0, 0, 1, 32, 0, 0, v67, ecx66, 0x104, v56, v11, v9, v7);
    fun_405a1e(ecx66, ebp21, esi43, esi43, 0, ebp21, 0, 0, 1, 32, 0, 0, v67, ecx66, 0x104, v56, v11, v9, ecx66, ebp21, esi43, esi43, 0, ebp21, 0, 0, 1, 32, 0, 0, v67, ecx66, 0x104, v56, v11, v9);
    if (eax68) {
        *v69 = 0;
        goto v70;
    } else {
        goto v71;
    }
    addr_401f1a_24:
    *reinterpret_cast<void***>(eax64) = reinterpret_cast<void**>(0);
    SetCurrentDirectoryA(edi60, 0x104, v56);
    esp65 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp65) - 4 - 4 + 4);
    goto addr_401f23_25;
}

int32_t RegSetValueExA = 0xce14;

int32_t g40e10c = -1;

void fun_402840() {
    void** eax1;
    void** edx2;
    void** v3;
    void** v4;
    void** v5;
    void** ebx6;
    void** v7;
    void** ebp8;
    void** v9;
    void** esi10;
    void** v11;
    void*** esp12;
    void** v13;
    void** edi14;
    void** edx15;
    void** ebx16;
    void** ecx17;
    void** al18;
    void** al19;
    void** edx20;
    int32_t eax21;
    void** eax22;
    void** ecx23;
    void** v24;
    void** v25;
    void** v26;
    void** v27;
    void* esp28;
    void** edi29;
    uint32_t ecx30;
    uint32_t ecx31;
    void*** esi32;
    void** edi33;
    uint32_t edx34;
    uint32_t ecx35;
    void** edi36;
    uint32_t ecx37;
    uint32_t ecx38;
    void** eax39;
    int32_t eax40;
    int32_t ebp41;
    void** ecx42;
    void** edi43;
    void** v44;
    int32_t eax45;
    void** esp46;
    void* v47;
    void** edx48;
    void* v49;
    void** v50;
    int32_t eax51;
    void* eax52;
    uint1_t zf53;
    int32_t eax54;
    void** ecx55;
    void** v56;
    void* esp57;
    void** v58;
    void** eax59;
    void** v60;
    void** ecx61;
    void** ecx62;
    void** edx63;
    int32_t eax64;
    uint32_t* eax65;
    void** eax66;
    void** v67;
    int32_t eax68;
    int1_t zf69;
    int1_t zf70;
    void** ecx71;
    void** v72;
    int32_t eax73;
    int32_t eax74;
    void** edx75;
    void** v76;
    void** eax77;
    int32_t eax78;
    void** ecx79;
    void** v80;
    void** edx81;
    int1_t zf82;
    void** ecx83;
    void** eax84;
    void** v85;
    void** ecx86;
    int32_t eax87;
    void*** edi88;
    uint32_t ecx89;
    uint32_t ecx90;
    void** esi91;
    void** edi92;
    uint32_t edx93;
    uint32_t ecx94;
    void** edi95;
    uint32_t ecx96;
    void** ecx97;
    void** eax98;

    eax1 = g410c84;
    edx2 = g410c80;
    v3 = reinterpret_cast<void**>(0);
    v4 = reinterpret_cast<void**>(reinterpret_cast<uint32_t>(edx2 + reinterpret_cast<unsigned char>(eax1) * 4) + 0xfffffffc);
    if (reinterpret_cast<unsigned char>(eax1) > reinterpret_cast<unsigned char>(0)) {
        v5 = ebx6;
        v7 = ebp8;
        v9 = esi10;
        v11 = reinterpret_cast<void**>(0);
        esp12 = reinterpret_cast<void***>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 32 - 4 - 4 - 4 - 4);
        v13 = edi14;
        do {
            edx15 = g410c54;
            ebx16 = *reinterpret_cast<void***>(v4);
            ecx17 = *reinterpret_cast<void***>(ebx16);
            if (!reinterpret_cast<int1_t>(*reinterpret_cast<void***>(ecx17) == 46)) {
                do {
                    al18 = *reinterpret_cast<void***>(ecx17);
                    ++ecx17;
                    *reinterpret_cast<void***>(edx15) = al18;
                    ++edx15;
                } while (al18);
            } else {
                ecx17 = g410c50;
                do {
                    al19 = *reinterpret_cast<void***>(ecx17);
                    ++ecx17;
                    *reinterpret_cast<void***>(edx15) = al19;
                    ++edx15;
                } while (al19);
                if (reinterpret_cast<int1_t>(*reinterpret_cast<void***>(*reinterpret_cast<void***>(ebx16) + 1) == 92)) 
                    goto addr_402897_8;
            }
            addr_4028cf_9:
            if (!*reinterpret_cast<void***>(*reinterpret_cast<void***>(ebx16 + 4))) {
                edx20 = g410c54;
                eax21 = fun_401070(ecx17, edx20, v13, v9, v7);
                esp12 = esp12 - 4 - 4 + 4 + 4;
                if (!eax21) {
                    eax22 = g410c54;
                    fun_405ee2(eax22, v13, v9, v7);
                    esp12 = esp12 - 4 - 4 + 4 + 4;
                    goto addr_402ba4_12;
                }
            }
            ecx23 = g410c54;
            v24 = ecx23;
            fun_401800(ecx23, v24, v13, v9, v7, v5, 4, 4, v25, v11, v4, v26, v27, v3);
            esp28 = reinterpret_cast<void*>(esp12 - 4 - 4 + 4);
            edi29 = *reinterpret_cast<void***>(ebx16 + 4);
            ecx30 = 0xffffffff;
            do {
                if (!ecx30) 
                    break;
                --ecx30;
                ++edi29;
            } while (*reinterpret_cast<void***>(edi29));
            ecx31 = ~ecx30;
            esi32 = reinterpret_cast<void***>(reinterpret_cast<unsigned char>(edi29) - ecx31);
            edi33 = g410c54;
            edx34 = ecx31;
            ecx35 = 0xffffffff;
            do {
                if (!ecx35) 
                    break;
                --ecx35;
                ++edi33;
                ++esi32;
            } while (*reinterpret_cast<void***>(edi33));
            edi36 = edi33 - 1;
            ecx37 = edx34 >> 2;
            while (ecx37) {
                --ecx37;
                *reinterpret_cast<void***>(edi36) = *esi32;
                edi36 = edi36 + 4;
                esi32 = esi32 + 4;
            }
            ecx38 = edx34 & 3;
            while (ecx38) {
                --ecx38;
                *reinterpret_cast<void***>(edi36) = *esi32;
                ++edi36;
                ++esi32;
            }
            eax39 = g410c54;
            eax40 = fun_4016b0(eax39, v24);
            esp12 = reinterpret_cast<void***>(reinterpret_cast<int32_t>(esp28) - 4 - 4 + 4 + 8);
            ebp41 = 1;
            if (eax40) 
                goto addr_40292c_26;
            addr_40292e_27:
            if (!(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(ebx16 + 8)) & 1)) 
                goto addr_402a55_28;
            ecx42 = reinterpret_cast<void**>(esp12 + 20);
            edi43 = reinterpret_cast<void**>(0);
            v44 = ecx42;
            eax45 = reinterpret_cast<int32_t>(RegOpenKeyExA(0x80000002, "Software\\Microsoft\\Windows\\CurrentVersion\\SharedDLLs", 0));
            esp12 = esp12 - 4 - 4 - 4 - 4 - 4 - 4 + 4;
            if (!eax45 && (esp46 = reinterpret_cast<void**>(esp12 - 4), v47 = reinterpret_cast<void*>(esp12 + 36), edx48 = g410c54, ecx42 = reinterpret_cast<void**>(esp46 + 11), v49 = reinterpret_cast<void*>(esp12 + 16), v50 = ecx42, edi43 = reinterpret_cast<void**>(1), v44 = reinterpret_cast<void**>(1), eax51 = reinterpret_cast<int32_t>(RegQueryValueExA(v13, edx48, 0, v50)), esp12 = reinterpret_cast<void***>(esp46 - 1 - 1 - 1 - 1 - 1 - 1 + 1), !eax51)) {
                eax52 = v49;
                zf53 = reinterpret_cast<uint1_t>(eax52 == 0);
                if (!zf53) {
                    eax52 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(eax52) - 1);
                    v49 = eax52;
                    zf53 = reinterpret_cast<uint1_t>(eax52 == 0);
                }
                if (!zf53) {
                    ebp41 = 0;
                }
                if (!eax40 || eax52) {
                    ecx42 = g410c54;
                    RegSetValueExA(v47, ecx42, 0, 1, esp12 + 16, 0xf003f, v13, edx48, 0, v50, v49);
                    esp12 = esp12 - 4 - 4 - 4 - 4 - 4 - 4 - 4 + 4;
                }
            }
            if (ebp41) 
                goto addr_4029d8_37;
            addr_402a46_38:
            if (edi43) {
                RegCloseKey(v13, 0x80000002, "Software\\Microsoft\\Windows\\CurrentVersion\\SharedDLLs", 0);
                esp12 = esp12 - 4 - 4 + 4;
                goto addr_402a55_28;
            }
            addr_4029d8_37:
            eax54 = fun_4018b0(ecx42, 0x400, esp12 + 24, 0x80000002, "Software\\Microsoft\\Windows\\CurrentVersion\\SharedDLLs", 0, 0xf003f, v44, v13);
            esp12 = esp12 - 4 - 4 - 4 + 4 + 8;
            if (eax54) {
                ecx55 = g410c54;
                fun_4020e0(v9, 10, ecx55, 0x80000002, "Software\\Microsoft\\Windows\\CurrentVersion\\SharedDLLs", 0, 0xf003f, v44, v13, v9, v7, v5, 4, 4, v56);
                esp57 = reinterpret_cast<void*>(esp12 - 4 - 4 - 4 - 4 + 4 + 12);
                if (*reinterpret_cast<void***>(v9) && (eax59 = fun_4020b0(v9, 36, 0x80000002, "Software\\Microsoft\\Windows\\CurrentVersion\\SharedDLLs", 0, 0xf003f, v44, v13, v9, v7, v5, 4, 4, v58), esp57 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp57) - 4 - 4 - 4 + 4 + 8), eax59 != 6)) {
                    ebp41 = 0;
                }
                fun_401930(ecx55, reinterpret_cast<int32_t>(esp57) + 24, 0x80000002, "Software\\Microsoft\\Windows\\CurrentVersion\\SharedDLLs", 0, 0xf003f, v44, v13, v9, v7, v5, 4, 4, v60, v11);
                esp12 = reinterpret_cast<void***>(reinterpret_cast<int32_t>(esp57) - 4 - 4 + 4 + 4);
            }
            if (!ebp41) 
                goto addr_402a46_38;
            if (!edi43) {
                addr_402a55_28:
                if (!ebp41) 
                    goto addr_402ba4_12;
            } else {
                ecx61 = g410c54;
                RegDeleteValueA(v13, ecx61, 0x80000002, "Software\\Microsoft\\Windows\\CurrentVersion\\SharedDLLs", 0);
                esp12 = esp12 - 4 - 4 - 4 + 4;
                goto addr_402a46_38;
            }
            if (reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(ebx16 + 8)) & 2) {
                ecx62 = g410c54;
                fun_401d00(ecx62, ecx62);
                esp12 = esp12 - 4 - 4 + 4 + 4;
            }
            if (reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(ebx16 + 8)) & 4) {
                fun_4025f0();
                esp12 = esp12 - 4 + 4;
            }
            edx63 = g410c54;
            eax64 = fun_405f0c(edx63, v13, v9);
            esp12 = esp12 - 4 - 4 + 4 + 4;
            if (!eax64) 
                goto addr_402ba4_12;
            do {
                eax65 = g410cb8;
                if (!reinterpret_cast<int1_t>(eax65 == 13)) 
                    goto addr_402ba4_12;
                eax66 = g410c54;
                v67 = eax66;
                eax68 = fun_40547d(*reinterpret_cast<unsigned char*>(&v67), 2, v13, v9);
                esp12 = esp12 - 4 - 4 - 4 + 4 + 8;
                if (!eax68) 
                    goto addr_402ba4_12;
                zf69 = reinterpret_cast<int1_t>(g410cb8 == 13);
                if (!zf69) 
                    goto addr_402ba4_12;
                if (reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(ebx16 + 8)) & 6) 
                    break;
                zf70 = g40e10c == -1;
                if (!zf70) 
                    goto addr_402b1f_56;
                ecx71 = g410c54;
                eax73 = fun_402450(ecx71, ecx71, v13, v9, v7, v5, 4, 4, v72, v11, v4);
                esp12 = esp12 - 4 - 4 + 4 + 4;
                eax74 = eax73 - 6;
                if (eax74) 
                    goto addr_402b15_58;
                edx75 = g410c54;
                v76 = edx75;
                fun_40533c(*reinterpret_cast<unsigned char*>(&v76), 0x80);
                eax77 = g410c54;
                eax78 = fun_405f0c(eax77, v76, 0x80);
                esp12 = esp12 - 4 - 4 - 4 + 4 - 4 - 4 + 4 + 12;
            } while (eax78);
            goto addr_402b10_60;
            ecx79 = g410c54;
            v80 = ecx79;
            fun_40533c(*reinterpret_cast<unsigned char*>(&v80), 0x80);
            edx81 = g410c54;
            fun_405f0c(edx81, v80, 0x80);
            esp12 = esp12 - 4 - 4 - 4 + 4 - 4 - 4 + 4 + 12;
            goto addr_402ba4_12;
            addr_402b1f_56:
            zf82 = g40e10c == 1;
            if (!zf82) {
                addr_402ba4_12:
                ecx83 = g410c98;
                if (ecx83) {
                    fun_402340(reinterpret_cast<unsigned char>(v11) / reinterpret_cast<unsigned char>(ecx83));
                    esp12 = esp12 - 4 - 4 + 4 + 4;
                    continue;
                }
            } else {
                addr_402b28_63:
                eax84 = g410c54;
                v85 = eax84;
                fun_40533c(*reinterpret_cast<unsigned char*>(&v85), 0x80);
                ecx86 = g410c54;
                fun_405f0c(ecx86, v85, 0x80);
                esp12 = esp12 - 4 - 4 - 4 + 4 - 4 - 4 + 4 + 12;
                goto addr_402ba4_12;
            }
            addr_402b15_58:
            eax87 = eax74 - 0x3e3;
            if (!eax87) {
                g40e10c = 1;
                goto addr_402b28_63;
            } else {
                if (!(eax87 - 1)) {
                    g40e10c = 0;
                    goto addr_402ba4_12;
                }
            }
            addr_402b10_60:
            goto addr_402ba4_12;
            addr_40292c_26:
            ebp41 = 0;
            goto addr_40292e_27;
            addr_402897_8:
            edi88 = reinterpret_cast<void***>(*reinterpret_cast<void***>(ebx16) + 2);
            ecx89 = 0xffffffff;
            do {
                if (!ecx89) 
                    break;
                --ecx89;
                ++edi88;
            } while (*edi88);
            ecx90 = ~ecx89;
            esi91 = reinterpret_cast<void**>(reinterpret_cast<uint32_t>(edi88) - ecx90);
            edi92 = g410c54;
            edx93 = ecx90;
            ecx94 = 0xffffffff;
            do {
                if (!ecx94) 
                    break;
                --ecx94;
                ++edi92;
                ++esi91;
            } while (*reinterpret_cast<void***>(edi92));
            edi95 = edi92 - 1;
            ecx96 = edx93 >> 2;
            while (ecx96) {
                --ecx96;
                *reinterpret_cast<void***>(edi95) = *reinterpret_cast<void***>(esi91);
                edi95 = edi95 + 4;
                esi91 = esi91 + 4;
            }
            ecx17 = reinterpret_cast<void**>(edx93 & 3);
            while (ecx17) {
                --ecx17;
                *reinterpret_cast<void***>(edi95) = *reinterpret_cast<void***>(esi91);
                ++edi95;
                ++esi91;
            }
            goto addr_4028cf_9;
            ecx97 = g410c84;
            eax98 = v3 + 1;
            v3 = eax98;
            v11 = v11 + 100;
            v4 = v4 - 4;
        } while (reinterpret_cast<unsigned char>(eax98) < reinterpret_cast<unsigned char>(ecx97));
    }
    return;
}

void fun_403bb0(void** ecx) {
    void*** esp2;
    void** v3;
    void** edi4;
    void** edi5;
    uint32_t ecx6;
    void** esi7;
    void** ecx8;
    void** v9;
    void** ebx10;
    void** v11;
    void** ebp12;
    void** v13;
    void** eax14;
    void** ebx15;
    void** eax16;
    void** ebp17;
    void** v18;
    void*** esp19;
    void** v20;
    void** eax21;
    void* esp22;
    void** ecx23;
    void** edx24;
    void** al25;
    void** v26;
    void** v27;
    void** v28;
    void** v29;
    void** v30;
    void** v31;
    void** v32;
    void** edi33;
    uint32_t ecx34;
    void* esp35;
    uint32_t ecx36;
    void*** esi37;
    uint32_t edx38;
    void** edi39;
    uint32_t ecx40;
    void** edi41;
    uint32_t ecx42;
    void** v43;
    void** v44;
    void** v45;
    void** v46;
    void** v47;
    void** v48;
    void** eax49;
    int32_t eax50;
    void** v51;
    void** edi52;
    int32_t eax53;
    void** v54;
    void** v55;
    void** edx56;
    void** edi57;
    uint32_t ecx58;
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
    void** v79;
    void** v80;
    void** v81;

    esp2 = reinterpret_cast<void***>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 0x10c - 4);
    v3 = edi4;
    edi5 = g410c6c;
    if (!edi5) {
        addr_403d01_2:
        return;
    } else {
        ecx6 = 0xffffffff;
        do {
            if (!ecx6) 
                break;
            --ecx6;
            ++edi5;
            ++esi7;
        } while (*reinterpret_cast<void***>(edi5));
        ecx8 = reinterpret_cast<void**>(~ecx6 - 1);
        if (!ecx8) 
            goto addr_403d01_2;
    }
    v9 = ebx10;
    v11 = ebp12;
    eax14 = fun_4056cd(0x104, 1, v11, v9, v3, v13);
    ebx15 = eax14;
    eax16 = fun_4056cd(0x104, 1, 0x104, 1, v11, v9);
    ebp17 = g410c6c;
    v18 = eax16;
    if (*reinterpret_cast<void***>(ebp17)) {
        esp19 = esp2 - 4 - 4 - 4 - 4 - 4 + 4 - 4 - 4 - 4 + 4 + 16 - 4;
        v20 = esi7;
        do {
            eax21 = fun_4054e0(ecx8, ebp17, 35, v20, v11, v9);
            esp22 = reinterpret_cast<void*>(esp19 - 4 - 4 - 4 + 4 + 8);
            if (!eax21) {
                ecx23 = g410c50;
                edx24 = ebx15;
                do {
                    al25 = *reinterpret_cast<void***>(ecx23);
                    ++ecx23;
                    *reinterpret_cast<void***>(edx24) = al25;
                    ++edx24;
                } while (al25);
                fun_401800(ecx23, ebx15, v20, v11, v9, v3, v18, v26, v27, v28, v29, v30, v31, v32);
                edi33 = ebp17;
                ecx34 = 0xffffffff;
                esp35 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp22) - 4 - 4 + 4 + 4);
                do {
                    if (!ecx34) 
                        break;
                    --ecx34;
                    ++edi33;
                } while (*reinterpret_cast<void***>(edi33));
                ecx36 = ~ecx34;
                esi37 = reinterpret_cast<void***>(reinterpret_cast<unsigned char>(edi33) - ecx36);
                edx38 = ecx36;
                edi39 = ebx15;
                ecx40 = 0xffffffff;
                do {
                    if (!ecx40) 
                        break;
                    --ecx40;
                    ++edi39;
                    ++esi37;
                } while (*reinterpret_cast<void***>(edi39));
                edi41 = edi39 - 1;
                ecx42 = edx38 >> 2;
                while (ecx42) {
                    --ecx42;
                    *reinterpret_cast<void***>(edi41) = *esi37;
                    edi41 = edi41 + 4;
                    esi37 = esi37 + 4;
                }
                ecx8 = reinterpret_cast<void**>(edx38 & 3);
                while (ecx8) {
                    --ecx8;
                    *reinterpret_cast<void***>(edi41) = *esi37;
                    ++edi41;
                    ++esi37;
                }
            } else {
                fun_403880(ebx15, ebp17, 0x104, v20, v11, v9, v3, v18, v43, v44, v45, v46);
                esp35 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp22) - 4 - 4 - 4 - 4 + 4 + 12);
            }
            eax49 = fun_4055a0(ecx8, ebx15, 92, v20, v11, v9, v3, v18, v47, v48);
            esp19 = reinterpret_cast<void***>(reinterpret_cast<int32_t>(esp35) - 4 - 4 - 4 + 4 + 8);
            if (eax49 && ((*reinterpret_cast<void***>(eax49) = reinterpret_cast<void**>(0), eax50 = fun_401070(ecx8, ebx15, v20, v11, v9), esp19 = esp19 - 4 - 4 + 4 + 4, !eax50) && (v51 = reinterpret_cast<void**>(esp19 + 20), GetCurrentDirectoryA(0x104, v51), edi52 = SetCurrentDirectoryA, eax53 = reinterpret_cast<int32_t>(edi52(ebx15, 0x104, v51)), esp19 = esp19 - 4 - 4 - 4 + 4 - 4 - 4 + 4, !!eax53))) {
                v54 = eax49 + 1;
                fun_4039c0(ecx8, v54, ebx15, 0x104, v51, v20, v11, v9, v3, v18, v55);
                ecx8 = g410c50;
                fun_401840(ecx8, ecx8, v54, ebx15, 0x104, v51, v20, v11, v9);
                edx56 = g410c50;
                edi52(edx56, ebx15, 0x104, v51);
                RemoveDirectoryA(ebx15, edx56, ebx15, 0x104, v51);
                esp19 = esp19 - 4 - 4 + 4 - 4 - 4 + 4 + 8 - 4 - 4 + 4 - 4 - 4 + 4;
            }
            edi57 = ebp17;
            ecx58 = 0xffffffff;
            do {
                if (!ecx58) 
                    break;
                --ecx58;
                ++edi57;
            } while (*reinterpret_cast<void***>(edi57));
            ecx8 = reinterpret_cast<void**>(~ecx58 - 1);
            ebp17 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(ecx8) + reinterpret_cast<unsigned char>(ebp17) + 1);
        } while (*reinterpret_cast<signed char*>(reinterpret_cast<unsigned char>(ecx8) + reinterpret_cast<unsigned char>(ebp17) + 1));
    }
    fun_405a1e(ecx8, v18, v11, v9, v3, v18, v59, v60, v61, v62, v63, v64, v65, v66, v67, v68, v69, v70);
    fun_405a1e(ecx8, ebx15, v18, v11, v9, v3, v18, v71, v72, v73, v74, v75, v76, v77, v78, v79, v80, v81);
    goto addr_403d01_2;
}

void fun_403d10(void** ecx) {
    void** eax2;
    void** v3;
    void** ebx4;
    void** esi5;
    void** v6;
    void** v7;
    void** v8;
    void** v9;
    void** v10;
    void** ecx11;
    void** esi12;
    void** v13;
    void** edx14;
    void** v15;
    void** v16;
    void** v17;
    void** v18;
    void** v19;
    void** v20;
    void** v21;
    void** v22;
    void** eax23;
    void** v24;
    void** eax25;
    void** ebx26;
    void** edx27;
    void** v28;
    void** ebp29;
    void*** esp30;
    void** v31;
    void** edi32;
    void** ebp33;
    void** eax34;
    void** ecx35;
    void** al36;
    void** ecx37;
    void** al38;
    void** ecx39;
    void** eax40;
    void** ecx41;
    void* edx42;
    void** eax43;
    void** edi44;
    void* eax45;
    void* eax46;
    void** v47;
    void* esp48;
    void** edx49;
    void** ecx50;
    void** eax51;
    int32_t edi52;
    void** eax53;
    int32_t eax54;
    int32_t eax55;
    void** eax56;
    void* edx57;
    void** v58;
    void** eax59;
    void** v60;
    void** v61;
    void** v62;
    void** v63;
    void** v64;
    void** v65;
    void** v66;
    void** edi67;
    uint32_t ecx68;
    void* esp69;
    uint32_t ecx70;
    void** edi71;
    uint32_t edx72;
    uint32_t ecx73;
    void** edi74;
    uint32_t ecx75;
    void** eax76;
    void*** edi77;
    uint32_t ecx78;
    uint32_t ecx79;
    void** edi80;
    uint32_t edx81;
    uint32_t ecx82;
    void** edi83;
    uint32_t ecx84;
    uint32_t ecx85;
    void** ecx86;
    void** v87;
    void** v88;
    void** v89;
    void** v90;
    void** v91;
    void** v92;
    void** v93;
    void** v94;
    int32_t v95;

    eax2 = g410c50;
    v3 = ebx4;
    fun_401840(ecx, eax2, esi5, v3, v6, v7, v8, v9, v10);
    ecx11 = g410c50;
    esi12 = SetCurrentDirectoryA;
    v13 = ecx11;
    esi12();
    esi12();
    edx14 = g410c50;
    fun_401800(ecx11, edx14, "..", v13, esi5, v3, v15, v16, v17, v18, v19, v20, v21, v22);
    eax23 = g410c80;
    v24 = eax23;
    eax25 = g410c84;
    ebx26 = reinterpret_cast<void**>(0);
    *reinterpret_cast<signed char*>(&v3) = 0;
    if (eax25) {
        edx27 = g410c54;
        v28 = ebp29;
        esp30 = reinterpret_cast<void***>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 0x108 - 4 - 4 - 4 - 4 + 4 + 4 - 4 - 4 + 4 - 4 - 4 + 4 - 4 - 4 + 4 + 4 - 4 - 4);
        v31 = edi32;
        while (1) {
            ebp33 = *reinterpret_cast<void***>(v24);
            if (reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(ebp33 + 8)) & 2) {
                addr_403f01_4:
                eax34 = g410c84;
                ++ebx26;
                v24 = v24 + 4;
                if (reinterpret_cast<unsigned char>(ebx26) < reinterpret_cast<unsigned char>(eax34)) 
                    continue; else 
                    break;
            } else {
                ecx35 = *reinterpret_cast<void***>(ebp33);
                if (!reinterpret_cast<int1_t>(*reinterpret_cast<void***>(ecx35) == 46)) {
                    do {
                        al36 = *reinterpret_cast<void***>(ecx35);
                        ++ecx35;
                        *reinterpret_cast<void***>(edx27) = al36;
                        ++edx27;
                    } while (al36);
                } else {
                    ecx37 = g410c50;
                    do {
                        al38 = *reinterpret_cast<void***>(ecx37);
                        ++ecx37;
                        *reinterpret_cast<void***>(edx27) = al38;
                        ++edx27;
                    } while (al38);
                    if (reinterpret_cast<int1_t>(*reinterpret_cast<void***>(*reinterpret_cast<void***>(ebp33) + 1) == 92)) 
                        goto addr_403da1_10;
                }
            }
            addr_403dd9_11:
            ecx39 = *reinterpret_cast<void***>(ebp33 + 4);
            edx27 = g410c54;
            eax40 = edx27;
            if (!*reinterpret_cast<void***>(ecx39)) {
                addr_403e3c_12:
                if (!eax40) {
                    addr_403ec4_13:
                    ecx41 = g410c98;
                    if (ecx41) {
                        edx42 = g410c7c;
                        eax43 = g410c74;
                        edi44 = g410c84;
                        eax45 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(eax43) + reinterpret_cast<uint32_t>(edx42) + reinterpret_cast<unsigned char>(edi44) + reinterpret_cast<unsigned char>(ebx26));
                        eax46 = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(eax45) + reinterpret_cast<uint32_t>(eax45) * 4);
                        fun_402340((reinterpret_cast<uint32_t>(eax46) + reinterpret_cast<uint32_t>(eax46) * 4 << 2) / reinterpret_cast<unsigned char>(ecx41));
                        edx27 = g410c54;
                        esp30 = esp30 - 4 - 4 + 4 + 4;
                        goto addr_403f01_4;
                    }
                } else {
                    fun_401840(ecx39, edx27, v31, v28, "..", v13, v24, v3, v47);
                    esp48 = reinterpret_cast<void*>(esp30 - 4 - 4 + 4);
                    edx49 = g410c54;
                    ecx50 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(esp48) + 24);
                    eax51 = fun_4052b0(ecx50, edx49, ecx50, edx27, v31, v28, "..", v13);
                    esp30 = reinterpret_cast<void***>(reinterpret_cast<int32_t>(esp48) - 4 - 4 - 4 + 4 + 12);
                    if (eax51) {
                        edi52 = 0;
                        while ((eax53 = g410c54, eax54 = fun_401070(ecx50, eax53, v31, v28, ".."), esp30 = esp30 - 4 - 4 + 4 + 4, !eax54) && (ecx50 = g410c54, eax55 = fun_405ee2(ecx50, v31, v28, ".."), esp30 = esp30 - 4 - 4 + 4 + 4, !eax55)) {
                            esi12 = g410c54;
                            if (!edi52) {
                                edi52 = 1;
                                eax56 = esi12;
                                edx57 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp30 + 20) - reinterpret_cast<unsigned char>(esi12));
                                do {
                                    ecx50 = *reinterpret_cast<void***>(eax56);
                                    *reinterpret_cast<void***>(reinterpret_cast<uint32_t>(edx57) + reinterpret_cast<unsigned char>(eax56)) = ecx50;
                                    ++eax56;
                                } while (ecx50);
                            }
                            eax59 = fun_4055a0(ecx50, esi12, 92, v31, v28, "..", v13, v24, v3, v58);
                            esp30 = esp30 - 4 - 4 - 4 + 4 + 8;
                            if (!eax59) 
                                break;
                            *reinterpret_cast<void***>(eax59) = reinterpret_cast<void**>(0);
                        }
                    }
                }
            } else {
                v60 = edx27;
                fun_401800(ecx39, v60, v31, v28, "..", v13, v24, v3, v61, v62, v63, v64, v65, v66);
                edi67 = *reinterpret_cast<void***>(ebp33 + 4);
                ecx68 = 0xffffffff;
                esp69 = reinterpret_cast<void*>(esp30 - 4 - 4 + 4 - 4);
                do {
                    if (!ecx68) 
                        break;
                    --ecx68;
                    ++edi67;
                } while (*reinterpret_cast<void***>(edi67));
                ecx70 = ~ecx68;
                esi12 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(edi67) - ecx70);
                edi71 = g410c54;
                edx72 = ecx70;
                ecx73 = 0xffffffff;
                do {
                    if (!ecx73) 
                        break;
                    --ecx73;
                    ++edi71;
                    ++esi12;
                } while (*reinterpret_cast<void***>(edi71));
                edi74 = edi71 - 1;
                ecx75 = edx72 >> 2;
                while (ecx75) {
                    --ecx75;
                    *reinterpret_cast<void***>(edi74) = *reinterpret_cast<void***>(esi12);
                    edi74 = edi74 + 4;
                    esi12 = esi12 + 4;
                }
                ecx39 = reinterpret_cast<void**>(edx72 & 3);
                while (ecx39) {
                    --ecx39;
                    *reinterpret_cast<void***>(edi74) = *reinterpret_cast<void***>(esi12);
                    ++edi74;
                    ++esi12;
                }
                eax76 = g410c54;
                eax40 = fun_4055a0(ecx39, eax76, 92, v60, v31, v28, "..", v13, v24, v3);
                esp30 = reinterpret_cast<void***>(reinterpret_cast<int32_t>(esp69) - 4 - 4 + 4 + 12);
                if (eax40) 
                    goto addr_403e33_36;
            }
            edx27 = g410c54;
            goto addr_403ec4_13;
            addr_403e33_36:
            *reinterpret_cast<void***>(eax40) = reinterpret_cast<void**>(0);
            edx27 = g410c54;
            goto addr_403e3c_12;
            addr_403da1_10:
            edi77 = reinterpret_cast<void***>(*reinterpret_cast<void***>(ebp33) + 2);
            ecx78 = 0xffffffff;
            do {
                if (!ecx78) 
                    break;
                --ecx78;
                ++edi77;
            } while (*edi77);
            ecx79 = ~ecx78;
            esi12 = reinterpret_cast<void**>(reinterpret_cast<uint32_t>(edi77) - ecx79);
            edi80 = g410c54;
            edx81 = ecx79;
            ecx82 = 0xffffffff;
            do {
                if (!ecx82) 
                    break;
                --ecx82;
                ++edi80;
                ++esi12;
            } while (*reinterpret_cast<void***>(edi80));
            edi83 = edi80 - 1;
            ecx84 = edx81 >> 2;
            while (ecx84) {
                --ecx84;
                *reinterpret_cast<void***>(edi83) = *reinterpret_cast<void***>(esi12);
                edi83 = edi83 + 4;
                esi12 = esi12 + 4;
            }
            ecx85 = edx81 & 3;
            while (ecx85) {
                --ecx85;
                *reinterpret_cast<void***>(edi83) = *reinterpret_cast<void***>(esi12);
                ++edi83;
                ++esi12;
            }
            goto addr_403dd9_11;
        }
    }
    ecx86 = g410c50;
    fun_401800(ecx86, ecx86, "..", v13, v24, v3, v87, v88, v89, v90, v91, v92, v93, v94);
    goto v95;
}

int32_t OleUninitialize = 0xcee4;

int32_t g410c4c = 0;

int32_t DeleteObject = 0xcda4;

int32_t g410c44 = 0;

void fun_404790(void** ecx, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7, void** a8, void** a9, void** a10, void** a11, void** a12, void** a13) {
    int32_t eax14;
    int32_t eax15;

    OleUninitialize();
    fun_401930(ecx, 0x410c8c, __return_address(), a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13);
    fun_401930(ecx, 0x410c50, 0x410c8c, __return_address(), a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12);
    fun_401930(ecx, 0x410c54, 0x410c50, 0x410c8c, __return_address(), a2, a3, a4, a5, a6, a7, a8, a9, a10, a11);
    eax14 = g410c4c;
    if (eax14) {
        DeleteObject(eax14);
    }
    eax15 = g410c44;
    if (eax15) {
        FreeLibrary(eax15);
        g410c44 = 0;
    }
    return;
}

struct s46 {
    int32_t f0;
    signed char[28] pad32;
    void** f32;
};

struct s47 {
    int32_t f0;
    void** f4;
    signed char[3] pad8;
    void** f8;
    signed char[3] pad12;
    void** f12;
    signed char[3] pad16;
    void** f16;
    signed char[3] pad20;
    void** f20;
    signed char[3] pad24;
    void** f24;
};

struct s48 {
    void** f0;
    signed char[31] pad32;
    void** f32;
};

struct s49 {
    int32_t f0;
    void** f4;
    signed char[3] pad8;
    void** f8;
    signed char[3] pad12;
    void** f12;
    signed char[3] pad16;
    void** f16;
    signed char[3] pad20;
    void** f20;
    signed char[3] pad24;
    void** f24;
    signed char[3] pad28;
    void** f28;
    signed char[3] pad32;
    void** f32;
};

struct s50 {
    int32_t f0;
    void** f4;
    signed char[3] pad8;
    void** f8;
    signed char[3] pad12;
    void** f12;
    signed char[3] pad16;
    void** f16;
    signed char[3] pad20;
    void** f20;
    signed char[3] pad24;
    void** f24;
    signed char[3] pad28;
    void** f28;
    signed char[3] pad32;
    void** f32;
};

struct s51 {
    signed char[16] pad16;
    void** f16;
    signed char[3] pad20;
    void** f20;
    signed char[3] pad24;
    uint32_t f24;
    uint32_t f28;
    void** f32;
    signed char[7] pad40;
    void** f40;
};

struct s52 {
    int32_t f0;
    void** f4;
    signed char[3] pad8;
    void** f8;
    signed char[3] pad12;
    void** f12;
    signed char[3] pad16;
    void** f16;
    signed char[3] pad20;
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
    signed char[3] pad44;
    void** f44;
    signed char[3] pad48;
    void** f48;
    signed char[3] pad52;
    void** f52;
    signed char[3] pad56;
    void** f56;
};

struct s53 {
    void** f0;
    signed char[23] pad24;
    void* f24;
};

struct s54 {
    int32_t f0;
    void** f4;
    signed char[3] pad8;
    void** f8;
    signed char[3] pad12;
    void** f12;
    signed char[3] pad16;
    void** f16;
    signed char[3] pad20;
    void** f20;
    signed char[3] pad24;
    void** f24;
};

struct s55 {
    void** f0;
    signed char[35] pad36;
    uint32_t f36;
};

struct s56 {
    signed char[16] pad16;
    uint32_t f16;
};

struct s57 {
    uint32_t f0;
    signed char[24] pad28;
    uint32_t f28;
};

struct s58 {
    int32_t f0;
    void** f4;
    signed char[3] pad8;
    void** f8;
    signed char[3] pad12;
    void** f12;
    signed char[3] pad16;
    void** f16;
    signed char[3] pad20;
    void** f20;
    signed char[3] pad24;
    void** f24;
};

struct s59 {
    void** f0;
    signed char[35] pad36;
    uint32_t f36;
    uint32_t f40;
};

struct s60 {
    int32_t f0;
    void** f4;
    signed char[3] pad8;
    void** f8;
    signed char[3] pad12;
    void** f12;
    signed char[3] pad16;
    void** f16;
    signed char[3] pad20;
    void** f20;
    signed char[3] pad24;
    void** f24;
    signed char[3] pad28;
    void** f28;
    signed char[3] pad32;
    void** f32;
};

void** fun_404b00(void** a1) {
    int32_t* esp2;
    int32_t ebp3;
    int32_t* esp4;
    int32_t esi5;
    int32_t* esp6;
    int32_t edi7;
    int32_t* esp8;
    int32_t* esp9;
    struct s46* esp10;
    int32_t ebx11;
    struct s47* esp12;
    struct s48* esp13;
    void** eax14;
    void** ecx15;
    int32_t* esp16;
    uint32_t* esp17;
    struct s49* esp18;
    int32_t eax19;
    void*** esp20;
    uint32_t* esp21;
    struct s49* esp22;
    void* esp23;
    int32_t* esp24;
    int32_t* esp25;
    struct s50* esp26;
    int32_t eax27;
    struct s51* esp28;
    void*** esp29;
    struct s52* esp30;
    void** ecx31;
    void** edx32;
    void** eax33;
    void*** ebp34;
    void** ecx35;
    void*** esp36;
    struct s52* esp37;
    struct s53* esp38;
    void** eax39;
    void** edi40;
    int32_t ecx41;
    void*** esp42;
    struct s52* esp43;
    int32_t* esp44;
    int32_t ebx45;
    struct s54* esp46;
    struct s55* esp47;
    uint32_t eax48;
    struct s56* esp49;
    uint32_t ecx50;
    struct s57* esp51;
    uint32_t* esp52;
    int32_t* esp53;
    int32_t ebx54;
    struct s58* esp55;
    struct s57* esp56;
    uint32_t* esp57;
    int32_t* esp58;
    int32_t ebx59;
    struct s58* esp60;
    struct s59* esp61;
    uint32_t eax62;
    struct s56* esp63;
    uint32_t ecx64;
    struct s57* esp65;
    uint32_t* esp66;
    int32_t* esp67;
    int32_t ebx68;
    struct s58* esp69;
    struct s57* esp70;
    uint32_t* esp71;
    int32_t* esp72;
    int32_t ebx73;
    struct s58* esp74;
    struct s59* esp75;
    void** ecx76;
    void* edx77;
    void**** esp78;
    uint32_t* esp79;
    struct s60* esp80;
    int32_t eax81;
    void** eax82;
    void** edi83;
    void** esi84;
    uint32_t ecx85;
    void** eax86;
    uint32_t edx87;
    uint32_t ecx88;
    uint32_t ecx89;
    void** eax90;
    void** ecx91;
    void*** esp92;
    struct s52* esp93;

    esp2 = reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(__return_address()) + 4 - 4);
    *esp2 = ebp3;
    esp4 = esp2 - 1;
    *esp4 = esi5;
    esp6 = esp4 - 1;
    *esp6 = edi7;
    esp8 = esp6 - 1;
    *esp8 = 4;
    esp9 = esp8 - 1;
    *esp9 = reinterpret_cast<int32_t>(esp6 + 5);
    esp10 = reinterpret_cast<struct s46*>(esp9 - 1);
    esp10->f0 = ebx11;
    esp10->f32 = reinterpret_cast<void**>(0);
    esp12 = reinterpret_cast<struct s47*>(reinterpret_cast<int32_t>(esp10) - 4);
    esp12->f0 = 0x404b1e;
    fun_4015b0(esp12->f4, esp12->f8, esp12->f12, esp12->f16, esp12->f20, esp12->f24);
    esp13 = reinterpret_cast<struct s48*>(&esp12->f4);
    eax14 = g410c84;
    ecx15 = esp13->f32;
    esp16 = reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(esp13) + 12 - 4);
    *esp16 = 0x410c80;
    if (eax14) {
        esp17 = reinterpret_cast<uint32_t*>(esp16 - 1);
        *esp17 = (reinterpret_cast<unsigned char>(eax14) + reinterpret_cast<unsigned char>(ecx15)) * 4 + 8;
        esp18 = reinterpret_cast<struct s49*>(esp17 - 1);
        esp18->f0 = 0x404b51;
        eax19 = fun_4018f0(ecx15, esp18->f4, esp18->f8, esp18->f12, esp18->f16, esp18->f20);
        esp20 = &esp18->f4;
    } else {
        esp21 = reinterpret_cast<uint32_t*>(esp16 - 1);
        *esp21 = reinterpret_cast<unsigned char>(ecx15) * 4 + 8;
        esp22 = reinterpret_cast<struct s49*>(esp21 - 1);
        esp22->f0 = 0x404b40;
        eax19 = fun_4018b0(ecx15, esp22->f4, esp22->f8, esp22->f12, esp22->f16, esp22->f20, esp22->f24, esp22->f28, esp22->f32);
        esp20 = &esp22->f4;
    }
    esp23 = reinterpret_cast<void*>(esp20 + 8);
    if (!eax19) {
        goto *reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(esp23) + 4 + 4 + 4 + 4 + 20);
    }
    esp24 = reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(esp23) - 4);
    *esp24 = reinterpret_cast<int32_t>(esp23) + 16;
    esp25 = esp24 - 1;
    *esp25 = 0x208;
    esp26 = reinterpret_cast<struct s50*>(esp25 - 1);
    esp26->f0 = 0x404b74;
    eax27 = fun_4018b0(ecx15, esp26->f4, esp26->f8, esp26->f12, esp26->f16, esp26->f20, esp26->f24, esp26->f28, esp26->f32);
    esp28 = reinterpret_cast<struct s51*>(&esp26->f4 + 8);
    if (!eax27) {
        esp29 = reinterpret_cast<void***>(reinterpret_cast<int32_t>(esp28) - 4);
        *esp29 = reinterpret_cast<void**>(0x410c80);
        esp30 = reinterpret_cast<struct s52*>(esp29 - 4);
        esp30->f0 = 0x404b85;
        fun_401930(ecx15, esp30->f4, esp30->f8, esp30->f12, esp30->f16, esp30->f20, esp30->f24, esp30->f28, esp30->f32, esp30->f36, esp30->f40, esp30->f44, esp30->f48, esp30->f52, esp30->f56);
        goto *reinterpret_cast<int32_t*>(&esp30->f4 + 4 + 4 + 4 + 4 + 4 + 20);
    }
    ecx31 = g410c84;
    edx32 = g410c80;
    eax33 = esp28->f20;
    esp28->f32 = reinterpret_cast<void**>(0);
    ebp34 = reinterpret_cast<void***>(edx32 + reinterpret_cast<unsigned char>(ecx31) * 4);
    if (reinterpret_cast<unsigned char>(eax33) > reinterpret_cast<unsigned char>(0)) 
        goto addr_404bb4_9;
    addr_404cc0_10:
    ecx35 = reinterpret_cast<void**>(&esp28->f16);
    esp36 = reinterpret_cast<void***>(reinterpret_cast<int32_t>(esp28) - 4);
    *esp36 = ecx35;
    esp37 = reinterpret_cast<struct s52*>(esp36 - 4);
    esp37->f0 = 0x404cca;
    fun_401930(ecx35, esp37->f4, esp37->f8, esp37->f12, esp37->f16, esp37->f20, esp37->f24, esp37->f28, esp37->f32, esp37->f36, esp37->f40, esp37->f44, esp37->f48, esp37->f52, esp37->f56);
    esp38 = reinterpret_cast<struct s53*>(&esp37->f4);
    eax39 = g410c84;
    g410c84 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(eax39) + reinterpret_cast<uint32_t>(esp38->f24));
    goto *reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(esp38) + 4 + 4 + 4 + 4 + 4 + 20);
    do {
        addr_404bb4_9:
        edi40 = *reinterpret_cast<void***>(&esp28->f16);
        ecx41 = 0x82;
        esp42 = reinterpret_cast<void***>(reinterpret_cast<int32_t>(esp28) - 4);
        *esp42 = reinterpret_cast<void**>(2);
        while (ecx41) {
            --ecx41;
            *reinterpret_cast<void***>(edi40) = reinterpret_cast<void**>(0);
            edi40 = edi40 + 4;
        }
        esp43 = reinterpret_cast<struct s52*>(esp42 - 4);
        esp43->f0 = reinterpret_cast<int32_t>(esp42 + 28);
        esp44 = reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(esp43) - 4);
        *esp44 = ebx45;
        esp46 = reinterpret_cast<struct s54*>(esp44 - 1);
        esp46->f0 = 0x404bce;
        fun_4015b0(esp46->f4, esp46->f8, esp46->f12, esp46->f16, esp46->f20, esp46->f24);
        esp47 = reinterpret_cast<struct s55*>(&esp46->f4);
        eax48 = esp47->f36;
        esp49 = reinterpret_cast<struct s56*>(reinterpret_cast<int32_t>(esp47) + 12);
        if (*reinterpret_cast<int16_t*>(&eax48)) {
            ecx50 = esp49->f16;
            esp51 = reinterpret_cast<struct s57*>(reinterpret_cast<int32_t>(esp49) - 4);
            esp51->f0 = eax48 & 0xffff;
            esp52 = reinterpret_cast<uint32_t*>(reinterpret_cast<int32_t>(esp51) - 4);
            *esp52 = ecx50;
            esp53 = reinterpret_cast<int32_t*>(esp52 - 1);
            *esp53 = ebx54;
            esp55 = reinterpret_cast<struct s58*>(esp53 - 1);
            esp55->f0 = 0x404beb;
            fun_4015b0(esp55->f4, esp55->f8, esp55->f12, esp55->f16, esp55->f20, esp55->f24);
            esp49 = reinterpret_cast<struct s56*>(&esp55->f4 + 12);
        }
        esp56 = reinterpret_cast<struct s57*>(reinterpret_cast<int32_t>(esp49) - 4);
        esp56->f0 = 2;
        esp57 = reinterpret_cast<uint32_t*>(reinterpret_cast<int32_t>(esp56) - 4);
        *esp57 = reinterpret_cast<int32_t>(esp49) + 28;
        esp58 = reinterpret_cast<int32_t*>(esp57 - 1);
        *esp58 = ebx59;
        esp60 = reinterpret_cast<struct s58*>(esp58 - 1);
        esp60->f0 = 0x404bfb;
        fun_4015b0(esp60->f4, esp60->f8, esp60->f12, esp60->f16, esp60->f20, esp60->f24);
        esp61 = reinterpret_cast<struct s59*>(&esp60->f4);
        eax62 = esp61->f40;
        esp63 = reinterpret_cast<struct s56*>(reinterpret_cast<int32_t>(esp61) + 12);
        if (*reinterpret_cast<int16_t*>(&eax62)) {
            ecx64 = esp63->f16;
            esp65 = reinterpret_cast<struct s57*>(reinterpret_cast<int32_t>(esp63) - 4);
            esp65->f0 = eax62 & 0xffff;
            esp66 = reinterpret_cast<uint32_t*>(reinterpret_cast<int32_t>(esp65) - 4);
            *esp66 = (esp65->f28 & 0xffff) + ecx64 + 1;
            esp67 = reinterpret_cast<int32_t*>(esp66 - 1);
            *esp67 = ebx68;
            esp69 = reinterpret_cast<struct s58*>(esp67 - 1);
            esp69->f0 = 0x404c25;
            fun_4015b0(esp69->f4, esp69->f8, esp69->f12, esp69->f16, esp69->f20, esp69->f24);
            esp63 = reinterpret_cast<struct s56*>(&esp69->f4 + 12);
        }
        esp70 = reinterpret_cast<struct s57*>(reinterpret_cast<int32_t>(esp63) - 4);
        esp70->f0 = 1;
        esp71 = reinterpret_cast<uint32_t*>(reinterpret_cast<int32_t>(esp70) - 4);
        *esp71 = reinterpret_cast<uint32_t>(esp63 + 2);
        esp72 = reinterpret_cast<int32_t*>(esp71 - 1);
        *esp72 = ebx73;
        esp74 = reinterpret_cast<struct s58*>(esp72 - 1);
        esp74->f0 = 0x404c35;
        fun_4015b0(esp74->f4, esp74->f8, esp74->f12, esp74->f16, esp74->f20, esp74->f24);
        esp75 = reinterpret_cast<struct s59*>(&esp74->f4);
        ecx76 = reinterpret_cast<void**>(esp75->f40 & 0xffff);
        edx77 = reinterpret_cast<void*>(esp75->f36 & 0xffff);
        esp78 = reinterpret_cast<void****>(reinterpret_cast<int32_t>(esp75) - 4);
        *esp78 = ebp34;
        esp79 = reinterpret_cast<uint32_t*>(esp78 - 1);
        *esp79 = reinterpret_cast<unsigned char>(ecx76) + reinterpret_cast<uint32_t>(edx77) + 14;
        esp80 = reinterpret_cast<struct s60*>(esp79 - 1);
        esp80->f0 = 0x404c54;
        eax81 = fun_4018b0(ecx76, esp80->f4, esp80->f8, esp80->f12, esp80->f16, esp80->f20, esp80->f24, esp80->f28, esp80->f32);
        esp28 = reinterpret_cast<struct s51*>(&esp80->f4 + 20);
        if (!eax81) 
            break;
        eax82 = *ebp34;
        ebp34 = ebp34 + 4;
        edi83 = eax82 + 12;
        *reinterpret_cast<void***>(eax82 + 8) = esp28->f40;
        *reinterpret_cast<void***>(eax82) = edi83;
        *reinterpret_cast<void***>(eax82 + 4) = reinterpret_cast<void**>((esp28->f24 & 0xffff) + reinterpret_cast<unsigned char>(edi83) + 1);
        esi84 = *reinterpret_cast<void***>(&esp28->f16);
        ecx85 = (esp28->f28 & 0xffff) + (esp28->f24 & 0xffff) + 2;
        eax86 = esp28->f32;
        edx87 = ecx85;
        ecx88 = ecx85 >> 2;
        while (ecx88) {
            --ecx88;
            *reinterpret_cast<void***>(edi83) = *reinterpret_cast<void***>(esi84);
            edi83 = edi83 + 4;
            esi84 = esi84 + 4;
        }
        ecx89 = edx87 & 3;
        eax90 = eax86 + 1;
        while (ecx89) {
            --ecx89;
            *reinterpret_cast<void***>(edi83) = *reinterpret_cast<void***>(esi84);
            ++edi83;
            ++esi84;
        }
        ecx91 = esp28->f20;
        esp28->f32 = eax90;
    } while (reinterpret_cast<unsigned char>(eax90) < reinterpret_cast<unsigned char>(ecx91));
    goto addr_404cc0_10;
    esp92 = reinterpret_cast<void***>(reinterpret_cast<int32_t>(esp28) - 4);
    *esp92 = reinterpret_cast<void**>(&esp28->f16);
    esp93 = reinterpret_cast<struct s52*>(esp92 - 4);
    esp93->f0 = 0x404cf1;
    fun_401930(ecx76, esp93->f4, esp93->f8, esp93->f12, esp93->f16, esp93->f20, esp93->f24, esp93->f28, esp93->f32, esp93->f36, esp93->f40, esp93->f44, esp93->f48, esp93->f52, esp93->f56);
    goto *reinterpret_cast<int32_t*>(&esp93->f4 + 4 + 4 + 4 + 4 + 4 + 20);
}

void** fun_404d10(void** a1, void** a2) {
    void** v3;
    void* esp4;
    void** v5;
    void** ebx6;
    void** ebx7;
    void** v8;
    void** ebp9;
    void** v10;
    void** esi11;
    void** v12;
    void** edi13;
    void* eax14;
    void* esp15;
    void** v16;
    int32_t eax17;
    void* esp18;
    void** v19;
    void** v20;
    void* esp21;
    void** v22;
    void** v23;
    int32_t eax24;
    void* esp25;
    void** v26;
    void** v27;
    void** v28;
    void** v29;
    void** v30;
    void** v31;
    void* ecx32;
    void** edx33;
    void** v34;
    void** ebp35;
    int32_t v36;
    void** ecx37;
    void** v38;
    void** v39;
    void** v40;
    void** v41;
    void** v42;
    void* eax43;
    void* v44;
    void** edi45;
    int32_t ecx46;
    void* esp47;
    void** v48;
    void* esp49;
    uint32_t eax50;
    uint32_t v51;
    void* esp52;
    uint32_t eax53;
    uint32_t v54;
    void* esp55;
    uint32_t v56;
    uint32_t eax57;
    uint32_t v58;
    void* esp59;
    uint32_t v60;
    uint32_t v61;
    uint32_t v62;
    void** ecx63;
    uint32_t v64;
    uint32_t v65;
    void** v66;
    void** v67;
    int32_t eax68;
    void** eax69;
    void** edi70;
    uint32_t v71;
    void** ecx72;
    uint32_t v73;
    uint32_t v74;
    void** esi75;
    void** eax76;
    uint32_t ecx77;
    uint32_t v78;
    uint32_t v79;
    uint32_t v80;
    uint32_t edx81;
    uint32_t ecx82;
    uint32_t ecx83;
    void** eax84;
    void** v85;
    void** v86;
    void** v87;
    void** v88;
    void** v89;
    void** v90;

    v3 = reinterpret_cast<void**>(__return_address());
    esp4 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 24);
    v5 = ebx6;
    ebx7 = a1;
    v8 = ebp9;
    v10 = esi11;
    v12 = edi13;
    fun_4015b0(ebx7, reinterpret_cast<int32_t>(esp4) + 8, 4, v12, v10, v8);
    eax14 = g410c7c;
    esp15 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp4) - 4 - 4 - 4 - 4 - 4 - 4 - 4 - 4 + 4 + 12 - 4);
    if (eax14) {
        eax17 = fun_4018f0(v16, (reinterpret_cast<uint32_t>(eax14) + reinterpret_cast<unsigned char>(v16)) * 4 + 8, 0x410c78, v12, v10, v8);
        esp18 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp15) - 4 - 4 + 4);
    } else {
        eax17 = fun_4018b0(v16, reinterpret_cast<unsigned char>(v16) * 4 + 8, 0x410c78, v12, v10, v8, v5, v19, v20);
        esp18 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp15) - 4 - 4 + 4);
    }
    esp21 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp18) + 8);
    if (!eax17) {
        return 7;
    }
    eax24 = fun_4018b0(v16, 0x30c, reinterpret_cast<int32_t>(esp21) + 44, v12, v10, v8, v5, v22, v23);
    esp25 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp21) - 4 - 4 - 4 + 4 + 8);
    if (!eax24) {
        fun_401930(v16, 0x410c78, v12, v10, v8, v5, v26, v27, v28, v29, v30, v31, v3, a1, a2);
        return 7;
    }
    ecx32 = g410c7c;
    edx33 = g410c78;
    v34 = reinterpret_cast<void**>(0);
    ebp35 = edx33 + reinterpret_cast<uint32_t>(ecx32) * 4;
    if (v36) 
        goto addr_404dc2_9;
    addr_404f43_10:
    ecx37 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(esp25) + 44);
    fun_401930(ecx37, ecx37, v12, v10, v8, v5, v38, v39, v40, v41, v34, v42, v3, a1, a2);
    eax43 = g410c7c;
    g410c7c = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(eax43) + reinterpret_cast<uint32_t>(v44));
    return 0;
    do {
        addr_404dc2_9:
        edi45 = a1;
        ecx46 = 0xc3;
        esp47 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp25) - 4);
        while (ecx46) {
            --ecx46;
            *reinterpret_cast<void***>(edi45) = reinterpret_cast<void**>(0);
            edi45 = edi45 + 4;
        }
        v48 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(esp47) + 40);
        fun_4015b0(ebx7, v48, 1, v12, v10, v8);
        esp49 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp47) - 4 - 4 - 4 + 4);
        fun_4015b0(ebx7, reinterpret_cast<int32_t>(esp49) + 28, 2, ebx7, v48, 1);
        eax50 = v51;
        esp52 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp49) - 4 - 4 - 4 - 4 + 4 + 24);
        if (*reinterpret_cast<int16_t*>(&eax50)) {
            fun_4015b0(ebx7, a1, eax50 & 0xffff, v12, v10, v8);
            esp52 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp52) - 4 - 4 - 4 - 4 + 4 + 12);
        }
        fun_4015b0(ebx7, reinterpret_cast<int32_t>(esp52) + 20, 2, v12, v10, v8);
        eax53 = v54;
        esp55 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp52) - 4 - 4 - 4 - 4 + 4 + 12);
        if (*reinterpret_cast<int16_t*>(&eax53)) {
            fun_4015b0(ebx7, (v56 & 0xffff) + reinterpret_cast<unsigned char>(a1) + 1, eax53 & 0xffff, v12, v10, v8);
            esp55 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp55) - 4 - 4 - 4 - 4 + 4 + 12);
        }
        fun_4015b0(ebx7, reinterpret_cast<int32_t>(esp55) + 28, 2, v12, v10, v8);
        eax57 = v58;
        esp59 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp55) - 4 - 4 - 4 - 4 + 4 + 12);
        if (*reinterpret_cast<int16_t*>(&eax57)) {
            fun_4015b0(ebx7, (v60 & 0xffff) + (reinterpret_cast<unsigned char>(a1) + (v61 & 0xffff)) + 2, eax57 & 0xffff, v12, v10, v8);
            eax57 = v62;
            esp59 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp59) - 4 - 4 - 4 - 4 + 4 + 12);
        }
        ecx63 = reinterpret_cast<void**>(v64 & 0xffff);
        eax68 = fun_4018b0(ecx63, (eax57 & 0xffff) + reinterpret_cast<unsigned char>(ecx63) + (v65 & 0xffff) + 19, ebp35, v12, v10, v8, v5, v66, v67);
        esp25 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp59) - 4 - 4 - 4 + 4 + 8);
        if (!eax68) 
            break;
        eax69 = *reinterpret_cast<void***>(ebp35);
        ebp35 = ebp35 + 4;
        edi70 = eax69 + 16;
        *reinterpret_cast<void***>(eax69) = reinterpret_cast<void**>(v71 & 0xff);
        *reinterpret_cast<void***>(eax69 + 4) = edi70;
        ecx72 = reinterpret_cast<void**>((v73 & 0xffff) + reinterpret_cast<unsigned char>(edi70) + 1);
        *reinterpret_cast<void***>(eax69 + 8) = ecx72;
        *reinterpret_cast<void***>(eax69 + 12) = reinterpret_cast<void**>((v74 & 0xffff) + reinterpret_cast<unsigned char>(ecx72) + 1);
        esi75 = a1;
        eax76 = v34;
        ecx77 = (v78 & 0xffff) + (v79 & 0xffff) + (v80 & 0xffff) + 3;
        edx81 = ecx77;
        ecx82 = ecx77 >> 2;
        while (ecx82) {
            --ecx82;
            *reinterpret_cast<void***>(edi70) = *reinterpret_cast<void***>(esi75);
            edi70 = edi70 + 4;
            esi75 = esi75 + 4;
        }
        ecx83 = edx81 & 3;
        eax84 = eax76 + 1;
        while (ecx83) {
            --ecx83;
            *reinterpret_cast<void***>(edi70) = *reinterpret_cast<void***>(esi75);
            ++edi70;
            ++esi75;
        }
        v34 = eax84;
    } while (reinterpret_cast<unsigned char>(eax84) < reinterpret_cast<unsigned char>(v85));
    goto addr_404f43_10;
    fun_401930(ecx63, reinterpret_cast<int32_t>(esp25) + 44, v12, v10, v8, v5, v86, v87, v88, v89, v34, v90, v3, a1, a2);
    return 7;
}

void** fun_405030(void** ecx, void** a2, void** a3, void** a4, void** a5, void** a6);

void** fun_404f90(void** ecx, void** a2, void** a3, void** a4) {
    void** esi5;
    void** ecx6;
    void** ecx7;
    int32_t eax8;
    void** ecx9;
    void** edx10;
    void** eax11;
    void** edx12;

    fun_4015b0(a2, reinterpret_cast<int32_t>(__zero_stack_offset()) - 4 - 4 + 4, 4, esi5, 0, __return_address());
    if (0) {
        ecx6 = g410c74;
        if (ecx6) {
            ecx7 = reinterpret_cast<void**>(static_cast<uint32_t>(reinterpret_cast<unsigned char>(ecx6)));
            eax8 = fun_4018f0(ecx7, reinterpret_cast<unsigned char>(ecx7) * 4 + 12, 0x410c70, esi5, 0, __return_address());
        } else {
            eax8 = fun_4018b0(12, 12, 0x410c70, esi5, 0, __return_address(), a2, a3, a4);
        }
        if (eax8) {
            ecx9 = g410c74;
            edx10 = g410c70;
            eax11 = fun_405030(ecx9, a2, edx10 + reinterpret_cast<unsigned char>(ecx9) * 4, 0, esi5, 0);
            if (!eax11) {
                edx12 = g410c74;
                g410c74 = edx12;
            }
            return eax11;
        } else {
            return 7;
        }
    } else {
        return 0;
    }
}

void** fun_401630(void** a1, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7, void** a8, void** a9, void** a10) {
    void** eax11;
    void** ecx12;
    void** edi13;
    void** esi14;
    int32_t eax15;
    void** ecx16;
    void** v17;
    void** eax18;

    eax11 = reinterpret_cast<void**>(0);
    ecx12 = *reinterpret_cast<void***>(a2 + 4);
    if (reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(a2 + 2)) & 1) {
        eax11 = reinterpret_cast<void**>(1);
    }
    if (a4) {
        *reinterpret_cast<void***>(a4) = ecx12;
    }
    if (!eax11) {
        eax15 = fun_401870(ecx12, ecx12, a3, edi13, esi14, __return_address(), a1, a2, a3, a4);
        if (eax15) {
            ecx16 = *reinterpret_cast<void***>(a3);
            v17 = *reinterpret_cast<void***>(a2 + 4);
            eax18 = fun_4015b0(a1, ecx16, v17, edi13, esi14, __return_address());
            if (eax18) {
                fun_401930(ecx16, a3, edi13, esi14, __return_address(), a1, a2, a3, a4, a5, a6, a7, a8, a9, a10);
            }
            eax11 = eax18;
        } else {
            return 5;
        }
    }
    return eax11;
}

int32_t fun_4018f0(void** ecx, void** a2, void** a3, void** a4, void** a5, void** a6) {
    void** eax7;
    void** edi8;
    void** esi9;
    void** eax10;
    void** ecx11;

    eax7 = *reinterpret_cast<void***>(a3);
    eax10 = fun_40577e(ecx, eax7, a2, edi8, esi9, __return_address(), a2, a3, a4, a5, a6);
    if (eax10 || (fun_4055c7(ecx, edi8), ecx11 = *reinterpret_cast<void***>(a3), eax10 = fun_40577e(ecx11, ecx11, a2, edi8, esi9, __return_address(), a2, a3, a4, a5, a6), !!eax10)) {
        *reinterpret_cast<void***>(a3) = eax10;
        return 1;
    } else {
        return 0;
    }
}

void** fun_405030(void** ecx, void** a2, void** a3, void** a4, void** a5, void** a6) {
    void** v7;
    void** esp8;
    void** v9;
    void** ebx10;
    void** v11;
    void** ebp12;
    void** v13;
    void** esi14;
    void** v15;
    void** edi16;
    void** v17;
    void** v18;
    int32_t eax19;
    void* esp20;
    void** ebx21;
    void** ebp22;
    void** ecx23;
    void** v24;
    void** v25;
    void** v26;
    int32_t* edi27;
    int32_t* v28;
    void** esi29;
    int32_t ecx30;
    void** ecx31;
    void* esp32;
    uint32_t eax33;
    uint32_t v34;
    void* esp35;
    void** v36;
    uint32_t v37;
    void** v38;
    void** v39;
    int32_t eax40;
    void** eax41;
    void** edi42;
    void** v43;
    void*** esi44;
    void*** v45;
    uint32_t ecx46;
    uint32_t v47;
    void** eax48;
    uint32_t edx49;
    uint32_t ecx50;
    uint32_t ecx51;
    int1_t cf52;
    void** v53;
    void** v54;
    void** v55;

    v7 = reinterpret_cast<void**>(__return_address());
    esp8 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 12);
    v9 = ebx10;
    v11 = ebp12;
    v13 = esi14;
    v15 = edi16;
    eax19 = fun_4018b0(ecx, 0x208, esp8, v15, v13, v11, v9, v17, v18);
    esp20 = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(esp8 - 4) - 4 - 4 - 4 - 4 - 4 - 4 + 4 + 8);
    if (!eax19) {
        return 7;
    }
    ebx21 = a3;
    ebp22 = reinterpret_cast<void**>(0);
    if (!a4) {
        addr_40510c_4:
        ecx23 = reinterpret_cast<void**>(reinterpret_cast<uint32_t>(esp20) + 16);
        fun_401930(ecx23, ecx23, v15, v13, v11, v9, v24, v25, v26, v7, a2, a3, a4, a5, a6);
        return 0;
    } else {
        do {
            edi27 = v28;
            esi29 = a2;
            ecx30 = 0x82;
            while (ecx30) {
                --ecx30;
                *edi27 = 0;
                ++edi27;
                esi29 = esi29 + 4;
            }
            ecx31 = reinterpret_cast<void**>(reinterpret_cast<uint32_t>(esp20) + 24);
            fun_4015b0(esi29, ecx31, 4, v15, v13, v11);
            esp32 = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(esp20) - 4 - 4 - 4 - 4 + 4);
            fun_4015b0(esi29, reinterpret_cast<uint32_t>(esp32) + 32, 2, esi29, ecx31, 4);
            eax33 = v34;
            esp35 = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(esp32) - 4 - 4 - 4 - 4 + 4 + 24);
            if (*reinterpret_cast<int16_t*>(&eax33)) {
                fun_4015b0(esi29, v36, eax33 & 0xffff, v15, v13, v11);
                eax33 = v37;
                esp35 = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(esp35) - 4 - 4 - 4 - 4 + 4 + 12);
            }
            eax40 = fun_4018b0(ecx31, (eax33 & 0xffff) + 9, ebx21, v15, v13, v11, v9, v38, v39);
            esp20 = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(esp35) - 4 - 4 - 4 + 4 + 8);
            if (!eax40) 
                break;
            eax41 = *reinterpret_cast<void***>(ebx21);
            ebx21 = ebx21 + 4;
            edi42 = eax41 + 8;
            *reinterpret_cast<void***>(eax41) = v43;
            *reinterpret_cast<void***>(eax41 + 4) = edi42;
            esi44 = v45;
            ecx46 = (v47 & 0xffff) + 1;
            eax48 = a4;
            edx49 = ecx46;
            ecx50 = ecx46 >> 2;
            while (ecx50) {
                --ecx50;
                *reinterpret_cast<void***>(edi42) = *esi44;
                edi42 = edi42 + 4;
                esi44 = esi44 + 4;
            }
            ecx51 = edx49 & 3;
            ++ebp22;
            cf52 = reinterpret_cast<unsigned char>(ebp22) < reinterpret_cast<unsigned char>(eax48);
            while (ecx51) {
                --ecx51;
                *reinterpret_cast<void***>(edi42) = *esi44;
                ++edi42;
                ++esi44;
            }
        } while (cf52);
        goto addr_40510c_4;
    }
    fun_401930(ecx31, reinterpret_cast<uint32_t>(esp20) + 16, v15, v13, v11, v9, v53, v54, v55, v7, a2, a3, a4, a5, a6);
    return 7;
}

int32_t g410d00 = 0;

int32_t GetCurrentProcess = 0xcf5c;

int32_t TerminateProcess = 0xcf48;

int32_t g410cfc = 0;

signed char g410cf8 = 0;

void** g4112d8;

void** g4112d4;

void** fun_4053ca(int32_t a1, int32_t a2, int32_t a3) {
    int32_t v4;
    void** v5;
    void** edi6;
    int1_t zf7;
    int32_t eax8;
    void** v9;
    void** ebx10;
    int32_t ebx11;
    void** eax12;
    void** ecx13;
    void** esi14;
    void** eax15;
    int1_t cf16;
    void** eax17;

    v4 = reinterpret_cast<int32_t>(__return_address());
    v5 = edi6;
    zf7 = g410d00 == 1;
    if (zf7) {
        eax8 = reinterpret_cast<int32_t>(GetCurrentProcess(v4));
        TerminateProcess(eax8, v4);
    }
    v9 = ebx10;
    ebx11 = a3;
    g410cfc = 1;
    g410cf8 = *reinterpret_cast<signed char*>(&ebx11);
    if (!a2) {
        eax12 = g4112d8;
        if (eax12) {
            ecx13 = g4112d4;
            esi14 = ecx13 + 0xfffffffc;
            if (reinterpret_cast<unsigned char>(esi14) >= reinterpret_cast<unsigned char>(eax12)) {
                do {
                    eax15 = *reinterpret_cast<void***>(esi14);
                    if (eax15) {
                        eax15();
                    }
                    esi14 = esi14 - 4;
                    cf16 = reinterpret_cast<unsigned char>(esi14) < reinterpret_cast<unsigned char>(g4112d8);
                } while (!cf16);
            }
        }
        fun_405463(ecx13, 0x40e018, 0x40e01c, v9, v5);
    }
    eax17 = fun_405463(0x40e01c, 0x40e020, 0x40e028, v9, v5);
    if (!ebx11) {
        g410d00 = 1;
        eax17 = reinterpret_cast<void**>(ExitProcess(0x40e028, v4));
    }
    return eax17;
}

struct s61 {
    void** f0;
    void** f1;
    void** f2;
    void** f3;
};

void** fun_407ac0(void** ecx, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7) {
    void** esi8;
    void** edi9;
    void** eax10;
    uint32_t ecx11;
    uint32_t edx12;
    struct s61* esi13;
    void** edi14;
    uint32_t ecx15;
    uint32_t edx16;

    esi8 = a3;
    edi9 = a2;
    eax10 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(a4) + reinterpret_cast<unsigned char>(esi8));
    if (reinterpret_cast<unsigned char>(edi9) <= reinterpret_cast<unsigned char>(esi8) || reinterpret_cast<unsigned char>(edi9) >= reinterpret_cast<unsigned char>(eax10)) {
        if (reinterpret_cast<unsigned char>(edi9) & 3) {
            if (reinterpret_cast<unsigned char>(a4) < reinterpret_cast<unsigned char>(4)) {
                goto *reinterpret_cast<int32_t*>(reinterpret_cast<unsigned char>(a4 - 4) * 4 + 0x407c18);
            } else {
                goto *reinterpret_cast<int32_t*>("{@" + (reinterpret_cast<unsigned char>(edi9) & 3) * 4);
            }
        }
        ecx11 = reinterpret_cast<unsigned char>(a4) >> 2;
        edx12 = reinterpret_cast<unsigned char>(a4) & 3;
        if (ecx11 >= 8) 
            goto addr_407af3_7;
    } else {
        esi13 = reinterpret_cast<struct s61*>(reinterpret_cast<unsigned char>(a4) + reinterpret_cast<unsigned char>(esi8) + 0xfffffffc);
        edi14 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(a4) + reinterpret_cast<unsigned char>(edi9) + 0xfffffffc);
        if (reinterpret_cast<unsigned char>(edi14) & 3) {
            eax10 = edi14;
            if (reinterpret_cast<unsigned char>(a4) >= reinterpret_cast<unsigned char>(4)) {
                goto *reinterpret_cast<int32_t*>("}@" + (reinterpret_cast<unsigned char>(eax10) & 3) * 4);
            }
            goto *reinterpret_cast<int32_t*>(reinterpret_cast<unsigned char>(a4) * 4 + 0x407da0);
        } else {
            ecx15 = reinterpret_cast<unsigned char>(a4) >> 2;
            edx16 = reinterpret_cast<unsigned char>(a4) & 3;
            if (ecx15 < 8) {
                goto *reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(-ecx15) * 4 + 0x407d50);
                goto *reinterpret_cast<int32_t*>(edx16 * 4 + 0x407da0);
            } else {
                while (ecx15) {
                    --ecx15;
                    *reinterpret_cast<void***>(edi14) = esi13->f0;
                    edi14 = edi14 + 0xfffffffc;
                    --esi13;
                }
                goto *reinterpret_cast<int32_t*>(edx16 * 4 + 0x407da0);
            }
        }
    }
    switch (ecx11) {
        addr_407bff_20:
    case 0:
        switch (edx12) {
        case 0:
            return eax10;
        case 1:
            *reinterpret_cast<void***>(edi9) = *reinterpret_cast<void***>(esi8);
            return a2;
        case 2:
            *reinterpret_cast<void***>(edi9) = *reinterpret_cast<void***>(esi8);
            *reinterpret_cast<void***>(edi9 + 1) = *reinterpret_cast<void***>(esi8 + 1);
            return a2;
        case 3:
            *reinterpret_cast<void***>(edi9) = *reinterpret_cast<void***>(esi8);
            *reinterpret_cast<void***>(edi9 + 1) = *reinterpret_cast<void***>(esi8 + 1);
            *reinterpret_cast<void***>(edi9 + 2) = *reinterpret_cast<void***>(esi8 + 2);
            return a2;
        }
        addr_407bec_25:
    case 1:
        *reinterpret_cast<int32_t*>(reinterpret_cast<uint32_t>(edi9 + ecx11 * 4) - 4) = *reinterpret_cast<int32_t*>(reinterpret_cast<uint32_t>(esi8 + ecx11 * 4) - 4);
        eax10 = reinterpret_cast<void**>(ecx11 * 4);
        esi8 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(esi8) + reinterpret_cast<unsigned char>(eax10));
        edi9 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(edi9) + reinterpret_cast<unsigned char>(eax10));
        goto addr_407bff_20;
        addr_407be4_29:
    case 2:
        *reinterpret_cast<int32_t*>(reinterpret_cast<uint32_t>(edi9 + ecx11 * 4) - 8) = *reinterpret_cast<int32_t*>(reinterpret_cast<uint32_t>(esi8 + ecx11 * 4) - 8);
        goto addr_407bec_25;
        addr_407bdc_32:
    case 3:
        *reinterpret_cast<int32_t*>(reinterpret_cast<uint32_t>(edi9 + ecx11 * 4) - 12) = *reinterpret_cast<int32_t*>(reinterpret_cast<uint32_t>(esi8 + ecx11 * 4) - 12);
        goto addr_407be4_29;
        addr_407bd4_35:
    case 4:
        *reinterpret_cast<int32_t*>(reinterpret_cast<uint32_t>(edi9 + ecx11 * 4) - 16) = *reinterpret_cast<int32_t*>(reinterpret_cast<uint32_t>(esi8 + ecx11 * 4) - 16);
        goto addr_407bdc_32;
        addr_407bcc_36:
    case 5:
        *reinterpret_cast<int32_t*>(reinterpret_cast<uint32_t>(edi9 + ecx11 * 4) - 20) = *reinterpret_cast<int32_t*>(reinterpret_cast<uint32_t>(esi8 + ecx11 * 4) - 20);
        goto addr_407bd4_35;
        addr_407bc4_37:
    case 6:
        *reinterpret_cast<int32_t*>(reinterpret_cast<uint32_t>(edi9 + ecx11 * 4) - 24) = *reinterpret_cast<int32_t*>(reinterpret_cast<uint32_t>(esi8 + ecx11 * 4) - 24);
        goto addr_407bcc_36;
    case 7:
        *reinterpret_cast<void***>(reinterpret_cast<uint32_t>(edi9 + ecx11 * 4) - 28) = eax10;
        goto addr_407bc4_37;
    }
    addr_407af3_7:
    while (ecx11) {
        --ecx11;
        *reinterpret_cast<void***>(edi9) = *reinterpret_cast<void***>(esi8);
        edi9 = edi9 + 4;
        esi8 = esi8 + 4;
    }
    goto *reinterpret_cast<int32_t*>(edx12 * 4 + 0x407c08);
    return eax10;
    *reinterpret_cast<void***>(edi14 + 3) = esi13->f3;
    return a2;
    *reinterpret_cast<void***>(edi14 + 3) = esi13->f3;
    *reinterpret_cast<void***>(edi14 + 2) = esi13->f2;
    return a2;
    *reinterpret_cast<void***>(edi14 + 3) = esi13->f3;
    *reinterpret_cast<void***>(edi14 + 2) = esi13->f2;
    *reinterpret_cast<void***>(edi14 + 1) = esi13->f1;
    return a2;
}

void** fun_407e90(void** a1, void** a2, void** a3, int32_t a4, void** a5, signed char a6, void** a7, void** a8);

int32_t fun_407df5(void** ecx, void** a2, void** a3, void** a4, int32_t a5, void** a6, void** a7, void** a8, int32_t a9, int32_t a10, int32_t a11, void** a12, void** a13, void** a14) {
    int32_t eax15;
    int32_t ecx16;
    int32_t v17;

    if (*reinterpret_cast<void***>(a6) != 0x19930520) {
        fun_408692(ecx);
    }
    if (!(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(a2 + 4)) & 0x66)) {
        if (!*reinterpret_cast<void***>(a6 + 12)) {
            addr_407e89_5:
            eax15 = 1;
        } else {
            if (!reinterpret_cast<int1_t>(*reinterpret_cast<void***>(a2) == 0xe06d7363) || (reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(a2 + 20)) <= reinterpret_cast<unsigned char>(0x19930520) || (ecx16 = (*reinterpret_cast<struct s39**>(a2 + 28))->f8, ecx16 == 0))) {
                v17 = a9;
                fun_407e90(a2, a3, a4, a5, a6, *reinterpret_cast<signed char*>(&v17), a7, a8);
                goto addr_407e89_5;
            } else {
                eax15 = reinterpret_cast<int32_t>(ecx16(a2, a3, a4, a5, a6, a7, a8, static_cast<uint32_t>(*reinterpret_cast<unsigned char*>(&a9))));
            }
        }
        return eax15;
    } else {
        if (*reinterpret_cast<void***>(a6 + 4) && !a7) {
            fun_40813c(ecx, a3, a5, a6, 0xff);
            goto addr_407e89_5;
        }
    }
}

int32_t RtlUnwind = 0xcfa4;

void fun_40b160() {
    goto RtlUnwind;
}

int32_t FileTimeToLocalFileTime = 0xcfe6;

int32_t FileTimeToSystemTime = 0xcfce;

void** fun_4061ec(void** a1, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7) {
    void* ebp8;
    void** ecx9;
    void** eax10;
    void* v11;
    void* v12;
    uint16_t v13;
    uint16_t v14;
    uint16_t v15;
    uint16_t v16;
    uint16_t v17;
    uint16_t v18;
    void** eax19;

    ebp8 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4);
    if (!*reinterpret_cast<void***>(a1) && !*reinterpret_cast<void***>(a1 + 4) || ((ecx9 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(ebp8) + 0xfffffff8), eax10 = reinterpret_cast<void**>(FileTimeToLocalFileTime(a1, ecx9)), eax10 == 0) || (v11 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(ebp8) - 24), v12 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(ebp8) - 8), eax10 = reinterpret_cast<void**>(FileTimeToSystemTime(v12, v11, a1, ecx9)), eax10 == 0))) {
        return 0xffffffff;
    } else {
        eax19 = fun_4087e0(ecx9, static_cast<uint32_t>(v13), static_cast<uint32_t>(v14), static_cast<uint32_t>(v15), static_cast<uint32_t>(v16), static_cast<uint32_t>(v17), static_cast<uint32_t>(v18), 0xff, v12, v11, a1, ecx9);
        return eax19;
    }
}

void** g410d4c = reinterpret_cast<void**>(0);

int32_t LCMapStringW = 0xd0e6;

int32_t LCMapStringA = 0xd0d6;

int32_t MultiByteToWideChar = 0xd0c0;

void** fun_4088a2(void** ecx, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7, void** a8, int32_t a9, void** a10, void** a11, void** a12, void** a13, ...) {
    void** eax14;
    void** esp15;
    void** esp16;
    void** v17;
    int1_t zf18;
    int32_t eax19;
    int32_t eax20;
    void** eax21;
    void** eax22;
    void** eax23;
    uint32_t eax24;
    void** v25;
    void** eax26;
    void** edi27;
    void** esi28;
    void** ebx29;
    void** v30;
    void** v31;
    void** v32;
    void** v33;
    void** v34;
    void** esp35;
    int32_t eax36;
    void** eax37;
    void** esi38;
    void** eax39;
    void** ebx40;
    int32_t eax41;
    void** v42;
    void** v43;
    void** eax44;
    int32_t eax45;

    eax14 = g0;
    esp15 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4 - 4 - 4 - 4 - 4);
    g0 = esp15;
    esp16 = reinterpret_cast<void**>(reinterpret_cast<uint32_t>(esp15 - 28) - 4 - 4 - 4);
    v17 = esp16;
    zf18 = g410d4c == 0;
    if (zf18) {
        eax19 = reinterpret_cast<int32_t>(LCMapStringW(0, 0x100, 0x40c34c, 1, 0, 0));
        esp16 = reinterpret_cast<void**>(reinterpret_cast<uint32_t>(esp16 - 4) - 4 - 4 + 4 - 4 - 4 - 4 - 4 - 4 + 4);
        if (!eax19) {
            eax20 = reinterpret_cast<int32_t>(LCMapStringA(0, 0x100, 0x40c348, 1, 0, 0, 0, 0x100, 0x40c34c, 1, 0, 0));
            esp16 = reinterpret_cast<void**>(reinterpret_cast<uint32_t>(esp16 - 4) - 4 - 4 - 4 - 4 - 4 - 4 + 4);
            if (!eax20) 
                goto addr_408a30_4;
            g410d4c = reinterpret_cast<void**>(2);
        } else {
            g410d4c = reinterpret_cast<void**>(1);
        }
    }
    if (reinterpret_cast<signed char>(a5) > reinterpret_cast<signed char>(0)) {
        eax21 = fun_408ac6(ecx, a4, a5);
        ecx = a5;
        esp16 = reinterpret_cast<void**>(reinterpret_cast<uint32_t>(esp16 - 4) - 4 - 4 + 4 + 4 + 4);
        a5 = eax21;
    }
    eax22 = g410d4c;
    if (!reinterpret_cast<int1_t>(eax22 == 2)) {
        if (!reinterpret_cast<int1_t>(eax22 == 1)) 
            goto addr_408a30_4;
        if (!a8) {
            eax23 = g410d28;
            a8 = eax23;
        }
        eax24 = reinterpret_cast<uint32_t>(-a9);
        v25 = reinterpret_cast<void**>((eax24 - (eax24 + reinterpret_cast<uint1_t>(eax24 < eax24 + reinterpret_cast<uint1_t>(!!a9))) & 8) + 1);
        eax26 = reinterpret_cast<void**>(MultiByteToWideChar(ecx, a8, v25, a4, a5, 0, 0));
        if (!eax26) 
            goto addr_408a30_4;
        fun_409800(ecx, a8, v25, a4, a5, 0, 0, edi27, esi28, ebx29, v30, v31, v32, v33, eax26, v17, v34, eax14, 0x409330, 0x40c350, 0);
        esp35 = reinterpret_cast<void**>(reinterpret_cast<uint32_t>(esp16 - 4) - 4 - 4 - 4 - 4 - 4 - 4 + 4 - 4 + 4);
        if (!esp35) 
            goto addr_408a30_4;
        eax36 = reinterpret_cast<int32_t>(MultiByteToWideChar(ecx, a8, 1, a4, a5, esp35, eax26, a8, v25, a4, a5, 0, 0));
        if (!eax36) 
            goto addr_408a30_4;
        eax37 = reinterpret_cast<void**>(LCMapStringW(ecx, a2, a3, esp35, eax26, 0, 0, a8, 1, a4, a5, esp35, eax26, a8, v25, a4, a5, 0, 0));
        esi38 = eax37;
        if (!esi38) 
            goto addr_408a30_4;
        if (*reinterpret_cast<unsigned char*>(&a3 + 1) & 4) 
            goto addr_408a04_19;
    } else {
        eax39 = reinterpret_cast<void**>(LCMapStringA(ecx, a2, a3, a4, a5, a6, a7));
        goto addr_408a32_21;
    }
    fun_409800(ecx, a2, a3, esp35, eax26, 0, 0, a8, 1, a4, a5, esp35, eax26, a8, v25, a4, a5, 0, 0, edi27, esi28);
    ebx40 = reinterpret_cast<void**>(reinterpret_cast<uint32_t>(esp35 - 4) - 4 - 4 - 4 - 4 - 4 - 4 + 4 - 4 - 4 - 4 - 4 - 4 - 4 - 4 + 4 - 4 + 4);
    if (!ebx40) 
        goto addr_408a30_4;
    eax41 = reinterpret_cast<int32_t>(LCMapStringW(ecx, a2, a3, esp35, eax26, ebx40, esi38, a2, a3, esp35, eax26, 0, 0, a8, 1, a4, a5, esp35, eax26, a8, v25, a4, a5, 0, 0));
    if (!eax41) 
        goto addr_408a30_4;
    if (a7) {
        v42 = a7;
        v43 = a6;
    } else {
        v42 = reinterpret_cast<void**>(0);
        v43 = reinterpret_cast<void**>(0);
    }
    eax44 = reinterpret_cast<void**>(WideCharToMultiByte(ecx, a8, 0x220, ebx40, esi38, v43, v42, 0, 0, a2, a3, esp35, eax26, ebx40, esi38, a2, a3, esp35, eax26, 0, 0, a8, 1, a4, a5, esp35, eax26, a8, v25, a4, a5, 0, 0));
    esi38 = eax44;
    if (!esi38) {
        addr_408a30_4:
        eax39 = reinterpret_cast<void**>(0);
    } else {
        addr_408abf_29:
        eax39 = esi38;
    }
    addr_408a32_21:
    g0 = eax14;
    return eax39;
    addr_408a04_19:
    if (!a7) 
        goto addr_408abf_29;
    if (reinterpret_cast<signed char>(esi38) > reinterpret_cast<signed char>(a7)) 
        goto addr_408a30_4;
    eax45 = reinterpret_cast<int32_t>(LCMapStringW(ecx, a2, a3, esp35, eax26, a6, a7, a2, a3, esp35, eax26, 0, 0, a8, 1, a4, a5, esp35, eax26, a8, v25, a4, a5, 0, 0));
    if (eax45) 
        goto addr_408abf_29; else 
        goto addr_408a30_4;
}

struct s62 {
    signed char f0;
    signed char f1;
};

void** g410c58 = reinterpret_cast<void**>(0);

void** g410c5c = reinterpret_cast<void**>(0);

void** g410c60 = reinterpret_cast<void**>(0);

void** g410c88 = reinterpret_cast<void**>(0);

int32_t SetDlgItemTextA = 0xcc76;

int32_t CreateDialogParamA = 0xccf6;

int32_t fun_402250(void** a1, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7, void** a8, void** a9, void** a10, void** a11, void** a12, void** a13);

int32_t GetDlgItem = 0xcce8;

int32_t fun_404200(void** ecx, int32_t a2, struct s62* a3, int32_t a4, void** a5, uint32_t a6, void** a7, void** a8, void** a9, void** a10) {
    void** v11;
    void** v12;
    void** esi13;
    void*** esp14;
    void** v15;
    void** edi16;
    int32_t ecx17;
    void** v18;
    int32_t eax19;
    int32_t v20;
    void** ecx21;
    void** v22;
    void** v23;
    int32_t eax24;
    int32_t v25;
    struct s62* esi26;
    void** v27;
    void** eax28;
    uint32_t eax29;
    uint32_t eax30;
    signed char al31;
    int32_t eax32;
    int32_t v33;
    void** eax34;
    int32_t eax35;
    int32_t eax36;
    int32_t v37;
    void** eax38;
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
    void** eax51;
    void** v52;
    void** v53;
    void** v54;
    void** v55;
    void** v56;
    void** v57;
    void** v58;
    void** v59;
    void** eax60;
    void** esi61;
    void** eax62;
    void** v63;
    void** v64;
    void** eax65;
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
    void** eax77;
    void** v78;
    void** v79;
    void** v80;
    void** v81;
    void** v82;
    void** v83;
    void** v84;
    void** v85;
    void** eax86;
    void** eax87;
    void** v88;
    void** v89;
    void** v90;
    void** v91;
    void** v92;
    void** v93;
    void** v94;
    void** eax95;
    void** eax96;
    void** v97;
    void** ebx98;
    void** eax99;
    int32_t esi100;
    void** edx101;
    void** eax102;
    void** eax103;
    int32_t eax104;
    void** ecx105;
    void** edx106;
    void* ecx107;
    void** v108;
    void** v109;
    void** v110;
    void** v111;
    void** v112;
    void** eax113;
    void** ebx114;
    void** esi115;
    void** v116;
    void** ebp117;
    void** ebp118;
    void** v119;
    void** v120;
    void** v121;
    struct s4* eax122;
    void** edi123;
    void** v124;
    void** v125;
    void** eax126;
    void** v127;
    void** v128;
    void** v129;
    void** v130;
    void** v131;
    void** v132;
    void** v133;
    void** v134;
    void** edi135;
    void** v136;
    void** v137;
    void** v138;
    void** v139;
    void** v140;
    void** v141;
    void** v142;
    void** v143;
    void** v144;
    void** v145;
    void** v146;
    void** v147;
    void** eax148;
    void** v149;
    void** v150;
    void** v151;
    void** edi152;
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
    void** v164;
    void** eax165;
    void** edi166;
    void** v167;
    void** v168;
    void** v169;
    void** v170;
    void** v171;
    void** v172;
    void** v173;
    void** v174;
    void** v175;
    void** v176;
    void** v177;
    void** v178;
    void** eax179;
    void** eax180;
    void** eax181;
    void** v182;
    void** v183;
    void** v184;
    void** v185;
    void** v186;
    void** v187;
    void** v188;
    void** v189;
    void** v190;
    void** v191;
    void** v192;
    void** v193;
    void** eax194;
    void** v195;
    void** v196;
    void** v197;
    void** v198;
    void** v199;
    void** v200;
    void** v201;
    void** v202;
    void** eax203;
    void** eax204;
    void** eax205;
    int1_t zf206;
    void** ecx207;
    void** edx208;
    void** al209;
    void** edx210;
    void** al211;
    void** v212;
    void** v213;
    void** v214;
    void** v215;
    void** v216;
    void** v217;
    void** edi218;
    uint32_t ecx219;
    uint32_t ecx220;
    void*** esi221;
    uint32_t edx222;
    void** edi223;
    uint32_t ecx224;
    void** edi225;
    uint32_t ecx226;
    void** esi227;
    void** ebp228;
    void** edi229;
    void** eax230;
    void** eax231;
    void** eax232;
    void** eax233;
    void** eax234;
    void** eax235;
    void** eax236;
    void** v237;
    void** v238;
    void** v239;
    void** v240;
    void** v241;
    void** v242;
    void** v243;
    void** v244;
    void** v245;
    void** v246;
    void** v247;
    void** edi248;
    uint32_t ecx249;
    void** edi250;
    void** edx251;
    uint32_t ecx252;
    void** v253;
    void** v254;
    void** v255;
    void** v256;
    void** v257;
    void** v258;
    void** v259;
    void** v260;
    void** v261;
    void** v262;

    v11 = reinterpret_cast<void**>(__return_address());
    v12 = esi13;
    esp14 = reinterpret_cast<void***>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 0x98 - 4 - 4);
    v15 = edi16;
    ecx17 = 37;
    while (ecx17) {
        --ecx17;
    }
    v18 = reinterpret_cast<void**>(esp14 + 12);
    GetVersionExA();
    eax19 = 0;
    *reinterpret_cast<unsigned char*>(&eax19) = reinterpret_cast<uint1_t>(v20 == 2);
    g410c94 = eax19;
    if (!eax19 || (g410c90 = reinterpret_cast<void**>(1), !1)) {
        g410c90 = reinterpret_cast<void**>(0);
    }
    ecx21 = v11;
    eax24 = fun_404700(ecx21, ecx21, v18, v15, v12, v22, 0x94, v23);
    if (!eax24) {
        addr_4046e4_7:
        goto v25;
    } else {
        esi26 = a3;
        if (esi26 && esi26->f0) {
            if (esi26->f0 == 32) {
                do {
                    esi26 = reinterpret_cast<struct s62*>(&esi26->f1);
                } while (esi26->f1 == 32);
            }
            while (esi26->f0 == 45 || esi26->f0 == 47) {
                v27 = reinterpret_cast<void**>(static_cast<int32_t>(esi26->f1));
                esi26 = reinterpret_cast<struct s62*>(&esi26->f1 + 1);
                eax28 = fun_406250(ecx21, v27);
                eax29 = reinterpret_cast<uint32_t>(eax28 - 81);
                if (!eax29) {
                    addr_4042c6_13:
                    g410c58 = reinterpret_cast<void**>(1);
                    goto addr_4042cc_14;
                } else {
                    eax30 = eax29 - 2;
                    if (!eax30) {
                        g410c5c = reinterpret_cast<void**>(1);
                        goto addr_4042c6_13;
                    } else {
                        if (eax30 - 5) {
                            addr_4042cc_14:
                            al31 = esi26->f0;
                            if (al31 == 32) {
                                do {
                                    addr_4042ed_18:
                                    esi26 = reinterpret_cast<struct s62*>(&esi26->f1);
                                } while (esi26->f1 == 32);
                            } else {
                                do {
                                    if (!al31) 
                                        goto addr_4042e8_20;
                                    if (al31 == 45) 
                                        goto addr_4042e8_20;
                                    if (al31 == 47) 
                                        goto addr_4042e8_20;
                                    al31 = esi26->f1;
                                    esi26 = reinterpret_cast<struct s62*>(&esi26->f1);
                                } while (al31 != 32);
                                goto addr_4042e6_24;
                            }
                        } else {
                            g410c60 = reinterpret_cast<void**>(1);
                            goto addr_4042c6_13;
                        }
                    }
                }
                continue;
                addr_4042e8_20:
                if (esi26->f0 != 32) 
                    continue; else 
                    goto addr_4042ed_18;
                addr_4042e6_24:
                goto addr_4042ed_18;
            }
        }
        eax32 = fun_4047c0();
        if (!eax32) {
            goto v33;
        }
        eax34 = g410c88;
        if (!(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax34)) & 2)) {
            fun_401dc0();
        }
        eax35 = fun_405140();
        if (!eax35) 
            goto addr_4046e4_7;
    }
    eax36 = fun_4051c0(v18, v15, v12);
    if (!eax36) {
        goto v37;
    }
    eax38 = g410c58;
    v39 = reinterpret_cast<void**>(1);
    if (eax38) 
        goto addr_4043be_35;
    eax51 = fun_402060(0, 1, 65, v18, v15, 1, v40, 0x94, v41, v42, v43, v44, v45, v46, v47, v48, v49, v50);
    eax60 = fun_4020b0(eax51, 65, v18, v15, 1, v52, 0x94, v53, v54, v55, v56, v57, v58, v59);
    esi61 = eax60;
    v39 = esi61;
    if (!reinterpret_cast<int1_t>(esi61 == 1)) 
        goto addr_4046ba_37;
    eax62 = g410c58;
    if (!eax62) {
        do {
            eax65 = fun_4024e0(ecx21, v18, v15, v39, v63, 0x94, v64);
            if (!eax65) 
                goto addr_4043be_35;
            eax77 = fun_402060(0, 15, 69, v18, v15, v39, v66, 0x94, v67, v68, v69, v70, v71, v72, v73, v74, v75, v76);
            eax86 = fun_4020b0(eax77, 69, v18, v15, v39, v78, 0x94, v79, v80, v81, v82, v83, v84, v85);
            esi61 = eax86;
            if (esi61 == 2) 
                goto addr_4046ba_37;
            eax87 = g410c58;
            v39 = reinterpret_cast<void**>(1);
        } while (!eax87);
        goto addr_4043be_35;
    }
    if (esi61 == 2) {
        addr_4046ba_37:
        fun_405260();
        fun_402130(ecx21, v18, v15, v39, v88, 0x94, v89, v90, v91, v92, v93, v94);
        if (reinterpret_cast<int1_t>(esi61 == 1) && ((eax95 = g410c60, !eax95) && (eax96 = g410c5c, !eax96))) {
            fun_403fc0(ecx21);
        }
    } else {
        addr_4043be_35:
        ecx21 = g410c88;
        v97 = ebx98;
        if (!*reinterpret_cast<void***>(ecx21 + 4)) {
            addr_404551_45:
            eax99 = g410c58;
            esi100 = SetDlgItemTextA;
            if (!eax99 && (edx101 = g410ca8, eax102 = g410cac, eax103 = reinterpret_cast<void**>(CreateDialogParamA(eax102, 0x6e, edx101, fun_402250, 0)), g410ca4 = eax103, !!eax103)) {
                eax104 = reinterpret_cast<int32_t>(GetDlgItem(eax103, 0x3f1, eax102, 0x6e, edx101, fun_402250, 0));
                ecx105 = g410c84;
                edx106 = g410c74;
                g410ca0 = eax104;
                ecx107 = g410c7c;
                g410c98 = reinterpret_cast<void**>(reinterpret_cast<uint32_t>(edx106 + reinterpret_cast<unsigned char>(ecx105) * 2) + reinterpret_cast<uint32_t>(ecx107));
                eax113 = fun_402060(0, 11, eax103, 0x3f1, eax102, 0x6e, edx101, fun_402250, 0, v18, v15, v39, v108, 0x94, v109, v110, v111, v112);
                ecx21 = g410ca4;
                esi100(ecx21, 0x3e8, eax113, eax103, 0x3f1, eax102, 0x6e, edx101, fun_402250, 0);
                goto addr_4045ce_47;
            }
        } else {
            ebx114 = g410c54;
            esi115 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(ecx21 + 4)) + reinterpret_cast<unsigned char>(ecx21));
            v116 = ebp117;
            ebp118 = esi115;
            if (reinterpret_cast<int1_t>(*reinterpret_cast<void***>(esi115) == 34)) {
                ebp118 = esi115 + 1;
            }
            if (reinterpret_cast<int1_t>(*reinterpret_cast<void***>(ebp118) == 32)) {
                do {
                    ++ebp118;
                } while (*reinterpret_cast<void***>(ebp118 + 1) == 32);
            }
            if (!reinterpret_cast<int1_t>(*reinterpret_cast<void***>(ebp118) == 35)) 
                goto addr_404450_53;
            eax122 = fun_403880(0, esi115, 0xffdc, v116, v97, v18, v15, v39, v119, 0x94, v120, v121);
            edi123 = reinterpret_cast<void**>(&eax122->f1);
            eax126 = fun_40561b(ecx21, edi123, 0, esi115, 0xffdc, v116, v97, v18, v15, v39, v124, 0x94, v125);
            ebx114 = eax126;
            fun_403880(ebx114, esi115, edi123, edi123, 0, esi115, 0xffdc, v116, v97, v18, v15, v39);
            ecx21 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(ebp118) - reinterpret_cast<unsigned char>(esi115));
            if (*reinterpret_cast<signed char*>(reinterpret_cast<unsigned char>(ecx21) + reinterpret_cast<unsigned char>(ebx114)) != 35) 
                goto addr_404450_53; else 
                goto addr_404425_55;
        }
    }
    fun_404790(ecx21, v18, v15, v39, v127, 0x94, v128, v129, v130, v131, v132, v133, v134);
    goto addr_4046e4_7;
    addr_4045ce_47:
    fun_402840();
    fun_403bb0(ecx21);
    edi135 = g410ca4;
    if (edi135) {
        eax148 = fun_402060(0, 12, v18, v15, v39, v136, 0x94, v137, v138, v139, v140, v141, v142, v143, v144, v145, v146, v147);
        esi100(edi135, 0x3e8, eax148);
    }
    fun_402c00(v18, v15, v39, v149, 0x94, v150, v151);
    fun_402cc0();
    edi152 = g410ca4;
    if (edi152) {
        eax165 = fun_402060(0, 13, v18, v15, v39, v153, 0x94, v154, v155, v156, v157, v158, v159, v160, v161, v162, v163, v164);
        esi100(edi152, 0x3e8, eax165);
    }
    fun_403d10(ecx21);
    edi166 = g410ca4;
    if (edi166) {
        eax179 = fun_402060(0, 14, v18, v15, v39, v167, 0x94, v168, v169, v170, v171, v172, v173, v174, v175, v176, v177, v178);
        esi100(edi166, 0x3e8, eax179);
    }
    fun_402f10(ecx21, v18);
    eax180 = g410ca4;
    if (eax180) {
        DestroyWindow(eax180);
    }
    eax181 = g410c58;
    if (!eax181 && ((eax194 = fun_402060(0, 2, v18, v15, v39, v182, 0x94, v183, v184, v185, v186, v187, v188, v189, v190, v191, v192, v193), !!eax194) && *reinterpret_cast<void***>(eax194))) {
        fun_4020b0(eax194, 64, v18, v15, v39, v195, 0x94, v196, v197, v198, v199, v200, v201, v202);
    }
    eax203 = g410c60;
    if (!eax203 && ((eax204 = g410c5c, !eax204) && (ecx21 = g410c88, !!*reinterpret_cast<void***>(ecx21 + 8)))) {
        eax205 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(ecx21 + 8)) + reinterpret_cast<unsigned char>(ecx21));
        fun_401950(eax205, ".htm", v18, v15, v39);
    }
    esi61 = v39;
    goto addr_4046ba_37;
    addr_404450_53:
    zf206 = ebx114 == g410c54;
    if (zf206) {
        if (!reinterpret_cast<int1_t>(*reinterpret_cast<void***>(esi115) == 34)) {
            ecx207 = g410c50;
            edx208 = ebx114;
            do {
                al209 = *reinterpret_cast<void***>(ecx207);
                ++ecx207;
                *reinterpret_cast<void***>(edx208) = al209;
                ++edx208;
            } while (al209);
        } else {
            *reinterpret_cast<void***>(ebx114) = reinterpret_cast<void**>(34);
            ecx207 = g410c50;
            edx210 = ebx114 + 1;
            do {
                al211 = *reinterpret_cast<void***>(ecx207);
                ++ecx207;
                *reinterpret_cast<void***>(edx210) = al211;
                ++edx210;
            } while (al211);
        }
        fun_401800(ecx207, ebx114, v116, v97, v18, v15, v39, v212, 0x94, v213, v214, v215, v216, v217);
        edi218 = ebp118;
        ecx219 = 0xffffffff;
        do {
            if (!ecx219) 
                break;
            --ecx219;
            ++edi218;
        } while (*reinterpret_cast<void***>(edi218));
        ecx220 = ~ecx219;
        esi221 = reinterpret_cast<void***>(reinterpret_cast<unsigned char>(edi218) - ecx220);
        edx222 = ecx220;
        edi223 = ebx114;
        ecx224 = 0xffffffff;
        do {
            if (!ecx224) 
                break;
            --ecx224;
            ++edi223;
            ++esi221;
        } while (*reinterpret_cast<void***>(edi223));
        edi225 = edi223 - 1;
        ecx226 = edx222 >> 2;
        while (ecx226) {
            --ecx226;
            *reinterpret_cast<void***>(edi225) = *esi221;
            edi225 = edi225 + 4;
            esi221 = esi221 + 4;
        }
        ecx21 = reinterpret_cast<void**>(edx222 & 3);
        while (ecx21) {
            --ecx21;
            *reinterpret_cast<void***>(edi225) = *esi221;
            ++edi225;
            ++esi221;
        }
    }
    esi227 = ebx114;
    ebp228 = reinterpret_cast<void**>(0x410cb4);
    if (reinterpret_cast<int1_t>(*reinterpret_cast<void***>(ebx114) == 34) && ((edi229 = ebx114 + 1, eax230 = fun_4054e0(ecx21, edi229, 34, v116, v97, v18), !!eax230) && (ecx21 = eax230 + 1, !!*reinterpret_cast<void***>(eax230 + 1)))) {
        esi227 = edi229;
        if (reinterpret_cast<int1_t>(*reinterpret_cast<void***>(esi227) == 32)) {
            do {
                ++esi227;
            } while (*reinterpret_cast<void***>(esi227 + 1) == 32);
        }
        *reinterpret_cast<void***>(eax230) = reinterpret_cast<void**>(0);
        eax231 = eax230 - 1;
        if (reinterpret_cast<unsigned char>(eax231) > reinterpret_cast<unsigned char>(esi227)) {
            do {
                if (!reinterpret_cast<int1_t>(*reinterpret_cast<void***>(eax231) == 32)) 
                    break;
                *reinterpret_cast<void***>(eax231) = reinterpret_cast<void**>(0);
                --eax231;
            } while (reinterpret_cast<unsigned char>(eax231) > reinterpret_cast<unsigned char>(esi227));
        }
        eax232 = ecx21;
        if (reinterpret_cast<int1_t>(*reinterpret_cast<void***>(eax232) == 32)) {
            do {
                ecx21 = *reinterpret_cast<void***>(eax232 + 1);
                ++eax232;
            } while (ecx21 == 32);
        }
        ebp228 = eax232;
    }
    eax233 = g410c60;
    if (!eax233 || (eax234 = g410c5c, !!eax234)) {
        eax235 = g410c88;
        ecx21 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax235)) & 1);
        fun_401dd0(esi227, ebp228, ecx21);
    }
    eax236 = g410c54;
    if (ebx114 != eax236) {
        fun_405a1e(ecx21, ebx114, v97, v18, v15, v39, v237, 0x94, v238, v239, v240, v241, v242, v243, v244, v245, v246, v247);
        goto addr_404551_45;
    }
    addr_404425_55:
    edi248 = esi115;
    ecx249 = 0xffffffff;
    do {
        if (!ecx249) 
            break;
        --ecx249;
        ++edi248;
        ++esi115;
    } while (*reinterpret_cast<void***>(edi248));
    edi250 = ebx114;
    edx251 = reinterpret_cast<void**>(~ecx249 - 1);
    ecx252 = 0xffffffff;
    do {
        if (!ecx252) 
            break;
        --ecx252;
        ++edi250;
        ++esi115;
    } while (*reinterpret_cast<void***>(edi250));
    ecx21 = reinterpret_cast<void**>(~ecx252 - 1);
    if (edx251 != ecx21) 
        goto addr_404450_53;
    fun_405a1e(ecx21, ebx114, v116, v97, v18, v15, v39, v253, 0x94, v254, v255, v256, v257, v258, v259, v260, v261, v262);
    ebx114 = g410c54;
    goto addr_404450_53;
}

void** fun_408ca7(void** a1);

int32_t UnhandledExceptionFilter = 0xd0f6;

void** g410d50 = reinterpret_cast<void**>(0);

int32_t g410970 = 3;

int32_t g410974 = 7;

void** g41097c = reinterpret_cast<void**>(0x8c);

uint32_t fun_408b66(void** a1, void** a2) {
    void** eax3;
    void** ebx4;
    uint32_t eax5;
    void** ecx6;
    void** v7;
    int32_t ecx8;
    int32_t edx9;
    int32_t edx10;
    int32_t edx11;
    uint32_t* esi12;
    void** esi13;

    eax3 = fun_408ca7(a1);
    if (!eax3 || (ebx4 = *reinterpret_cast<void***>(eax3 + 8), ebx4 == 0)) {
        eax5 = reinterpret_cast<uint32_t>(UnhandledExceptionFilter(a1, a2));
    } else {
        if (!reinterpret_cast<int1_t>(ebx4 == 5)) {
            if (ebx4 != 1) {
                ecx6 = g410d50;
                v7 = ecx6;
                g410d50 = a2;
                if (!reinterpret_cast<int1_t>(*reinterpret_cast<void***>(eax3 + 4) == 8)) {
                    *reinterpret_cast<void***>(eax3 + 8) = reinterpret_cast<void**>(0);
                    ebx4();
                } else {
                    ecx8 = g410970;
                    edx9 = g410974;
                    edx10 = edx9 + ecx8;
                    if (ecx8 < edx10) {
                        edx11 = edx10 - ecx8;
                        esi12 = reinterpret_cast<uint32_t*>((ecx8 + ecx8 * 2) * 4 + 0x410900);
                        do {
                            *esi12 = 0;
                            esi12 = esi12 + 3;
                            --edx11;
                        } while (edx11);
                    }
                    esi13 = g41097c;
                    if (!reinterpret_cast<int1_t>(*reinterpret_cast<void***>(eax3) == 0xc000008e)) {
                        if (!reinterpret_cast<int1_t>(*reinterpret_cast<void***>(eax3) == 0xc0000090)) {
                            if (!reinterpret_cast<int1_t>(*reinterpret_cast<void***>(eax3) == 0xc0000091)) {
                                if (!reinterpret_cast<int1_t>(*reinterpret_cast<void***>(eax3) == 0xc0000093)) {
                                    if (!reinterpret_cast<int1_t>(*reinterpret_cast<void***>(eax3) == 0xc000008d)) {
                                        if (!reinterpret_cast<int1_t>(*reinterpret_cast<void***>(eax3) == 0xc000008f)) {
                                            if (reinterpret_cast<int1_t>(*reinterpret_cast<void***>(eax3) == 0xc0000092)) {
                                                g41097c = reinterpret_cast<void**>(0x8a);
                                            }
                                        } else {
                                            g41097c = reinterpret_cast<void**>(0x86);
                                        }
                                    } else {
                                        g41097c = reinterpret_cast<void**>(0x82);
                                    }
                                } else {
                                    g41097c = reinterpret_cast<void**>(0x85);
                                }
                            } else {
                                g41097c = reinterpret_cast<void**>(0x84);
                            }
                        } else {
                            g41097c = reinterpret_cast<void**>(0x81);
                        }
                    } else {
                        g41097c = reinterpret_cast<void**>(0x83);
                    }
                    ebx4();
                    g41097c = esi13;
                }
                g410d50 = v7;
            }
            eax5 = 0xffffffff;
        } else {
            *reinterpret_cast<void***>(eax3 + 8) = reinterpret_cast<void**>(0);
            eax5 = 1;
        }
    }
    return eax5;
}

int32_t HeapCreate = 0xd06e;

int32_t HeapDestroy = 0xd060;

int32_t fun_406702(void** ecx, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7, void** a8, void** a9, void** a10, void** a11, void** a12, void** a13, void** a14, void** a15) {
    void** eax16;
    void** eax17;
    void*** eax18;
    void** eax19;
    void** v20;

    eax16 = reinterpret_cast<void**>(0);
    *reinterpret_cast<unsigned char*>(&eax16) = reinterpret_cast<uint1_t>(a2 == 0);
    eax17 = reinterpret_cast<void**>(HeapCreate());
    g4112c0 = eax17;
    if (eax17) {
        eax18 = fun_4065ba(ecx, eax16, 0x1000, 0, __return_address(), a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15);
        g4112c4 = eax18;
        if (!reinterpret_cast<int1_t>(eax18 == 3)) {
            if (!reinterpret_cast<int1_t>(eax18 == 2)) 
                goto addr_40675b_4;
            eax19 = fun_407377();
        } else {
            eax19 = fun_40675f();
            ecx = reinterpret_cast<void**>(0x3f8);
        }
        if (eax19) {
            addr_40675b_4:
            goto eax16;
        } else {
            v20 = g4112c0;
            HeapDestroy(ecx, v20);
        }
    }
    goto eax16;
}

void*** fun_4095ab(void** a1, void** a2, void** a3, uint32_t a4) {
    void*** v5;
    void** edi6;
    void** bl7;
    void** esi8;
    int1_t less_or_equal9;
    void** ecx10;
    uint32_t eax11;
    void** eax12;
    void** v13;
    void*** eax14;
    void** ecx15;
    void*** v16;
    int1_t less_or_equal17;
    void** esi18;
    void** eax19;
    void** eax20;
    int1_t less_or_equal21;
    void** eax22;
    void** eax23;
    void** eax24;
    uint32_t ecx25;
    void** v26;
    uint32_t ecx27;
    uint32_t ecx28;
    unsigned char cl29;

    v5 = reinterpret_cast<void***>(0);
    edi6 = a1;
    bl7 = *reinterpret_cast<void***>(edi6);
    esi8 = edi6 + 1;
    while (1) {
        less_or_equal9 = reinterpret_cast<signed char>(g4108ec) <= reinterpret_cast<signed char>(1);
        if (less_or_equal9) {
            ecx10 = g4106e0;
            eax11 = reinterpret_cast<unsigned char>(bl7);
            *reinterpret_cast<void***>(&eax11) = *reinterpret_cast<void***>(ecx10 + eax11 * 2);
            eax12 = reinterpret_cast<void**>(eax11 & 8);
        } else {
            eax12 = fun_408af1(ecx10, static_cast<uint32_t>(reinterpret_cast<unsigned char>(bl7)), 8);
            ecx10 = reinterpret_cast<void**>(8);
        }
        if (!eax12) 
            break;
        bl7 = *reinterpret_cast<void***>(esi8);
        ++esi8;
    }
    v13 = esi8;
    if (!reinterpret_cast<int1_t>(bl7 == 45)) {
        if (!reinterpret_cast<int1_t>(bl7 == 43)) {
            addr_40960c_9:
            if (reinterpret_cast<signed char>(a3) < reinterpret_cast<signed char>(0) || (a3 == 1 || reinterpret_cast<signed char>(a3) > reinterpret_cast<signed char>(36))) {
                if (a2) {
                    *reinterpret_cast<void***>(a2) = edi6;
                }
                eax14 = reinterpret_cast<void***>(0);
            } else {
                ecx15 = reinterpret_cast<void**>(16);
                if (a3) {
                    addr_409654_14:
                    if (reinterpret_cast<int1_t>(a3 == 16) && (reinterpret_cast<int1_t>(bl7 == 48) && (*reinterpret_cast<void***>(esi8) == 0x78 || reinterpret_cast<int1_t>(*reinterpret_cast<void***>(esi8) == 88)))) {
                        bl7 = *reinterpret_cast<void***>(esi8 + 1);
                        v13 = esi8 + 1 + 1;
                    }
                } else {
                    if (bl7 == 48) {
                        if (*reinterpret_cast<void***>(esi8) == 0x78 || *reinterpret_cast<void***>(esi8) == 88) {
                            a3 = reinterpret_cast<void**>(16);
                            goto addr_409654_14;
                        } else {
                            a3 = reinterpret_cast<void**>(8);
                        }
                    } else {
                        a3 = reinterpret_cast<void**>(10);
                    }
                }
                v16 = reinterpret_cast<void***>(-1 / reinterpret_cast<unsigned char>(a3));
                while (1) {
                    less_or_equal17 = reinterpret_cast<signed char>(g4108ec) <= reinterpret_cast<signed char>(1);
                    esi18 = reinterpret_cast<void**>(static_cast<uint32_t>(reinterpret_cast<unsigned char>(bl7)));
                    if (less_or_equal17) {
                        eax19 = g4106e0;
                        eax19 = *reinterpret_cast<void***>(eax19 + reinterpret_cast<unsigned char>(esi18) * 2);
                        eax20 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(eax19) & 4);
                    } else {
                        eax20 = fun_408af1(ecx15, esi18, 4);
                        ecx15 = reinterpret_cast<void**>(4);
                    }
                    if (!eax20) {
                        less_or_equal21 = reinterpret_cast<signed char>(g4108ec) <= reinterpret_cast<signed char>(1);
                        if (less_or_equal21) {
                            eax22 = g4106e0;
                            eax22 = *reinterpret_cast<void***>(eax22 + reinterpret_cast<unsigned char>(esi18) * 2);
                            eax23 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(eax22) & 0x103);
                        } else {
                            eax23 = fun_408af1(ecx15, esi18, 0x103);
                            ecx15 = reinterpret_cast<void**>(0x103);
                        }
                        if (!eax23) 
                            break;
                        eax20 = fun_406250(ecx15, static_cast<int32_t>(reinterpret_cast<signed char>(bl7)));
                        ecx15 = eax20 - 55;
                    } else {
                        ecx15 = bl7 - 48;
                    }
                    if (reinterpret_cast<unsigned char>(ecx15) >= reinterpret_cast<unsigned char>(a3)) 
                        break;
                    a4 = a4 | 8;
                    if (reinterpret_cast<uint32_t>(v5) < reinterpret_cast<uint32_t>(v16) || v5 == v16 && reinterpret_cast<unsigned char>(ecx15) <= reinterpret_cast<unsigned char>(-1 % reinterpret_cast<unsigned char>(a3))) {
                        v5 = reinterpret_cast<void***>(reinterpret_cast<uint32_t>(v5) * reinterpret_cast<unsigned char>(a3) + reinterpret_cast<unsigned char>(ecx15));
                    } else {
                        a4 = a4 | 4;
                    }
                    eax24 = v13;
                    ++v13;
                    bl7 = *reinterpret_cast<void***>(eax24);
                }
                ecx25 = a4;
                v26 = v13 - 1;
                if (*reinterpret_cast<unsigned char*>(&ecx25) & 8) {
                    if (*reinterpret_cast<unsigned char*>(&ecx25) & 4 || !(*reinterpret_cast<unsigned char*>(&ecx25) & 1) && ((ecx27 = ecx25 & 2, !!ecx27) && reinterpret_cast<uint32_t>(v5) > 0x80000000 || !ecx27 && reinterpret_cast<uint32_t>(v5) > 0x7fffffff)) {
                        g410cb8 = reinterpret_cast<uint32_t*>(34);
                        if (!(*reinterpret_cast<unsigned char*>(&a4) & 1)) {
                            ecx28 = a4;
                            cl29 = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&ecx28) & 2);
                            *reinterpret_cast<unsigned char*>(&ecx28) = -cl29;
                            v5 = reinterpret_cast<void***>(-(ecx28 - (ecx28 + reinterpret_cast<uint1_t>(ecx28 < ecx28 + reinterpret_cast<uint1_t>(!!cl29)))) + 0x7fffffff);
                        } else {
                            v5 = reinterpret_cast<void***>(0xffffffff);
                        }
                    }
                } else {
                    if (a2) {
                        v26 = a1;
                    }
                    v5 = reinterpret_cast<void***>(0);
                }
                if (a2) {
                    *reinterpret_cast<void***>(a2) = v26;
                }
                if (*reinterpret_cast<unsigned char*>(&a4) & 2) {
                    v5 = reinterpret_cast<void***>(-reinterpret_cast<uint32_t>(v5));
                }
                eax14 = v5;
            }
        } else {
            addr_409606_50:
            bl7 = *reinterpret_cast<void***>(esi8);
            ++esi8;
            v13 = esi8;
            goto addr_40960c_9;
        }
        return eax14;
    } else {
        a4 = a4 | 2;
        goto addr_409606_50;
    }
}

void** fun_407e90(void** a1, void** a2, void** a3, int32_t a4, void** a5, signed char a6, void** a7, void** a8) {
    void** esp9;
    void* esp10;
    void** v11;
    void** eax12;
    void** v13;
    void** ecx14;
    void** esi15;
    void*** esp16;
    void** eax17;
    int32_t eax18;
    void** eax19;
    void** esp20;
    void** v21;
    int32_t eax22;
    void** edi23;
    struct s36* eax24;
    struct s36* ebx25;
    void** v26;
    void** v27;
    struct s37* v28;
    uint1_t less_or_equal29;
    int32_t v30;
    struct s38** edi31;
    uint1_t less_or_equal32;
    int32_t v33;
    struct s39* v34;
    struct s38* v35;
    int32_t eax36;
    struct s38* v37;
    void** edi38;
    void** esi39;
    void** ebx40;
    void** v41;
    void** v42;
    void** v43;
    int1_t zf44;
    void** v45;
    void** v46;
    void** v47;

    esp9 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4);
    esp10 = reinterpret_cast<void*>(esp9 - 24);
    *reinterpret_cast<unsigned char*>(&v11) = 0;
    eax12 = *reinterpret_cast<void***>(a2 + 8);
    v13 = eax12;
    if (reinterpret_cast<signed char>(eax12) < reinterpret_cast<signed char>(0xffffffff) || (ecx14 = a5, reinterpret_cast<signed char>(eax12) >= reinterpret_cast<signed char>(*reinterpret_cast<void***>(ecx14 + 4)))) {
        eax12 = fun_408692(ecx14);
        esp10 = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(esp10) - 4 + 4);
    }
    esi15 = a1;
    esp16 = reinterpret_cast<void***>(reinterpret_cast<uint32_t>(esp10) - 4 - 4 - 4);
    if (!reinterpret_cast<int1_t>(*reinterpret_cast<void***>(esi15) == 0xe06d7363)) 
        goto addr_40800c_4;
    if (reinterpret_cast<int1_t>(*reinterpret_cast<void***>(esi15 + 16) == 3) && (reinterpret_cast<int1_t>(*reinterpret_cast<void***>(esi15 + 20) == 0x19930520) && !*reinterpret_cast<struct s39**>(esi15 + 28))) {
        esi15 = g410d3c;
        if (!esi15) {
            addr_408007_7:
            return eax12;
        } else {
            eax17 = g410d40;
            a3 = eax17;
            *reinterpret_cast<unsigned char*>(&v11) = 1;
            eax18 = fun_409bc9(esi15);
            ecx14 = reinterpret_cast<void**>(1);
            esp16 = esp16 - 4 - 4 - 4 + 4 + 4 + 4;
            if (!eax18) {
                fun_408692(1);
                esp16 = esp16 - 4 + 4;
            }
            if (!reinterpret_cast<int1_t>(*reinterpret_cast<void***>(esi15) == 0xe06d7363)) 
                goto addr_40800c_4;
            if (reinterpret_cast<int1_t>(*reinterpret_cast<void***>(esi15 + 16) == 3) && (reinterpret_cast<int1_t>(*reinterpret_cast<void***>(esi15 + 20) == 0x19930520) && !*reinterpret_cast<struct s39**>(esi15 + 28))) {
                fun_408692(1);
                esp16 = esp16 - 4 + 4;
            }
        }
    }
    if (!reinterpret_cast<int1_t>(*reinterpret_cast<void***>(esi15) == 0xe06d7363) || (!reinterpret_cast<int1_t>(*reinterpret_cast<void***>(esi15 + 16) == 3) || !reinterpret_cast<int1_t>(*reinterpret_cast<void***>(esi15 + 20) == 0x19930520))) {
        addr_40800c_4:
        if (a6) {
            eax19 = g0;
            esp20 = reinterpret_cast<void**>(esp16 - 4 - 4 - 4 - 4 - 4);
            g0 = esp20;
            v21 = reinterpret_cast<void**>(reinterpret_cast<uint32_t>(esp20 - 4) - 4 - 4 - 4 - 4);
            eax22 = g410d48;
            if (eax22) 
                goto addr_40866e_16;
        } else {
            eax12 = fun_408037(ecx14, esi15, a2, a3, a4, a5, v13, a7, a8);
            goto addr_408007_7;
        }
    } else {
        edi23 = v13;
        eax24 = fun_405d79(ecx14, a5, a7, edi23, esp9 + 0xfffffffc, esp9 + 0xffffffe8);
        ebx25 = eax24;
        while (eax12 = v26, reinterpret_cast<unsigned char>(eax12) < reinterpret_cast<unsigned char>(v27)) {
            if (reinterpret_cast<signed char>(ebx25->f0) > reinterpret_cast<signed char>(edi23) || reinterpret_cast<signed char>(edi23) > reinterpret_cast<signed char>(ebx25->f4)) {
                addr_407fec_21:
                ++v26;
                ++ebx25;
                continue;
            } else {
                v28 = ebx25->f16;
                less_or_equal29 = reinterpret_cast<uint1_t>(reinterpret_cast<uint1_t>(ebx25->f12 < 0) | reinterpret_cast<uint1_t>(ebx25->f12 == 0));
                v30 = ebx25->f12;
                if (less_or_equal29) {
                    addr_407fe9_23:
                    edi23 = v13;
                    goto addr_407fec_21;
                } else {
                    do {
                        edi31 = &(*reinterpret_cast<struct s39**>(esi15 + 28))->f12->f4;
                        less_or_equal32 = reinterpret_cast<uint1_t>(reinterpret_cast<uint1_t>((*reinterpret_cast<struct s39**>(esi15 + 28))->f12->f0 < 0) | reinterpret_cast<uint1_t>((*reinterpret_cast<struct s39**>(esi15 + 28))->f12->f0 == 0));
                        v33 = (*reinterpret_cast<struct s39**>(esi15 + 28))->f12->f0;
                        if (!less_or_equal32) {
                            do {
                                v34 = *reinterpret_cast<struct s39**>(esi15 + 28);
                                v35 = *edi31;
                                eax36 = fun_4080df(v28, v35, v34);
                                if (eax36) 
                                    goto addr_407fc5_26;
                                --v33;
                                ++edi31;
                            } while (v33 > eax36);
                        }
                        --v30;
                        ++v28;
                    } while (v30 > 0);
                }
            }
            goto addr_407fe9_23;
            addr_407fc5_26:
            v37 = *edi31;
            fun_4081f0(ecx14, esi15, a2, a3, a4, a5, v28, v37, ebx25, a7, a8, v11);
            goto addr_407fe9_23;
        }
        if (!a6) 
            goto addr_408007_7; else 
            goto addr_407ffd_31;
    }
    addr_408684_32:
    fun_40868d(ecx14, 0x19930520, esi15, 0xe06d7363, v21, ecx14, eax19, 0x409330, 0x40c318, 0xffffffff, esp9, edi38, esi39, ebx40, v41, v11, v13, v42, v43);
    fun_409441(ecx14, 10, 0x19930520, esi15, 0xe06d7363, v21, ecx14, eax19, 0x409330, 0x40c318);
    fun_40a894(22, 10, 0x19930520, esi15, 0xe06d7363, v21, ecx14, eax19, 0x409330, 0x40c318);
    fun_4053b9(10, 3, 0x19930520, esi15, 0xe06d7363, v21, ecx14, eax19, 0x409330, 0x40c318);
    zf44 = g410f20 == 0;
    if (zf44) {
        fun_409cd0(10, 3, 0x19930520, esi15, 0xe06d7363, v21, ecx14, eax19, 0x409330, 0x40c318, 0xffffffff, esp9, edi38, esi39, ebx40, v45, v11, v13, v46, v47);
        ++g410f20;
    }
    goto 3;
    addr_40866e_16:
    eax22(0x19930520, esi15, 0xe06d7363, v21, ecx14, eax19, 0x409330, 0x40c318);
    goto addr_408684_32;
    addr_407ffd_31:
    eax12 = fun_408565(ecx14, esi15);
    goto addr_408007_7;
}

int32_t fun_4081da(void** ecx, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7, void** a8) {
    void** eax9;
    void** esp10;
    void** v11;
    int32_t eax12;
    void** edi13;
    void** esi14;
    void** ebx15;
    void** ebp16;
    int1_t zf17;

    if (*reinterpret_cast<void***>(*reinterpret_cast<void***>(a2)) != 0xe06d7363) {
        return 0;
    }
    eax9 = g0;
    esp10 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4 - 4 - 4 - 4 - 4);
    g0 = esp10;
    v11 = reinterpret_cast<void**>(reinterpret_cast<uint32_t>(esp10 - 4) - 4 - 4 - 4 - 4);
    eax12 = g410d48;
    if (eax12) 
        goto addr_40866e_5;
    addr_408684_6:
    fun_40868d(ecx, edi13, esi14, ebx15, v11, ecx, eax9, 0x409330, 0x40c318, 0xffffffff, ebp16, __return_address(), a2, a3, a4, a5, a6, a7, a8);
    fun_409441(ecx, 10, edi13, esi14, ebx15, v11, ecx, eax9, 0x409330, 0x40c318);
    fun_40a894(22, 10, edi13, esi14, ebx15, v11, ecx, eax9, 0x409330, 0x40c318);
    fun_4053b9(10, 3, edi13, esi14, ebx15, v11, ecx, eax9, 0x409330, 0x40c318);
    zf17 = g410f20 == 0;
    if (zf17) {
        fun_409cd0(10, 3, edi13, esi14, ebx15, v11, ecx, eax9, 0x409330, 0x40c318, 0xffffffff, ebp16, __return_address(), a2, a3, a4, a5, a6, a7, a8);
        ++g410f20;
    }
    goto 3;
    addr_40866e_5:
    eax12(edi13, esi14, ebx15, v11, ecx, eax9, 0x409330, 0x40c318);
    goto addr_408684_6;
}

int32_t fun_405bd7(void** a1, void** a2, int32_t a3, void** a4, int32_t a5) {
    void** eax6;
    int32_t eax7;

    eax6 = g0;
    g0 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4 + 0xffffffec);
    eax7 = fun_4085f0(a1, a3, a1, a5);
    g0 = eax6;
    return eax7;
}

struct s63 {
    signed char[16] pad16;
    int32_t f16;
};

struct s64 {
    signed char[20] pad20;
    int32_t f20;
};

void** fun_408331(void** ecx) {
    int32_t esi2;
    int32_t ebp3;
    int32_t ebp4;
    void** eax5;
    int32_t ebp6;
    int32_t* edi7;
    struct s63* edi8;
    struct s64* edi9;
    int32_t ebp10;
    int32_t ebx11;
    int32_t ebp12;
    int32_t ebx13;
    void** edi14;

    *reinterpret_cast<int32_t*>(esi2 - 4) = *reinterpret_cast<int32_t*>(ebp3 - 40);
    g410d3c = *reinterpret_cast<void***>(ebp4 - 28);
    eax5 = *reinterpret_cast<void***>(ebp6 - 32);
    g410d40 = eax5;
    if (*edi7 == 0xe06d7363 && (edi8->f16 == 3 && (edi9->f20 == 0x19930520 && (*reinterpret_cast<int32_t*>(ebp10 - 36) == ebx11 && *reinterpret_cast<int32_t*>(ebp12 - 44) != ebx13)))) {
        fun_405e9e();
        eax5 = fun_408565(ecx, edi14);
    }
    return eax5;
}

struct s65 {
    int32_t f0;
    signed char[12] pad16;
    int32_t f16;
    int32_t f20;
    signed char[4] pad28;
    int32_t f28;
};

int32_t fun_408377(struct s65** a1) {
    if ((*a1)->f0 != 0xe06d7363 || ((*a1)->f16 != 3 || ((*a1)->f20 != 0x19930520 || (*a1)->f28))) {
        return 0;
    } else {
        return 1;
    }
}

void fun_409cbb(void** ecx, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7, void** a8, void** a9, void** a10, void** a11, void** a12, void** a13, void** a14, void** a15, void** a16, void** a17, void** a18, void** a19) {
    int1_t zf20;

    zf20 = g410f20 == 0;
    if (zf20) {
        fun_409cd0(ecx, __return_address(), a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15, a16, a17, a18, a19);
        ++g410f20;
    }
    return;
}

void** g410f24 = reinterpret_cast<void**>(0);

int32_t GetStringTypeW = 0xd212;

int32_t GetStringTypeA = 0xd200;

void** fun_40a21a(void** ecx, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7, int32_t a8, int16_t a9, void* a10, int32_t a11) {
    void*** esp12;
    void** eax13;
    void** esp14;
    void** esp15;
    void** v16;
    void** eax17;
    void* v18;
    int32_t eax19;
    int32_t eax20;
    void** eax21;
    void** eax22;
    uint32_t eax23;
    void** v24;
    void** eax25;
    void** eax26;
    void** edi27;
    void** esi28;
    void** ebx29;
    void** v30;
    void** v31;
    void** v32;
    void** v33;
    void** ebp34;
    void** esi35;
    void** eax36;

    esp12 = reinterpret_cast<void***>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4);
    eax13 = g0;
    esp14 = reinterpret_cast<void**>(esp12 - 4 - 4 - 4 - 4);
    g0 = esp14;
    esp15 = reinterpret_cast<void**>(reinterpret_cast<uint32_t>(esp14 - 24) - 4 - 4 - 4);
    v16 = esp15;
    eax17 = g410f24;
    if (!eax17) {
        v18 = reinterpret_cast<void*>(esp12 - 28);
        eax19 = reinterpret_cast<int32_t>(GetStringTypeW(1, 0x40c34c, 1, v18));
        esp15 = reinterpret_cast<void**>(reinterpret_cast<uint32_t>(esp15 - 4) - 4 + 4 - 4 - 4 - 4 - 4 + 4);
        if (!eax19) {
            eax20 = reinterpret_cast<int32_t>(GetStringTypeA(0, 1, 0x40c348, 1, esp12 - 28, 1, 0x40c34c, 1, v18));
            if (!eax20) 
                goto addr_40a34f_4;
            eax17 = reinterpret_cast<void**>(2);
            esp15 = reinterpret_cast<void**>(reinterpret_cast<uint32_t>(esp15 - 4) - 4 - 4 - 4 - 4 - 4 + 4 - 4 + 4);
        } else {
            eax17 = reinterpret_cast<void**>(1);
        }
        g410f24 = eax17;
    }
    if (!reinterpret_cast<int1_t>(eax17 == 2)) {
        if (!reinterpret_cast<int1_t>(eax17 == 1)) {
            addr_40a34f_4:
            eax21 = reinterpret_cast<void**>(0);
        } else {
            if (!a6) {
                eax22 = g410d28;
                a6 = eax22;
            }
            eax23 = reinterpret_cast<uint32_t>(-a8);
            v24 = reinterpret_cast<void**>((eax23 - (eax23 + reinterpret_cast<uint1_t>(eax23 < eax23 + reinterpret_cast<uint1_t>(!!a8))) & 8) + 1);
            eax25 = reinterpret_cast<void**>(MultiByteToWideChar(a6, v24, a3, a4, 0, 0));
            if (!eax25) 
                goto addr_40a34f_4; else 
                goto addr_40a2ec_13;
        }
    } else {
        eax26 = a7;
        if (!eax26) {
            eax26 = g410d18;
        }
        eax21 = reinterpret_cast<void**>(GetStringTypeA(eax26, a2, a3, a4, a5));
    }
    addr_40a351_17:
    g0 = eax13;
    return eax21;
    addr_40a2ec_13:
    fun_409800(ecx, a6, v24, a3, a4, 0, 0, edi27, esi28, ebx29, v30, v31, eax25, v32, v16, v33, eax13, 0x409330, 0x40c6a0, 0, ebp34);
    esi35 = reinterpret_cast<void**>(reinterpret_cast<uint32_t>(esp15 - 4) - 4 - 4 - 4 - 4 - 4 - 4 + 4 - 4 + 4);
    fun_407a60(ecx, esi35, 0, reinterpret_cast<unsigned char>(eax25) + reinterpret_cast<unsigned char>(eax25), a6, v24, a3, a4, 0, 0);
    if (!esi35) 
        goto addr_40a34f_4;
    eax36 = reinterpret_cast<void**>(MultiByteToWideChar(a6, 1, a3, a4, esi35, eax25, a6, v24, a3, a4, 0, 0));
    if (!eax36) 
        goto addr_40a34f_4;
    eax21 = reinterpret_cast<void**>(GetStringTypeW(a2, esi35, eax36, a5, a6, 1, a3, a4, esi35, eax25, a6, v24, a3, a4, 0, 0));
    goto addr_40a351_17;
}

int32_t g410978 = 10;

void** g4108f8 = reinterpret_cast<void**>(5);

void** fun_408ca7(void** a1) {
    void** edx2;
    int32_t ecx3;
    int1_t zf4;
    void** eax5;
    void** esi6;

    edx2 = a1;
    ecx3 = g410978;
    zf4 = g4108f8 == edx2;
    eax5 = reinterpret_cast<void**>(0x4108f8);
    if (!zf4) {
        esi6 = reinterpret_cast<void**>((ecx3 + ecx3 * 2) * 4 + 0x4108f8);
        do {
            eax5 = eax5 + 12;
            if (reinterpret_cast<unsigned char>(eax5) >= reinterpret_cast<unsigned char>(esi6)) 
                break;
        } while (*reinterpret_cast<void***>(eax5) != edx2);
    }
    if (reinterpret_cast<unsigned char>(eax5) >= reinterpret_cast<unsigned char>((ecx3 + ecx3 * 2) * 4 + 0x4108f8) || *reinterpret_cast<void***>(eax5) != edx2) {
        eax5 = reinterpret_cast<void**>(0);
    }
    return eax5;
}

uint32_t fun_40a374(unsigned char a1, uint32_t a2, unsigned char a3) {
    uint32_t eax4;
    uint32_t eax5;

    eax4 = a1;
    if (!(*reinterpret_cast<unsigned char*>(eax4 + 0x411081) & a3)) {
        if (!a2) {
            eax5 = 0;
        } else {
            eax5 = static_cast<uint32_t>(*reinterpret_cast<uint16_t*>(" " + eax4 * 2)) & a2;
        }
        if (!eax5) {
            return eax5;
        }
    }
    return 1;
}

void** g410f38 = reinterpret_cast<void**>(0);

struct s66 {
    signed char[4] pad4;
    void** f4;
    signed char[3] pad8;
    void** f8;
};

struct s66* fun_40a9c1(void** a1);

void** g410f44 = reinterpret_cast<void**>(0);

void** g410f3c = reinterpret_cast<void**>(0);

void** g410f40 = reinterpret_cast<void**>(0);

uint32_t fun_40a894(void** a1, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7, void** a8, void** a9, void** a10) {
    void** edi11;
    void** eax12;
    void** esi13;
    void** eax14;
    void** eax15;
    void** eax16;
    void** eax17;
    struct s66* eax18;
    void** ecx19;
    void** eax20;
    uint32_t eax21;
    uint32_t eax22;
    void** edi23;
    void** esi24;
    void** ebp25;
    void** ebx26;
    void** edx27;
    int32_t eax28;
    int32_t ecx29;
    int32_t ecx30;
    int32_t ecx31;
    uint32_t* edx32;

    edi11 = a1;
    eax12 = edi11 - 1 - 1;
    if (!eax12) {
        esi13 = g410f38;
        eax14 = reinterpret_cast<void**>(0x410f38);
    } else {
        eax15 = eax12 - 1 - 1;
        if (!eax15 || ((eax16 = eax15 - 4, eax16 == 0) || (eax17 = eax16 - 3, eax17 == 0))) {
            eax18 = fun_40a9c1(edi11);
            esi13 = *reinterpret_cast<void***>(&eax18->f8);
            eax14 = reinterpret_cast<void**>(&eax18->f8);
            ecx19 = edi11;
        } else {
            eax20 = eax17 - 4;
            if (!eax20) {
                esi13 = g410f44;
                eax14 = reinterpret_cast<void**>(0x410f44);
            } else {
                eax21 = reinterpret_cast<uint32_t>(eax20 - 6);
                if (!eax21) {
                    esi13 = g410f3c;
                    eax14 = reinterpret_cast<void**>(0x410f3c);
                } else {
                    if (!(eax21 - 1)) {
                        esi13 = g410f40;
                        eax14 = reinterpret_cast<void**>(0x410f40);
                    } else {
                        eax22 = 0xffffffff;
                        goto addr_40a9bd_12;
                    }
                }
            }
        }
    }
    if (!reinterpret_cast<int1_t>(esi13 == 1)) {
        if (!esi13) {
            eax14 = fun_4053b9(ecx19, 3, edi23, esi24, ebp25, __return_address(), a1, a2, a3, a4);
        }
        if (edi11 == 8) 
            goto addr_40a92f_17;
        if (edi11 == 11) 
            goto addr_40a92f_17;
        if (!reinterpret_cast<int1_t>(edi11 == 4)) 
            goto addr_40a955_20;
    } else {
        eax22 = 0;
        goto addr_40a9bd_12;
    }
    addr_40a92f_17:
    ebx26 = g410d50;
    g410d50 = reinterpret_cast<void**>(0);
    if (!reinterpret_cast<int1_t>(edi11 == 8)) {
        *reinterpret_cast<void***>(eax14) = reinterpret_cast<void**>(0);
        if (!reinterpret_cast<int1_t>(edi11 == 8)) {
            esi13();
            if (edi11 == 11 || reinterpret_cast<int1_t>(edi11 == 4)) {
                addr_40a9a7_24:
                g410d50 = ebx26;
                if (reinterpret_cast<int1_t>(edi11 == 8)) {
                    g41097c = a1;
                    goto addr_40a9ba_26;
                }
            } else {
                addr_40a9ba_26:
                eax22 = 0;
            }
        } else {
            addr_40a98b_27:
            esi13();
            goto addr_40a9a7_24;
        }
    } else {
        edx27 = g41097c;
        g41097c = reinterpret_cast<void**>(0x8c);
        a1 = edx27;
        goto addr_40a958_29;
    }
    addr_40a9bd_12:
    return eax22;
    addr_40a958_29:
    if (reinterpret_cast<int1_t>(edi11 == 8)) {
        eax28 = g410970;
        ecx29 = g410974;
        ecx30 = ecx29 + eax28;
        if (eax28 < ecx30) {
            ecx31 = ecx30 - eax28;
            edx32 = reinterpret_cast<uint32_t*>((eax28 + eax28 * 2) * 4 + 0x410900);
            do {
                *edx32 = 0;
                edx32 = edx32 + 3;
                --ecx31;
            } while (ecx31);
            goto addr_40a98b_27;
        }
    }
    addr_40a955_20:
    ebx26 = a1;
    goto addr_40a958_29;
}

int32_t GetACP = 0xd230;

int32_t GetOEMCP = 0xd23a;

void** fun_40a53e(void** a1) {
    void** eax2;

    eax2 = a1;
    g410f28 = reinterpret_cast<void**>(0);
    if (!reinterpret_cast<int1_t>(eax2 == 0xfffffffe)) {
        if (!reinterpret_cast<int1_t>(eax2 == 0xfffffffd)) {
            if (reinterpret_cast<int1_t>(eax2 == 0xfffffffc)) {
                eax2 = g410d28;
                g410f28 = reinterpret_cast<void**>(1);
            }
            return eax2;
        } else {
            g410f28 = reinterpret_cast<void**>(1);
            goto GetACP;
        }
    } else {
        g410f28 = reinterpret_cast<void**>(1);
        goto GetOEMCP;
    }
}

void** g4108fc = reinterpret_cast<void**>(11);

struct s66* fun_40a9c1(void** a1) {
    void** edx2;
    int32_t ecx3;
    int1_t zf4;
    struct s66* eax5;
    struct s66* esi6;

    edx2 = a1;
    ecx3 = g410978;
    zf4 = g4108fc == edx2;
    eax5 = reinterpret_cast<struct s66*>(0x4108f8);
    if (!zf4) {
        esi6 = reinterpret_cast<struct s66*>((ecx3 + ecx3 * 2) * 4 + 0x4108f8);
        do {
            eax5 = reinterpret_cast<struct s66*>(reinterpret_cast<uint32_t>(eax5) + 12);
            if (reinterpret_cast<uint32_t>(eax5) >= reinterpret_cast<uint32_t>(esi6)) 
                break;
        } while (eax5->f4 != edx2);
    }
    if (reinterpret_cast<uint32_t>(eax5) >= (ecx3 + ecx3 * 2) * 4 + 0x4108f8 || eax5->f4 != edx2) {
        eax5 = reinterpret_cast<struct s66*>(0);
    }
    return eax5;
}

void** g410f4c = reinterpret_cast<void**>(0);

int32_t CompareStringW = 0xd258;

int32_t CompareStringA = 0xd246;

void** fun_40abf1(void** ecx, void** a2, int32_t a3, void** a4, void** a5, void** a6, void** a7, void** a8) {
    void* esp9;
    void** eax10;
    void** esp11;
    void** v12;
    void** esp13;
    int1_t zf14;
    void* esp15;
    int32_t eax16;
    int32_t eax17;
    void** esi18;
    void** eax19;
    void** eax20;
    void** eax21;
    void** eax22;
    void** eax23;
    int32_t eax24;
    void** eax25;
    void** edi26;
    void** esi27;
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
    void** esp38;
    int32_t esi39;
    int32_t eax40;
    void** eax41;
    uint32_t v42;
    void** v43;
    void** v44;
    void** v45;
    void** v46;
    void** edi47;
    int32_t eax48;
    void** v49;
    uint32_t v50;
    void** v51;
    void** v52;
    void** v53;
    void** v54;

    esp9 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4);
    eax10 = g0;
    esp11 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(esp9) - 4 - 4 - 4 - 4);
    v12 = eax10;
    g0 = esp11;
    esp13 = reinterpret_cast<void**>(reinterpret_cast<uint32_t>(esp11 - 48) - 4 - 4 - 4);
    zf14 = g410f4c == 0;
    esp15 = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(esp13 - 4) + 4);
    if (zf14) {
        eax16 = reinterpret_cast<int32_t>(CompareStringW(0, 0, 0x40c34c, 1, 0x40c34c, 1));
        esp15 = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(esp15) - 4 - 4 - 4 - 4 - 4 - 4 - 4 + 4);
        if (!eax16) {
            eax17 = reinterpret_cast<int32_t>(CompareStringA(0, 0, 0x40c348, 1, 0x40c348, 1, 0, 0, 0x40c34c, 1, 0x40c34c, 1));
            esp15 = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(esp15) - 4 - 4 - 4 - 4 - 4 - 4 - 4 + 4);
            if (!eax17) 
                goto addr_40ae5a_4;
            g410f4c = reinterpret_cast<void**>(2);
        } else {
            g410f4c = reinterpret_cast<void**>(1);
        }
    }
    esi18 = a5;
    if (reinterpret_cast<signed char>(esi18) > reinterpret_cast<signed char>(0)) {
        eax19 = fun_408ac6(ecx, a4, esi18);
        ecx = esi18;
        esp15 = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(esp15) - 4 - 4 - 4 + 4 + 4 + 4);
        esi18 = eax19;
    }
    if (reinterpret_cast<signed char>(a7) > reinterpret_cast<signed char>(0)) {
        eax20 = fun_408ac6(ecx, a6, a7);
        ecx = a7;
        esp15 = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(esp15) - 4 - 4 - 4 + 4 + 4 + 4);
        a7 = eax20;
    }
    eax21 = g410f4c;
    if (!reinterpret_cast<int1_t>(eax21 == 2)) {
        if (!reinterpret_cast<int1_t>(eax21 == 1)) 
            goto addr_40ae5a_4;
        if (!a8) {
            eax22 = g410d28;
            a8 = eax22;
        }
        if (!esi18) 
            goto addr_40acd7_16;
        if (a7) 
            goto addr_40ad6f_18;
        addr_40acd7_16:
        if (esi18 == a7) 
            goto addr_40acdc_19;
    } else {
        eax23 = reinterpret_cast<void**>(CompareStringA(ecx, a2, a3, a4, esi18, a6, a7));
        goto addr_40ae5c_21;
    }
    if (reinterpret_cast<signed char>(a7) > reinterpret_cast<signed char>(1)) 
        goto addr_40ace9_23;
    if (reinterpret_cast<signed char>(esi18) > reinterpret_cast<signed char>(1)) 
        goto addr_40ad35_25;
    eax24 = reinterpret_cast<int32_t>(GetCPInfo(ecx, a8, reinterpret_cast<int32_t>(esp9) - 60));
    esp15 = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(esp15) - 4 - 4 - 4 + 4);
    if (!eax24) 
        goto addr_40ae5a_4;
    if (reinterpret_cast<signed char>(esi18) > reinterpret_cast<signed char>(0)) 
        goto addr_40ad0d_28;
    if (reinterpret_cast<signed char>(a7) <= reinterpret_cast<signed char>(0)) {
        addr_40ad6f_18:
        eax25 = reinterpret_cast<void**>(MultiByteToWideChar(ecx, a8, 9, a4, esi18, 0, 0));
        if (!eax25) {
            addr_40ae5a_4:
            eax23 = reinterpret_cast<void**>(0);
        } else {
            fun_409800(ecx, a8, 9, a4, esi18, 0, 0, edi26, esi27, ebx28, v29, v30, v31, v32, v33, v34, v35, v36, v37, eax25, esp13);
            esp38 = reinterpret_cast<void**>(reinterpret_cast<uint32_t>(esp15) - 4 - 4 - 4 - 4 - 4 - 4 - 4 + 4 - 4 + 4);
            if (!esp38) 
                goto addr_40ae5a_4;
            esi39 = MultiByteToWideChar;
            eax40 = reinterpret_cast<int32_t>(esi39(ecx, a8, 1, a4, esi18, esp38, eax25, a8, 9, a4, esi18, 0, 0));
            if (!eax40) 
                goto addr_40ae5a_4;
            eax41 = reinterpret_cast<void**>(esi39(ecx, a8, 9, a6, a7, 0, 0, a8, 1, a4, esi18, esp38, eax25, a8, 9, a4, esi18, 0, 0));
            if (!eax41) 
                goto addr_40ae5a_4; else 
                goto addr_40adf9_34;
        }
    } else {
        if (v42 < 2 || !v43) {
            addr_40ace9_23:
            eax23 = reinterpret_cast<void**>(1);
        } else {
            do {
                if (!v44) 
                    goto addr_40ace9_23;
                if (reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(a6)) < reinterpret_cast<unsigned char>(v45)) 
                    continue;
                if (reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(a6)) <= reinterpret_cast<unsigned char>(v44)) 
                    goto addr_40acdc_19;
            } while (v46);
            goto addr_40ad6a_40;
        }
    }
    addr_40ae5c_21:
    g0 = v12;
    return eax23;
    addr_40adf9_34:
    fun_409800(ecx, a8, 9, a6, a7, 0, 0, a8, 1, a4, esi18, esp38, eax25, a8, 9, a4, esi18, 0, 0, edi26, esi27);
    edi47 = reinterpret_cast<void**>(reinterpret_cast<uint32_t>(esp38 - 4) - 4 - 4 - 4 - 4 - 4 - 4 + 4 - 4 - 4 - 4 - 4 - 4 - 4 - 4 + 4 - 4 + 4);
    if (!edi47) 
        goto addr_40ae5a_4;
    eax48 = reinterpret_cast<int32_t>(MultiByteToWideChar(ecx, a8, 1, a6, a7, edi47, eax41, a8, 9, a6, a7, 0, 0, a8, 1, a4, esi18, esp38, eax25, a8, 9, a4, esi18, 0, 0));
    if (!eax48) 
        goto addr_40ae5a_4;
    eax23 = reinterpret_cast<void**>(CompareStringW(ecx, a2, a3, esp38, eax25, edi47, eax41, a8, 1, a6, a7, edi47, eax41, a8, 9, a6, a7, 0, 0, a8, 1, a4, esi18, esp38, eax25, a8, 9, a4, esi18, 0, 0));
    goto addr_40ae5c_21;
    addr_40acdc_19:
    v49 = reinterpret_cast<void**>(2);
    addr_40acde_44:
    eax23 = v49;
    goto addr_40ae5c_21;
    addr_40ad6a_40:
    goto addr_40ace9_23;
    addr_40ad0d_28:
    if (v50 < 2 || !v51) {
        addr_40ad35_25:
        v49 = reinterpret_cast<void**>(3);
        goto addr_40acde_44;
    } else {
        do {
            if (!v52) 
                goto addr_40ad35_25;
            if (reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(a4)) < reinterpret_cast<unsigned char>(v53)) 
                continue;
            if (reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(a4)) <= reinterpret_cast<unsigned char>(v52)) 
                goto addr_40acdc_19;
        } while (v54);
        goto addr_40ad35_25;
    }
}

uint32_t fun_40aff5(void** ecx) {
    void** v2;
    void** esi3;
    void** eax4;
    void* eax5;
    uint32_t eax6;
    void** edi7;
    void** v8;
    void** eax9;
    void* eax10;

    v2 = reinterpret_cast<void**>(__return_address());
    esi3 = g410ce0;
    eax4 = *reinterpret_cast<void***>(esi3);
    if (!eax4) {
        addr_40b030_2:
        eax5 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(esi3) - reinterpret_cast<unsigned char>(g410ce0));
        eax6 = reinterpret_cast<uint32_t>(-(reinterpret_cast<int32_t>(eax5) >> 2));
    } else {
        edi7 = v8;
        do {
            eax9 = fun_40ab44(ecx, v2, eax4, edi7);
            if (eax9) 
                continue;
            if (*reinterpret_cast<signed char*>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(esi3)) + reinterpret_cast<unsigned char>(edi7)) == 61) 
                goto addr_40b040_6;
            if (!*reinterpret_cast<signed char*>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(esi3)) + reinterpret_cast<unsigned char>(edi7))) 
                goto addr_40b040_6;
            eax4 = *reinterpret_cast<void***>(esi3 + 4);
            esi3 = esi3 + 4;
        } while (eax4);
        goto addr_40b030_2;
    }
    addr_40b03d_9:
    return eax6;
    addr_40b040_6:
    eax10 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(esi3) - reinterpret_cast<unsigned char>(g410ce0));
    eax6 = reinterpret_cast<uint32_t>(reinterpret_cast<int32_t>(eax10) >> 2);
    goto addr_40b03d_9;
}

void fun_401ff0(int32_t a1) {
    int32_t eax2;
    int32_t eax3;

    eax2 = reinterpret_cast<int32_t>(LoadLibraryA());
    g410c44 = eax2;
    if (eax2) {
        eax3 = reinterpret_cast<int32_t>(GetProcAddress(eax2, "SetThemeAppProperties"));
        g410c40 = eax3;
    }
    goto "uxtheme.dll";
}

int32_t GetWindow = 0xcbac;

int32_t GetObjectA = 0xcd80;

int32_t CreateFontIndirectA = 0xcd6a;

void fun_401770(void** a1, void** a2, void** a3) {
    int32_t eax4;
    int32_t ebx5;
    int32_t edi6;
    int32_t eax7;
    int32_t esi8;
    int32_t eax9;
    int32_t eax10;
    int32_t eax11;
    void* esp12;
    void* v13;
    int32_t eax14;
    int32_t eax15;
    int32_t eax16;
    int32_t v17;

    eax4 = g410c4c;
    ebx5 = SendMessageA;
    if (eax4) {
        addr_4017c9_2:
        edi6 = GetWindow;
        eax7 = reinterpret_cast<int32_t>(edi6());
        esi8 = eax7;
        if (esi8) {
            do {
                eax9 = g410c4c;
                ebx5(esi8, 48, eax9, 0);
                eax10 = reinterpret_cast<int32_t>(edi6(esi8, 2, esi8, 48, eax9, 0));
                esi8 = eax10;
            } while (esi8);
        }
    } else {
        eax11 = reinterpret_cast<int32_t>(ebx5(a1, 49));
        esp12 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 60 - 4 - 4 - 4 - 4 - 4 - 4 - 4 - 4 + 4);
        if (eax11 && (v13 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp12) + 12), eax14 = reinterpret_cast<int32_t>(GetObjectA(eax11, 60, v13, a1, 49)), esp12 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp12) - 4 - 4 - 4 - 4 + 4), !!eax14)) {
            eax15 = reinterpret_cast<int32_t>(CreateFontIndirectA(reinterpret_cast<int32_t>(esp12) + 12, eax11, 60, v13, a1, 49));
            g410c4c = eax15;
        }
        eax16 = g410c4c;
        if (eax16) 
            goto addr_4017c9_2;
    }
    goto v17;
}

/* COMCTL32.dll:17 */
int32_t COMCTL32_dll_17 = 0x80000011;

void fun_401fe0(void** a1, void** a2) {
    fun_401ff0(__return_address());
    goto COMCTL32_dll_17;
}

void fun_402210(void** ecx, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7, void** a8, void** a9, void** a10, void** a11) {
    void** v12;
    void** eax13;
    void** v14;
    void** esi15;
    void** esi16;
    void** v17;
    void** edi18;
    void** edi19;
    void** eax20;

    v12 = reinterpret_cast<void**>(__return_address());
    eax13 = g410c74;
    v14 = esi15;
    esi16 = reinterpret_cast<void**>(0);
    v17 = edi18;
    edi19 = g410c70;
    if (eax13) {
        do {
            fun_401930(ecx, edi19, v17, v14, v12, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11);
            eax20 = g410c74;
            ++esi16;
            edi19 = edi19 + 4;
        } while (reinterpret_cast<unsigned char>(esi16) < reinterpret_cast<unsigned char>(eax20));
    }
    fun_401930(ecx, 0x410c70, v17, v14, v12, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11);
    return;
}

void fun_4021d0(void** ecx, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7, void** a8, void** a9, void** a10, void** a11) {
    void** v12;
    void* eax13;
    void** v14;
    void** esi15;
    void* esi16;
    void** v17;
    void** edi18;
    void** edi19;
    void* eax20;

    v12 = reinterpret_cast<void**>(__return_address());
    eax13 = g410c7c;
    v14 = esi15;
    esi16 = reinterpret_cast<void*>(0);
    v17 = edi18;
    edi19 = g410c78;
    if (eax13) {
        do {
            fun_401930(ecx, edi19, v17, v14, v12, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11);
            eax20 = g410c7c;
            esi16 = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(esi16) + 1);
            edi19 = edi19 + 4;
        } while (reinterpret_cast<uint32_t>(esi16) < reinterpret_cast<uint32_t>(eax20));
    }
    fun_401930(ecx, 0x410c78, v17, v14, v12, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11);
    return;
}

void fun_402190(void** ecx, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7, void** a8, void** a9, void** a10, void** a11) {
    void** v12;
    void** eax13;
    void** v14;
    void** esi15;
    void** esi16;
    void** v17;
    void** edi18;
    void** edi19;
    void** eax20;

    v12 = reinterpret_cast<void**>(__return_address());
    eax13 = g410c84;
    v14 = esi15;
    esi16 = reinterpret_cast<void**>(0);
    v17 = edi18;
    edi19 = g410c80;
    if (eax13) {
        do {
            fun_401930(ecx, edi19, v17, v14, v12, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11);
            eax20 = g410c84;
            ++esi16;
            edi19 = edi19 + 4;
        } while (reinterpret_cast<unsigned char>(esi16) < reinterpret_cast<unsigned char>(eax20));
    }
    fun_401930(ecx, 0x410c80, v17, v14, v12, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11);
    return;
}

void fun_4086e3(void** ecx, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7, void** a8, void** a9) {
    void** eax10;
    void** esp11;
    void** v12;
    int32_t eax13;
    void** edi14;
    void** esi15;
    void** ebx16;
    void** ebp17;
    int1_t zf18;

    eax10 = g0;
    esp11 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4 - 4 - 4 - 4 - 4);
    g0 = esp11;
    v12 = reinterpret_cast<void**>(reinterpret_cast<uint32_t>(esp11 - 4) - 4 - 4 - 4 - 4);
    eax13 = g410d48;
    if (eax13) {
        eax13(edi14, esi15, ebx16, v12, ecx, eax10, 0x409330, 0x40c318);
    }
    fun_40868d(ecx, edi14, esi15, ebx16, v12, ecx, eax10, 0x409330, 0x40c318, 0xffffffff, ebp17, __return_address(), a2, a3, a4, a5, a6, a7, a8);
    fun_409441(ecx, 10, edi14, esi15, ebx16, v12, ecx, eax10, 0x409330, 0x40c318);
    fun_40a894(22, 10, edi14, esi15, ebx16, v12, ecx, eax10, 0x409330, 0x40c318);
    fun_4053b9(10, 3, edi14, esi15, ebx16, v12, ecx, eax10, 0x409330, 0x40c318);
    zf18 = g410f20 == 0;
    if (zf18) {
        fun_409cd0(10, 3, edi14, esi15, ebx16, v12, ecx, eax10, 0x409330, 0x40c318, 0xffffffff, ebp17, __return_address(), a2, a3, a4, a5, a6, a7, a8);
        ++g410f20;
    }
    goto 3;
}

void fun_40868d(void** ecx, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7, void** a8, void** a9, void** a10, void** a11, void** a12, void** a13, void** a14, void** a15, void** a16, void** a17, void** a18, void** a19) {
    int1_t zf20;

    fun_409441(ecx, 10, __return_address(), a2, a3, a4, a5, a6, a7, a8);
    fun_40a894(22, 10, __return_address(), a2, a3, a4, a5, a6, a7, a8);
    fun_4053b9(10, 3, __return_address(), a2, a3, a4, a5, a6, a7, a8);
    zf20 = g410f20 == 0;
    if (zf20) {
        fun_409cd0(10, 3, __return_address(), a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15, a16, a17, a18);
        ++g410f20;
    }
    goto 3;
}

void fun_407b9d(int16_t cx) {
    int1_t pf2;
    int32_t ebx3;
    int32_t edi4;
    int32_t ebx5;
    int32_t edi6;
    signed char bh7;

    if (!pf2) 
        goto 0x407bdf;
    if (!__intrinsic()) 
        goto 0x407be3;
    if (!__intrinsic()) 
        goto 0x407be7;
    if (!__intrinsic()) 
        goto 0x407beb;
    if (!__intrinsic()) 
        goto 0x407bef;
    if (!__intrinsic()) 
        goto 0x407bf3;
    if (!__intrinsic()) 
        goto 0x407bf7;
    *reinterpret_cast<signed char*>(ebx3 + edi4 * 2 + 0x448b0040) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(ebx5 + edi6 * 2 + 0x448b0040) + bh7);
}

void fun_407d5b(int32_t ecx) {
    int32_t eax2;
    signed char al3;
    unsigned char al4;
    uint1_t cf5;
    void* edi6;
    void* edi7;
    void* esi8;
    void* edi9;
    void* esi10;
    void* edi11;
    void* esi12;
    void* edi13;
    void* esi14;
    void* edi15;
    void* esi16;

    *reinterpret_cast<unsigned char*>(&eax2) = reinterpret_cast<unsigned char>(al3 - reinterpret_cast<unsigned char>(0x75 - reinterpret_cast<uint1_t>(al4 < reinterpret_cast<unsigned char>(0x75 - cf5))));
    *reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(edi6) + ecx * 4 + 24) = eax2;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(edi7) + ecx * 4 + 20) = *reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(esi8) + ecx * 4 + 20);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(edi9) + ecx * 4 + 16) = *reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(esi10) + ecx * 4 + 16);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(edi11) + ecx * 4 + 12) = *reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(esi12) + ecx * 4 + 12);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(edi13) + ecx * 4 + 8) = *reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(esi14) + ecx * 4 + 8);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(edi15) + ecx * 4 + 4) = *reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(esi16) + ecx * 4 + 4);
}

void fun_409933() {
    __asm__("in al, 0x8b");
}

void fun_409acb(int32_t ecx) {
    int32_t eax2;
    signed char al3;
    unsigned char al4;
    uint1_t cf5;
    void* edi6;
    void* edi7;
    void* esi8;
    void* edi9;
    void* esi10;
    void* edi11;
    void* esi12;
    void* edi13;
    void* esi14;
    void* edi15;
    void* esi16;

    *reinterpret_cast<unsigned char*>(&eax2) = reinterpret_cast<unsigned char>(al3 - reinterpret_cast<unsigned char>(0x75 - reinterpret_cast<uint1_t>(al4 < reinterpret_cast<unsigned char>(0x75 - cf5))));
    *reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(edi6) + ecx * 4 + 24) = eax2;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(edi7) + ecx * 4 + 20) = *reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(esi8) + ecx * 4 + 20);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(edi9) + ecx * 4 + 16) = *reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(esi10) + ecx * 4 + 16);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(edi11) + ecx * 4 + 12) = *reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(esi12) + ecx * 4 + 12);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(edi13) + ecx * 4 + 8) = *reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(esi14) + ecx * 4 + 8);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(edi15) + ecx * 4 + 4) = *reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(esi16) + ecx * 4 + 4);
}

int32_t SetWindowTextA = 0xcbf8;

int32_t SetWindowLongA = 0xcc0a;

int32_t fun_402250(void** a1, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7, void** a8, void** a9, void** a10, void** a11, void** a12, void** a13) {
    uint32_t eax14;
    void** esi15;
    void** eax16;

    eax14 = reinterpret_cast<uint32_t>(a2 - 0x110);
    if (!eax14) {
        fun_401770(a1, esi15, __return_address());
        eax16 = fun_402060(0, 0, a1, esi15, __return_address(), a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13);
        SetWindowTextA();
        goto eax16;
    } else {
        if (!(eax14 - 1)) {
            SetWindowLongA();
            goto a1;
        } else {
            return 0;
        }
    }
}

void fun_4027e3();

int32_t fun_4027dd() {
    return fun_4027e3;
}

void fun_405d71(int32_t a1, int32_t a2, int32_t a3, int32_t a4) {
    goto a4;
}

struct s67 {
    signed char[1] pad1;
    signed char f1;
};

struct s68 {
    signed char[1] pad1;
    signed char f1;
};

struct s69 {
    signed char[2] pad2;
    int32_t f2;
};

struct s70 {
    signed char[2] pad2;
    int32_t f2;
};

void fun_407b59(uint32_t ecx) {
    uint32_t edx2;
    uint32_t edx3;
    signed char* edi4;
    signed char* esi5;
    uint32_t ecx6;
    struct s67* edi7;
    struct s68* esi8;
    int32_t* esi9;
    struct s69* esi10;
    int32_t* edi11;
    struct s70* edi12;

    edx2 = edx3 & ecx;
    *edi4 = *esi5;
    ecx6 = ecx >> 2;
    edi7->f1 = esi8->f1;
    esi9 = &esi10->f2;
    edi11 = &edi12->f2;
    if (ecx6 < 8) 
        goto 0x407b1c;
    while (ecx6) {
        --ecx6;
        *edi11 = *esi9;
        ++edi11;
        ++esi9;
    }
    switch (edx2) {
    case 3:
        goto 0x407c40;
    case 2:
        goto 0x407c2c;
    case 1:
        goto 0x407c20;
    case 0:
        goto 0x407c18;
    }
}

struct s71 {
    signed char[1] pad1;
    int32_t f1;
};

struct s72 {
    signed char[1] pad1;
    int32_t f1;
};

void fun_407b80(uint32_t ecx) {
    uint32_t edx2;
    uint32_t edx3;
    signed char* edi4;
    signed char* esi5;
    int32_t* esi6;
    struct s71* esi7;
    uint32_t ecx8;
    int32_t* edi9;
    struct s72* edi10;

    edx2 = edx3 & ecx;
    *edi4 = *esi5;
    esi6 = &esi7->f1;
    ecx8 = ecx >> 2;
    edi9 = &edi10->f1;
    if (ecx8 < 8) 
        goto 0x407b1c;
    while (ecx8) {
        --ecx8;
        *edi9 = *esi6;
        ++edi9;
        ++esi6;
    }
    switch (edx2) {
    case 3:
        goto 0x407c40;
    case 2:
        goto 0x407c2c;
    case 1:
        goto 0x407c20;
    case 0:
        goto 0x407c18;
    }
}

void fun_407b99(int32_t ecx) {
}

void fun_407c7e() {
}

struct s73 {
    signed char[3] pad3;
    signed char f3;
};

struct s74 {
    signed char[3] pad3;
    signed char f3;
};

struct s75 {
    signed char[2] pad2;
    signed char f2;
};

struct s76 {
    signed char[2] pad2;
    signed char f2;
};

void fun_407cd5(uint32_t ecx) {
    uint32_t edx2;
    uint32_t edx3;
    struct s73* edi4;
    struct s74* esi5;
    uint32_t ecx6;
    struct s75* edi7;
    struct s76* esi8;
    int32_t* esi9;
    void* esi10;
    int32_t* edi11;
    void* edi12;

    edx2 = edx3 & ecx;
    edi4->f3 = esi5->f3;
    ecx6 = ecx >> 2;
    edi7->f2 = esi8->f2;
    esi9 = reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(esi10) - 2);
    edi11 = reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(edi12) - 2);
    if (ecx6 < 8) 
        goto 0x407c80;
    while (ecx6) {
        --ecx6;
        *edi11 = *esi9;
        --edi11;
        --esi9;
    }
    switch (edx2) {
    case 3:
        goto 0x407ddc;
    case 2:
        goto 0x407dc8;
    case 1:
        goto 0x407db8;
    case 0:
        goto 0x407db0;
    }
}

struct s77 {
    signed char[3] pad3;
    signed char f3;
};

struct s78 {
    signed char[3] pad3;
    signed char f3;
};

struct s79 {
    signed char[2] pad2;
    signed char f2;
};

struct s80 {
    signed char[2] pad2;
    signed char f2;
};

struct s81 {
    signed char[1] pad1;
    signed char f1;
};

struct s82 {
    signed char[1] pad1;
    signed char f1;
};

void fun_407d00(uint32_t ecx) {
    uint32_t edx2;
    uint32_t edx3;
    struct s77* edi4;
    struct s78* esi5;
    struct s79* edi6;
    struct s80* esi7;
    uint32_t ecx8;
    struct s81* edi9;
    struct s82* esi10;
    int32_t* esi11;
    void* esi12;
    int32_t* edi13;
    void* edi14;

    edx2 = edx3 & ecx;
    edi4->f3 = esi5->f3;
    edi6->f2 = esi7->f2;
    ecx8 = ecx >> 2;
    edi9->f1 = esi10->f1;
    esi11 = reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(esi12) - 3);
    edi13 = reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(edi14) - 3);
    if (ecx8 < 8) 
        goto 0x407c80;
    while (ecx8) {
        --ecx8;
        *edi13 = *esi11;
        --edi13;
        --esi11;
    }
    switch (edx2) {
    case 3:
        goto 0x407ddc;
    case 2:
        goto 0x407dc8;
    case 1:
        goto 0x407db8;
    case 0:
        goto 0x407db0;
    }
}

void fun_407d31(int32_t ecx) {
    int32_t ecx2;
    int1_t less3;
    void* ebp4;
    int32_t edi5;
    void* ebp6;
    int32_t edi7;
    signed char bl8;
    void* ebp9;
    int32_t edi10;
    void* ebp11;
    int32_t edi12;
    signed char ah13;
    void* ebp14;
    int32_t edi15;
    void* ebp16;
    int32_t edi17;
    void* ebp18;
    int32_t edi19;
    void* ebp20;
    int32_t edi21;
    signed char dh22;
    void* ebp23;
    int32_t edi24;
    void* ebp25;
    int32_t edi26;
    signed char bh27;
    int32_t ebp28;
    int32_t edi29;
    int32_t ebp30;
    int32_t edi31;
    signed char al32;
    int32_t ebx33;
    int32_t ebx34;

    ecx2 = ecx;
    if (!less3) 
        goto 0x407d77;
    *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(ebp4) + edi5 * 2 + 64) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(ebp6) + edi7 * 2 + 64) + bl8);
    *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(ebp9) + edi10 * 2 + 64) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(ebp11) + edi12 * 2 + 64) + ah13);
    *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(ebp14) + edi15 * 2 + 64) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(ebp16) + edi17 * 2 + 64) + *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(&ecx2) + 1));
    *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(ebp18) + edi19 * 2 + 64) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(ebp20) + edi21 * 2 + 64) + dh22);
    *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(ebp23) + edi24 * 2 + 64) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(ebp25) + edi26 * 2 + 64) + bh27);
    *reinterpret_cast<signed char*>(ebp28 + edi29 * 2 + 0x7d970040) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(ebp30 + edi31 * 2 + 0x7d970040) + al32);
    *reinterpret_cast<signed char*>(ebx33 - 0x76e371bc) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(ebx34 - 0x76e371bc) + *reinterpret_cast<signed char*>(&ecx2));
}

void fun_407d9e(signed char cl) {
    int32_t eax2;
    int32_t eax3;
    signed char bh4;
    signed char bl5;
    int32_t ebx6;
    int32_t ebx7;

    *reinterpret_cast<signed char*>(&eax2) = 0x7d;
    eax3 = eax2 + 1;
    *reinterpret_cast<signed char*>(eax3 - 0x37ffbf83) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(eax3 - 0x37ffbf83) + bh4);
    if (*reinterpret_cast<signed char*>(eax3 - 0x37ffbf83) < 0 == __intrinsic()) 
        goto 0x407deb;
    if (reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(&eax3) + 1) + bl5) < 0 == __intrinsic()) 
        goto 0x407def;
    *reinterpret_cast<signed char*>(ebx6 + 0x5f5e0845) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(ebx7 + 0x5f5e0845) + cl);
}

int32_t fun_4081a3(void** ecx, void** a2, void** a3, void** a4, void** a5, void** a6) {
    void** v7;
    int32_t ebp8;
    int32_t eax9;

    v7 = *reinterpret_cast<void***>(ebp8 - 20);
    eax9 = fun_4081da(ecx, v7, __return_address(), a2, a3, a4, a5, a6);
    return eax9;
}

int32_t fun_408679() {
    return 1;
}

int32_t fun_4086cf() {
    return 1;
}

int32_t fun_4089b2() {
    return 1;
}

struct s83 {
    signed char[4] pad4;
    uint32_t f4;
};

struct s84 {
    signed char[12] pad12;
    struct s21* f12;
};

int32_t fun_409328(struct s83* a1, struct s21* a2, int32_t a3) {
    unsigned char* esi4;
    unsigned char dh5;
    unsigned char* eax6;
    struct s84* ebp7;
    struct s21* ebx8;
    int32_t eax9;
    int32_t esi10;
    int32_t* edi11;
    int32_t ecx12;
    int32_t eax13;
    int32_t* edi14;
    int32_t ecx15;

    *esi4 = reinterpret_cast<unsigned char>(*esi4 ^ reinterpret_cast<unsigned char>(dh5 ^ *eax6));
    ebp7 = reinterpret_cast<struct s84*>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4 + 4 - 4);
    ebx8 = a2;
    if (a1->f4 & 6) {
        fun_405e36(ebx8, 0xff);
        eax9 = 1;
    } else {
        *reinterpret_cast<void**>(reinterpret_cast<int32_t>(ebx8) - 4) = reinterpret_cast<void*>(reinterpret_cast<int32_t>(ebp7) - 8);
        esi10 = ebx8->f12;
        edi11 = ebx8->f8;
        while (esi10 != -1) {
            ecx12 = esi10 + esi10 * 2;
            if ((edi11 + ecx12)[1] && (eax13 = reinterpret_cast<int32_t>((edi11 + ecx12)[1]()), ebp7 = ebp7, esi10 = esi10, ebx8 = ebp7->f12, !!eax13)) {
                if (__intrinsic()) 
                    goto addr_4093c2_7;
                edi14 = ebx8->f8;
                fun_405df4(ebx8);
                ebp7 = reinterpret_cast<struct s84*>(ebx8 + 1);
                fun_405e36(ebx8, esi10);
                ecx15 = esi10 + esi10 * 2;
                fun_405eca(ecx15, 1);
                ebx8->f12 = edi14[ecx15];
                (edi14 + ecx15)[2]();
            }
            edi11 = ebx8->f8;
            esi10 = edi11[esi10 + esi10 * 2];
        }
        goto addr_4093c9_10;
    }
    addr_4093e5_11:
    return eax9;
    addr_4093c9_10:
    eax9 = 1;
    goto addr_4093e5_11;
    addr_4093c2_7:
    eax9 = 0;
    goto addr_4093e5_11;
}

struct s85 {
    signed char[1] pad1;
    signed char f1;
};

struct s86 {
    signed char[1] pad1;
    signed char f1;
};

struct s87 {
    signed char[2] pad2;
    int32_t f2;
};

struct s88 {
    signed char[2] pad2;
    int32_t f2;
};

void fun_4098c9(uint32_t ecx) {
    uint32_t edx2;
    uint32_t edx3;
    signed char* edi4;
    signed char* esi5;
    uint32_t ecx6;
    struct s85* edi7;
    struct s86* esi8;
    int32_t* esi9;
    struct s87* esi10;
    int32_t* edi11;
    struct s88* edi12;

    edx2 = edx3 & ecx;
    *edi4 = *esi5;
    ecx6 = ecx >> 2;
    edi7->f1 = esi8->f1;
    esi9 = &esi10->f2;
    edi11 = &edi12->f2;
    if (ecx6 < 8) 
        goto 0x40988c;
    while (ecx6) {
        --ecx6;
        *edi11 = *esi9;
        ++edi11;
        ++esi9;
    }
    switch (edx2) {
    case 3:
        goto 0x4099b0;
    case 2:
        goto 0x40999c;
    case 1:
        goto 0x409990;
    case 0:
        goto 0x409988;
    }
}

struct s89 {
    signed char[1] pad1;
    int32_t f1;
};

struct s90 {
    signed char[1] pad1;
    int32_t f1;
};

void fun_4098f0(uint32_t ecx) {
    uint32_t edx2;
    uint32_t edx3;
    signed char* edi4;
    signed char* esi5;
    int32_t* esi6;
    struct s89* esi7;
    uint32_t ecx8;
    int32_t* edi9;
    struct s90* edi10;

    edx2 = edx3 & ecx;
    *edi4 = *esi5;
    esi6 = &esi7->f1;
    ecx8 = ecx >> 2;
    edi9 = &edi10->f1;
    if (ecx8 < 8) 
        goto 0x40988c;
    while (ecx8) {
        --ecx8;
        *edi9 = *esi6;
        ++edi9;
        ++esi6;
    }
    switch (edx2) {
    case 3:
        goto 0x4099b0;
    case 2:
        goto 0x40999c;
    case 1:
        goto 0x409990;
    case 0:
        goto 0x409988;
    }
}

void fun_409909(signed char* ecx) {
    signed char* ecx2;
    int32_t eax3;
    int32_t eax4;
    int32_t ebx5;
    int32_t ebx6;
    signed char bl7;
    int32_t ebx8;
    int32_t ebx9;
    signed char dl10;
    int32_t ebx11;
    int32_t ebx12;
    int32_t ebx13;
    int32_t ebx14;
    int32_t ebx15;
    int32_t ebx16;
    signed char bh17;
    int32_t ebx18;
    int32_t ebx19;
    signed char dh20;
    int32_t ebx21;
    int32_t ebx22;
    int32_t ebx23;
    int32_t ebx24;

    ecx2 = ecx;
    __asm__("outsd ");
    __asm__("cdq ");
    eax3 = eax4 + 1;
    (ecx2 + ebx5 * 4)[64] = reinterpret_cast<signed char>((ecx2 + ebx6 * 4)[64] + bl7);
    (ecx2 + ebx8 * 4)[64] = reinterpret_cast<signed char>((ecx2 + ebx9 * 4)[64] + dl10);
    (ecx2 + ebx11 * 4)[64] = reinterpret_cast<signed char>((ecx2 + ebx12 * 4)[64] + *reinterpret_cast<signed char*>(&ecx2));
    (ecx2 + ebx13 * 4)[64] = reinterpret_cast<signed char>((ecx2 + ebx14 * 4)[64] + *reinterpret_cast<signed char*>(&eax3));
    ecx2[ebx15 * 4] = reinterpret_cast<signed char>(ecx2[ebx16 * 4] + bh17);
    ecx2[ebx18 * 4] = reinterpret_cast<signed char>(ecx2[ebx19 * 4] + dh20);
    ecx2[ebx21 * 4] = reinterpret_cast<signed char>(ecx2[ebx22 * 4] + *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(&ecx2) + 1));
    *reinterpret_cast<signed char*>(ebx23 - 0x761b71bc) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(ebx24 - 0x761b71bc) + *reinterpret_cast<signed char*>(&ecx2));
}

void fun_409976(int32_t ecx) {
    signed char bl2;
    int32_t ebx3;
    int32_t ebx4;
    signed char bl5;
    int32_t ebx6;
    int32_t ebx7;

    *reinterpret_cast<signed char*>(ecx - 0x666fffc0) = bl2;
    *reinterpret_cast<signed char*>(ecx + ebx3 * 4 - 0x664fffc0) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(ecx + ebx4 * 4 - 0x664fffc0) + bl5);
    *reinterpret_cast<signed char*>(ebx6 + 0x5f5e0845) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(ebx7 + 0x5f5e0845) + *reinterpret_cast<signed char*>(&ecx));
}

void fun_4099ee() {
}

struct s91 {
    signed char[3] pad3;
    signed char f3;
};

struct s92 {
    signed char[3] pad3;
    signed char f3;
};

struct s93 {
    signed char[2] pad2;
    signed char f2;
};

struct s94 {
    signed char[2] pad2;
    signed char f2;
};

void fun_409a45(uint32_t ecx) {
    uint32_t edx2;
    uint32_t edx3;
    struct s91* edi4;
    struct s92* esi5;
    uint32_t ecx6;
    struct s93* edi7;
    struct s94* esi8;
    int32_t* esi9;
    void* esi10;
    int32_t* edi11;
    void* edi12;

    edx2 = edx3 & ecx;
    edi4->f3 = esi5->f3;
    ecx6 = ecx >> 2;
    edi7->f2 = esi8->f2;
    esi9 = reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(esi10) - 2);
    edi11 = reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(edi12) - 2);
    if (ecx6 < 8) 
        goto 0x4099f0;
    while (ecx6) {
        --ecx6;
        *edi11 = *esi9;
        --edi11;
        --esi9;
    }
    switch (edx2) {
    case 3:
        goto 0x409b4c;
    case 2:
        goto 0x409b38;
    case 1:
        goto 0x409b28;
    case 0:
        goto 0x409b20;
    }
}

struct s95 {
    signed char[3] pad3;
    signed char f3;
};

struct s96 {
    signed char[3] pad3;
    signed char f3;
};

struct s97 {
    signed char[2] pad2;
    signed char f2;
};

struct s98 {
    signed char[2] pad2;
    signed char f2;
};

struct s99 {
    signed char[1] pad1;
    signed char f1;
};

struct s100 {
    signed char[1] pad1;
    signed char f1;
};

void fun_409a70(uint32_t ecx) {
    uint32_t edx2;
    uint32_t edx3;
    struct s95* edi4;
    struct s96* esi5;
    struct s97* edi6;
    struct s98* esi7;
    uint32_t ecx8;
    struct s99* edi9;
    struct s100* esi10;
    int32_t* esi11;
    void* esi12;
    int32_t* edi13;
    void* edi14;

    edx2 = edx3 & ecx;
    edi4->f3 = esi5->f3;
    edi6->f2 = esi7->f2;
    ecx8 = ecx >> 2;
    edi9->f1 = esi10->f1;
    esi11 = reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(esi12) - 3);
    edi13 = reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(edi14) - 3);
    if (ecx8 < 8) 
        goto 0x4099f0;
    while (ecx8) {
        --ecx8;
        *edi13 = *esi11;
        --edi13;
        --esi11;
    }
    switch (edx2) {
    case 3:
        goto 0x409b4c;
    case 2:
        goto 0x409b38;
    case 1:
        goto 0x409b28;
    case 0:
        goto 0x409b20;
    }
}

int32_t fun_9adc0440();

int32_t fun_9af40440();

void fun_409aa1(int32_t ecx) {
    int32_t ecx2;
    int32_t ebx3;
    int32_t ebx4;

    ecx2 = ecx;
    __asm__("les ebx, [edx+0x9acc0040]");
    fun_9adc0440();
    __asm__("in al, 0x9a");
    fun_9af40440();
    __asm__("wait ");
    *reinterpret_cast<signed char*>(ebx3 - 0x76e371bc) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(ebx4 - 0x76e371bc) + *reinterpret_cast<signed char*>(&ecx2));
}

struct s101 {
    signed char[1] pad1;
    signed char f1;
};

void fun_409b0e(signed char cl) {
    int32_t ebx2;
    int32_t ebx3;
    unsigned char bl4;
    signed char* eax5;
    struct s101* eax6;
    signed char bh7;
    void* ebx8;
    int32_t ebx9;
    void* ebx10;
    int32_t ebx11;
    int32_t ebx12;
    int32_t ebx13;

    *reinterpret_cast<unsigned char*>(ebx2 - 0x64d7ffc0) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(ebx3 - 0x64d7ffc0) & bl4);
    eax5 = &eax6->f1;
    *eax5 = reinterpret_cast<signed char>(*eax5 + bh7);
    __asm__("wait ");
    *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(ebx8) + ebx9 * 4 + 64) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(ebx10) + ebx11 * 4 + 64) + cl);
    *reinterpret_cast<signed char*>(ebx12 + 0x5f5e0845) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(ebx13 + 0x5f5e0845) + cl);
}

int32_t fun_40a313() {
    return 1;
}

int32_t fun_40ada8() {
    return 1;
}

int32_t fun_40ae17() {
    return 1;
}

int32_t EndDialog = 0xcc88;

int32_t fun_402390(void** a1, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7, void** a8, void** a9, void** a10, void** a11, void** a12) {
    uint32_t eax13;
    void** edi14;
    void** esi15;
    void** eax16;
    int32_t edi17;
    void** eax18;
    void** eax19;
    void** eax20;
    void** eax21;

    eax13 = reinterpret_cast<uint32_t>(a2 - 0x110);
    if (!eax13) {
        fun_401770(a1, edi14, esi15);
        eax16 = fun_402060(0, 0, a1, edi14, esi15, __return_address(), a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12);
        SetWindowTextA(a1, eax16, edi14, esi15);
        edi17 = SetDlgItemTextA;
        edi17(a1, 0x3e8, a2, a1, eax16, edi14, esi15);
        eax18 = fun_402060(0, 3, a1, 0x3e8, a2, a1, eax16, edi14, esi15, __return_address(), a1, a2, a3, a4, a5, a6, a7, a8);
        edi17(a1, 6, eax18, a1, 0x3e8, a2, a1, eax16, edi14, esi15);
        eax19 = fun_402060(0, 5, a1, 6, eax18, a1, 0x3e8, a2, a1, eax16, edi14, esi15, __return_address(), a1, a2, a3, a4, a5);
        edi17(a1, 7, eax19, a1, 6, eax18, a1, 0x3e8, a2, a1, eax16, edi14, esi15);
        eax20 = fun_402060(0, 4, a1, 7, eax19, a1, 6, eax18, a1, 0x3e8, a2, a1, eax16, edi14, esi15, __return_address(), a1, a2);
        edi17(a1, 0x3e9, eax20, a1, 7, eax19, a1, 6, eax18, a1, 0x3e8, a2, a1, eax16, edi14, esi15);
        eax21 = fun_402060(0, 6, a1, 0x3e9, eax20, a1, 7, eax19, a1, 6, eax18, a1, 0x3e8, a2, a1, eax16, edi14, esi15);
        edi17();
        goto eax21;
    } else {
        if (!(eax13 - 1)) {
            EndDialog();
            goto a1;
        } else {
            return 0;
        }
    }
}

void fun_4027e3() {
}

void fun_4054d5() {
}

void fun_405d04(void** ecx, void** a2, void** a3, void** a4) {
    void** v5;
    void** v6;
    void** v7;
    void** v8;
    int32_t edi9;
    int32_t esi10;
    void** ebx11;
    void** ebp12;

    if (!(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(a2 + 4)) & 0x66)) {
        v5 = *reinterpret_cast<void***>(a3 + 20);
        v6 = *reinterpret_cast<void***>(a3 + 16);
        v7 = *reinterpret_cast<void***>(a3 + 8);
        v8 = *reinterpret_cast<void***>(a3 + 12);
        fun_407df5(ecx, a2, v8, a4, 0, v7, v6, v5, 1, edi9, esi10, ebx11, ebp12, __return_address());
        if (!*reinterpret_cast<int32_t*>(a3 + 36)) {
            fun_405b52(ecx, a3, a2, edi9, esi10, ebx11, ebp12, __return_address());
        }
        goto *reinterpret_cast<void***>(a3 + 24);
    } else {
        *reinterpret_cast<int32_t*>(a3 + 36) = 1;
        goto 0x405d74;
    }
}

int32_t GetVersion = 0xd038;

void*** g410cd0 = reinterpret_cast<void***>(0);

uint32_t g410ccc = 0;

void** g410cc8 = reinterpret_cast<void**>(0);

uint32_t g410cc4 = 0;

int32_t GetCommandLineA = 0xd026;

void fun_40631c() {
    void* esp1;
    void** edi2;
    void** esi3;
    void** ebx4;
    uint32_t eax5;
    void*** edx6;
    uint32_t ecx7;
    void** ecx8;
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
    int32_t eax19;
    void** ecx20;
    void** v21;
    void** v22;
    void** v23;
    void** eax24;
    void** v25;
    void** eax26;
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
    void** eax37;
    uint32_t eax38;
    uint16_t v39;
    int32_t eax40;
    int32_t eax41;
    void** ecx42;
    void** v43;

    esp1 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4);
    g0 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(esp1) - 4 - 4 - 4 - 4);
    eax5 = reinterpret_cast<uint32_t>(GetVersion(edi2, esi3, ebx4));
    edx6 = reinterpret_cast<void***>(0);
    *reinterpret_cast<signed char*>(&edx6) = *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(&eax5) + 1);
    g410cd0 = edx6;
    ecx7 = eax5 & 0xff;
    g410ccc = ecx7;
    ecx8 = reinterpret_cast<void**>((ecx7 << 8) + reinterpret_cast<uint32_t>(edx6));
    g410cc8 = ecx8;
    g410cc4 = eax5 >> 16;
    eax19 = fun_406702(ecx8, 0, edi2, esi3, ebx4, v9, v10, v11, v12, v13, v14, v15, v16, v17, v18);
    ecx20 = reinterpret_cast<void**>(0);
    if (!eax19) {
        fun_406437(0, 28, edi2, esi3, ebx4, v21, v22, v23);
        ecx20 = reinterpret_cast<void**>(28);
    }
    fun_40917a(ecx20, edi2, esi3, ebx4);
    eax24 = reinterpret_cast<void**>(GetCommandLineA(ecx20, edi2, esi3, ebx4));
    g4112c8 = eax24;
    eax26 = fun_409048(ecx20, edi2, esi3, ebx4, v25);
    g410d04 = eax26;
    fun_408dfb(ecx20, edi2, esi3, ebx4);
    fun_408d42(ecx20, edi2, esi3, ebx4, v27, v28, v29, v30, v31, v32, v33, v34, v35);
    fun_40537b(ecx20, edi2, esi3, ebx4);
    v36 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(esp1) + 0xffffffa4);
    GetStartupInfoA(ecx20, v36, edi2, esi3, ebx4);
    eax37 = fun_408cea(ecx20, v36, edi2, esi3, ebx4);
    if (1) {
        eax38 = 10;
    } else {
        eax38 = v39;
    }
    eax40 = reinterpret_cast<int32_t>(GetModuleHandleA(ecx20, 0, 0, eax37, eax38, v36, edi2, esi3, ebx4));
    eax41 = fun_404200(ecx20, eax40, 0, 0, eax37, eax38, v36, edi2, esi3, ebx4);
    fun_4053a8(ecx20);
    ecx42 = *reinterpret_cast<void***>(*reinterpret_cast<void***>(v43));
    fun_408b66(ecx42, v43);
    goto eax41;
}

struct s102 {
    int32_t f0;
    void** f4;
    signed char[3] pad8;
    void** f8;
    signed char[3] pad12;
    void** f12;
    signed char[3] pad16;
    void** f16;
    signed char[3] pad20;
    void** f20;
    signed char[3] pad24;
    void** f24;
    signed char[3] pad28;
    void** f28;
    signed char[3] pad32;
    void** f32;
    signed char[3] pad36;
    void** f36;
};

void fun_406407(void** ecx) {
    int32_t* esp2;
    int32_t ebp3;
    int32_t ebp4;
    struct s102* esp5;

    esp2 = reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(*reinterpret_cast<void**>(ebp3 - 24)) - 4);
    *esp2 = *reinterpret_cast<int32_t*>(ebp4 - 0x68);
    esp5 = reinterpret_cast<struct s102*>(esp2 - 1);
    esp5->f0 = reinterpret_cast<int32_t>(fun_406412);
    fun_4053b9(ecx, esp5->f4, esp5->f8, esp5->f12, esp5->f16, esp5->f20, esp5->f24, esp5->f28, esp5->f32, esp5->f36);
}

struct s103 {
    signed char[64] pad64;
    unsigned char f64;
};

struct s104 {
    signed char[64] pad64;
    unsigned char f64;
};

void fun_407b24(int32_t ecx) {
    struct s103* ebx2;
    struct s104* ebx3;
    unsigned char bh4;
    void* ebx5;
    int32_t edi6;
    void* ebx7;
    int32_t edi8;
    signed char bl9;
    int32_t eax10;
    int32_t eax11;
    signed char al12;
    int32_t eax13;
    int32_t eax14;

    ebx2->f64 = reinterpret_cast<unsigned char>(ebx3->f64 ^ bh4);
    *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(ebx5) + edi6 * 2 + 64) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(ebx7) + edi8 * 2 + 64) + bl9);
    *reinterpret_cast<signed char*>(eax10 + 0x2300407b) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(eax11 + 0x2300407b) + al12);
    __asm__("ror dword [edx+0x8a078806], 1");
    *reinterpret_cast<int32_t*>(eax13 + 0x468a0147) = *reinterpret_cast<int32_t*>(eax14 + 0x468a0147) + ecx;
}

void fun_407c3d(int32_t ecx) {
}

void fun_407c89(int32_t ecx) {
}

void fun_407dc5(int32_t ecx) {
}

signed char gd800407c;

struct s105 {
    signed char[3] pad3;
    signed char f3;
};

void fun_407cac(uint32_t ecx) {
    int1_t less2;
    signed char tmp8_3;
    int1_t sf4;
    int32_t edx5;
    int32_t edx6;
    struct s105* edi7;
    int32_t* esi8;
    void* esi9;
    uint32_t ecx10;
    int32_t* edi11;
    void* edi12;
    int32_t edx13;

    if (!less2) {
        tmp8_3 = reinterpret_cast<signed char>(gd800407c + 0x7c);
        gd800407c = tmp8_3;
        sf4 = gd800407c < 0;
        if (sf4 == __intrinsic()) 
            goto 0x407cf7;
        *reinterpret_cast<signed char*>(edx5 - 0x2edcfcba) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(edx6 - 0x2edcfcba) + *reinterpret_cast<signed char*>(&ecx));
        edi7->f3 = 0x7c;
        esi8 = reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(esi9) - 1);
        ecx10 = ecx >> 2;
        edi11 = reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(edi12) - 1);
        if (ecx10 < 8) 
            goto 0x407c80;
        while (ecx10) {
            --ecx10;
            *edi11 = *esi8;
            --edi11;
            --esi8;
        }
        goto *reinterpret_cast<int32_t*>(edx13 * 4 + 0x407da0);
    }
}

void fun_4081ad() {
    int32_t ebp1;

    *reinterpret_cast<uint32_t*>(ebp1 - 4) = 0xffffffff;
}

struct s106 {
    signed char[4] pad4;
    int32_t f4;
};

void fun_405b3d(int32_t a1, int32_t a2) {
    struct s106* ebp3;

    goto ebp3->f4;
}

int32_t fun_408307() {
    struct s65** v1;
    int32_t ebp2;
    int32_t eax3;

    v1 = *reinterpret_cast<struct s65***>(ebp2 - 20);
    eax3 = fun_408377(v1);
    return eax3;
}

int32_t fun_408559() {
    return 1;
}

struct s107 {
    signed char[12] pad12;
    unsigned char f12;
};

int32_t fun_4085bb() {
    int32_t eax1;
    struct s107* ebp2;

    eax1 = 0;
    *reinterpret_cast<unsigned char*>(&eax1) = reinterpret_cast<uint1_t>(!!ebp2->f12);
    return eax1;
}

void fun_40867d() {
}

void fun_4086d3() {
}

void fun_4089b6() {
    int32_t ebp1;
    int32_t ebp2;

    *reinterpret_cast<int32_t*>(ebp1 - 36) = 0;
    *reinterpret_cast<uint32_t*>(ebp2 - 4) = 0xffffffff;
}

int32_t fun_408a66() {
    return 1;
}

int32_t fun_405e14(struct s41* a1, int32_t a2) {
    int32_t eax3;
    int32_t* v4;

    eax3 = 1;
    if (a1->f4 & 6) {
        *v4 = a2;
        eax3 = 3;
    }
    return eax3;
}

void fun_4086f7() {
}

signed char gcc004098;

void fun_409894(int32_t ecx) {
    int16_t ax2;
    int32_t eax3;
    signed char dh4;
    int32_t eax5;
    signed char* ebx6;
    signed char* ebx7;

    *reinterpret_cast<signed char*>(&ax2) = gcc004098;
    eax3 = ax2 + 1;
    *reinterpret_cast<signed char*>(&eax3) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(&eax3) + dh4);
    eax5 = *reinterpret_cast<int16_t*>(&eax3) + 1;
    *ebx6 = reinterpret_cast<signed char>(*ebx7 + *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(&eax5) + 1));
    __asm__("ror dword [edx+0x8a078806], 1");
    *reinterpret_cast<int32_t*>(eax5 + 0x468a0147) = *reinterpret_cast<int32_t*>(eax5 + 0x468a0147) + ecx;
}

void fun_4099ad(int32_t ecx) {
}

void fun_4099f9(int32_t ecx) {
}

void fun_409b35(int32_t ecx) {
}

struct s108 {
    int32_t f0;
    signed char[12] pad16;
    int32_t f16;
    int32_t f20;
};

int32_t g410e60 = 0;

int32_t fun_409b65(void** ecx, struct s108** a2) {
    int32_t eax3;
    int32_t eax4;
    int32_t eax5;

    if ((*a2)->f0 != 0xe06d7363 || ((*a2)->f16 != 3 || (*a2)->f20 != 0x19930520)) {
        eax3 = g410e60;
        if (!eax3 || (eax4 = fun_409c01(ecx), eax4 == 0)) {
            eax5 = 0;
        } else {
            eax5 = reinterpret_cast<int32_t>(g410e60(eax3, a2));
        }
        return eax5;
    } else {
        goto 0x40863c;
    }
}

struct s109 {
    signed char[3] pad3;
    signed char f3;
};

void fun_409a1c(uint32_t ecx) {
    int32_t edx2;
    int32_t edx3;
    signed char bl4;
    int32_t eax5;
    int32_t eax6;
    signed char dh7;
    int32_t eax8;
    int32_t edx9;
    int32_t edx10;
    struct s109* edi11;
    int32_t* esi12;
    void* esi13;
    uint32_t ecx14;
    int32_t* edi15;
    void* edi16;
    int32_t edx17;

    *reinterpret_cast<signed char*>(edx2 - 0x65b7ffc0) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(edx3 - 0x65b7ffc0) - bl4);
    eax5 = eax6 + 1;
    *reinterpret_cast<signed char*>(eax5 - 0x66) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(eax5 - 0x66) + dh7);
    eax8 = eax5 + 1;
    *reinterpret_cast<signed char*>(edx9 - 0x2edcfcba) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(edx10 - 0x2edcfcba) + *reinterpret_cast<signed char*>(&ecx));
    edi11->f3 = *reinterpret_cast<signed char*>(&eax8);
    esi12 = reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(esi13) - 1);
    ecx14 = ecx >> 2;
    edi15 = reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(edi16) - 1);
    if (ecx14 < 8) 
        goto 0x4099f0;
    while (ecx14) {
        --ecx14;
        *edi15 = *esi12;
        --edi15;
        --esi12;
    }
    switch (edx17) {
    case 3:
        goto 0x409b4c;
    case 2:
        goto 0x409b38;
    case 1:
        goto 0x409b28;
    case 0:
        goto 0x409b20;
    }
}

int32_t SetUnhandledExceptionFilter = 0xd1a8;

void fun_409bab() {
    int32_t eax1;

    eax1 = reinterpret_cast<int32_t>(SetUnhandledExceptionFilter());
    g410e60 = eax1;
    goto fun_409b65;
}

void fun_409c6a() {
}

void fun_40a317() {
}

int32_t fun_40ab10(int32_t a1, uint32_t a2, int32_t a3, uint32_t a4) {
    if (a4 | a2) {
        return a1 * a3;
    } else {
        return a1 * a3;
    }
}

void fun_40adac() {
    void* esp1;
    int32_t ebp2;
    int32_t ebp3;
    int32_t ebp4;

    esp1 = *reinterpret_cast<void**>(ebp2 - 24);
    *reinterpret_cast<int32_t*>(ebp3 - 36) = 0;
    *reinterpret_cast<uint32_t*>(ebp4 - 4) = 0xffffffff;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(esp1) - 4) = 1;
}

void fun_40ae1b() {
    int32_t ebp1;

    *reinterpret_cast<uint32_t*>(ebp1 - 4) = 0xffffffff;
}

int32_t fun_40b220(void** ecx, void** a2, void** a3, void** a4, int32_t a5) {
    int32_t edi6;
    int32_t esi7;
    void** ebx8;
    void** ebp9;
    int32_t eax10;

    eax10 = fun_407df5(ecx, a2, a3, a4, a5, 0x40c734, 0, 0, 0, edi6, esi7, ebx8, 0x40c734, ebp9);
    return eax10;
}

int32_t PostQuitMessage = 0xccc6;

int32_t DefWindowProcA = 0xccb4;

void fun_4041d0(int32_t a1, int32_t a2, int32_t a3, int32_t a4) {
    int32_t esi5;

    if (!(a2 - 2)) {
        PostQuitMessage(0, esi5, __return_address());
    }
    DefWindowProcA();
    goto a2;
}

struct s110 {
    int32_t f0;
    signed char f4;
};

void fun_404ae2(int32_t ecx) {
    struct s110* edi2;
    int32_t* esi3;
    signed char* edi4;
    int32_t eax5;
    int32_t eax6;
    signed char dh7;
    void* edx8;
    void* edx9;
    int32_t eax10;
    int32_t eax11;
    int32_t ebx12;
    int32_t ebx13;

    edi2->f0 = *esi3;
    edi4 = &edi2->f4;
    eax5 = eax6 - 1 + 1;
    *reinterpret_cast<signed char*>(ecx + ecx * 2 + 0x4a2f0040) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(ecx + ecx * 2 + 0x4a2f0040) + *reinterpret_cast<signed char*>(&eax5));
    *edi4 = reinterpret_cast<signed char>(*edi4 + dh7);
    edx8 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(edx9) - 1);
    eax10 = eax5 + 1 + 1;
    *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(edx8) + ecx * 2 + 64) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(edx8) + ecx * 2 + 64) + *reinterpret_cast<signed char*>(&eax10));
    *(edi4 - 0x7effbfb7) = reinterpret_cast<signed char>(*(edi4 - 0x7effbfb7) + *reinterpret_cast<signed char*>(&ecx));
    eax11 = eax10 - 1 + 1;
    *reinterpret_cast<signed char*>(ebx12 - 0x74aceb14) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(ebx13 - 0x74aceb14) + *reinterpret_cast<signed char*>(&eax11));
}

struct s111 {
    signed char[124] pad124;
    signed char f124;
};

void fun_407c06(signed char cl) {
    unsigned char* eax2;
    int32_t eax3;
    signed char* eax4;
    int32_t eax5;
    signed char bh6;
    unsigned char* eax7;
    int32_t eax8;
    signed char bh9;
    uint1_t cf10;
    unsigned char* eax11;
    int32_t eax12;
    unsigned char* eax13;
    int32_t eax14;
    unsigned char bh15;
    void* eax16;
    signed char al17;
    struct s111* eax18;
    int32_t ebx19;
    int32_t ebx20;

    eax2[eax3 * 2] = reinterpret_cast<unsigned char>(eax4[eax5 * 2] - reinterpret_cast<unsigned char>(bh6 + reinterpret_cast<uint1_t>(eax7[eax8 * 2] < reinterpret_cast<unsigned char>(bh9 + cf10))));
    eax11[eax12 * 2] = reinterpret_cast<unsigned char>(eax13[eax14 * 2] & bh15);
    *reinterpret_cast<signed char*>(&eax16) = reinterpret_cast<signed char>(al17 - 0x7c);
    eax18 = reinterpret_cast<struct s111*>(reinterpret_cast<int32_t>(eax16) + 1);
    eax18->f124 = reinterpret_cast<signed char>(eax18->f124 + *reinterpret_cast<signed char*>(&eax18));
    *reinterpret_cast<signed char*>(ebx19 + 0x5f5e0845) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(ebx20 + 0x5f5e0845) + cl);
}

struct s112 {
    signed char[3] pad3;
    int32_t f3;
};

struct s113 {
    signed char[3] pad3;
    int32_t f3;
};

void fun_407b45(uint32_t ecx) {
    int32_t* esi2;
    struct s112* esi3;
    int32_t* edi4;
    struct s113* edi5;
    int32_t edx6;

    esi2 = &esi3->f3;
    edi4 = &edi5->f3;
    if (ecx < 8) 
        goto 0x407b1c;
    while (ecx) {
        --ecx;
        *edi4 = *esi2;
        ++edi4;
        ++esi2;
    }
    switch (edx6) {
    case 3:
        goto 0x407c40;
    case 2:
        goto 0x407c2c;
    case 1:
        goto 0x407c20;
    case 0:
        goto 0x407c18;
    }
}

int32_t fun_405c2b(void** ecx, void** a2, void** a3, void** a4) {
    void** v5;
    void** v6;
    void** v7;
    int32_t ebp8;
    int32_t eax9;

    v5 = *reinterpret_cast<void***>(a3 + 16);
    v6 = *reinterpret_cast<void***>(a3 + 8);
    v7 = *reinterpret_cast<void***>(a3 + 12);
    eax9 = fun_407df5(ecx, a2, v7, a4, 0, v6, v5, a3, 0, ebp8, __return_address(), a2, a3, a4);
    return eax9;
}

struct s114 {
    int32_t f0;
    struct s21* f4;
    int32_t f8;
};

void fun_408311() {
    void* esp1;
    int32_t ebp2;
    int32_t ebp3;
    int32_t* esp4;
    int32_t* esp5;
    int32_t ebp6;
    struct s114* esp7;

    esp1 = *reinterpret_cast<void**>(ebp2 - 24);
    *reinterpret_cast<uint32_t*>(ebp3 - 44) = 0;
    esp4 = reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(esp1) - 4);
    *esp4 = 0xff;
    esp5 = esp4 - 1;
    *esp5 = ebp6 - 16;
    esp7 = reinterpret_cast<struct s114*>(esp5 - 1);
    esp7->f0 = 0x408323;
    fun_405e36(esp7->f4, esp7->f8);
    goto 0x4082f8;
}

void fun_40855d() {
    goto 0x40863c;
}

void fun_4085c4() {
    goto 0x40863c;
}

void fun_408a6a() {
    int32_t ebp1;

    *reinterpret_cast<uint32_t*>(ebp1 - 4) = 0xffffffff;
}

struct s115 {
    signed char[24] pad24;
    struct s21* f24;
    int32_t f28;
};

void fun_4093ed(struct s115* a1) {
    int32_t v2;
    struct s21* v3;

    v2 = a1->f28;
    v3 = a1->f24;
    fun_405e36(v3, v2);
    return;
}

struct s116 {
    signed char[3] pad3;
    int32_t f3;
};

struct s117 {
    signed char[3] pad3;
    int32_t f3;
};

void fun_4098b5(uint32_t ecx) {
    int32_t* esi2;
    struct s116* esi3;
    int32_t* edi4;
    struct s117* edi5;
    int32_t edx6;

    esi2 = &esi3->f3;
    edi4 = &edi5->f3;
    if (ecx < 8) 
        goto 0x40988c;
    while (ecx) {
        --ecx;
        *edi4 = *esi2;
        ++edi4;
        ++esi2;
    }
    switch (edx6) {
    case 3:
        goto 0x4099b0;
    case 2:
        goto 0x40999c;
    case 1:
        goto 0x409990;
    case 0:
        goto 0x409988;
    }
}

void fun_409bbc() {
    int32_t v1;

    v1 = g410e60;
    SetUnhandledExceptionFilter();
    goto v1;
}

void fun_40b22a() {
    signed char* eax1;
    signed char* eax2;
    signed char al3;
    signed char* eax4;
    signed char* eax5;
    signed char al6;
    signed char* eax7;
    signed char* eax8;
    signed char al9;
    signed char* eax10;
    signed char* eax11;
    signed char al12;
    signed char* eax13;
    signed char* eax14;
    signed char al15;
    signed char* eax16;
    signed char* eax17;
    signed char al18;
    signed char* eax19;
    signed char* eax20;
    signed char al21;
    signed char* eax22;
    signed char* eax23;
    signed char al24;
    signed char* eax25;
    signed char* eax26;
    signed char al27;
    signed char* eax28;
    signed char* eax29;
    signed char al30;
    signed char* eax31;
    signed char* eax32;
    signed char al33;
    signed char* eax34;
    signed char* eax35;
    signed char al36;
    signed char* eax37;
    signed char* eax38;
    signed char al39;
    signed char* eax40;
    signed char* eax41;
    signed char al42;
    signed char* eax43;
    signed char* eax44;
    signed char al45;
    signed char* eax46;
    signed char* eax47;
    signed char al48;
    signed char* eax49;
    signed char* eax50;
    signed char al51;
    signed char* eax52;
    signed char* eax53;
    signed char al54;
    signed char* eax55;
    signed char* eax56;
    signed char al57;
    signed char* eax58;
    signed char* eax59;
    signed char al60;
    signed char* eax61;
    signed char* eax62;
    signed char al63;
    signed char* eax64;
    signed char* eax65;
    signed char al66;
    signed char* eax67;
    signed char* eax68;
    signed char al69;
    signed char* eax70;
    signed char* eax71;
    signed char al72;
    signed char* eax73;
    signed char* eax74;
    signed char al75;
    signed char* eax76;
    signed char* eax77;
    signed char al78;
    signed char* eax79;
    signed char* eax80;
    signed char al81;
    signed char* eax82;
    signed char* eax83;
    signed char al84;
    signed char* eax85;
    signed char* eax86;
    signed char al87;
    signed char* eax88;
    signed char* eax89;
    signed char al90;
    signed char* eax91;
    signed char* eax92;
    signed char al93;
    signed char* eax94;
    signed char* eax95;
    signed char al96;
    signed char* eax97;
    signed char* eax98;
    signed char al99;
    signed char* eax100;
    signed char* eax101;
    signed char al102;
    signed char* eax103;
    signed char* eax104;
    signed char al105;
    signed char* eax106;
    signed char* eax107;
    signed char al108;
    signed char* eax109;
    signed char* eax110;
    signed char al111;
    signed char* eax112;
    signed char* eax113;
    signed char al114;
    signed char* eax115;
    signed char* eax116;
    signed char al117;
    signed char* eax118;
    signed char* eax119;
    signed char al120;
    signed char* eax121;
    signed char* eax122;
    signed char al123;
    signed char* eax124;
    signed char* eax125;
    signed char al126;
    signed char* eax127;
    signed char* eax128;
    signed char al129;
    signed char* eax130;
    signed char* eax131;
    signed char al132;
    signed char* eax133;
    signed char* eax134;
    signed char al135;
    signed char* eax136;
    signed char* eax137;
    signed char al138;
    signed char* eax139;
    signed char* eax140;
    signed char al141;
    signed char* eax142;
    signed char* eax143;
    signed char al144;
    signed char* eax145;
    signed char* eax146;
    signed char al147;
    signed char* eax148;
    signed char* eax149;
    signed char al150;
    signed char* eax151;
    signed char* eax152;
    signed char al153;
    signed char* eax154;
    signed char* eax155;
    signed char al156;
    signed char* eax157;
    signed char* eax158;
    signed char al159;
    signed char* eax160;
    signed char* eax161;
    signed char al162;
    signed char* eax163;
    signed char* eax164;
    signed char al165;
    signed char* eax166;
    signed char* eax167;
    signed char al168;
    signed char* eax169;
    signed char* eax170;
    signed char al171;
    signed char* eax172;
    signed char* eax173;
    signed char al174;
    signed char* eax175;
    signed char* eax176;
    signed char al177;
    signed char* eax178;
    signed char* eax179;
    signed char al180;
    signed char* eax181;
    signed char* eax182;
    signed char al183;
    signed char* eax184;
    signed char* eax185;
    signed char al186;
    signed char* eax187;
    signed char* eax188;
    signed char al189;
    signed char* eax190;
    signed char* eax191;
    signed char al192;
    signed char* eax193;
    signed char* eax194;
    signed char al195;
    signed char* eax196;
    signed char* eax197;
    signed char al198;
    signed char* eax199;
    signed char* eax200;
    signed char al201;
    signed char* eax202;
    signed char* eax203;
    signed char al204;
    signed char* eax205;
    signed char* eax206;
    signed char al207;
    signed char* eax208;
    signed char* eax209;
    signed char al210;
    signed char* eax211;
    signed char* eax212;
    signed char al213;
    signed char* eax214;
    signed char* eax215;
    signed char al216;
    signed char* eax217;
    signed char* eax218;
    signed char al219;
    signed char* eax220;
    signed char* eax221;
    signed char al222;
    signed char* eax223;
    signed char* eax224;
    signed char al225;
    signed char* eax226;
    signed char* eax227;
    signed char al228;
    signed char* eax229;
    signed char* eax230;
    signed char al231;
    signed char* eax232;
    signed char* eax233;
    signed char al234;
    signed char* eax235;
    signed char* eax236;
    signed char al237;
    signed char* eax238;
    signed char* eax239;
    signed char al240;
    signed char* eax241;
    signed char* eax242;
    signed char al243;
    signed char* eax244;
    signed char* eax245;
    signed char al246;
    signed char* eax247;
    signed char* eax248;
    signed char al249;
    signed char* eax250;
    signed char* eax251;
    signed char al252;
    signed char* eax253;
    signed char* eax254;
    signed char al255;
    signed char* eax256;
    signed char* eax257;
    signed char al258;
    signed char* eax259;
    signed char* eax260;
    signed char al261;
    signed char* eax262;
    signed char* eax263;
    signed char al264;
    signed char* eax265;
    signed char* eax266;
    signed char al267;
    signed char* eax268;
    signed char* eax269;
    signed char al270;
    signed char* eax271;
    signed char* eax272;
    signed char al273;
    signed char* eax274;
    signed char* eax275;
    signed char al276;
    signed char* eax277;
    signed char* eax278;
    signed char al279;
    signed char* eax280;
    signed char* eax281;
    signed char al282;
    signed char* eax283;
    signed char* eax284;
    signed char al285;
    signed char* eax286;
    signed char* eax287;
    signed char al288;
    signed char* eax289;
    signed char* eax290;
    signed char al291;
    signed char* eax292;
    signed char* eax293;
    signed char al294;
    signed char* eax295;
    signed char* eax296;
    signed char al297;
    signed char* eax298;
    signed char* eax299;
    signed char al300;
    signed char* eax301;
    signed char* eax302;
    signed char al303;
    signed char* eax304;
    signed char* eax305;
    signed char al306;
    signed char* eax307;
    signed char* eax308;
    signed char al309;
    signed char* eax310;
    signed char* eax311;
    signed char al312;
    signed char* eax313;
    signed char* eax314;
    signed char al315;
    signed char* eax316;
    signed char* eax317;
    signed char al318;
    signed char* eax319;
    signed char* eax320;
    signed char al321;
    signed char* eax322;
    signed char* eax323;
    signed char al324;
    signed char* eax325;
    signed char* eax326;
    signed char al327;
    signed char* eax328;
    signed char* eax329;
    signed char al330;
    signed char* eax331;
    signed char* eax332;
    signed char al333;
    signed char* eax334;
    signed char* eax335;
    signed char al336;
    signed char* eax337;
    signed char* eax338;
    signed char al339;
    signed char* eax340;
    signed char* eax341;
    signed char al342;
    signed char* eax343;
    signed char* eax344;
    signed char al345;
    signed char* eax346;
    signed char* eax347;
    signed char al348;
    signed char* eax349;
    signed char* eax350;
    signed char al351;
    signed char* eax352;
    signed char* eax353;
    signed char al354;
    signed char* eax355;
    signed char* eax356;
    signed char al357;
    signed char* eax358;
    signed char* eax359;
    signed char al360;
    signed char* eax361;
    signed char* eax362;
    signed char al363;
    signed char* eax364;
    signed char* eax365;
    signed char al366;
    signed char* eax367;
    signed char* eax368;
    signed char al369;
    signed char* eax370;
    signed char* eax371;
    signed char al372;
    signed char* eax373;
    signed char* eax374;
    signed char al375;
    signed char* eax376;
    signed char* eax377;
    signed char al378;
    signed char* eax379;
    signed char* eax380;
    signed char al381;
    signed char* eax382;
    signed char* eax383;
    signed char al384;
    signed char* eax385;
    signed char* eax386;
    signed char al387;
    signed char* eax388;
    signed char* eax389;
    signed char al390;
    signed char* eax391;
    signed char* eax392;
    signed char al393;
    signed char* eax394;
    signed char* eax395;
    signed char al396;
    signed char* eax397;
    signed char* eax398;
    signed char al399;
    signed char* eax400;
    signed char* eax401;
    signed char al402;
    signed char* eax403;
    signed char* eax404;
    signed char al405;
    signed char* eax406;
    signed char* eax407;
    signed char al408;
    signed char* eax409;
    signed char* eax410;
    signed char al411;
    signed char* eax412;
    signed char* eax413;
    signed char al414;
    signed char* eax415;
    signed char* eax416;
    signed char al417;
    signed char* eax418;
    signed char* eax419;
    signed char al420;
    signed char* eax421;
    signed char* eax422;
    signed char al423;
    signed char* eax424;
    signed char* eax425;
    signed char al426;
    signed char* eax427;
    signed char* eax428;
    signed char al429;
    signed char* eax430;
    signed char* eax431;
    signed char al432;
    signed char* eax433;
    signed char* eax434;
    signed char al435;
    signed char* eax436;
    signed char* eax437;
    signed char al438;
    signed char* eax439;
    signed char* eax440;
    signed char al441;
    signed char* eax442;
    signed char* eax443;
    signed char al444;
    signed char* eax445;
    signed char* eax446;
    signed char al447;
    signed char* eax448;
    signed char* eax449;
    signed char al450;
    signed char* eax451;
    signed char* eax452;
    signed char al453;
    signed char* eax454;
    signed char* eax455;
    signed char al456;
    signed char* eax457;
    signed char* eax458;
    signed char al459;
    signed char* eax460;
    signed char* eax461;
    signed char al462;
    signed char* eax463;
    signed char* eax464;
    signed char al465;
    signed char* eax466;
    signed char* eax467;
    signed char al468;
    signed char* eax469;
    signed char* eax470;
    signed char al471;
    signed char* eax472;
    signed char* eax473;
    signed char al474;
    signed char* eax475;
    signed char* eax476;
    signed char al477;
    signed char* eax478;
    signed char* eax479;
    signed char al480;
    signed char* eax481;
    signed char* eax482;
    signed char al483;
    signed char* eax484;
    signed char* eax485;
    signed char al486;
    signed char* eax487;
    signed char* eax488;
    signed char al489;
    signed char* eax490;
    signed char* eax491;
    signed char al492;
    signed char* eax493;
    signed char* eax494;
    signed char al495;
    signed char* eax496;
    signed char* eax497;
    signed char al498;
    signed char* eax499;
    signed char* eax500;
    signed char al501;
    signed char* eax502;
    signed char* eax503;
    signed char al504;
    signed char* eax505;
    signed char* eax506;
    signed char al507;
    signed char* eax508;
    signed char* eax509;
    signed char al510;
    signed char* eax511;
    signed char* eax512;
    signed char al513;
    signed char* eax514;
    signed char* eax515;
    signed char al516;
    signed char* eax517;
    signed char* eax518;
    signed char al519;
    signed char* eax520;
    signed char* eax521;
    signed char al522;
    signed char* eax523;
    signed char* eax524;
    signed char al525;
    signed char* eax526;
    signed char* eax527;
    signed char al528;
    signed char* eax529;
    signed char* eax530;
    signed char al531;
    signed char* eax532;
    signed char* eax533;
    signed char al534;
    signed char* eax535;
    signed char* eax536;
    signed char al537;
    signed char* eax538;
    signed char* eax539;
    signed char al540;
    signed char* eax541;
    signed char* eax542;
    signed char al543;
    signed char* eax544;
    signed char* eax545;
    signed char al546;
    signed char* eax547;
    signed char* eax548;
    signed char al549;
    signed char* eax550;
    signed char* eax551;
    signed char al552;
    signed char* eax553;
    signed char* eax554;
    signed char al555;
    signed char* eax556;
    signed char* eax557;
    signed char al558;
    signed char* eax559;
    signed char* eax560;
    signed char al561;
    signed char* eax562;
    signed char* eax563;
    signed char al564;
    signed char* eax565;
    signed char* eax566;
    signed char al567;
    signed char* eax568;
    signed char* eax569;
    signed char al570;
    signed char* eax571;
    signed char* eax572;
    signed char al573;
    signed char* eax574;
    signed char* eax575;
    signed char al576;
    signed char* eax577;
    signed char* eax578;
    signed char al579;
    signed char* eax580;
    signed char* eax581;
    signed char al582;
    signed char* eax583;
    signed char* eax584;
    signed char al585;
    signed char* eax586;
    signed char* eax587;
    signed char al588;
    signed char* eax589;
    signed char* eax590;
    signed char al591;
    signed char* eax592;
    signed char* eax593;
    signed char al594;
    signed char* eax595;
    signed char* eax596;
    signed char al597;
    signed char* eax598;
    signed char* eax599;
    signed char al600;
    signed char* eax601;
    signed char* eax602;
    signed char al603;
    signed char* eax604;
    signed char* eax605;
    signed char al606;
    signed char* eax607;
    signed char* eax608;
    signed char al609;
    signed char* eax610;
    signed char* eax611;
    signed char al612;
    signed char* eax613;
    signed char* eax614;
    signed char al615;
    signed char* eax616;
    signed char* eax617;
    signed char al618;
    signed char* eax619;
    signed char* eax620;
    signed char al621;
    signed char* eax622;
    signed char* eax623;
    signed char al624;
    signed char* eax625;
    signed char* eax626;
    signed char al627;
    signed char* eax628;
    signed char* eax629;
    signed char al630;
    signed char* eax631;
    signed char* eax632;
    signed char al633;
    signed char* eax634;
    signed char* eax635;
    signed char al636;
    signed char* eax637;
    signed char* eax638;
    signed char al639;
    signed char* eax640;
    signed char* eax641;
    signed char al642;
    signed char* eax643;
    signed char* eax644;
    signed char al645;
    signed char* eax646;
    signed char* eax647;
    signed char al648;
    signed char* eax649;
    signed char* eax650;
    signed char al651;
    signed char* eax652;
    signed char* eax653;
    signed char al654;
    signed char* eax655;
    signed char* eax656;
    signed char al657;
    signed char* eax658;
    signed char* eax659;
    signed char al660;
    signed char* eax661;
    signed char* eax662;
    signed char al663;
    signed char* eax664;
    signed char* eax665;
    signed char al666;
    signed char* eax667;
    signed char* eax668;
    signed char al669;
    signed char* eax670;
    signed char* eax671;
    signed char al672;
    signed char* eax673;
    signed char* eax674;
    signed char al675;
    signed char* eax676;
    signed char* eax677;
    signed char al678;
    signed char* eax679;
    signed char* eax680;
    signed char al681;
    signed char* eax682;
    signed char* eax683;
    signed char al684;
    signed char* eax685;
    signed char* eax686;
    signed char al687;
    signed char* eax688;
    signed char* eax689;
    signed char al690;
    signed char* eax691;
    signed char* eax692;
    signed char al693;
    signed char* eax694;
    signed char* eax695;
    signed char al696;
    signed char* eax697;
    signed char* eax698;
    signed char al699;
    signed char* eax700;
    signed char* eax701;
    signed char al702;
    signed char* eax703;
    signed char* eax704;
    signed char al705;
    signed char* eax706;
    signed char* eax707;
    signed char al708;
    signed char* eax709;
    signed char* eax710;
    signed char al711;
    signed char* eax712;
    signed char* eax713;
    signed char al714;
    signed char* eax715;
    signed char* eax716;
    signed char al717;
    signed char* eax718;
    signed char* eax719;
    signed char al720;
    signed char* eax721;
    signed char* eax722;
    signed char al723;
    signed char* eax724;
    signed char* eax725;
    signed char al726;
    signed char* eax727;
    signed char* eax728;
    signed char al729;
    signed char* eax730;
    signed char* eax731;
    signed char al732;
    signed char* eax733;
    signed char* eax734;
    signed char al735;
    signed char* eax736;
    signed char* eax737;
    signed char al738;
    signed char* eax739;
    signed char* eax740;
    signed char al741;
    signed char* eax742;
    signed char* eax743;
    signed char al744;
    signed char* eax745;
    signed char* eax746;
    signed char al747;
    signed char* eax748;
    signed char* eax749;
    signed char al750;
    signed char* eax751;
    signed char* eax752;
    signed char al753;
    signed char* eax754;
    signed char* eax755;
    signed char al756;
    signed char* eax757;
    signed char* eax758;
    signed char al759;
    signed char* eax760;
    signed char* eax761;
    signed char al762;
    signed char* eax763;
    signed char* eax764;
    signed char al765;
    signed char* eax766;
    signed char* eax767;
    signed char al768;
    signed char* eax769;
    signed char* eax770;
    signed char al771;
    signed char* eax772;
    signed char* eax773;
    signed char al774;
    signed char* eax775;
    signed char* eax776;
    signed char al777;
    signed char* eax778;
    signed char* eax779;
    signed char al780;
    signed char* eax781;
    signed char* eax782;
    signed char al783;
    signed char* eax784;
    signed char* eax785;
    signed char al786;
    signed char* eax787;
    signed char* eax788;
    signed char al789;
    signed char* eax790;
    signed char* eax791;
    signed char al792;
    signed char* eax793;
    signed char* eax794;
    signed char al795;
    signed char* eax796;
    signed char* eax797;
    signed char al798;
    signed char* eax799;
    signed char* eax800;
    signed char al801;
    signed char* eax802;
    signed char* eax803;
    signed char al804;
    signed char* eax805;
    signed char* eax806;
    signed char al807;
    signed char* eax808;
    signed char* eax809;
    signed char al810;
    signed char* eax811;
    signed char* eax812;
    signed char al813;
    signed char* eax814;
    signed char* eax815;
    signed char al816;
    signed char* eax817;
    signed char* eax818;
    signed char al819;
    signed char* eax820;
    signed char* eax821;
    signed char al822;
    signed char* eax823;
    signed char* eax824;
    signed char al825;
    signed char* eax826;
    signed char* eax827;
    signed char al828;
    signed char* eax829;
    signed char* eax830;
    signed char al831;
    signed char* eax832;
    signed char* eax833;
    signed char al834;
    signed char* eax835;
    signed char* eax836;
    signed char al837;
    signed char* eax838;
    signed char* eax839;
    signed char al840;
    signed char* eax841;
    signed char* eax842;
    signed char al843;
    signed char* eax844;
    signed char* eax845;
    signed char al846;
    signed char* eax847;
    signed char* eax848;
    signed char al849;
    signed char* eax850;
    signed char* eax851;
    signed char al852;
    signed char* eax853;
    signed char* eax854;
    signed char al855;
    signed char* eax856;
    signed char* eax857;
    signed char al858;
    signed char* eax859;
    signed char* eax860;
    signed char al861;
    signed char* eax862;
    signed char* eax863;
    signed char al864;
    signed char* eax865;
    signed char* eax866;
    signed char al867;
    signed char* eax868;
    signed char* eax869;
    signed char al870;
    signed char* eax871;
    signed char* eax872;
    signed char al873;
    signed char* eax874;
    signed char* eax875;
    signed char al876;
    signed char* eax877;
    signed char* eax878;
    signed char al879;
    signed char* eax880;
    signed char* eax881;
    signed char al882;
    signed char* eax883;
    signed char* eax884;
    signed char al885;
    signed char* eax886;
    signed char* eax887;
    signed char al888;
    signed char* eax889;
    signed char* eax890;
    signed char al891;
    signed char* eax892;
    signed char* eax893;
    signed char al894;
    signed char* eax895;
    signed char* eax896;
    signed char al897;
    signed char* eax898;
    signed char* eax899;
    signed char al900;
    signed char* eax901;
    signed char* eax902;
    signed char al903;
    signed char* eax904;
    signed char* eax905;
    signed char al906;
    signed char* eax907;
    signed char* eax908;
    signed char al909;
    signed char* eax910;
    signed char* eax911;
    signed char al912;
    signed char* eax913;
    signed char* eax914;
    signed char al915;
    signed char* eax916;
    signed char* eax917;
    signed char al918;
    signed char* eax919;
    signed char* eax920;
    signed char al921;
    signed char* eax922;
    signed char* eax923;
    signed char al924;
    signed char* eax925;
    signed char* eax926;
    signed char al927;
    signed char* eax928;
    signed char* eax929;
    signed char al930;
    signed char* eax931;
    signed char* eax932;
    signed char al933;
    signed char* eax934;
    signed char* eax935;
    signed char al936;
    signed char* eax937;
    signed char* eax938;
    signed char al939;
    signed char* eax940;
    signed char* eax941;
    signed char al942;
    signed char* eax943;
    signed char* eax944;
    signed char al945;
    signed char* eax946;
    signed char* eax947;
    signed char al948;
    signed char* eax949;
    signed char* eax950;
    signed char al951;
    signed char* eax952;
    signed char* eax953;
    signed char al954;
    signed char* eax955;
    signed char* eax956;
    signed char al957;
    signed char* eax958;
    signed char* eax959;
    signed char al960;
    signed char* eax961;
    signed char* eax962;
    signed char al963;
    signed char* eax964;
    signed char* eax965;
    signed char al966;
    signed char* eax967;
    signed char* eax968;
    signed char al969;
    signed char* eax970;
    signed char* eax971;
    signed char al972;
    signed char* eax973;
    signed char* eax974;
    signed char al975;
    signed char* eax976;
    signed char* eax977;
    signed char al978;
    signed char* eax979;
    signed char* eax980;
    signed char al981;
    signed char* eax982;
    signed char* eax983;
    signed char al984;
    signed char* eax985;
    signed char* eax986;
    signed char al987;
    signed char* eax988;
    signed char* eax989;
    signed char al990;
    signed char* eax991;
    signed char* eax992;
    signed char al993;
    signed char* eax994;
    signed char* eax995;
    signed char al996;
    signed char* eax997;
    signed char* eax998;
    signed char al999;
    signed char* eax1000;
    signed char* eax1001;
    signed char al1002;
    signed char* eax1003;
    signed char* eax1004;
    signed char al1005;
    signed char* eax1006;
    signed char* eax1007;
    signed char al1008;
    signed char* eax1009;
    signed char* eax1010;
    signed char al1011;
    signed char* eax1012;
    signed char* eax1013;
    signed char al1014;
    signed char* eax1015;
    signed char* eax1016;
    signed char al1017;
    signed char* eax1018;
    signed char* eax1019;
    signed char al1020;
    signed char* eax1021;
    signed char* eax1022;
    signed char al1023;
    signed char* eax1024;
    signed char* eax1025;
    signed char al1026;
    signed char* eax1027;
    signed char* eax1028;
    signed char al1029;
    signed char* eax1030;
    signed char* eax1031;
    signed char al1032;
    signed char* eax1033;
    signed char* eax1034;
    signed char al1035;
    signed char* eax1036;
    signed char* eax1037;
    signed char al1038;
    signed char* eax1039;
    signed char* eax1040;
    signed char al1041;
    signed char* eax1042;
    signed char* eax1043;
    signed char al1044;
    signed char* eax1045;
    signed char* eax1046;
    signed char al1047;
    signed char* eax1048;
    signed char* eax1049;
    signed char al1050;
    signed char* eax1051;
    signed char* eax1052;
    signed char al1053;
    signed char* eax1054;
    signed char* eax1055;
    signed char al1056;
    signed char* eax1057;
    signed char* eax1058;
    signed char al1059;
    signed char* eax1060;
    signed char* eax1061;
    signed char al1062;
    signed char* eax1063;
    signed char* eax1064;
    signed char al1065;
    signed char* eax1066;
    signed char* eax1067;
    signed char al1068;
    signed char* eax1069;
    signed char* eax1070;
    signed char al1071;
    signed char* eax1072;
    signed char* eax1073;
    signed char al1074;
    signed char* eax1075;
    signed char* eax1076;
    signed char al1077;
    signed char* eax1078;
    signed char* eax1079;
    signed char al1080;
    signed char* eax1081;
    signed char* eax1082;
    signed char al1083;
    signed char* eax1084;
    signed char* eax1085;
    signed char al1086;
    signed char* eax1087;
    signed char* eax1088;
    signed char al1089;
    signed char* eax1090;
    signed char* eax1091;
    signed char al1092;
    signed char* eax1093;
    signed char* eax1094;
    signed char al1095;
    signed char* eax1096;
    signed char* eax1097;
    signed char al1098;
    signed char* eax1099;
    signed char* eax1100;
    signed char al1101;
    signed char* eax1102;
    signed char* eax1103;
    signed char al1104;
    signed char* eax1105;
    signed char* eax1106;
    signed char al1107;
    signed char* eax1108;
    signed char* eax1109;
    signed char al1110;
    signed char* eax1111;
    signed char* eax1112;
    signed char al1113;
    signed char* eax1114;
    signed char* eax1115;
    signed char al1116;
    signed char* eax1117;
    signed char* eax1118;
    signed char al1119;
    signed char* eax1120;
    signed char* eax1121;
    signed char al1122;
    signed char* eax1123;
    signed char* eax1124;
    signed char al1125;
    signed char* eax1126;
    signed char* eax1127;
    signed char al1128;
    signed char* eax1129;
    signed char* eax1130;
    signed char al1131;
    signed char* eax1132;
    signed char* eax1133;
    signed char al1134;
    signed char* eax1135;
    signed char* eax1136;
    signed char al1137;
    signed char* eax1138;
    signed char* eax1139;
    signed char al1140;
    signed char* eax1141;
    signed char* eax1142;
    signed char al1143;
    signed char* eax1144;
    signed char* eax1145;
    signed char al1146;
    signed char* eax1147;
    signed char* eax1148;
    signed char al1149;
    signed char* eax1150;
    signed char* eax1151;
    signed char al1152;
    signed char* eax1153;
    signed char* eax1154;
    signed char al1155;
    signed char* eax1156;
    signed char* eax1157;
    signed char al1158;
    signed char* eax1159;
    signed char* eax1160;
    signed char al1161;
    signed char* eax1162;
    signed char* eax1163;
    signed char al1164;
    signed char* eax1165;
    signed char* eax1166;
    signed char al1167;
    signed char* eax1168;
    signed char* eax1169;
    signed char al1170;
    signed char* eax1171;
    signed char* eax1172;
    signed char al1173;
    signed char* eax1174;
    signed char* eax1175;
    signed char al1176;
    signed char* eax1177;
    signed char* eax1178;
    signed char al1179;
    signed char* eax1180;
    signed char* eax1181;
    signed char al1182;
    signed char* eax1183;
    signed char* eax1184;
    signed char al1185;
    signed char* eax1186;
    signed char* eax1187;
    signed char al1188;
    signed char* eax1189;
    signed char* eax1190;
    signed char al1191;
    signed char* eax1192;
    signed char* eax1193;
    signed char al1194;
    signed char* eax1195;
    signed char* eax1196;
    signed char al1197;
    signed char* eax1198;
    signed char* eax1199;
    signed char al1200;
    signed char* eax1201;
    signed char* eax1202;
    signed char al1203;
    signed char* eax1204;
    signed char* eax1205;
    signed char al1206;
    signed char* eax1207;
    signed char* eax1208;
    signed char al1209;
    signed char* eax1210;
    signed char* eax1211;
    signed char al1212;
    signed char* eax1213;
    signed char* eax1214;
    signed char al1215;
    signed char* eax1216;
    signed char* eax1217;
    signed char al1218;
    signed char* eax1219;
    signed char* eax1220;
    signed char al1221;
    signed char* eax1222;
    signed char* eax1223;
    signed char al1224;
    signed char* eax1225;
    signed char* eax1226;
    signed char al1227;
    signed char* eax1228;
    signed char* eax1229;
    signed char al1230;
    signed char* eax1231;
    signed char* eax1232;
    signed char al1233;
    signed char* eax1234;
    signed char* eax1235;
    signed char al1236;
    signed char* eax1237;
    signed char* eax1238;
    signed char al1239;
    signed char* eax1240;
    signed char* eax1241;
    signed char al1242;
    signed char* eax1243;
    signed char* eax1244;
    signed char al1245;
    signed char* eax1246;
    signed char* eax1247;
    signed char al1248;
    signed char* eax1249;
    signed char* eax1250;
    signed char al1251;
    signed char* eax1252;
    signed char* eax1253;
    signed char al1254;
    signed char* eax1255;
    signed char* eax1256;
    signed char al1257;
    signed char* eax1258;
    signed char* eax1259;
    signed char al1260;
    signed char* eax1261;
    signed char* eax1262;
    signed char al1263;
    signed char* eax1264;
    signed char* eax1265;
    signed char al1266;
    signed char* eax1267;
    signed char* eax1268;
    signed char al1269;
    signed char* eax1270;
    signed char* eax1271;
    signed char al1272;
    signed char* eax1273;
    signed char* eax1274;
    signed char al1275;
    signed char* eax1276;
    signed char* eax1277;
    signed char al1278;
    signed char* eax1279;
    signed char* eax1280;
    signed char al1281;
    signed char* eax1282;
    signed char* eax1283;
    signed char al1284;
    signed char* eax1285;
    signed char* eax1286;
    signed char al1287;
    signed char* eax1288;
    signed char* eax1289;
    signed char al1290;
    signed char* eax1291;
    signed char* eax1292;
    signed char al1293;
    signed char* eax1294;
    signed char* eax1295;
    signed char al1296;
    signed char* eax1297;
    signed char* eax1298;
    signed char al1299;
    signed char* eax1300;
    signed char* eax1301;
    signed char al1302;
    signed char* eax1303;
    signed char* eax1304;
    signed char al1305;
    signed char* eax1306;
    signed char* eax1307;
    signed char al1308;
    signed char* eax1309;
    signed char* eax1310;
    signed char al1311;
    signed char* eax1312;
    signed char* eax1313;
    signed char al1314;
    signed char* eax1315;
    signed char* eax1316;
    signed char al1317;
    signed char* eax1318;
    signed char* eax1319;
    signed char al1320;
    signed char* eax1321;
    signed char* eax1322;
    signed char al1323;
    signed char* eax1324;
    signed char* eax1325;
    signed char al1326;
    signed char* eax1327;
    signed char* eax1328;
    signed char al1329;
    signed char* eax1330;
    signed char* eax1331;
    signed char al1332;
    signed char* eax1333;
    signed char* eax1334;
    signed char al1335;
    signed char* eax1336;
    signed char* eax1337;
    signed char al1338;
    signed char* eax1339;
    signed char* eax1340;
    signed char al1341;
    signed char* eax1342;
    signed char* eax1343;
    signed char al1344;
    signed char* eax1345;
    signed char* eax1346;
    signed char al1347;
    signed char* eax1348;
    signed char* eax1349;
    signed char al1350;
    signed char* eax1351;
    signed char* eax1352;
    signed char al1353;
    signed char* eax1354;
    signed char* eax1355;
    signed char al1356;
    signed char* eax1357;
    signed char* eax1358;
    signed char al1359;
    signed char* eax1360;
    signed char* eax1361;
    signed char al1362;
    signed char* eax1363;
    signed char* eax1364;
    signed char al1365;
    signed char* eax1366;
    signed char* eax1367;
    signed char al1368;
    signed char* eax1369;
    signed char* eax1370;
    signed char al1371;
    signed char* eax1372;
    signed char* eax1373;
    signed char al1374;
    signed char* eax1375;
    signed char* eax1376;
    signed char al1377;
    signed char* eax1378;
    signed char* eax1379;
    signed char al1380;
    signed char* eax1381;
    signed char* eax1382;
    signed char al1383;
    signed char* eax1384;
    signed char* eax1385;
    signed char al1386;
    signed char* eax1387;
    signed char* eax1388;
    signed char al1389;
    signed char* eax1390;
    signed char* eax1391;
    signed char al1392;
    signed char* eax1393;
    signed char* eax1394;
    signed char al1395;
    signed char* eax1396;
    signed char* eax1397;
    signed char al1398;
    signed char* eax1399;
    signed char* eax1400;
    signed char al1401;
    signed char* eax1402;
    signed char* eax1403;
    signed char al1404;
    signed char* eax1405;
    signed char* eax1406;
    signed char al1407;
    signed char* eax1408;
    signed char* eax1409;
    signed char al1410;
    signed char* eax1411;
    signed char* eax1412;
    signed char al1413;
    signed char* eax1414;
    signed char* eax1415;
    signed char al1416;
    signed char* eax1417;
    signed char* eax1418;
    signed char al1419;
    signed char* eax1420;
    signed char* eax1421;
    signed char al1422;
    signed char* eax1423;
    signed char* eax1424;
    signed char al1425;
    signed char* eax1426;
    signed char* eax1427;
    signed char al1428;
    signed char* eax1429;
    signed char* eax1430;
    signed char al1431;
    signed char* eax1432;
    signed char* eax1433;
    signed char al1434;
    signed char* eax1435;
    signed char* eax1436;
    signed char al1437;
    signed char* eax1438;
    signed char* eax1439;
    signed char al1440;
    signed char* eax1441;
    signed char* eax1442;
    signed char al1443;
    signed char* eax1444;
    signed char* eax1445;
    signed char al1446;
    signed char* eax1447;
    signed char* eax1448;
    signed char al1449;
    signed char* eax1450;
    signed char* eax1451;
    signed char al1452;
    signed char* eax1453;
    signed char* eax1454;
    signed char al1455;
    signed char* eax1456;
    signed char* eax1457;
    signed char al1458;
    signed char* eax1459;
    signed char* eax1460;
    signed char al1461;
    signed char* eax1462;
    signed char* eax1463;
    signed char al1464;
    signed char* eax1465;
    signed char* eax1466;
    signed char al1467;
    signed char* eax1468;
    signed char* eax1469;
    signed char al1470;
    signed char* eax1471;
    signed char* eax1472;
    signed char al1473;
    signed char* eax1474;
    signed char* eax1475;
    signed char al1476;
    signed char* eax1477;
    signed char* eax1478;
    signed char al1479;
    signed char* eax1480;
    signed char* eax1481;
    signed char al1482;
    signed char* eax1483;
    signed char* eax1484;
    signed char al1485;
    signed char* eax1486;
    signed char* eax1487;
    signed char al1488;
    signed char* eax1489;
    signed char* eax1490;
    signed char al1491;
    signed char* eax1492;
    signed char* eax1493;
    signed char al1494;
    signed char* eax1495;
    signed char* eax1496;
    signed char al1497;
    signed char* eax1498;
    signed char* eax1499;
    signed char al1500;
    signed char* eax1501;
    signed char* eax1502;
    signed char al1503;
    signed char* eax1504;
    signed char* eax1505;
    signed char al1506;
    signed char* eax1507;
    signed char* eax1508;
    signed char al1509;
    signed char* eax1510;
    signed char* eax1511;
    signed char al1512;
    signed char* eax1513;
    signed char* eax1514;
    signed char al1515;
    signed char* eax1516;
    signed char* eax1517;
    signed char al1518;
    signed char* eax1519;
    signed char* eax1520;
    signed char al1521;
    signed char* eax1522;
    signed char* eax1523;
    signed char al1524;
    signed char* eax1525;
    signed char* eax1526;
    signed char al1527;
    signed char* eax1528;
    signed char* eax1529;
    signed char al1530;
    signed char* eax1531;
    signed char* eax1532;
    signed char al1533;
    signed char* eax1534;
    signed char* eax1535;
    signed char al1536;
    signed char* eax1537;
    signed char* eax1538;
    signed char al1539;
    signed char* eax1540;
    signed char* eax1541;
    signed char al1542;
    signed char* eax1543;
    signed char* eax1544;
    signed char al1545;
    signed char* eax1546;
    signed char* eax1547;
    signed char al1548;
    signed char* eax1549;
    signed char* eax1550;
    signed char al1551;
    signed char* eax1552;
    signed char* eax1553;
    signed char al1554;
    signed char* eax1555;
    signed char* eax1556;
    signed char al1557;
    signed char* eax1558;
    signed char* eax1559;
    signed char al1560;
    signed char* eax1561;
    signed char* eax1562;
    signed char al1563;
    signed char* eax1564;
    signed char* eax1565;
    signed char al1566;
    signed char* eax1567;
    signed char* eax1568;
    signed char al1569;
    signed char* eax1570;
    signed char* eax1571;
    signed char al1572;
    signed char* eax1573;
    signed char* eax1574;
    signed char al1575;
    signed char* eax1576;
    signed char* eax1577;
    signed char al1578;
    signed char* eax1579;
    signed char* eax1580;
    signed char al1581;
    signed char* eax1582;
    signed char* eax1583;
    signed char al1584;
    signed char* eax1585;
    signed char* eax1586;
    signed char al1587;
    signed char* eax1588;
    signed char* eax1589;
    signed char al1590;
    signed char* eax1591;
    signed char* eax1592;
    signed char al1593;
    signed char* eax1594;
    signed char* eax1595;
    signed char al1596;
    signed char* eax1597;
    signed char* eax1598;
    signed char al1599;
    signed char* eax1600;
    signed char* eax1601;
    signed char al1602;
    signed char* eax1603;
    signed char* eax1604;
    signed char al1605;
    signed char* eax1606;
    signed char* eax1607;
    signed char al1608;
    signed char* eax1609;
    signed char* eax1610;
    signed char al1611;
    signed char* eax1612;
    signed char* eax1613;
    signed char al1614;
    signed char* eax1615;
    signed char* eax1616;
    signed char al1617;
    signed char* eax1618;
    signed char* eax1619;
    signed char al1620;
    signed char* eax1621;
    signed char* eax1622;
    signed char al1623;
    signed char* eax1624;
    signed char* eax1625;
    signed char al1626;
    signed char* eax1627;
    signed char* eax1628;
    signed char al1629;
    signed char* eax1630;
    signed char* eax1631;
    signed char al1632;
    signed char* eax1633;
    signed char* eax1634;
    signed char al1635;
    signed char* eax1636;
    signed char* eax1637;
    signed char al1638;
    signed char* eax1639;
    signed char* eax1640;
    signed char al1641;
    signed char* eax1642;
    signed char* eax1643;
    signed char al1644;
    signed char* eax1645;
    signed char* eax1646;
    signed char al1647;
    signed char* eax1648;
    signed char* eax1649;
    signed char al1650;
    signed char* eax1651;
    signed char* eax1652;
    signed char al1653;
    signed char* eax1654;
    signed char* eax1655;
    signed char al1656;
    signed char* eax1657;
    signed char* eax1658;
    signed char al1659;
    signed char* eax1660;
    signed char* eax1661;
    signed char al1662;
    signed char* eax1663;
    signed char* eax1664;
    signed char al1665;
    signed char* eax1666;
    signed char* eax1667;
    signed char al1668;
    signed char* eax1669;
    signed char* eax1670;
    signed char al1671;
    signed char* eax1672;
    signed char* eax1673;
    signed char al1674;
    signed char* eax1675;
    signed char* eax1676;
    signed char al1677;
    signed char* eax1678;
    signed char* eax1679;
    signed char al1680;
    signed char* eax1681;
    signed char* eax1682;
    signed char al1683;
    signed char* eax1684;
    signed char* eax1685;
    signed char al1686;
    signed char* eax1687;
    signed char* eax1688;
    signed char al1689;
    signed char* eax1690;
    signed char* eax1691;
    signed char al1692;
    signed char* eax1693;
    signed char* eax1694;
    signed char al1695;
    signed char* eax1696;
    signed char* eax1697;
    signed char al1698;
    signed char* eax1699;
    signed char* eax1700;
    signed char al1701;
    signed char* eax1702;
    signed char* eax1703;
    signed char al1704;
    signed char* eax1705;
    signed char* eax1706;
    signed char al1707;
    signed char* eax1708;
    signed char* eax1709;
    signed char al1710;
    signed char* eax1711;
    signed char* eax1712;
    signed char al1713;
    signed char* eax1714;
    signed char* eax1715;
    signed char al1716;
    signed char* eax1717;
    signed char* eax1718;
    signed char al1719;
    signed char* eax1720;
    signed char* eax1721;
    signed char al1722;
    signed char* eax1723;
    signed char* eax1724;
    signed char al1725;
    signed char* eax1726;
    signed char* eax1727;
    signed char al1728;
    signed char* eax1729;
    signed char* eax1730;
    signed char al1731;
    signed char* eax1732;
    signed char* eax1733;
    signed char al1734;
    signed char* eax1735;
    signed char* eax1736;
    signed char al1737;
    signed char* eax1738;
    signed char* eax1739;
    signed char al1740;
    signed char* eax1741;
    signed char* eax1742;
    signed char al1743;
    signed char* eax1744;
    signed char* eax1745;
    signed char al1746;
    signed char* eax1747;
    signed char* eax1748;
    signed char al1749;
    signed char* eax1750;
    signed char* eax1751;
    signed char al1752;
    signed char* eax1753;
    signed char* eax1754;
    signed char al1755;
    signed char* eax1756;
    signed char* eax1757;
    signed char al1758;
    signed char* eax1759;
    signed char* eax1760;
    signed char al1761;
    signed char* eax1762;
    signed char* eax1763;
    signed char al1764;
    signed char* eax1765;
    signed char* eax1766;
    signed char al1767;
    signed char* eax1768;
    signed char* eax1769;
    signed char al1770;
    signed char* eax1771;
    signed char* eax1772;
    signed char al1773;
    signed char* eax1774;
    signed char* eax1775;
    signed char al1776;
    signed char* eax1777;
    signed char* eax1778;
    signed char al1779;
    signed char* eax1780;
    signed char* eax1781;
    signed char al1782;
    signed char* eax1783;
    signed char* eax1784;
    signed char al1785;
    signed char* eax1786;
    signed char* eax1787;
    signed char al1788;
    signed char* eax1789;
    signed char* eax1790;
    signed char al1791;
    signed char* eax1792;
    signed char* eax1793;
    signed char al1794;
    signed char* eax1795;
    signed char* eax1796;
    signed char al1797;
    signed char* eax1798;
    signed char* eax1799;
    signed char al1800;
    signed char* eax1801;
    signed char* eax1802;
    signed char al1803;
    signed char* eax1804;
    signed char* eax1805;
    signed char al1806;
    signed char* eax1807;
    signed char* eax1808;
    signed char al1809;
    signed char* eax1810;
    signed char* eax1811;
    signed char al1812;
    signed char* eax1813;
    signed char* eax1814;
    signed char al1815;
    signed char* eax1816;
    signed char* eax1817;
    signed char al1818;
    signed char* eax1819;
    signed char* eax1820;
    signed char al1821;
    signed char* eax1822;
    signed char* eax1823;
    signed char al1824;
    signed char* eax1825;
    signed char* eax1826;
    signed char al1827;
    signed char* eax1828;
    signed char* eax1829;
    signed char al1830;
    signed char* eax1831;
    signed char* eax1832;
    signed char al1833;
    signed char* eax1834;
    signed char* eax1835;
    signed char al1836;
    signed char* eax1837;
    signed char* eax1838;
    signed char al1839;
    signed char* eax1840;
    signed char* eax1841;
    signed char al1842;
    signed char* eax1843;
    signed char* eax1844;
    signed char al1845;
    signed char* eax1846;
    signed char* eax1847;
    signed char al1848;
    signed char* eax1849;
    signed char* eax1850;
    signed char al1851;
    signed char* eax1852;
    signed char* eax1853;
    signed char al1854;
    signed char* eax1855;
    signed char* eax1856;
    signed char al1857;
    signed char* eax1858;
    signed char* eax1859;
    signed char al1860;
    signed char* eax1861;
    signed char* eax1862;
    signed char al1863;
    signed char* eax1864;
    signed char* eax1865;
    signed char al1866;
    signed char* eax1867;
    signed char* eax1868;
    signed char al1869;
    signed char* eax1870;
    signed char* eax1871;
    signed char al1872;
    signed char* eax1873;
    signed char* eax1874;
    signed char al1875;
    signed char* eax1876;
    signed char* eax1877;
    signed char al1878;
    signed char* eax1879;
    signed char* eax1880;
    signed char al1881;
    signed char* eax1882;
    signed char* eax1883;
    signed char al1884;
    signed char* eax1885;
    signed char* eax1886;
    signed char al1887;
    signed char* eax1888;
    signed char* eax1889;
    signed char al1890;
    signed char* eax1891;
    signed char* eax1892;
    signed char al1893;
    signed char* eax1894;
    signed char* eax1895;
    signed char al1896;
    signed char* eax1897;
    signed char* eax1898;
    signed char al1899;
    signed char* eax1900;
    signed char* eax1901;
    signed char al1902;
    signed char* eax1903;
    signed char* eax1904;
    signed char al1905;
    signed char* eax1906;
    signed char* eax1907;
    signed char al1908;
    signed char* eax1909;
    signed char* eax1910;
    signed char al1911;
    signed char* eax1912;
    signed char* eax1913;
    signed char al1914;
    signed char* eax1915;
    signed char* eax1916;
    signed char al1917;
    signed char* eax1918;
    signed char* eax1919;
    signed char al1920;
    signed char* eax1921;
    signed char* eax1922;
    signed char al1923;
    signed char* eax1924;
    signed char* eax1925;
    signed char al1926;
    signed char* eax1927;
    signed char* eax1928;
    signed char al1929;
    signed char* eax1930;
    signed char* eax1931;
    signed char al1932;
    signed char* eax1933;
    signed char* eax1934;
    signed char al1935;
    signed char* eax1936;
    signed char* eax1937;
    signed char al1938;
    signed char* eax1939;
    signed char* eax1940;
    signed char al1941;
    signed char* eax1942;
    signed char* eax1943;
    signed char al1944;
    signed char* eax1945;
    signed char* eax1946;
    signed char al1947;
    signed char* eax1948;
    signed char* eax1949;
    signed char al1950;
    signed char* eax1951;
    signed char* eax1952;
    signed char al1953;
    signed char* eax1954;
    signed char* eax1955;
    signed char al1956;
    signed char* eax1957;
    signed char* eax1958;
    signed char al1959;
    signed char* eax1960;
    signed char* eax1961;
    signed char al1962;
    signed char* eax1963;
    signed char* eax1964;
    signed char al1965;
    signed char* eax1966;
    signed char* eax1967;
    signed char al1968;
    signed char* eax1969;
    signed char* eax1970;
    signed char al1971;
    signed char* eax1972;
    signed char* eax1973;
    signed char al1974;
    signed char* eax1975;
    signed char* eax1976;
    signed char al1977;
    signed char* eax1978;
    signed char* eax1979;
    signed char al1980;
    signed char* eax1981;
    signed char* eax1982;
    signed char al1983;
    signed char* eax1984;
    signed char* eax1985;
    signed char al1986;
    signed char* eax1987;
    signed char* eax1988;
    signed char al1989;
    signed char* eax1990;
    signed char* eax1991;
    signed char al1992;
    signed char* eax1993;
    signed char* eax1994;
    signed char al1995;
    signed char* eax1996;
    signed char* eax1997;
    signed char al1998;
    signed char* eax1999;
    signed char* eax2000;
    signed char al2001;
    signed char* eax2002;
    signed char* eax2003;
    signed char al2004;
    signed char* eax2005;
    signed char* eax2006;
    signed char al2007;
    signed char* eax2008;
    signed char* eax2009;
    signed char al2010;
    signed char* eax2011;
    signed char* eax2012;
    signed char al2013;
    signed char* eax2014;
    signed char* eax2015;
    signed char al2016;
    signed char* eax2017;
    signed char* eax2018;
    signed char al2019;
    signed char* eax2020;
    signed char* eax2021;
    signed char al2022;
    signed char* eax2023;
    signed char* eax2024;
    signed char al2025;
    signed char* eax2026;
    signed char* eax2027;
    signed char al2028;
    signed char* eax2029;
    signed char* eax2030;
    signed char al2031;
    signed char* eax2032;
    signed char* eax2033;
    signed char al2034;
    signed char* eax2035;
    signed char* eax2036;
    signed char al2037;
    signed char* eax2038;
    signed char* eax2039;
    signed char al2040;
    signed char* eax2041;
    signed char* eax2042;
    signed char al2043;
    signed char* eax2044;
    signed char* eax2045;
    signed char al2046;
    signed char* eax2047;
    signed char* eax2048;
    signed char al2049;
    signed char* eax2050;
    signed char* eax2051;
    signed char al2052;
    signed char* eax2053;
    signed char* eax2054;
    signed char al2055;
    signed char* eax2056;
    signed char* eax2057;
    signed char al2058;
    signed char* eax2059;
    signed char* eax2060;
    signed char al2061;
    signed char* eax2062;
    signed char* eax2063;
    signed char al2064;
    signed char* eax2065;
    signed char* eax2066;
    signed char al2067;
    signed char* eax2068;
    signed char* eax2069;
    signed char al2070;
    signed char* eax2071;
    signed char* eax2072;
    signed char al2073;
    signed char* eax2074;
    signed char* eax2075;
    signed char al2076;
    signed char* eax2077;
    signed char* eax2078;
    signed char al2079;
    signed char* eax2080;
    signed char* eax2081;
    signed char al2082;
    signed char* eax2083;
    signed char* eax2084;
    signed char al2085;
    signed char* eax2086;
    signed char* eax2087;
    signed char al2088;
    signed char* eax2089;
    signed char* eax2090;
    signed char al2091;
    signed char* eax2092;
    signed char* eax2093;
    signed char al2094;
    signed char* eax2095;
    signed char* eax2096;
    signed char al2097;
    signed char* eax2098;
    signed char* eax2099;
    signed char al2100;
    signed char* eax2101;
    signed char* eax2102;
    signed char al2103;
    signed char* eax2104;
    signed char* eax2105;
    signed char al2106;
    signed char* eax2107;
    signed char* eax2108;
    signed char al2109;
    signed char* eax2110;
    signed char* eax2111;
    signed char al2112;
    signed char* eax2113;
    signed char* eax2114;
    signed char al2115;
    signed char* eax2116;
    signed char* eax2117;
    signed char al2118;
    signed char* eax2119;
    signed char* eax2120;
    signed char al2121;
    signed char* eax2122;
    signed char* eax2123;
    signed char al2124;
    signed char* eax2125;
    signed char* eax2126;
    signed char al2127;
    signed char* eax2128;
    signed char* eax2129;
    signed char al2130;
    signed char* eax2131;
    signed char* eax2132;
    signed char al2133;
    signed char* eax2134;
    signed char* eax2135;
    signed char al2136;
    signed char* eax2137;
    signed char* eax2138;
    signed char al2139;
    signed char* eax2140;
    signed char* eax2141;
    signed char al2142;
    signed char* eax2143;
    signed char* eax2144;
    signed char al2145;
    signed char* eax2146;
    signed char* eax2147;
    signed char al2148;
    signed char* eax2149;
    signed char* eax2150;
    signed char al2151;
    signed char* eax2152;
    signed char* eax2153;
    signed char al2154;
    signed char* eax2155;
    signed char* eax2156;
    signed char al2157;
    signed char* eax2158;
    signed char* eax2159;
    signed char al2160;
    signed char* eax2161;
    signed char* eax2162;
    signed char al2163;
    signed char* eax2164;
    signed char* eax2165;
    signed char al2166;
    signed char* eax2167;
    signed char* eax2168;
    signed char al2169;
    signed char* eax2170;
    signed char* eax2171;
    signed char al2172;
    signed char* eax2173;
    signed char* eax2174;
    signed char al2175;
    signed char* eax2176;
    signed char* eax2177;
    signed char al2178;
    signed char* eax2179;
    signed char* eax2180;
    signed char al2181;
    signed char* eax2182;
    signed char* eax2183;
    signed char al2184;
    signed char* eax2185;
    signed char* eax2186;
    signed char al2187;
    signed char* eax2188;
    signed char* eax2189;
    signed char al2190;
    signed char* eax2191;
    signed char* eax2192;
    signed char al2193;
    signed char* eax2194;
    signed char* eax2195;
    signed char al2196;
    signed char* eax2197;
    signed char* eax2198;
    signed char al2199;
    signed char* eax2200;
    signed char* eax2201;
    signed char al2202;
    signed char* eax2203;
    signed char* eax2204;
    signed char al2205;
    signed char* eax2206;
    signed char* eax2207;
    signed char al2208;
    signed char* eax2209;
    signed char* eax2210;
    signed char al2211;
    signed char* eax2212;
    signed char* eax2213;
    signed char al2214;
    signed char* eax2215;
    signed char* eax2216;
    signed char al2217;
    signed char* eax2218;
    signed char* eax2219;
    signed char al2220;
    signed char* eax2221;
    signed char* eax2222;
    signed char al2223;
    signed char* eax2224;
    signed char* eax2225;
    signed char al2226;
    signed char* eax2227;
    signed char* eax2228;
    signed char al2229;
    signed char* eax2230;
    signed char* eax2231;
    signed char al2232;
    signed char* eax2233;
    signed char* eax2234;
    signed char al2235;
    signed char* eax2236;
    signed char* eax2237;
    signed char al2238;
    signed char* eax2239;
    signed char* eax2240;
    signed char al2241;
    signed char* eax2242;
    signed char* eax2243;
    signed char al2244;
    signed char* eax2245;
    signed char* eax2246;
    signed char al2247;
    signed char* eax2248;
    signed char* eax2249;
    signed char al2250;
    signed char* eax2251;
    signed char* eax2252;
    signed char al2253;
    signed char* eax2254;
    signed char* eax2255;
    signed char al2256;
    signed char* eax2257;
    signed char* eax2258;
    signed char al2259;
    signed char* eax2260;
    signed char* eax2261;
    signed char al2262;
    signed char* eax2263;
    signed char* eax2264;
    signed char al2265;
    signed char* eax2266;
    signed char* eax2267;
    signed char al2268;
    signed char* eax2269;
    signed char* eax2270;
    signed char al2271;
    signed char* eax2272;
    signed char* eax2273;
    signed char al2274;
    signed char* eax2275;
    signed char* eax2276;
    signed char al2277;
    signed char* eax2278;
    signed char* eax2279;
    signed char al2280;
    signed char* eax2281;
    signed char* eax2282;
    signed char al2283;
    signed char* eax2284;
    signed char* eax2285;
    signed char al2286;
    signed char* eax2287;
    signed char* eax2288;
    signed char al2289;
    signed char* eax2290;
    signed char* eax2291;
    signed char al2292;
    signed char* eax2293;
    signed char* eax2294;
    signed char al2295;
    signed char* eax2296;
    signed char* eax2297;
    signed char al2298;
    signed char* eax2299;
    signed char* eax2300;
    signed char al2301;
    signed char* eax2302;
    signed char* eax2303;
    signed char al2304;
    signed char* eax2305;
    signed char* eax2306;
    signed char al2307;
    signed char* eax2308;
    signed char* eax2309;
    signed char al2310;
    signed char* eax2311;
    signed char* eax2312;
    signed char al2313;
    signed char* eax2314;
    signed char* eax2315;
    signed char al2316;
    signed char* eax2317;
    signed char* eax2318;
    signed char al2319;
    signed char* eax2320;
    signed char* eax2321;
    signed char al2322;
    signed char* eax2323;
    signed char* eax2324;
    signed char al2325;
    signed char* eax2326;
    signed char* eax2327;
    signed char al2328;
    signed char* eax2329;
    signed char* eax2330;
    signed char al2331;
    signed char* eax2332;
    signed char* eax2333;
    signed char al2334;
    signed char* eax2335;
    signed char* eax2336;
    signed char al2337;
    signed char* eax2338;
    signed char* eax2339;
    signed char al2340;
    signed char* eax2341;
    signed char* eax2342;
    signed char al2343;
    signed char* eax2344;
    signed char* eax2345;
    signed char al2346;
    signed char* eax2347;
    signed char* eax2348;
    signed char al2349;
    signed char* eax2350;
    signed char* eax2351;
    signed char al2352;
    signed char* eax2353;
    signed char* eax2354;
    signed char al2355;
    signed char* eax2356;
    signed char* eax2357;
    signed char al2358;
    signed char* eax2359;
    signed char* eax2360;
    signed char al2361;
    signed char* eax2362;
    signed char* eax2363;
    signed char al2364;
    signed char* eax2365;
    signed char* eax2366;
    signed char al2367;
    signed char* eax2368;
    signed char* eax2369;
    signed char al2370;
    signed char* eax2371;
    signed char* eax2372;
    signed char al2373;
    signed char* eax2374;
    signed char* eax2375;
    signed char al2376;
    signed char* eax2377;
    signed char* eax2378;
    signed char al2379;
    signed char* eax2380;
    signed char* eax2381;
    signed char al2382;
    signed char* eax2383;
    signed char* eax2384;
    signed char al2385;
    signed char* eax2386;
    signed char* eax2387;
    signed char al2388;
    signed char* eax2389;
    signed char* eax2390;
    signed char al2391;
    signed char* eax2392;
    signed char* eax2393;
    signed char al2394;
    signed char* eax2395;
    signed char* eax2396;
    signed char al2397;
    signed char* eax2398;
    signed char* eax2399;
    signed char al2400;
    signed char* eax2401;
    signed char* eax2402;
    signed char al2403;
    signed char* eax2404;
    signed char* eax2405;
    signed char al2406;
    signed char* eax2407;
    signed char* eax2408;
    signed char al2409;
    signed char* eax2410;
    signed char* eax2411;
    signed char al2412;
    signed char* eax2413;
    signed char* eax2414;
    signed char al2415;
    signed char* eax2416;
    signed char* eax2417;
    signed char al2418;
    signed char* eax2419;
    signed char* eax2420;
    signed char al2421;
    signed char* eax2422;
    signed char* eax2423;
    signed char al2424;
    signed char* eax2425;
    signed char* eax2426;
    signed char al2427;
    signed char* eax2428;
    signed char* eax2429;
    signed char al2430;
    signed char* eax2431;
    signed char* eax2432;
    signed char al2433;
    signed char* eax2434;
    signed char* eax2435;
    signed char al2436;
    signed char* eax2437;
    signed char* eax2438;
    signed char al2439;
    signed char* eax2440;
    signed char* eax2441;
    signed char al2442;
    signed char* eax2443;
    signed char* eax2444;
    signed char al2445;
    signed char* eax2446;
    signed char* eax2447;
    signed char al2448;
    signed char* eax2449;
    signed char* eax2450;
    signed char al2451;
    signed char* eax2452;
    signed char* eax2453;
    signed char al2454;
    signed char* eax2455;
    signed char* eax2456;
    signed char al2457;
    signed char* eax2458;
    signed char* eax2459;
    signed char al2460;
    signed char* eax2461;
    signed char* eax2462;
    signed char al2463;
    signed char* eax2464;
    signed char* eax2465;
    signed char al2466;
    signed char* eax2467;
    signed char* eax2468;
    signed char al2469;
    signed char* eax2470;
    signed char* eax2471;
    signed char al2472;
    signed char* eax2473;
    signed char* eax2474;
    signed char al2475;
    signed char* eax2476;
    signed char* eax2477;
    signed char al2478;
    signed char* eax2479;
    signed char* eax2480;
    signed char al2481;
    signed char* eax2482;
    signed char* eax2483;
    signed char al2484;
    signed char* eax2485;
    signed char* eax2486;
    signed char al2487;
    signed char* eax2488;
    signed char* eax2489;
    signed char al2490;
    signed char* eax2491;
    signed char* eax2492;
    signed char al2493;
    signed char* eax2494;
    signed char* eax2495;
    signed char al2496;
    signed char* eax2497;
    signed char* eax2498;
    signed char al2499;
    signed char* eax2500;
    signed char* eax2501;
    signed char al2502;
    signed char* eax2503;
    signed char* eax2504;
    signed char al2505;
    signed char* eax2506;
    signed char* eax2507;
    signed char al2508;
    signed char* eax2509;
    signed char* eax2510;
    signed char al2511;
    signed char* eax2512;
    signed char* eax2513;
    signed char al2514;
    signed char* eax2515;
    signed char* eax2516;
    signed char al2517;
    signed char* eax2518;
    signed char* eax2519;
    signed char al2520;
    signed char* eax2521;
    signed char* eax2522;
    signed char al2523;
    signed char* eax2524;
    signed char* eax2525;
    signed char al2526;
    signed char* eax2527;
    signed char* eax2528;
    signed char al2529;
    signed char* eax2530;
    signed char* eax2531;
    signed char al2532;
    signed char* eax2533;
    signed char* eax2534;
    signed char al2535;
    signed char* eax2536;
    signed char* eax2537;
    signed char al2538;
    signed char* eax2539;
    signed char* eax2540;
    signed char al2541;
    signed char* eax2542;
    signed char* eax2543;
    signed char al2544;
    signed char* eax2545;
    signed char* eax2546;
    signed char al2547;
    signed char* eax2548;
    signed char* eax2549;
    signed char al2550;
    signed char* eax2551;
    signed char* eax2552;
    signed char al2553;
    signed char* eax2554;
    signed char* eax2555;
    signed char al2556;
    signed char* eax2557;
    signed char* eax2558;
    signed char al2559;
    signed char* eax2560;
    signed char* eax2561;
    signed char al2562;
    signed char* eax2563;
    signed char* eax2564;
    signed char al2565;
    signed char* eax2566;
    signed char* eax2567;
    signed char al2568;
    signed char* eax2569;
    signed char* eax2570;
    signed char al2571;
    signed char* eax2572;
    signed char* eax2573;
    signed char al2574;
    signed char* eax2575;
    signed char* eax2576;
    signed char al2577;
    signed char* eax2578;
    signed char* eax2579;
    signed char al2580;
    signed char* eax2581;
    signed char* eax2582;
    signed char al2583;
    signed char* eax2584;
    signed char* eax2585;
    signed char al2586;
    signed char* eax2587;
    signed char* eax2588;
    signed char al2589;
    signed char* eax2590;
    signed char* eax2591;
    signed char al2592;
    signed char* eax2593;
    signed char* eax2594;
    signed char al2595;
    signed char* eax2596;
    signed char* eax2597;
    signed char al2598;
    signed char* eax2599;
    signed char* eax2600;
    signed char al2601;
    signed char* eax2602;
    signed char* eax2603;
    signed char al2604;
    signed char* eax2605;
    signed char* eax2606;
    signed char al2607;
    signed char* eax2608;
    signed char* eax2609;
    signed char al2610;
    signed char* eax2611;
    signed char* eax2612;
    signed char al2613;
    signed char* eax2614;
    signed char* eax2615;
    signed char al2616;
    signed char* eax2617;
    signed char* eax2618;
    signed char al2619;
    signed char* eax2620;
    signed char* eax2621;
    signed char al2622;
    signed char* eax2623;
    signed char* eax2624;
    signed char al2625;
    signed char* eax2626;
    signed char* eax2627;
    signed char al2628;
    signed char* eax2629;
    signed char* eax2630;
    signed char al2631;
    signed char* eax2632;
    signed char* eax2633;
    signed char al2634;
    signed char* eax2635;
    signed char* eax2636;
    signed char al2637;
    signed char* eax2638;
    signed char* eax2639;
    signed char al2640;
    signed char* eax2641;
    signed char* eax2642;
    signed char al2643;
    signed char* eax2644;
    signed char* eax2645;
    signed char al2646;
    signed char* eax2647;
    signed char* eax2648;
    signed char al2649;
    signed char* eax2650;
    signed char* eax2651;
    signed char al2652;
    signed char* eax2653;
    signed char* eax2654;
    signed char al2655;
    signed char* eax2656;
    signed char* eax2657;
    signed char al2658;
    signed char* eax2659;
    signed char* eax2660;
    signed char al2661;
    signed char* eax2662;
    signed char* eax2663;
    signed char al2664;
    signed char* eax2665;
    signed char* eax2666;
    signed char al2667;
    signed char* eax2668;
    signed char* eax2669;
    signed char al2670;
    signed char* eax2671;
    signed char* eax2672;
    signed char al2673;
    signed char* eax2674;
    signed char* eax2675;
    signed char al2676;
    signed char* eax2677;
    signed char* eax2678;
    signed char al2679;
    signed char* eax2680;
    signed char* eax2681;
    signed char al2682;
    signed char* eax2683;
    signed char* eax2684;
    signed char al2685;
    signed char* eax2686;
    signed char* eax2687;
    signed char al2688;
    signed char* eax2689;
    signed char* eax2690;
    signed char al2691;
    signed char* eax2692;
    signed char* eax2693;
    signed char al2694;
    signed char* eax2695;
    signed char* eax2696;
    signed char al2697;
    signed char* eax2698;
    signed char* eax2699;
    signed char al2700;
    signed char* eax2701;
    signed char* eax2702;
    signed char al2703;
    signed char* eax2704;
    signed char* eax2705;
    signed char al2706;
    signed char* eax2707;
    signed char* eax2708;
    signed char al2709;
    signed char* eax2710;
    signed char* eax2711;
    signed char al2712;
    signed char* eax2713;
    signed char* eax2714;
    signed char al2715;
    signed char* eax2716;
    signed char* eax2717;
    signed char al2718;
    signed char* eax2719;
    signed char* eax2720;
    signed char al2721;
    signed char* eax2722;
    signed char* eax2723;
    signed char al2724;
    signed char* eax2725;
    signed char* eax2726;
    signed char al2727;
    signed char* eax2728;
    signed char* eax2729;
    signed char al2730;
    signed char* eax2731;
    signed char* eax2732;
    signed char al2733;
    signed char* eax2734;
    signed char* eax2735;
    signed char al2736;
    signed char* eax2737;
    signed char* eax2738;
    signed char al2739;
    signed char* eax2740;
    signed char* eax2741;
    signed char al2742;
    signed char* eax2743;
    signed char* eax2744;
    signed char al2745;
    signed char* eax2746;
    signed char* eax2747;
    signed char al2748;
    signed char* eax2749;
    signed char* eax2750;
    signed char al2751;
    signed char* eax2752;
    signed char* eax2753;
    signed char al2754;
    signed char* eax2755;
    signed char* eax2756;
    signed char al2757;
    signed char* eax2758;
    signed char* eax2759;
    signed char al2760;
    signed char* eax2761;
    signed char* eax2762;
    signed char al2763;
    signed char* eax2764;
    signed char* eax2765;
    signed char al2766;
    signed char* eax2767;
    signed char* eax2768;
    signed char al2769;
    signed char* eax2770;
    signed char* eax2771;
    signed char al2772;
    signed char* eax2773;
    signed char* eax2774;
    signed char al2775;
    signed char* eax2776;
    signed char* eax2777;
    signed char al2778;
    signed char* eax2779;
    signed char* eax2780;
    signed char al2781;
    signed char* eax2782;
    signed char* eax2783;
    signed char al2784;
    signed char* eax2785;
    signed char* eax2786;
    signed char al2787;
    signed char* eax2788;
    signed char* eax2789;
    signed char al2790;
    signed char* eax2791;
    signed char* eax2792;
    signed char al2793;
    signed char* eax2794;
    signed char* eax2795;
    signed char al2796;
    signed char* eax2797;
    signed char* eax2798;
    signed char al2799;
    signed char* eax2800;
    signed char* eax2801;
    signed char al2802;
    signed char* eax2803;
    signed char* eax2804;
    signed char al2805;
    signed char* eax2806;
    signed char* eax2807;
    signed char al2808;
    signed char* eax2809;
    signed char* eax2810;
    signed char al2811;
    signed char* eax2812;
    signed char* eax2813;
    signed char al2814;
    signed char* eax2815;
    signed char* eax2816;
    signed char al2817;
    signed char* eax2818;
    signed char* eax2819;
    signed char al2820;
    signed char* eax2821;
    signed char* eax2822;
    signed char al2823;
    signed char* eax2824;
    signed char* eax2825;
    signed char al2826;
    signed char* eax2827;
    signed char* eax2828;
    signed char al2829;
    signed char* eax2830;
    signed char* eax2831;
    signed char al2832;
    signed char* eax2833;
    signed char* eax2834;
    signed char al2835;
    signed char* eax2836;
    signed char* eax2837;
    signed char al2838;
    signed char* eax2839;
    signed char* eax2840;
    signed char al2841;
    signed char* eax2842;
    signed char* eax2843;
    signed char al2844;
    signed char* eax2845;
    signed char* eax2846;
    signed char al2847;
    signed char* eax2848;
    signed char* eax2849;
    signed char al2850;
    signed char* eax2851;
    signed char* eax2852;
    signed char al2853;
    signed char* eax2854;
    signed char* eax2855;
    signed char al2856;
    signed char* eax2857;
    signed char* eax2858;
    signed char al2859;
    signed char* eax2860;
    signed char* eax2861;
    signed char al2862;
    signed char* eax2863;
    signed char* eax2864;
    signed char al2865;
    signed char* eax2866;
    signed char* eax2867;
    signed char al2868;
    signed char* eax2869;
    signed char* eax2870;
    signed char al2871;
    signed char* eax2872;
    signed char* eax2873;
    signed char al2874;
    signed char* eax2875;
    signed char* eax2876;
    signed char al2877;
    signed char* eax2878;
    signed char* eax2879;
    signed char al2880;
    signed char* eax2881;
    signed char* eax2882;
    signed char al2883;
    signed char* eax2884;
    signed char* eax2885;
    signed char al2886;
    signed char* eax2887;
    signed char* eax2888;
    signed char al2889;
    signed char* eax2890;
    signed char* eax2891;
    signed char al2892;
    signed char* eax2893;
    signed char* eax2894;
    signed char al2895;
    signed char* eax2896;
    signed char* eax2897;
    signed char al2898;
    signed char* eax2899;
    signed char* eax2900;
    signed char al2901;
    signed char* eax2902;
    signed char* eax2903;
    signed char al2904;
    signed char* eax2905;
    signed char* eax2906;
    signed char al2907;
    signed char* eax2908;
    signed char* eax2909;
    signed char al2910;
    signed char* eax2911;
    signed char* eax2912;
    signed char al2913;
    signed char* eax2914;
    signed char* eax2915;
    signed char al2916;
    signed char* eax2917;
    signed char* eax2918;
    signed char al2919;
    signed char* eax2920;
    signed char* eax2921;
    signed char al2922;
    signed char* eax2923;
    signed char* eax2924;
    signed char al2925;
    signed char* eax2926;
    signed char* eax2927;
    signed char al2928;
    signed char* eax2929;
    signed char* eax2930;
    signed char al2931;
    signed char* eax2932;
    signed char* eax2933;
    signed char al2934;
    signed char* eax2935;
    signed char* eax2936;
    signed char al2937;
    signed char* eax2938;
    signed char* eax2939;
    signed char al2940;
    signed char* eax2941;
    signed char* eax2942;
    signed char al2943;
    signed char* eax2944;
    signed char* eax2945;
    signed char al2946;
    signed char* eax2947;
    signed char* eax2948;
    signed char al2949;
    signed char* eax2950;
    signed char* eax2951;
    signed char al2952;
    signed char* eax2953;
    signed char* eax2954;
    signed char al2955;
    signed char* eax2956;
    signed char* eax2957;
    signed char al2958;
    signed char* eax2959;
    signed char* eax2960;
    signed char al2961;
    signed char* eax2962;
    signed char* eax2963;
    signed char al2964;
    signed char* eax2965;
    signed char* eax2966;
    signed char al2967;
    signed char* eax2968;
    signed char* eax2969;
    signed char al2970;
    signed char* eax2971;
    signed char* eax2972;
    signed char al2973;
    signed char* eax2974;
    signed char* eax2975;
    signed char al2976;
    signed char* eax2977;
    signed char* eax2978;
    signed char al2979;
    signed char* eax2980;
    signed char* eax2981;
    signed char al2982;
    signed char* eax2983;
    signed char* eax2984;
    signed char al2985;
    signed char* eax2986;
    signed char* eax2987;
    signed char al2988;
    signed char* eax2989;
    signed char* eax2990;
    signed char al2991;
    signed char* eax2992;
    signed char* eax2993;
    signed char al2994;
    signed char* eax2995;
    signed char* eax2996;
    signed char al2997;
    signed char* eax2998;
    signed char* eax2999;
    signed char al3000;
    signed char* eax3001;
    signed char* eax3002;
    signed char al3003;
    signed char* eax3004;
    signed char* eax3005;
    signed char al3006;
    signed char* eax3007;
    signed char* eax3008;
    signed char al3009;
    signed char* eax3010;
    signed char* eax3011;
    signed char al3012;
    signed char* eax3013;
    signed char* eax3014;
    signed char al3015;
    signed char* eax3016;
    signed char* eax3017;
    signed char al3018;
    signed char* eax3019;
    signed char* eax3020;
    signed char al3021;
    signed char* eax3022;
    signed char* eax3023;
    signed char al3024;
    signed char* eax3025;
    signed char* eax3026;
    signed char al3027;
    signed char* eax3028;
    signed char* eax3029;
    signed char al3030;
    signed char* eax3031;
    signed char* eax3032;
    signed char al3033;
    signed char* eax3034;
    signed char* eax3035;
    signed char al3036;
    signed char* eax3037;
    signed char* eax3038;
    signed char al3039;
    signed char* eax3040;
    signed char* eax3041;
    signed char al3042;
    signed char* eax3043;
    signed char* eax3044;
    signed char al3045;
    signed char* eax3046;
    signed char* eax3047;
    signed char al3048;
    signed char* eax3049;
    signed char* eax3050;
    signed char al3051;
    signed char* eax3052;
    signed char* eax3053;
    signed char al3054;
    signed char* eax3055;
    signed char* eax3056;
    signed char al3057;
    signed char* eax3058;
    signed char* eax3059;
    signed char al3060;
    signed char* eax3061;
    signed char* eax3062;
    signed char al3063;
    signed char* eax3064;
    signed char* eax3065;
    signed char al3066;
    signed char* eax3067;
    signed char* eax3068;
    signed char al3069;
    signed char* eax3070;
    signed char* eax3071;
    signed char al3072;
    signed char* eax3073;
    signed char* eax3074;
    signed char al3075;
    signed char* eax3076;
    signed char* eax3077;
    signed char al3078;
    signed char* eax3079;
    signed char* eax3080;
    signed char al3081;
    signed char* eax3082;
    signed char* eax3083;
    signed char al3084;
    signed char* eax3085;
    signed char* eax3086;
    signed char al3087;
    signed char* eax3088;
    signed char* eax3089;
    signed char al3090;
    signed char* eax3091;
    signed char* eax3092;
    signed char al3093;
    signed char* eax3094;
    signed char* eax3095;
    signed char al3096;
    signed char* eax3097;
    signed char* eax3098;
    signed char al3099;
    signed char* eax3100;
    signed char* eax3101;
    signed char al3102;
    signed char* eax3103;
    signed char* eax3104;
    signed char al3105;
    signed char* eax3106;
    signed char* eax3107;
    signed char al3108;
    signed char* eax3109;
    signed char* eax3110;
    signed char al3111;
    signed char* eax3112;
    signed char* eax3113;
    signed char al3114;
    signed char* eax3115;
    signed char* eax3116;
    signed char al3117;
    signed char* eax3118;
    signed char* eax3119;
    signed char al3120;
    signed char* eax3121;
    signed char* eax3122;
    signed char al3123;
    signed char* eax3124;
    signed char* eax3125;
    signed char al3126;
    signed char* eax3127;
    signed char* eax3128;
    signed char al3129;
    signed char* eax3130;
    signed char* eax3131;
    signed char al3132;
    signed char* eax3133;
    signed char* eax3134;
    signed char al3135;
    signed char* eax3136;
    signed char* eax3137;
    signed char al3138;
    signed char* eax3139;
    signed char* eax3140;
    signed char al3141;
    signed char* eax3142;
    signed char* eax3143;
    signed char al3144;
    signed char* eax3145;
    signed char* eax3146;
    signed char al3147;
    signed char* eax3148;
    signed char* eax3149;
    signed char al3150;
    signed char* eax3151;
    signed char* eax3152;
    signed char al3153;
    signed char* eax3154;
    signed char* eax3155;
    signed char al3156;
    signed char* eax3157;
    signed char* eax3158;
    signed char al3159;
    signed char* eax3160;
    signed char* eax3161;
    signed char al3162;
    signed char* eax3163;
    signed char* eax3164;
    signed char al3165;
    signed char* eax3166;
    signed char* eax3167;
    signed char al3168;
    signed char* eax3169;
    signed char* eax3170;
    signed char al3171;
    signed char* eax3172;
    signed char* eax3173;
    signed char al3174;
    signed char* eax3175;
    signed char* eax3176;
    signed char al3177;
    signed char* eax3178;
    signed char* eax3179;
    signed char al3180;
    signed char* eax3181;
    signed char* eax3182;
    signed char al3183;
    signed char* eax3184;
    signed char* eax3185;
    signed char al3186;
    signed char* eax3187;
    signed char* eax3188;
    signed char al3189;
    signed char* eax3190;
    signed char* eax3191;
    signed char al3192;
    signed char* eax3193;
    signed char* eax3194;
    signed char al3195;
    signed char* eax3196;
    signed char* eax3197;
    signed char al3198;
    signed char* eax3199;
    signed char* eax3200;
    signed char al3201;
    signed char* eax3202;
    signed char* eax3203;
    signed char al3204;
    signed char* eax3205;
    signed char* eax3206;
    signed char al3207;
    signed char* eax3208;
    signed char* eax3209;
    signed char al3210;
    signed char* eax3211;
    signed char* eax3212;
    signed char al3213;
    signed char* eax3214;
    signed char* eax3215;
    signed char al3216;
    signed char* eax3217;
    signed char* eax3218;
    signed char al3219;
    signed char* eax3220;
    signed char* eax3221;
    signed char al3222;
    signed char* eax3223;
    signed char* eax3224;
    signed char al3225;
    signed char* eax3226;
    signed char* eax3227;
    signed char al3228;
    signed char* eax3229;
    signed char* eax3230;
    signed char al3231;
    signed char* eax3232;
    signed char* eax3233;
    signed char al3234;
    signed char* eax3235;
    signed char* eax3236;
    signed char al3237;
    signed char* eax3238;
    signed char* eax3239;
    signed char al3240;
    signed char* eax3241;
    signed char* eax3242;
    signed char al3243;
    signed char* eax3244;
    signed char* eax3245;
    signed char al3246;
    signed char* eax3247;
    signed char* eax3248;
    signed char al3249;
    signed char* eax3250;
    signed char* eax3251;
    signed char al3252;
    signed char* eax3253;
    signed char* eax3254;
    signed char al3255;
    signed char* eax3256;
    signed char* eax3257;
    signed char al3258;
    signed char* eax3259;
    signed char* eax3260;
    signed char al3261;
    signed char* eax3262;
    signed char* eax3263;
    signed char al3264;
    signed char* eax3265;
    signed char* eax3266;
    signed char al3267;
    signed char* eax3268;
    signed char* eax3269;
    signed char al3270;
    signed char* eax3271;
    signed char* eax3272;
    signed char al3273;
    signed char* eax3274;
    signed char* eax3275;
    signed char al3276;
    signed char* eax3277;
    signed char* eax3278;
    signed char al3279;
    signed char* eax3280;
    signed char* eax3281;
    signed char al3282;
    signed char* eax3283;
    signed char* eax3284;
    signed char al3285;
    signed char* eax3286;
    signed char* eax3287;
    signed char al3288;
    signed char* eax3289;
    signed char* eax3290;
    signed char al3291;
    signed char* eax3292;
    signed char* eax3293;
    signed char al3294;
    signed char* eax3295;
    signed char* eax3296;
    signed char al3297;
    signed char* eax3298;
    signed char* eax3299;
    signed char al3300;
    signed char* eax3301;
    signed char* eax3302;
    signed char al3303;
    signed char* eax3304;
    signed char* eax3305;
    signed char al3306;
    signed char* eax3307;
    signed char* eax3308;
    signed char al3309;
    signed char* eax3310;
    signed char* eax3311;
    signed char al3312;
    signed char* eax3313;
    signed char* eax3314;
    signed char al3315;
    signed char* eax3316;
    signed char* eax3317;
    signed char al3318;
    signed char* eax3319;
    signed char* eax3320;
    signed char al3321;
    signed char* eax3322;
    signed char* eax3323;
    signed char al3324;
    signed char* eax3325;
    signed char* eax3326;
    signed char al3327;
    signed char* eax3328;
    signed char* eax3329;
    signed char al3330;
    signed char* eax3331;
    signed char* eax3332;
    signed char al3333;
    signed char* eax3334;
    signed char* eax3335;
    signed char al3336;
    signed char* eax3337;
    signed char* eax3338;
    signed char al3339;
    signed char* eax3340;
    signed char* eax3341;
    signed char al3342;
    signed char* eax3343;
    signed char* eax3344;
    signed char al3345;
    signed char* eax3346;
    signed char* eax3347;
    signed char al3348;
    signed char* eax3349;
    signed char* eax3350;
    signed char al3351;
    signed char* eax3352;
    signed char* eax3353;
    signed char al3354;
    signed char* eax3355;
    signed char* eax3356;
    signed char al3357;
    signed char* eax3358;
    signed char* eax3359;
    signed char al3360;
    signed char* eax3361;
    signed char* eax3362;
    signed char al3363;
    signed char* eax3364;
    signed char* eax3365;
    signed char al3366;
    signed char* eax3367;
    signed char* eax3368;
    signed char al3369;
    signed char* eax3370;
    signed char* eax3371;
    signed char al3372;
    signed char* eax3373;
    signed char* eax3374;
    signed char al3375;
    signed char* eax3376;
    signed char* eax3377;
    signed char al3378;
    signed char* eax3379;
    signed char* eax3380;
    signed char al3381;
    signed char* eax3382;
    signed char* eax3383;
    signed char al3384;
    signed char* eax3385;
    signed char* eax3386;
    signed char al3387;
    signed char* eax3388;
    signed char* eax3389;
    signed char al3390;
    signed char* eax3391;
    signed char* eax3392;
    signed char al3393;
    signed char* eax3394;
    signed char* eax3395;
    signed char al3396;
    signed char* eax3397;
    signed char* eax3398;
    signed char al3399;
    signed char* eax3400;
    signed char* eax3401;
    signed char al3402;
    signed char* eax3403;
    signed char* eax3404;
    signed char al3405;
    signed char* eax3406;
    signed char* eax3407;
    signed char al3408;
    signed char* eax3409;
    signed char* eax3410;
    signed char al3411;
    signed char* eax3412;
    signed char* eax3413;
    signed char al3414;
    signed char* eax3415;
    signed char* eax3416;
    signed char al3417;
    signed char* eax3418;
    signed char* eax3419;
    signed char al3420;
    signed char* eax3421;
    signed char* eax3422;
    signed char al3423;
    signed char* eax3424;
    signed char* eax3425;
    signed char al3426;
    signed char* eax3427;
    signed char* eax3428;
    signed char al3429;
    signed char* eax3430;
    signed char* eax3431;
    signed char al3432;
    signed char* eax3433;
    signed char* eax3434;
    signed char al3435;
    signed char* eax3436;
    signed char* eax3437;
    signed char al3438;
    signed char* eax3439;
    signed char* eax3440;
    signed char al3441;
    signed char* eax3442;
    signed char* eax3443;
    signed char al3444;
    signed char* eax3445;
    signed char* eax3446;
    signed char al3447;
    signed char* eax3448;
    signed char* eax3449;
    signed char al3450;
    signed char* eax3451;
    signed char* eax3452;
    signed char al3453;
    signed char* eax3454;
    signed char* eax3455;
    signed char al3456;
    signed char* eax3457;
    signed char* eax3458;
    signed char al3459;
    signed char* eax3460;
    signed char* eax3461;
    signed char al3462;
    signed char* eax3463;
    signed char* eax3464;
    signed char al3465;
    signed char* eax3466;
    signed char* eax3467;
    signed char al3468;
    signed char* eax3469;
    signed char* eax3470;
    signed char al3471;
    signed char* eax3472;
    signed char* eax3473;
    signed char al3474;
    signed char* eax3475;
    signed char* eax3476;
    signed char al3477;
    signed char* eax3478;
    signed char* eax3479;
    signed char al3480;
    signed char* eax3481;
    signed char* eax3482;
    signed char al3483;
    signed char* eax3484;
    signed char* eax3485;
    signed char al3486;
    signed char* eax3487;
    signed char* eax3488;
    signed char al3489;
    signed char* eax3490;
    signed char* eax3491;
    signed char al3492;
    signed char* eax3493;
    signed char* eax3494;
    signed char al3495;
    signed char* eax3496;
    signed char* eax3497;
    signed char al3498;
    signed char* eax3499;
    signed char* eax3500;
    signed char al3501;
    signed char* eax3502;
    signed char* eax3503;
    signed char al3504;
    signed char* eax3505;
    signed char* eax3506;
    signed char al3507;
    signed char* eax3508;
    signed char* eax3509;
    signed char al3510;
    signed char* eax3511;
    signed char* eax3512;
    signed char al3513;
    signed char* eax3514;
    signed char* eax3515;
    signed char al3516;
    signed char* eax3517;
    signed char* eax3518;
    signed char al3519;
    signed char* eax3520;
    signed char* eax3521;
    signed char al3522;
    signed char* eax3523;
    signed char* eax3524;
    signed char al3525;
    signed char* eax3526;
    signed char* eax3527;
    signed char al3528;
    signed char* eax3529;
    signed char* eax3530;
    signed char al3531;
    signed char* eax3532;
    signed char* eax3533;
    signed char al3534;
    signed char* eax3535;
    signed char* eax3536;
    signed char al3537;
    signed char* eax3538;
    signed char* eax3539;
    signed char al3540;
    signed char* eax3541;
    signed char* eax3542;
    signed char al3543;
    signed char* eax3544;
    signed char* eax3545;
    signed char al3546;
    signed char* eax3547;
    signed char* eax3548;
    signed char al3549;
    signed char* eax3550;
    signed char* eax3551;
    signed char al3552;
    signed char* eax3553;
    signed char* eax3554;
    signed char al3555;
    signed char* eax3556;
    signed char* eax3557;
    signed char al3558;
    signed char* eax3559;
    signed char* eax3560;
    signed char al3561;
    signed char* eax3562;
    signed char* eax3563;
    signed char al3564;
    signed char* eax3565;
    signed char* eax3566;
    signed char al3567;
    signed char* eax3568;
    signed char* eax3569;
    signed char al3570;
    signed char* eax3571;
    signed char* eax3572;
    signed char al3573;
    signed char* eax3574;
    signed char* eax3575;
    signed char al3576;
    signed char* eax3577;
    signed char* eax3578;
    signed char al3579;
    signed char* eax3580;
    signed char* eax3581;
    signed char al3582;
    signed char* eax3583;
    signed char* eax3584;
    signed char al3585;
    signed char* eax3586;
    signed char* eax3587;
    signed char al3588;
    signed char* eax3589;
    signed char* eax3590;
    signed char al3591;
    signed char* eax3592;
    signed char* eax3593;
    signed char al3594;
    signed char* eax3595;
    signed char* eax3596;
    signed char al3597;
    signed char* eax3598;
    signed char* eax3599;
    signed char al3600;
    signed char* eax3601;
    signed char* eax3602;
    signed char al3603;
    signed char* eax3604;
    signed char* eax3605;
    signed char al3606;
    signed char* eax3607;
    signed char* eax3608;
    signed char al3609;
    signed char* eax3610;
    signed char* eax3611;
    signed char al3612;
    signed char* eax3613;
    signed char* eax3614;
    signed char al3615;
    signed char* eax3616;
    signed char* eax3617;
    signed char al3618;
    signed char* eax3619;
    signed char* eax3620;
    signed char al3621;
    signed char* eax3622;
    signed char* eax3623;
    signed char al3624;
    signed char* eax3625;
    signed char* eax3626;
    signed char al3627;
    signed char* eax3628;
    signed char* eax3629;
    signed char al3630;
    signed char* eax3631;
    signed char* eax3632;
    signed char al3633;
    signed char* eax3634;
    signed char* eax3635;
    signed char al3636;
    signed char* eax3637;
    signed char* eax3638;
    signed char al3639;
    signed char* eax3640;
    signed char* eax3641;
    signed char al3642;
    signed char* eax3643;
    signed char* eax3644;
    signed char al3645;
    signed char* eax3646;
    signed char* eax3647;
    signed char al3648;
    signed char* eax3649;
    signed char* eax3650;
    signed char al3651;
    signed char* eax3652;
    signed char* eax3653;
    signed char al3654;
    signed char* eax3655;
    signed char* eax3656;
    signed char al3657;
    signed char* eax3658;
    signed char* eax3659;
    signed char al3660;
    signed char* eax3661;
    signed char* eax3662;
    signed char al3663;
    signed char* eax3664;
    signed char* eax3665;
    signed char al3666;
    signed char* eax3667;
    signed char* eax3668;
    signed char al3669;
    signed char* eax3670;
    signed char* eax3671;
    signed char al3672;
    signed char* eax3673;
    signed char* eax3674;
    signed char al3675;
    signed char* eax3676;
    signed char* eax3677;
    signed char al3678;
    signed char* eax3679;
    signed char* eax3680;
    signed char al3681;
    signed char* eax3682;
    signed char* eax3683;
    signed char al3684;
    signed char* eax3685;
    signed char* eax3686;
    signed char al3687;
    signed char* eax3688;
    signed char* eax3689;
    signed char al3690;
    signed char* eax3691;
    signed char* eax3692;
    signed char al3693;
    signed char* eax3694;
    signed char* eax3695;
    signed char al3696;
    signed char* eax3697;
    signed char* eax3698;
    signed char al3699;
    signed char* eax3700;
    signed char* eax3701;
    signed char al3702;
    signed char* eax3703;
    signed char* eax3704;
    signed char al3705;
    signed char* eax3706;
    signed char* eax3707;
    signed char al3708;
    signed char* eax3709;
    signed char* eax3710;
    signed char al3711;
    signed char* eax3712;
    signed char* eax3713;
    signed char al3714;
    signed char* eax3715;
    signed char* eax3716;
    signed char al3717;
    signed char* eax3718;
    signed char* eax3719;
    signed char al3720;
    signed char* eax3721;
    signed char* eax3722;
    signed char al3723;
    signed char* eax3724;
    signed char* eax3725;
    signed char al3726;
    signed char* eax3727;
    signed char* eax3728;
    signed char al3729;
    signed char* eax3730;
    signed char* eax3731;
    signed char al3732;
    signed char* eax3733;
    signed char* eax3734;
    signed char al3735;
    signed char* eax3736;
    signed char* eax3737;
    signed char al3738;
    signed char* eax3739;
    signed char* eax3740;
    signed char al3741;
    signed char* eax3742;
    signed char* eax3743;
    signed char al3744;
    signed char* eax3745;
    signed char* eax3746;
    signed char al3747;
    signed char* eax3748;
    signed char* eax3749;
    signed char al3750;
    signed char* eax3751;
    signed char* eax3752;
    signed char al3753;
    signed char* eax3754;
    signed char* eax3755;
    signed char al3756;
    signed char* eax3757;
    signed char* eax3758;
    signed char al3759;
    signed char* eax3760;
    signed char* eax3761;
    signed char al3762;
    signed char* eax3763;
    signed char* eax3764;
    signed char al3765;
    signed char* eax3766;
    signed char* eax3767;
    signed char al3768;
    signed char* eax3769;
    signed char* eax3770;
    signed char al3771;
    signed char* eax3772;
    signed char* eax3773;
    signed char al3774;
    signed char* eax3775;
    signed char* eax3776;
    signed char al3777;
    signed char* eax3778;
    signed char* eax3779;
    signed char al3780;
    signed char* eax3781;
    signed char* eax3782;
    signed char al3783;
    signed char* eax3784;
    signed char* eax3785;
    signed char al3786;
    signed char* eax3787;
    signed char* eax3788;
    signed char al3789;
    signed char* eax3790;
    signed char* eax3791;
    signed char al3792;
    signed char* eax3793;
    signed char* eax3794;
    signed char al3795;
    signed char* eax3796;
    signed char* eax3797;
    signed char al3798;
    signed char* eax3799;
    signed char* eax3800;
    signed char al3801;
    signed char* eax3802;
    signed char* eax3803;
    signed char al3804;
    signed char* eax3805;
    signed char* eax3806;
    signed char al3807;
    signed char* eax3808;
    signed char* eax3809;
    signed char al3810;
    signed char* eax3811;
    signed char* eax3812;
    signed char al3813;
    signed char* eax3814;
    signed char* eax3815;
    signed char al3816;
    signed char* eax3817;
    signed char* eax3818;
    signed char al3819;
    signed char* eax3820;
    signed char* eax3821;
    signed char al3822;
    signed char* eax3823;
    signed char* eax3824;
    signed char al3825;
    signed char* eax3826;
    signed char* eax3827;
    signed char al3828;
    signed char* eax3829;
    signed char* eax3830;
    signed char al3831;
    signed char* eax3832;
    signed char* eax3833;
    signed char al3834;
    signed char* eax3835;
    signed char* eax3836;
    signed char al3837;
    signed char* eax3838;
    signed char* eax3839;
    signed char al3840;
    signed char* eax3841;
    signed char* eax3842;
    signed char al3843;
    signed char* eax3844;
    signed char* eax3845;
    signed char al3846;
    signed char* eax3847;
    signed char* eax3848;
    signed char al3849;
    signed char* eax3850;
    signed char* eax3851;
    signed char al3852;
    signed char* eax3853;
    signed char* eax3854;
    signed char al3855;
    signed char* eax3856;
    signed char* eax3857;
    signed char al3858;
    signed char* eax3859;
    signed char* eax3860;
    signed char al3861;
    signed char* eax3862;
    signed char* eax3863;
    signed char al3864;
    signed char* eax3865;
    signed char* eax3866;
    signed char al3867;
    signed char* eax3868;
    signed char* eax3869;
    signed char al3870;
    signed char* eax3871;
    signed char* eax3872;
    signed char al3873;
    signed char* eax3874;
    signed char* eax3875;
    signed char al3876;
    signed char* eax3877;
    signed char* eax3878;
    signed char al3879;
    signed char* eax3880;
    signed char* eax3881;
    signed char al3882;
    signed char* eax3883;
    signed char* eax3884;
    signed char al3885;
    signed char* eax3886;
    signed char* eax3887;
    signed char al3888;
    signed char* eax3889;
    signed char* eax3890;
    signed char al3891;
    signed char* eax3892;
    signed char* eax3893;
    signed char al3894;
    signed char* eax3895;
    signed char* eax3896;
    signed char al3897;
    signed char* eax3898;
    signed char* eax3899;
    signed char al3900;
    signed char* eax3901;
    signed char* eax3902;
    signed char al3903;
    signed char* eax3904;
    signed char* eax3905;
    signed char al3906;
    signed char* eax3907;
    signed char* eax3908;
    signed char al3909;
    signed char* eax3910;
    signed char* eax3911;
    signed char al3912;
    signed char* eax3913;
    signed char* eax3914;
    signed char al3915;
    signed char* eax3916;
    signed char* eax3917;
    signed char al3918;
    signed char* eax3919;
    signed char* eax3920;
    signed char al3921;
    signed char* eax3922;
    signed char* eax3923;
    signed char al3924;
    signed char* eax3925;
    signed char* eax3926;
    signed char al3927;
    signed char* eax3928;
    signed char* eax3929;
    signed char al3930;
    signed char* eax3931;
    signed char* eax3932;
    signed char al3933;
    signed char* eax3934;
    signed char* eax3935;
    signed char al3936;
    signed char* eax3937;
    signed char* eax3938;
    signed char al3939;
    signed char* eax3940;
    signed char* eax3941;
    signed char al3942;
    signed char* eax3943;
    signed char* eax3944;
    signed char al3945;
    signed char* eax3946;
    signed char* eax3947;
    signed char al3948;
    signed char* eax3949;
    signed char* eax3950;
    signed char al3951;
    signed char* eax3952;
    signed char* eax3953;
    signed char al3954;
    signed char* eax3955;
    signed char* eax3956;
    signed char al3957;
    signed char* eax3958;
    signed char* eax3959;
    signed char al3960;
    signed char* eax3961;
    signed char* eax3962;
    signed char al3963;
    signed char* eax3964;
    signed char* eax3965;
    signed char al3966;
    signed char* eax3967;
    signed char* eax3968;
    signed char al3969;
    signed char* eax3970;
    signed char* eax3971;
    signed char al3972;
    signed char* eax3973;
    signed char* eax3974;
    signed char al3975;
    signed char* eax3976;
    signed char* eax3977;
    signed char al3978;
    signed char* eax3979;
    signed char* eax3980;
    signed char al3981;
    signed char* eax3982;
    signed char* eax3983;
    signed char al3984;
    signed char* eax3985;
    signed char* eax3986;
    signed char al3987;
    signed char* eax3988;
    signed char* eax3989;
    signed char al3990;
    signed char* eax3991;
    signed char* eax3992;
    signed char al3993;
    signed char* eax3994;
    signed char* eax3995;
    signed char al3996;
    signed char* eax3997;
    signed char* eax3998;
    signed char al3999;
    signed char* eax4000;
    signed char* eax4001;
    signed char al4002;
    signed char* eax4003;
    signed char* eax4004;
    signed char al4005;
    signed char* eax4006;
    signed char* eax4007;
    signed char al4008;
    signed char* eax4009;
    signed char* eax4010;
    signed char al4011;
    signed char* eax4012;
    signed char* eax4013;
    signed char al4014;
    signed char* eax4015;
    signed char* eax4016;
    signed char al4017;
    signed char* eax4018;
    signed char* eax4019;
    signed char al4020;
    signed char* eax4021;
    signed char* eax4022;
    signed char al4023;
    signed char* eax4024;
    signed char* eax4025;
    signed char al4026;
    signed char* eax4027;
    signed char* eax4028;
    signed char al4029;
    signed char* eax4030;
    signed char* eax4031;
    signed char al4032;
    signed char* eax4033;
    signed char* eax4034;
    signed char al4035;
    signed char* eax4036;
    signed char* eax4037;
    signed char al4038;
    signed char* eax4039;
    signed char* eax4040;
    signed char al4041;
    signed char* eax4042;
    signed char* eax4043;
    signed char al4044;
    signed char* eax4045;
    signed char* eax4046;
    signed char al4047;
    signed char* eax4048;
    signed char* eax4049;
    signed char al4050;
    signed char* eax4051;
    signed char* eax4052;
    signed char al4053;
    signed char* eax4054;
    signed char* eax4055;
    signed char al4056;
    signed char* eax4057;
    signed char* eax4058;
    signed char al4059;
    signed char* eax4060;
    signed char* eax4061;
    signed char al4062;
    signed char* eax4063;
    signed char* eax4064;
    signed char al4065;
    signed char* eax4066;
    signed char* eax4067;
    signed char al4068;
    signed char* eax4069;
    signed char* eax4070;
    signed char al4071;
    signed char* eax4072;
    signed char* eax4073;
    signed char al4074;
    signed char* eax4075;
    signed char* eax4076;
    signed char al4077;
    signed char* eax4078;
    signed char* eax4079;
    signed char al4080;
    signed char* eax4081;
    signed char* eax4082;
    signed char al4083;
    signed char* eax4084;
    signed char* eax4085;
    signed char al4086;
    signed char* eax4087;
    signed char* eax4088;
    signed char al4089;
    signed char* eax4090;
    signed char* eax4091;
    signed char al4092;
    signed char* eax4093;
    signed char* eax4094;
    signed char al4095;
    signed char* eax4096;
    signed char* eax4097;
    signed char al4098;
    signed char* eax4099;
    signed char* eax4100;
    signed char al4101;
    signed char* eax4102;
    signed char* eax4103;
    signed char al4104;
    signed char* eax4105;
    signed char* eax4106;
    signed char al4107;
    signed char* eax4108;
    signed char* eax4109;
    signed char al4110;
    signed char* eax4111;
    signed char* eax4112;
    signed char al4113;
    signed char* eax4114;
    signed char* eax4115;
    signed char al4116;
    signed char* eax4117;
    signed char* eax4118;
    signed char al4119;
    signed char* eax4120;
    signed char* eax4121;
    signed char al4122;
    signed char* eax4123;
    signed char* eax4124;
    signed char al4125;
    signed char* eax4126;
    signed char* eax4127;
    signed char al4128;
    signed char* eax4129;
    signed char* eax4130;
    signed char al4131;
    signed char* eax4132;
    signed char* eax4133;
    signed char al4134;
    signed char* eax4135;
    signed char* eax4136;
    signed char al4137;
    signed char* eax4138;
    signed char* eax4139;
    signed char al4140;
    signed char* eax4141;
    signed char* eax4142;
    signed char al4143;
    signed char* eax4144;
    signed char* eax4145;
    signed char al4146;
    signed char* eax4147;
    signed char* eax4148;
    signed char al4149;
    signed char* eax4150;
    signed char* eax4151;
    signed char al4152;
    signed char* eax4153;
    signed char* eax4154;
    signed char al4155;
    signed char* eax4156;
    signed char* eax4157;
    signed char al4158;
    signed char* eax4159;
    signed char* eax4160;
    signed char al4161;
    signed char* eax4162;
    signed char* eax4163;
    signed char al4164;
    signed char* eax4165;
    signed char* eax4166;
    signed char al4167;
    signed char* eax4168;
    signed char* eax4169;
    signed char al4170;
    signed char* eax4171;
    signed char* eax4172;
    signed char al4173;
    signed char* eax4174;
    signed char* eax4175;
    signed char al4176;
    signed char* eax4177;
    signed char* eax4178;
    signed char al4179;
    signed char* eax4180;
    signed char* eax4181;
    signed char al4182;
    signed char* eax4183;
    signed char* eax4184;
    signed char al4185;
    signed char* eax4186;
    signed char* eax4187;
    signed char al4188;
    signed char* eax4189;
    signed char* eax4190;
    signed char al4191;
    signed char* eax4192;
    signed char* eax4193;
    signed char al4194;
    signed char* eax4195;
    signed char* eax4196;
    signed char al4197;
    signed char* eax4198;
    signed char* eax4199;
    signed char al4200;
    signed char* eax4201;
    signed char* eax4202;
    signed char al4203;
    signed char* eax4204;
    signed char* eax4205;
    signed char al4206;
    signed char* eax4207;
    signed char* eax4208;
    signed char al4209;
    signed char* eax4210;
    signed char* eax4211;
    signed char al4212;
    signed char* eax4213;
    signed char* eax4214;
    signed char al4215;
    signed char* eax4216;
    signed char* eax4217;
    signed char al4218;
    signed char* eax4219;
    signed char* eax4220;
    signed char al4221;
    signed char* eax4222;
    signed char* eax4223;
    signed char al4224;
    signed char* eax4225;
    signed char* eax4226;
    signed char al4227;
    signed char* eax4228;
    signed char* eax4229;
    signed char al4230;
    signed char* eax4231;
    signed char* eax4232;
    signed char al4233;
    signed char* eax4234;
    signed char* eax4235;
    signed char al4236;
    signed char* eax4237;
    signed char* eax4238;
    signed char al4239;
    signed char* eax4240;
    signed char* eax4241;
    signed char al4242;
    signed char* eax4243;
    signed char* eax4244;
    signed char al4245;
    signed char* eax4246;
    signed char* eax4247;
    signed char al4248;
    signed char* eax4249;
    signed char* eax4250;
    signed char al4251;
    signed char* eax4252;
    signed char* eax4253;
    signed char al4254;
    signed char* eax4255;
    signed char* eax4256;
    signed char al4257;
    signed char* eax4258;
    signed char* eax4259;
    signed char al4260;
    signed char* eax4261;
    signed char* eax4262;
    signed char al4263;
    signed char* eax4264;
    signed char* eax4265;
    signed char al4266;
    signed char* eax4267;
    signed char* eax4268;
    signed char al4269;
    signed char* eax4270;
    signed char* eax4271;
    signed char al4272;
    signed char* eax4273;
    signed char* eax4274;
    signed char al4275;
    signed char* eax4276;
    signed char* eax4277;
    signed char al4278;
    signed char* eax4279;
    signed char* eax4280;
    signed char al4281;
    signed char* eax4282;
    signed char* eax4283;
    signed char al4284;
    signed char* eax4285;
    signed char* eax4286;
    signed char al4287;
    signed char* eax4288;
    signed char* eax4289;
    signed char al4290;
    signed char* eax4291;
    signed char* eax4292;
    signed char al4293;
    signed char* eax4294;
    signed char* eax4295;
    signed char al4296;
    signed char* eax4297;
    signed char* eax4298;
    signed char al4299;
    signed char* eax4300;
    signed char* eax4301;
    signed char al4302;
    signed char* eax4303;
    signed char* eax4304;
    signed char al4305;
    signed char* eax4306;
    signed char* eax4307;
    signed char al4308;
    signed char* eax4309;
    signed char* eax4310;
    signed char al4311;
    signed char* eax4312;
    signed char* eax4313;
    signed char al4314;
    signed char* eax4315;
    signed char* eax4316;
    signed char al4317;
    signed char* eax4318;
    signed char* eax4319;
    signed char al4320;
    signed char* eax4321;
    signed char* eax4322;
    signed char al4323;
    signed char* eax4324;
    signed char* eax4325;
    signed char al4326;
    signed char* eax4327;
    signed char* eax4328;
    signed char al4329;
    signed char* eax4330;
    signed char* eax4331;
    signed char al4332;
    signed char* eax4333;
    signed char* eax4334;
    signed char al4335;
    signed char* eax4336;
    signed char* eax4337;
    signed char al4338;
    signed char* eax4339;
    signed char* eax4340;
    signed char al4341;
    signed char* eax4342;
    signed char* eax4343;
    signed char al4344;
    signed char* eax4345;
    signed char* eax4346;
    signed char al4347;
    signed char* eax4348;
    signed char* eax4349;
    signed char al4350;
    signed char* eax4351;
    signed char* eax4352;
    signed char al4353;
    signed char* eax4354;
    signed char* eax4355;
    signed char al4356;
    signed char* eax4357;
    signed char* eax4358;
    signed char al4359;
    signed char* eax4360;
    signed char* eax4361;
    signed char al4362;
    signed char* eax4363;
    signed char* eax4364;
    signed char al4365;
    signed char* eax4366;
    signed char* eax4367;
    signed char al4368;
    signed char* eax4369;
    signed char* eax4370;
    signed char al4371;
    signed char* eax4372;
    signed char* eax4373;
    signed char al4374;
    signed char* eax4375;
    signed char* eax4376;
    signed char al4377;
    signed char* eax4378;
    signed char* eax4379;
    signed char al4380;
    signed char* eax4381;
    signed char* eax4382;
    signed char al4383;
    signed char* eax4384;
    signed char* eax4385;
    signed char al4386;
    signed char* eax4387;
    signed char* eax4388;
    signed char al4389;
    signed char* eax4390;
    signed char* eax4391;
    signed char al4392;
    signed char* eax4393;
    signed char* eax4394;
    signed char al4395;
    signed char* eax4396;
    signed char* eax4397;
    signed char al4398;
    signed char* eax4399;
    signed char* eax4400;
    signed char al4401;
    signed char* eax4402;
    signed char* eax4403;
    signed char al4404;
    signed char* eax4405;
    signed char* eax4406;
    signed char al4407;
    signed char* eax4408;
    signed char* eax4409;
    signed char al4410;
    signed char* eax4411;
    signed char* eax4412;
    signed char al4413;
    signed char* eax4414;
    signed char* eax4415;
    signed char al4416;
    signed char* eax4417;
    signed char* eax4418;
    signed char al4419;
    signed char* eax4420;
    signed char* eax4421;
    signed char al4422;
    signed char* eax4423;
    signed char* eax4424;
    signed char al4425;
    signed char* eax4426;
    signed char* eax4427;
    signed char al4428;
    signed char* eax4429;
    signed char* eax4430;
    signed char al4431;
    signed char* eax4432;
    signed char* eax4433;
    signed char al4434;
    signed char* eax4435;
    signed char* eax4436;
    signed char al4437;
    signed char* eax4438;
    signed char* eax4439;
    signed char al4440;
    signed char* eax4441;
    signed char* eax4442;
    signed char al4443;
    signed char* eax4444;
    signed char* eax4445;
    signed char al4446;
    signed char* eax4447;
    signed char* eax4448;
    signed char al4449;
    signed char* eax4450;
    signed char* eax4451;
    signed char al4452;
    signed char* eax4453;
    signed char* eax4454;
    signed char al4455;
    signed char* eax4456;
    signed char* eax4457;
    signed char al4458;
    signed char* eax4459;
    signed char* eax4460;
    signed char al4461;
    signed char* eax4462;
    signed char* eax4463;
    signed char al4464;
    signed char* eax4465;
    signed char* eax4466;
    signed char al4467;
    signed char* eax4468;
    signed char* eax4469;
    signed char al4470;
    signed char* eax4471;
    signed char* eax4472;
    signed char al4473;
    signed char* eax4474;
    signed char* eax4475;
    signed char al4476;
    signed char* eax4477;
    signed char* eax4478;
    signed char al4479;
    signed char* eax4480;
    signed char* eax4481;
    signed char al4482;
    signed char* eax4483;
    signed char* eax4484;
    signed char al4485;
    signed char* eax4486;
    signed char* eax4487;
    signed char al4488;
    signed char* eax4489;
    signed char* eax4490;
    signed char al4491;
    signed char* eax4492;
    signed char* eax4493;
    signed char al4494;
    signed char* eax4495;
    signed char* eax4496;
    signed char al4497;
    signed char* eax4498;
    signed char* eax4499;
    signed char al4500;
    signed char* eax4501;
    signed char* eax4502;
    signed char al4503;
    signed char* eax4504;
    signed char* eax4505;
    signed char al4506;
    signed char* eax4507;
    signed char* eax4508;
    signed char al4509;
    signed char* eax4510;
    signed char* eax4511;
    signed char al4512;
    signed char* eax4513;
    signed char* eax4514;
    signed char al4515;
    signed char* eax4516;
    signed char* eax4517;
    signed char al4518;
    signed char* eax4519;
    signed char* eax4520;
    signed char al4521;
    signed char* eax4522;
    signed char* eax4523;
    signed char al4524;
    signed char* eax4525;
    signed char* eax4526;
    signed char al4527;
    signed char* eax4528;
    signed char* eax4529;
    signed char al4530;
    signed char* eax4531;
    signed char* eax4532;
    signed char al4533;
    signed char* eax4534;
    signed char* eax4535;
    signed char al4536;
    signed char* eax4537;
    signed char* eax4538;
    signed char al4539;
    signed char* eax4540;
    signed char* eax4541;
    signed char al4542;
    signed char* eax4543;
    signed char* eax4544;
    signed char al4545;
    signed char* eax4546;
    signed char* eax4547;
    signed char al4548;
    signed char* eax4549;
    signed char* eax4550;
    signed char al4551;
    signed char* eax4552;
    signed char* eax4553;
    signed char al4554;
    signed char* eax4555;
    signed char* eax4556;
    signed char al4557;
    signed char* eax4558;
    signed char* eax4559;
    signed char al4560;
    signed char* eax4561;
    signed char* eax4562;
    signed char al4563;
    signed char* eax4564;
    signed char* eax4565;
    signed char al4566;
    signed char* eax4567;
    signed char* eax4568;
    signed char al4569;
    signed char* eax4570;
    signed char* eax4571;
    signed char al4572;
    signed char* eax4573;
    signed char* eax4574;
    signed char al4575;
    signed char* eax4576;
    signed char* eax4577;
    signed char al4578;
    signed char* eax4579;
    signed char* eax4580;
    signed char al4581;
    signed char* eax4582;
    signed char* eax4583;
    signed char al4584;
    signed char* eax4585;
    signed char* eax4586;
    signed char al4587;
    signed char* eax4588;
    signed char* eax4589;
    signed char al4590;
    signed char* eax4591;
    signed char* eax4592;
    signed char al4593;
    signed char* eax4594;
    signed char* eax4595;
    signed char al4596;
    signed char* eax4597;
    signed char* eax4598;
    signed char al4599;
    signed char* eax4600;
    signed char* eax4601;
    signed char al4602;
    signed char* eax4603;
    signed char* eax4604;
    signed char al4605;
    signed char* eax4606;
    signed char* eax4607;
    signed char al4608;
    signed char* eax4609;
    signed char* eax4610;
    signed char al4611;
    signed char* eax4612;
    signed char* eax4613;
    signed char al4614;
    signed char* eax4615;
    signed char* eax4616;
    signed char al4617;
    signed char* eax4618;
    signed char* eax4619;
    signed char al4620;
    signed char* eax4621;
    signed char* eax4622;
    signed char al4623;
    signed char* eax4624;
    signed char* eax4625;
    signed char al4626;
    signed char* eax4627;
    signed char* eax4628;
    signed char al4629;
    signed char* eax4630;
    signed char* eax4631;
    signed char al4632;
    signed char* eax4633;
    signed char* eax4634;
    signed char al4635;
    signed char* eax4636;
    signed char* eax4637;
    signed char al4638;
    signed char* eax4639;
    signed char* eax4640;
    signed char al4641;
    signed char* eax4642;
    signed char* eax4643;
    signed char al4644;
    signed char* eax4645;
    signed char* eax4646;
    signed char al4647;
    signed char* eax4648;
    signed char* eax4649;
    signed char al4650;
    signed char* eax4651;
    signed char* eax4652;
    signed char al4653;
    signed char* eax4654;
    signed char* eax4655;
    signed char al4656;
    signed char* eax4657;
    signed char* eax4658;
    signed char al4659;
    signed char* eax4660;
    signed char* eax4661;
    signed char al4662;
    signed char* eax4663;
    signed char* eax4664;
    signed char al4665;
    signed char* eax4666;
    signed char* eax4667;
    signed char al4668;
    signed char* eax4669;
    signed char* eax4670;
    signed char al4671;
    signed char* eax4672;
    signed char* eax4673;
    signed char al4674;
    signed char* eax4675;
    signed char* eax4676;
    signed char al4677;
    signed char* eax4678;
    signed char* eax4679;
    signed char al4680;
    signed char* eax4681;
    signed char* eax4682;
    signed char al4683;
    signed char* eax4684;
    signed char* eax4685;
    signed char al4686;
    signed char* eax4687;
    signed char* eax4688;
    signed char al4689;
    signed char* eax4690;
    signed char* eax4691;
    signed char al4692;
    signed char* eax4693;
    signed char* eax4694;
    signed char al4695;
    signed char* eax4696;
    signed char* eax4697;
    signed char al4698;
    signed char* eax4699;
    signed char* eax4700;
    signed char al4701;
    signed char* eax4702;
    signed char* eax4703;
    signed char al4704;
    signed char* eax4705;
    signed char* eax4706;
    signed char al4707;
    signed char* eax4708;
    signed char* eax4709;
    signed char al4710;
    signed char* eax4711;
    signed char* eax4712;
    signed char al4713;
    signed char* eax4714;
    signed char* eax4715;
    signed char al4716;
    signed char* eax4717;
    signed char* eax4718;
    signed char al4719;
    signed char* eax4720;
    signed char* eax4721;
    signed char al4722;
    signed char* eax4723;
    signed char* eax4724;
    signed char al4725;
    signed char* eax4726;
    signed char* eax4727;
    signed char al4728;
    signed char* eax4729;
    signed char* eax4730;
    signed char al4731;
    signed char* eax4732;
    signed char* eax4733;
    signed char al4734;
    signed char* eax4735;
    signed char* eax4736;
    signed char al4737;
    signed char* eax4738;
    signed char* eax4739;
    signed char al4740;
    signed char* eax4741;
    signed char* eax4742;
    signed char al4743;
    signed char* eax4744;
    signed char* eax4745;
    signed char al4746;
    signed char* eax4747;
    signed char* eax4748;
    signed char al4749;
    signed char* eax4750;
    signed char* eax4751;
    signed char al4752;
    signed char* eax4753;
    signed char* eax4754;
    signed char al4755;
    signed char* eax4756;
    signed char* eax4757;
    signed char al4758;
    signed char* eax4759;
    signed char* eax4760;
    signed char al4761;
    signed char* eax4762;
    signed char* eax4763;
    signed char al4764;
    signed char* eax4765;
    signed char* eax4766;
    signed char al4767;
    signed char* eax4768;
    signed char* eax4769;
    signed char al4770;
    signed char* eax4771;
    signed char* eax4772;
    signed char al4773;
    signed char* eax4774;
    signed char* eax4775;
    signed char al4776;
    signed char* eax4777;
    signed char* eax4778;
    signed char al4779;
    signed char* eax4780;
    signed char* eax4781;
    signed char al4782;
    signed char* eax4783;
    signed char* eax4784;
    signed char al4785;
    signed char* eax4786;
    signed char* eax4787;
    signed char al4788;
    signed char* eax4789;
    signed char* eax4790;
    signed char al4791;
    signed char* eax4792;
    signed char* eax4793;
    signed char al4794;
    signed char* eax4795;
    signed char* eax4796;
    signed char al4797;
    signed char* eax4798;
    signed char* eax4799;
    signed char al4800;
    signed char* eax4801;
    signed char* eax4802;
    signed char al4803;
    signed char* eax4804;
    signed char* eax4805;
    signed char al4806;
    signed char* eax4807;
    signed char* eax4808;
    signed char al4809;
    signed char* eax4810;
    signed char* eax4811;
    signed char al4812;
    signed char* eax4813;
    signed char* eax4814;
    signed char al4815;
    signed char* eax4816;
    signed char* eax4817;
    signed char al4818;
    signed char* eax4819;
    signed char* eax4820;
    signed char al4821;
    signed char* eax4822;
    signed char* eax4823;
    signed char al4824;
    signed char* eax4825;
    signed char* eax4826;
    signed char al4827;
    signed char* eax4828;
    signed char* eax4829;
    signed char al4830;
    signed char* eax4831;
    signed char* eax4832;
    signed char al4833;
    signed char* eax4834;
    signed char* eax4835;
    signed char al4836;
    signed char* eax4837;
    signed char* eax4838;
    signed char al4839;
    signed char* eax4840;
    signed char* eax4841;
    signed char al4842;
    signed char* eax4843;
    signed char* eax4844;
    signed char al4845;
    signed char* eax4846;
    signed char* eax4847;
    signed char al4848;
    signed char* eax4849;
    signed char* eax4850;
    signed char al4851;
    signed char* eax4852;
    signed char* eax4853;
    signed char al4854;
    signed char* eax4855;
    signed char* eax4856;
    signed char al4857;
    signed char* eax4858;
    signed char* eax4859;
    signed char al4860;
    signed char* eax4861;
    signed char* eax4862;
    signed char al4863;
    signed char* eax4864;
    signed char* eax4865;
    signed char al4866;
    signed char* eax4867;
    signed char* eax4868;
    signed char al4869;
    signed char* eax4870;
    signed char* eax4871;
    signed char al4872;
    signed char* eax4873;
    signed char* eax4874;
    signed char al4875;
    signed char* eax4876;
    signed char* eax4877;
    signed char al4878;
    signed char* eax4879;
    signed char* eax4880;
    signed char al4881;
    signed char* eax4882;
    signed char* eax4883;
    signed char al4884;
    signed char* eax4885;
    signed char* eax4886;
    signed char al4887;
    signed char* eax4888;
    signed char* eax4889;
    signed char al4890;
    signed char* eax4891;
    signed char* eax4892;
    signed char al4893;
    signed char* eax4894;
    signed char* eax4895;
    signed char al4896;
    signed char* eax4897;
    signed char* eax4898;
    signed char al4899;
    signed char* eax4900;
    signed char* eax4901;
    signed char al4902;
    signed char* eax4903;
    signed char* eax4904;
    signed char al4905;
    signed char* eax4906;
    signed char* eax4907;
    signed char al4908;
    signed char* eax4909;
    signed char* eax4910;
    signed char al4911;
    signed char* eax4912;
    signed char* eax4913;
    signed char al4914;
    signed char* eax4915;
    signed char* eax4916;
    signed char al4917;
    signed char* eax4918;
    signed char* eax4919;
    signed char al4920;
    signed char* eax4921;
    signed char* eax4922;
    signed char al4923;
    signed char* eax4924;
    signed char* eax4925;
    signed char al4926;
    signed char* eax4927;
    signed char* eax4928;
    signed char al4929;
    signed char* eax4930;
    signed char* eax4931;
    signed char al4932;
    signed char* eax4933;
    signed char* eax4934;
    signed char al4935;
    signed char* eax4936;
    signed char* eax4937;
    signed char al4938;
    signed char* eax4939;
    signed char* eax4940;
    signed char al4941;
    signed char* eax4942;
    signed char* eax4943;
    signed char al4944;
    signed char* eax4945;
    signed char* eax4946;
    signed char al4947;
    signed char* eax4948;
    signed char* eax4949;
    signed char al4950;
    signed char* eax4951;
    signed char* eax4952;
    signed char al4953;
    signed char* eax4954;
    signed char* eax4955;
    signed char al4956;
    signed char* eax4957;
    signed char* eax4958;
    signed char al4959;
    signed char* eax4960;
    signed char* eax4961;
    signed char al4962;
    signed char* eax4963;
    signed char* eax4964;
    signed char al4965;
    signed char* eax4966;
    signed char* eax4967;
    signed char al4968;
    signed char* eax4969;
    signed char* eax4970;
    signed char al4971;
    signed char* eax4972;
    signed char* eax4973;
    signed char al4974;
    signed char* eax4975;
    signed char* eax4976;
    signed char al4977;
    signed char* eax4978;
    signed char* eax4979;
    signed char al4980;
    signed char* eax4981;
    signed char* eax4982;
    signed char al4983;
    signed char* eax4984;
    signed char* eax4985;
    signed char al4986;
    signed char* eax4987;
    signed char* eax4988;
    signed char al4989;
    signed char* eax4990;
    signed char* eax4991;
    signed char al4992;
    signed char* eax4993;
    signed char* eax4994;
    signed char al4995;
    signed char* eax4996;
    signed char* eax4997;
    signed char al4998;
    signed char* eax4999;
    signed char* eax5000;
    signed char al5001;
    signed char* eax5002;
    signed char* eax5003;
    signed char al5004;
    signed char* eax5005;
    signed char* eax5006;
    signed char al5007;
    signed char* eax5008;
    signed char* eax5009;
    signed char al5010;
    signed char* eax5011;
    signed char* eax5012;
    signed char al5013;
    signed char* eax5014;
    signed char* eax5015;
    signed char al5016;
    signed char* eax5017;
    signed char* eax5018;
    signed char al5019;
    signed char* eax5020;
    signed char* eax5021;
    signed char al5022;
    signed char* eax5023;
    signed char* eax5024;
    signed char al5025;
    signed char* eax5026;
    signed char* eax5027;
    signed char al5028;
    signed char* eax5029;
    signed char* eax5030;
    signed char al5031;
    signed char* eax5032;
    signed char* eax5033;
    signed char al5034;
    signed char* eax5035;
    signed char* eax5036;
    signed char al5037;
    signed char* eax5038;
    signed char* eax5039;
    signed char al5040;
    signed char* eax5041;
    signed char* eax5042;
    signed char al5043;
    signed char* eax5044;
    signed char* eax5045;
    signed char al5046;
    signed char* eax5047;
    signed char* eax5048;
    signed char al5049;
    signed char* eax5050;
    signed char* eax5051;
    signed char al5052;
    signed char* eax5053;
    signed char* eax5054;
    signed char al5055;
    signed char* eax5056;
    signed char* eax5057;
    signed char al5058;
    signed char* eax5059;
    signed char* eax5060;
    signed char al5061;
    signed char* eax5062;
    signed char* eax5063;
    signed char al5064;
    signed char* eax5065;
    signed char* eax5066;
    signed char al5067;
    signed char* eax5068;
    signed char* eax5069;
    signed char al5070;
    signed char* eax5071;
    signed char* eax5072;
    signed char al5073;
    signed char* eax5074;
    signed char* eax5075;
    signed char al5076;
    signed char* eax5077;
    signed char* eax5078;
    signed char al5079;
    signed char* eax5080;
    signed char* eax5081;
    signed char al5082;
    signed char* eax5083;
    signed char* eax5084;
    signed char al5085;
    signed char* eax5086;
    signed char* eax5087;
    signed char al5088;
    signed char* eax5089;
    signed char* eax5090;
    signed char al5091;
    signed char* eax5092;
    signed char* eax5093;
    signed char al5094;
    signed char* eax5095;
    signed char* eax5096;
    signed char al5097;
    signed char* eax5098;
    signed char* eax5099;
    signed char al5100;
    signed char* eax5101;
    signed char* eax5102;
    signed char al5103;
    signed char* eax5104;
    signed char* eax5105;
    signed char al5106;
    signed char* eax5107;
    signed char* eax5108;
    signed char al5109;
    signed char* eax5110;
    signed char* eax5111;
    signed char al5112;
    signed char* eax5113;
    signed char* eax5114;
    signed char al5115;
    signed char* eax5116;
    signed char* eax5117;
    signed char al5118;
    signed char* eax5119;
    signed char* eax5120;
    signed char al5121;
    signed char* eax5122;
    signed char* eax5123;
    signed char al5124;
    signed char* eax5125;
    signed char* eax5126;
    signed char al5127;
    signed char* eax5128;
    signed char* eax5129;
    signed char al5130;
    signed char* eax5131;
    signed char* eax5132;
    signed char al5133;
    signed char* eax5134;
    signed char* eax5135;
    signed char al5136;
    signed char* eax5137;
    signed char* eax5138;
    signed char al5139;
    signed char* eax5140;
    signed char* eax5141;
    signed char al5142;
    signed char* eax5143;
    signed char* eax5144;
    signed char al5145;
    signed char* eax5146;
    signed char* eax5147;
    signed char al5148;
    signed char* eax5149;
    signed char* eax5150;
    signed char al5151;
    signed char* eax5152;
    signed char* eax5153;
    signed char al5154;
    signed char* eax5155;
    signed char* eax5156;
    signed char al5157;
    signed char* eax5158;
    signed char* eax5159;
    signed char al5160;
    signed char* eax5161;
    signed char* eax5162;
    signed char al5163;
    signed char* eax5164;
    signed char* eax5165;
    signed char al5166;
    signed char* eax5167;
    signed char* eax5168;
    signed char al5169;
    signed char* eax5170;
    signed char* eax5171;
    signed char al5172;
    signed char* eax5173;
    signed char* eax5174;
    signed char al5175;
    signed char* eax5176;
    signed char* eax5177;
    signed char al5178;
    signed char* eax5179;
    signed char* eax5180;
    signed char al5181;
    signed char* eax5182;
    signed char* eax5183;
    signed char al5184;
    signed char* eax5185;
    signed char* eax5186;
    signed char al5187;
    signed char* eax5188;
    signed char* eax5189;
    signed char al5190;
    signed char* eax5191;
    signed char* eax5192;
    signed char al5193;
    signed char* eax5194;
    signed char* eax5195;
    signed char al5196;
    signed char* eax5197;
    signed char* eax5198;
    signed char al5199;
    signed char* eax5200;
    signed char* eax5201;
    signed char al5202;
    signed char* eax5203;
    signed char* eax5204;
    signed char al5205;
    signed char* eax5206;
    signed char* eax5207;
    signed char al5208;
    signed char* eax5209;
    signed char* eax5210;
    signed char al5211;
    signed char* eax5212;
    signed char* eax5213;
    signed char al5214;
    signed char* eax5215;
    signed char* eax5216;
    signed char al5217;
    signed char* eax5218;
    signed char* eax5219;
    signed char al5220;
    signed char* eax5221;
    signed char* eax5222;
    signed char al5223;
    signed char* eax5224;
    signed char* eax5225;
    signed char al5226;
    signed char* eax5227;
    signed char* eax5228;
    signed char al5229;
    signed char* eax5230;
    signed char* eax5231;
    signed char al5232;
    signed char* eax5233;
    signed char* eax5234;
    signed char al5235;
    signed char* eax5236;
    signed char* eax5237;
    signed char al5238;
    signed char* eax5239;
    signed char* eax5240;
    signed char al5241;
    signed char* eax5242;
    signed char* eax5243;
    signed char al5244;
    signed char* eax5245;
    signed char* eax5246;
    signed char al5247;
    signed char* eax5248;
    signed char* eax5249;
    signed char al5250;
    signed char* eax5251;
    signed char* eax5252;
    signed char al5253;
    signed char* eax5254;
    signed char* eax5255;
    signed char al5256;
    signed char* eax5257;
    signed char* eax5258;
    signed char al5259;
    signed char* eax5260;
    signed char* eax5261;
    signed char al5262;
    signed char* eax5263;
    signed char* eax5264;
    signed char al5265;
    signed char* eax5266;
    signed char* eax5267;
    signed char al5268;
    signed char* eax5269;
    signed char* eax5270;
    signed char al5271;
    signed char* eax5272;
    signed char* eax5273;
    signed char al5274;
    signed char* eax5275;
    signed char* eax5276;
    signed char al5277;
    signed char* eax5278;
    signed char* eax5279;
    signed char al5280;
    signed char* eax5281;
    signed char* eax5282;
    signed char al5283;
    signed char* eax5284;
    signed char* eax5285;
    signed char al5286;
    signed char* eax5287;
    signed char* eax5288;
    signed char al5289;
    signed char* eax5290;
    signed char* eax5291;
    signed char al5292;
    signed char* eax5293;
    signed char* eax5294;
    signed char al5295;
    signed char* eax5296;
    signed char* eax5297;
    signed char al5298;
    signed char* eax5299;
    signed char* eax5300;
    signed char al5301;
    signed char* eax5302;
    signed char* eax5303;
    signed char al5304;
    signed char* eax5305;
    signed char* eax5306;
    signed char al5307;
    signed char* eax5308;
    signed char* eax5309;
    signed char al5310;
    signed char* eax5311;
    signed char* eax5312;
    signed char al5313;

    *eax1 = reinterpret_cast<signed char>(*eax2 + al3);
    *eax4 = reinterpret_cast<signed char>(*eax5 + al6);
    *eax7 = reinterpret_cast<signed char>(*eax8 + al9);
    *eax10 = reinterpret_cast<signed char>(*eax11 + al12);
    *eax13 = reinterpret_cast<signed char>(*eax14 + al15);
    *eax16 = reinterpret_cast<signed char>(*eax17 + al18);
    *eax19 = reinterpret_cast<signed char>(*eax20 + al21);
    *eax22 = reinterpret_cast<signed char>(*eax23 + al24);
    *eax25 = reinterpret_cast<signed char>(*eax26 + al27);
    *eax28 = reinterpret_cast<signed char>(*eax29 + al30);
    *eax31 = reinterpret_cast<signed char>(*eax32 + al33);
    *eax34 = reinterpret_cast<signed char>(*eax35 + al36);
    *eax37 = reinterpret_cast<signed char>(*eax38 + al39);
    *eax40 = reinterpret_cast<signed char>(*eax41 + al42);
    *eax43 = reinterpret_cast<signed char>(*eax44 + al45);
    *eax46 = reinterpret_cast<signed char>(*eax47 + al48);
    *eax49 = reinterpret_cast<signed char>(*eax50 + al51);
    *eax52 = reinterpret_cast<signed char>(*eax53 + al54);
    *eax55 = reinterpret_cast<signed char>(*eax56 + al57);
    *eax58 = reinterpret_cast<signed char>(*eax59 + al60);
    *eax61 = reinterpret_cast<signed char>(*eax62 + al63);
    *eax64 = reinterpret_cast<signed char>(*eax65 + al66);
    *eax67 = reinterpret_cast<signed char>(*eax68 + al69);
    *eax70 = reinterpret_cast<signed char>(*eax71 + al72);
    *eax73 = reinterpret_cast<signed char>(*eax74 + al75);
    *eax76 = reinterpret_cast<signed char>(*eax77 + al78);
    *eax79 = reinterpret_cast<signed char>(*eax80 + al81);
    *eax82 = reinterpret_cast<signed char>(*eax83 + al84);
    *eax85 = reinterpret_cast<signed char>(*eax86 + al87);
    *eax88 = reinterpret_cast<signed char>(*eax89 + al90);
    *eax91 = reinterpret_cast<signed char>(*eax92 + al93);
    *eax94 = reinterpret_cast<signed char>(*eax95 + al96);
    *eax97 = reinterpret_cast<signed char>(*eax98 + al99);
    *eax100 = reinterpret_cast<signed char>(*eax101 + al102);
    *eax103 = reinterpret_cast<signed char>(*eax104 + al105);
    *eax106 = reinterpret_cast<signed char>(*eax107 + al108);
    *eax109 = reinterpret_cast<signed char>(*eax110 + al111);
    *eax112 = reinterpret_cast<signed char>(*eax113 + al114);
    *eax115 = reinterpret_cast<signed char>(*eax116 + al117);
    *eax118 = reinterpret_cast<signed char>(*eax119 + al120);
    *eax121 = reinterpret_cast<signed char>(*eax122 + al123);
    *eax124 = reinterpret_cast<signed char>(*eax125 + al126);
    *eax127 = reinterpret_cast<signed char>(*eax128 + al129);
    *eax130 = reinterpret_cast<signed char>(*eax131 + al132);
    *eax133 = reinterpret_cast<signed char>(*eax134 + al135);
    *eax136 = reinterpret_cast<signed char>(*eax137 + al138);
    *eax139 = reinterpret_cast<signed char>(*eax140 + al141);
    *eax142 = reinterpret_cast<signed char>(*eax143 + al144);
    *eax145 = reinterpret_cast<signed char>(*eax146 + al147);
    *eax148 = reinterpret_cast<signed char>(*eax149 + al150);
    *eax151 = reinterpret_cast<signed char>(*eax152 + al153);
    *eax154 = reinterpret_cast<signed char>(*eax155 + al156);
    *eax157 = reinterpret_cast<signed char>(*eax158 + al159);
    *eax160 = reinterpret_cast<signed char>(*eax161 + al162);
    *eax163 = reinterpret_cast<signed char>(*eax164 + al165);
    *eax166 = reinterpret_cast<signed char>(*eax167 + al168);
    *eax169 = reinterpret_cast<signed char>(*eax170 + al171);
    *eax172 = reinterpret_cast<signed char>(*eax173 + al174);
    *eax175 = reinterpret_cast<signed char>(*eax176 + al177);
    *eax178 = reinterpret_cast<signed char>(*eax179 + al180);
    *eax181 = reinterpret_cast<signed char>(*eax182 + al183);
    *eax184 = reinterpret_cast<signed char>(*eax185 + al186);
    *eax187 = reinterpret_cast<signed char>(*eax188 + al189);
    *eax190 = reinterpret_cast<signed char>(*eax191 + al192);
    *eax193 = reinterpret_cast<signed char>(*eax194 + al195);
    *eax196 = reinterpret_cast<signed char>(*eax197 + al198);
    *eax199 = reinterpret_cast<signed char>(*eax200 + al201);
    *eax202 = reinterpret_cast<signed char>(*eax203 + al204);
    *eax205 = reinterpret_cast<signed char>(*eax206 + al207);
    *eax208 = reinterpret_cast<signed char>(*eax209 + al210);
    *eax211 = reinterpret_cast<signed char>(*eax212 + al213);
    *eax214 = reinterpret_cast<signed char>(*eax215 + al216);
    *eax217 = reinterpret_cast<signed char>(*eax218 + al219);
    *eax220 = reinterpret_cast<signed char>(*eax221 + al222);
    *eax223 = reinterpret_cast<signed char>(*eax224 + al225);
    *eax226 = reinterpret_cast<signed char>(*eax227 + al228);
    *eax229 = reinterpret_cast<signed char>(*eax230 + al231);
    *eax232 = reinterpret_cast<signed char>(*eax233 + al234);
    *eax235 = reinterpret_cast<signed char>(*eax236 + al237);
    *eax238 = reinterpret_cast<signed char>(*eax239 + al240);
    *eax241 = reinterpret_cast<signed char>(*eax242 + al243);
    *eax244 = reinterpret_cast<signed char>(*eax245 + al246);
    *eax247 = reinterpret_cast<signed char>(*eax248 + al249);
    *eax250 = reinterpret_cast<signed char>(*eax251 + al252);
    *eax253 = reinterpret_cast<signed char>(*eax254 + al255);
    *eax256 = reinterpret_cast<signed char>(*eax257 + al258);
    *eax259 = reinterpret_cast<signed char>(*eax260 + al261);
    *eax262 = reinterpret_cast<signed char>(*eax263 + al264);
    *eax265 = reinterpret_cast<signed char>(*eax266 + al267);
    *eax268 = reinterpret_cast<signed char>(*eax269 + al270);
    *eax271 = reinterpret_cast<signed char>(*eax272 + al273);
    *eax274 = reinterpret_cast<signed char>(*eax275 + al276);
    *eax277 = reinterpret_cast<signed char>(*eax278 + al279);
    *eax280 = reinterpret_cast<signed char>(*eax281 + al282);
    *eax283 = reinterpret_cast<signed char>(*eax284 + al285);
    *eax286 = reinterpret_cast<signed char>(*eax287 + al288);
    *eax289 = reinterpret_cast<signed char>(*eax290 + al291);
    *eax292 = reinterpret_cast<signed char>(*eax293 + al294);
    *eax295 = reinterpret_cast<signed char>(*eax296 + al297);
    *eax298 = reinterpret_cast<signed char>(*eax299 + al300);
    *eax301 = reinterpret_cast<signed char>(*eax302 + al303);
    *eax304 = reinterpret_cast<signed char>(*eax305 + al306);
    *eax307 = reinterpret_cast<signed char>(*eax308 + al309);
    *eax310 = reinterpret_cast<signed char>(*eax311 + al312);
    *eax313 = reinterpret_cast<signed char>(*eax314 + al315);
    *eax316 = reinterpret_cast<signed char>(*eax317 + al318);
    *eax319 = reinterpret_cast<signed char>(*eax320 + al321);
    *eax322 = reinterpret_cast<signed char>(*eax323 + al324);
    *eax325 = reinterpret_cast<signed char>(*eax326 + al327);
    *eax328 = reinterpret_cast<signed char>(*eax329 + al330);
    *eax331 = reinterpret_cast<signed char>(*eax332 + al333);
    *eax334 = reinterpret_cast<signed char>(*eax335 + al336);
    *eax337 = reinterpret_cast<signed char>(*eax338 + al339);
    *eax340 = reinterpret_cast<signed char>(*eax341 + al342);
    *eax343 = reinterpret_cast<signed char>(*eax344 + al345);
    *eax346 = reinterpret_cast<signed char>(*eax347 + al348);
    *eax349 = reinterpret_cast<signed char>(*eax350 + al351);
    *eax352 = reinterpret_cast<signed char>(*eax353 + al354);
    *eax355 = reinterpret_cast<signed char>(*eax356 + al357);
    *eax358 = reinterpret_cast<signed char>(*eax359 + al360);
    *eax361 = reinterpret_cast<signed char>(*eax362 + al363);
    *eax364 = reinterpret_cast<signed char>(*eax365 + al366);
    *eax367 = reinterpret_cast<signed char>(*eax368 + al369);
    *eax370 = reinterpret_cast<signed char>(*eax371 + al372);
    *eax373 = reinterpret_cast<signed char>(*eax374 + al375);
    *eax376 = reinterpret_cast<signed char>(*eax377 + al378);
    *eax379 = reinterpret_cast<signed char>(*eax380 + al381);
    *eax382 = reinterpret_cast<signed char>(*eax383 + al384);
    *eax385 = reinterpret_cast<signed char>(*eax386 + al387);
    *eax388 = reinterpret_cast<signed char>(*eax389 + al390);
    *eax391 = reinterpret_cast<signed char>(*eax392 + al393);
    *eax394 = reinterpret_cast<signed char>(*eax395 + al396);
    *eax397 = reinterpret_cast<signed char>(*eax398 + al399);
    *eax400 = reinterpret_cast<signed char>(*eax401 + al402);
    *eax403 = reinterpret_cast<signed char>(*eax404 + al405);
    *eax406 = reinterpret_cast<signed char>(*eax407 + al408);
    *eax409 = reinterpret_cast<signed char>(*eax410 + al411);
    *eax412 = reinterpret_cast<signed char>(*eax413 + al414);
    *eax415 = reinterpret_cast<signed char>(*eax416 + al417);
    *eax418 = reinterpret_cast<signed char>(*eax419 + al420);
    *eax421 = reinterpret_cast<signed char>(*eax422 + al423);
    *eax424 = reinterpret_cast<signed char>(*eax425 + al426);
    *eax427 = reinterpret_cast<signed char>(*eax428 + al429);
    *eax430 = reinterpret_cast<signed char>(*eax431 + al432);
    *eax433 = reinterpret_cast<signed char>(*eax434 + al435);
    *eax436 = reinterpret_cast<signed char>(*eax437 + al438);
    *eax439 = reinterpret_cast<signed char>(*eax440 + al441);
    *eax442 = reinterpret_cast<signed char>(*eax443 + al444);
    *eax445 = reinterpret_cast<signed char>(*eax446 + al447);
    *eax448 = reinterpret_cast<signed char>(*eax449 + al450);
    *eax451 = reinterpret_cast<signed char>(*eax452 + al453);
    *eax454 = reinterpret_cast<signed char>(*eax455 + al456);
    *eax457 = reinterpret_cast<signed char>(*eax458 + al459);
    *eax460 = reinterpret_cast<signed char>(*eax461 + al462);
    *eax463 = reinterpret_cast<signed char>(*eax464 + al465);
    *eax466 = reinterpret_cast<signed char>(*eax467 + al468);
    *eax469 = reinterpret_cast<signed char>(*eax470 + al471);
    *eax472 = reinterpret_cast<signed char>(*eax473 + al474);
    *eax475 = reinterpret_cast<signed char>(*eax476 + al477);
    *eax478 = reinterpret_cast<signed char>(*eax479 + al480);
    *eax481 = reinterpret_cast<signed char>(*eax482 + al483);
    *eax484 = reinterpret_cast<signed char>(*eax485 + al486);
    *eax487 = reinterpret_cast<signed char>(*eax488 + al489);
    *eax490 = reinterpret_cast<signed char>(*eax491 + al492);
    *eax493 = reinterpret_cast<signed char>(*eax494 + al495);
    *eax496 = reinterpret_cast<signed char>(*eax497 + al498);
    *eax499 = reinterpret_cast<signed char>(*eax500 + al501);
    *eax502 = reinterpret_cast<signed char>(*eax503 + al504);
    *eax505 = reinterpret_cast<signed char>(*eax506 + al507);
    *eax508 = reinterpret_cast<signed char>(*eax509 + al510);
    *eax511 = reinterpret_cast<signed char>(*eax512 + al513);
    *eax514 = reinterpret_cast<signed char>(*eax515 + al516);
    *eax517 = reinterpret_cast<signed char>(*eax518 + al519);
    *eax520 = reinterpret_cast<signed char>(*eax521 + al522);
    *eax523 = reinterpret_cast<signed char>(*eax524 + al525);
    *eax526 = reinterpret_cast<signed char>(*eax527 + al528);
    *eax529 = reinterpret_cast<signed char>(*eax530 + al531);
    *eax532 = reinterpret_cast<signed char>(*eax533 + al534);
    *eax535 = reinterpret_cast<signed char>(*eax536 + al537);
    *eax538 = reinterpret_cast<signed char>(*eax539 + al540);
    *eax541 = reinterpret_cast<signed char>(*eax542 + al543);
    *eax544 = reinterpret_cast<signed char>(*eax545 + al546);
    *eax547 = reinterpret_cast<signed char>(*eax548 + al549);
    *eax550 = reinterpret_cast<signed char>(*eax551 + al552);
    *eax553 = reinterpret_cast<signed char>(*eax554 + al555);
    *eax556 = reinterpret_cast<signed char>(*eax557 + al558);
    *eax559 = reinterpret_cast<signed char>(*eax560 + al561);
    *eax562 = reinterpret_cast<signed char>(*eax563 + al564);
    *eax565 = reinterpret_cast<signed char>(*eax566 + al567);
    *eax568 = reinterpret_cast<signed char>(*eax569 + al570);
    *eax571 = reinterpret_cast<signed char>(*eax572 + al573);
    *eax574 = reinterpret_cast<signed char>(*eax575 + al576);
    *eax577 = reinterpret_cast<signed char>(*eax578 + al579);
    *eax580 = reinterpret_cast<signed char>(*eax581 + al582);
    *eax583 = reinterpret_cast<signed char>(*eax584 + al585);
    *eax586 = reinterpret_cast<signed char>(*eax587 + al588);
    *eax589 = reinterpret_cast<signed char>(*eax590 + al591);
    *eax592 = reinterpret_cast<signed char>(*eax593 + al594);
    *eax595 = reinterpret_cast<signed char>(*eax596 + al597);
    *eax598 = reinterpret_cast<signed char>(*eax599 + al600);
    *eax601 = reinterpret_cast<signed char>(*eax602 + al603);
    *eax604 = reinterpret_cast<signed char>(*eax605 + al606);
    *eax607 = reinterpret_cast<signed char>(*eax608 + al609);
    *eax610 = reinterpret_cast<signed char>(*eax611 + al612);
    *eax613 = reinterpret_cast<signed char>(*eax614 + al615);
    *eax616 = reinterpret_cast<signed char>(*eax617 + al618);
    *eax619 = reinterpret_cast<signed char>(*eax620 + al621);
    *eax622 = reinterpret_cast<signed char>(*eax623 + al624);
    *eax625 = reinterpret_cast<signed char>(*eax626 + al627);
    *eax628 = reinterpret_cast<signed char>(*eax629 + al630);
    *eax631 = reinterpret_cast<signed char>(*eax632 + al633);
    *eax634 = reinterpret_cast<signed char>(*eax635 + al636);
    *eax637 = reinterpret_cast<signed char>(*eax638 + al639);
    *eax640 = reinterpret_cast<signed char>(*eax641 + al642);
    *eax643 = reinterpret_cast<signed char>(*eax644 + al645);
    *eax646 = reinterpret_cast<signed char>(*eax647 + al648);
    *eax649 = reinterpret_cast<signed char>(*eax650 + al651);
    *eax652 = reinterpret_cast<signed char>(*eax653 + al654);
    *eax655 = reinterpret_cast<signed char>(*eax656 + al657);
    *eax658 = reinterpret_cast<signed char>(*eax659 + al660);
    *eax661 = reinterpret_cast<signed char>(*eax662 + al663);
    *eax664 = reinterpret_cast<signed char>(*eax665 + al666);
    *eax667 = reinterpret_cast<signed char>(*eax668 + al669);
    *eax670 = reinterpret_cast<signed char>(*eax671 + al672);
    *eax673 = reinterpret_cast<signed char>(*eax674 + al675);
    *eax676 = reinterpret_cast<signed char>(*eax677 + al678);
    *eax679 = reinterpret_cast<signed char>(*eax680 + al681);
    *eax682 = reinterpret_cast<signed char>(*eax683 + al684);
    *eax685 = reinterpret_cast<signed char>(*eax686 + al687);
    *eax688 = reinterpret_cast<signed char>(*eax689 + al690);
    *eax691 = reinterpret_cast<signed char>(*eax692 + al693);
    *eax694 = reinterpret_cast<signed char>(*eax695 + al696);
    *eax697 = reinterpret_cast<signed char>(*eax698 + al699);
    *eax700 = reinterpret_cast<signed char>(*eax701 + al702);
    *eax703 = reinterpret_cast<signed char>(*eax704 + al705);
    *eax706 = reinterpret_cast<signed char>(*eax707 + al708);
    *eax709 = reinterpret_cast<signed char>(*eax710 + al711);
    *eax712 = reinterpret_cast<signed char>(*eax713 + al714);
    *eax715 = reinterpret_cast<signed char>(*eax716 + al717);
    *eax718 = reinterpret_cast<signed char>(*eax719 + al720);
    *eax721 = reinterpret_cast<signed char>(*eax722 + al723);
    *eax724 = reinterpret_cast<signed char>(*eax725 + al726);
    *eax727 = reinterpret_cast<signed char>(*eax728 + al729);
    *eax730 = reinterpret_cast<signed char>(*eax731 + al732);
    *eax733 = reinterpret_cast<signed char>(*eax734 + al735);
    *eax736 = reinterpret_cast<signed char>(*eax737 + al738);
    *eax739 = reinterpret_cast<signed char>(*eax740 + al741);
    *eax742 = reinterpret_cast<signed char>(*eax743 + al744);
    *eax745 = reinterpret_cast<signed char>(*eax746 + al747);
    *eax748 = reinterpret_cast<signed char>(*eax749 + al750);
    *eax751 = reinterpret_cast<signed char>(*eax752 + al753);
    *eax754 = reinterpret_cast<signed char>(*eax755 + al756);
    *eax757 = reinterpret_cast<signed char>(*eax758 + al759);
    *eax760 = reinterpret_cast<signed char>(*eax761 + al762);
    *eax763 = reinterpret_cast<signed char>(*eax764 + al765);
    *eax766 = reinterpret_cast<signed char>(*eax767 + al768);
    *eax769 = reinterpret_cast<signed char>(*eax770 + al771);
    *eax772 = reinterpret_cast<signed char>(*eax773 + al774);
    *eax775 = reinterpret_cast<signed char>(*eax776 + al777);
    *eax778 = reinterpret_cast<signed char>(*eax779 + al780);
    *eax781 = reinterpret_cast<signed char>(*eax782 + al783);
    *eax784 = reinterpret_cast<signed char>(*eax785 + al786);
    *eax787 = reinterpret_cast<signed char>(*eax788 + al789);
    *eax790 = reinterpret_cast<signed char>(*eax791 + al792);
    *eax793 = reinterpret_cast<signed char>(*eax794 + al795);
    *eax796 = reinterpret_cast<signed char>(*eax797 + al798);
    *eax799 = reinterpret_cast<signed char>(*eax800 + al801);
    *eax802 = reinterpret_cast<signed char>(*eax803 + al804);
    *eax805 = reinterpret_cast<signed char>(*eax806 + al807);
    *eax808 = reinterpret_cast<signed char>(*eax809 + al810);
    *eax811 = reinterpret_cast<signed char>(*eax812 + al813);
    *eax814 = reinterpret_cast<signed char>(*eax815 + al816);
    *eax817 = reinterpret_cast<signed char>(*eax818 + al819);
    *eax820 = reinterpret_cast<signed char>(*eax821 + al822);
    *eax823 = reinterpret_cast<signed char>(*eax824 + al825);
    *eax826 = reinterpret_cast<signed char>(*eax827 + al828);
    *eax829 = reinterpret_cast<signed char>(*eax830 + al831);
    *eax832 = reinterpret_cast<signed char>(*eax833 + al834);
    *eax835 = reinterpret_cast<signed char>(*eax836 + al837);
    *eax838 = reinterpret_cast<signed char>(*eax839 + al840);
    *eax841 = reinterpret_cast<signed char>(*eax842 + al843);
    *eax844 = reinterpret_cast<signed char>(*eax845 + al846);
    *eax847 = reinterpret_cast<signed char>(*eax848 + al849);
    *eax850 = reinterpret_cast<signed char>(*eax851 + al852);
    *eax853 = reinterpret_cast<signed char>(*eax854 + al855);
    *eax856 = reinterpret_cast<signed char>(*eax857 + al858);
    *eax859 = reinterpret_cast<signed char>(*eax860 + al861);
    *eax862 = reinterpret_cast<signed char>(*eax863 + al864);
    *eax865 = reinterpret_cast<signed char>(*eax866 + al867);
    *eax868 = reinterpret_cast<signed char>(*eax869 + al870);
    *eax871 = reinterpret_cast<signed char>(*eax872 + al873);
    *eax874 = reinterpret_cast<signed char>(*eax875 + al876);
    *eax877 = reinterpret_cast<signed char>(*eax878 + al879);
    *eax880 = reinterpret_cast<signed char>(*eax881 + al882);
    *eax883 = reinterpret_cast<signed char>(*eax884 + al885);
    *eax886 = reinterpret_cast<signed char>(*eax887 + al888);
    *eax889 = reinterpret_cast<signed char>(*eax890 + al891);
    *eax892 = reinterpret_cast<signed char>(*eax893 + al894);
    *eax895 = reinterpret_cast<signed char>(*eax896 + al897);
    *eax898 = reinterpret_cast<signed char>(*eax899 + al900);
    *eax901 = reinterpret_cast<signed char>(*eax902 + al903);
    *eax904 = reinterpret_cast<signed char>(*eax905 + al906);
    *eax907 = reinterpret_cast<signed char>(*eax908 + al909);
    *eax910 = reinterpret_cast<signed char>(*eax911 + al912);
    *eax913 = reinterpret_cast<signed char>(*eax914 + al915);
    *eax916 = reinterpret_cast<signed char>(*eax917 + al918);
    *eax919 = reinterpret_cast<signed char>(*eax920 + al921);
    *eax922 = reinterpret_cast<signed char>(*eax923 + al924);
    *eax925 = reinterpret_cast<signed char>(*eax926 + al927);
    *eax928 = reinterpret_cast<signed char>(*eax929 + al930);
    *eax931 = reinterpret_cast<signed char>(*eax932 + al933);
    *eax934 = reinterpret_cast<signed char>(*eax935 + al936);
    *eax937 = reinterpret_cast<signed char>(*eax938 + al939);
    *eax940 = reinterpret_cast<signed char>(*eax941 + al942);
    *eax943 = reinterpret_cast<signed char>(*eax944 + al945);
    *eax946 = reinterpret_cast<signed char>(*eax947 + al948);
    *eax949 = reinterpret_cast<signed char>(*eax950 + al951);
    *eax952 = reinterpret_cast<signed char>(*eax953 + al954);
    *eax955 = reinterpret_cast<signed char>(*eax956 + al957);
    *eax958 = reinterpret_cast<signed char>(*eax959 + al960);
    *eax961 = reinterpret_cast<signed char>(*eax962 + al963);
    *eax964 = reinterpret_cast<signed char>(*eax965 + al966);
    *eax967 = reinterpret_cast<signed char>(*eax968 + al969);
    *eax970 = reinterpret_cast<signed char>(*eax971 + al972);
    *eax973 = reinterpret_cast<signed char>(*eax974 + al975);
    *eax976 = reinterpret_cast<signed char>(*eax977 + al978);
    *eax979 = reinterpret_cast<signed char>(*eax980 + al981);
    *eax982 = reinterpret_cast<signed char>(*eax983 + al984);
    *eax985 = reinterpret_cast<signed char>(*eax986 + al987);
    *eax988 = reinterpret_cast<signed char>(*eax989 + al990);
    *eax991 = reinterpret_cast<signed char>(*eax992 + al993);
    *eax994 = reinterpret_cast<signed char>(*eax995 + al996);
    *eax997 = reinterpret_cast<signed char>(*eax998 + al999);
    *eax1000 = reinterpret_cast<signed char>(*eax1001 + al1002);
    *eax1003 = reinterpret_cast<signed char>(*eax1004 + al1005);
    *eax1006 = reinterpret_cast<signed char>(*eax1007 + al1008);
    *eax1009 = reinterpret_cast<signed char>(*eax1010 + al1011);
    *eax1012 = reinterpret_cast<signed char>(*eax1013 + al1014);
    *eax1015 = reinterpret_cast<signed char>(*eax1016 + al1017);
    *eax1018 = reinterpret_cast<signed char>(*eax1019 + al1020);
    *eax1021 = reinterpret_cast<signed char>(*eax1022 + al1023);
    *eax1024 = reinterpret_cast<signed char>(*eax1025 + al1026);
    *eax1027 = reinterpret_cast<signed char>(*eax1028 + al1029);
    *eax1030 = reinterpret_cast<signed char>(*eax1031 + al1032);
    *eax1033 = reinterpret_cast<signed char>(*eax1034 + al1035);
    *eax1036 = reinterpret_cast<signed char>(*eax1037 + al1038);
    *eax1039 = reinterpret_cast<signed char>(*eax1040 + al1041);
    *eax1042 = reinterpret_cast<signed char>(*eax1043 + al1044);
    *eax1045 = reinterpret_cast<signed char>(*eax1046 + al1047);
    *eax1048 = reinterpret_cast<signed char>(*eax1049 + al1050);
    *eax1051 = reinterpret_cast<signed char>(*eax1052 + al1053);
    *eax1054 = reinterpret_cast<signed char>(*eax1055 + al1056);
    *eax1057 = reinterpret_cast<signed char>(*eax1058 + al1059);
    *eax1060 = reinterpret_cast<signed char>(*eax1061 + al1062);
    *eax1063 = reinterpret_cast<signed char>(*eax1064 + al1065);
    *eax1066 = reinterpret_cast<signed char>(*eax1067 + al1068);
    *eax1069 = reinterpret_cast<signed char>(*eax1070 + al1071);
    *eax1072 = reinterpret_cast<signed char>(*eax1073 + al1074);
    *eax1075 = reinterpret_cast<signed char>(*eax1076 + al1077);
    *eax1078 = reinterpret_cast<signed char>(*eax1079 + al1080);
    *eax1081 = reinterpret_cast<signed char>(*eax1082 + al1083);
    *eax1084 = reinterpret_cast<signed char>(*eax1085 + al1086);
    *eax1087 = reinterpret_cast<signed char>(*eax1088 + al1089);
    *eax1090 = reinterpret_cast<signed char>(*eax1091 + al1092);
    *eax1093 = reinterpret_cast<signed char>(*eax1094 + al1095);
    *eax1096 = reinterpret_cast<signed char>(*eax1097 + al1098);
    *eax1099 = reinterpret_cast<signed char>(*eax1100 + al1101);
    *eax1102 = reinterpret_cast<signed char>(*eax1103 + al1104);
    *eax1105 = reinterpret_cast<signed char>(*eax1106 + al1107);
    *eax1108 = reinterpret_cast<signed char>(*eax1109 + al1110);
    *eax1111 = reinterpret_cast<signed char>(*eax1112 + al1113);
    *eax1114 = reinterpret_cast<signed char>(*eax1115 + al1116);
    *eax1117 = reinterpret_cast<signed char>(*eax1118 + al1119);
    *eax1120 = reinterpret_cast<signed char>(*eax1121 + al1122);
    *eax1123 = reinterpret_cast<signed char>(*eax1124 + al1125);
    *eax1126 = reinterpret_cast<signed char>(*eax1127 + al1128);
    *eax1129 = reinterpret_cast<signed char>(*eax1130 + al1131);
    *eax1132 = reinterpret_cast<signed char>(*eax1133 + al1134);
    *eax1135 = reinterpret_cast<signed char>(*eax1136 + al1137);
    *eax1138 = reinterpret_cast<signed char>(*eax1139 + al1140);
    *eax1141 = reinterpret_cast<signed char>(*eax1142 + al1143);
    *eax1144 = reinterpret_cast<signed char>(*eax1145 + al1146);
    *eax1147 = reinterpret_cast<signed char>(*eax1148 + al1149);
    *eax1150 = reinterpret_cast<signed char>(*eax1151 + al1152);
    *eax1153 = reinterpret_cast<signed char>(*eax1154 + al1155);
    *eax1156 = reinterpret_cast<signed char>(*eax1157 + al1158);
    *eax1159 = reinterpret_cast<signed char>(*eax1160 + al1161);
    *eax1162 = reinterpret_cast<signed char>(*eax1163 + al1164);
    *eax1165 = reinterpret_cast<signed char>(*eax1166 + al1167);
    *eax1168 = reinterpret_cast<signed char>(*eax1169 + al1170);
    *eax1171 = reinterpret_cast<signed char>(*eax1172 + al1173);
    *eax1174 = reinterpret_cast<signed char>(*eax1175 + al1176);
    *eax1177 = reinterpret_cast<signed char>(*eax1178 + al1179);
    *eax1180 = reinterpret_cast<signed char>(*eax1181 + al1182);
    *eax1183 = reinterpret_cast<signed char>(*eax1184 + al1185);
    *eax1186 = reinterpret_cast<signed char>(*eax1187 + al1188);
    *eax1189 = reinterpret_cast<signed char>(*eax1190 + al1191);
    *eax1192 = reinterpret_cast<signed char>(*eax1193 + al1194);
    *eax1195 = reinterpret_cast<signed char>(*eax1196 + al1197);
    *eax1198 = reinterpret_cast<signed char>(*eax1199 + al1200);
    *eax1201 = reinterpret_cast<signed char>(*eax1202 + al1203);
    *eax1204 = reinterpret_cast<signed char>(*eax1205 + al1206);
    *eax1207 = reinterpret_cast<signed char>(*eax1208 + al1209);
    *eax1210 = reinterpret_cast<signed char>(*eax1211 + al1212);
    *eax1213 = reinterpret_cast<signed char>(*eax1214 + al1215);
    *eax1216 = reinterpret_cast<signed char>(*eax1217 + al1218);
    *eax1219 = reinterpret_cast<signed char>(*eax1220 + al1221);
    *eax1222 = reinterpret_cast<signed char>(*eax1223 + al1224);
    *eax1225 = reinterpret_cast<signed char>(*eax1226 + al1227);
    *eax1228 = reinterpret_cast<signed char>(*eax1229 + al1230);
    *eax1231 = reinterpret_cast<signed char>(*eax1232 + al1233);
    *eax1234 = reinterpret_cast<signed char>(*eax1235 + al1236);
    *eax1237 = reinterpret_cast<signed char>(*eax1238 + al1239);
    *eax1240 = reinterpret_cast<signed char>(*eax1241 + al1242);
    *eax1243 = reinterpret_cast<signed char>(*eax1244 + al1245);
    *eax1246 = reinterpret_cast<signed char>(*eax1247 + al1248);
    *eax1249 = reinterpret_cast<signed char>(*eax1250 + al1251);
    *eax1252 = reinterpret_cast<signed char>(*eax1253 + al1254);
    *eax1255 = reinterpret_cast<signed char>(*eax1256 + al1257);
    *eax1258 = reinterpret_cast<signed char>(*eax1259 + al1260);
    *eax1261 = reinterpret_cast<signed char>(*eax1262 + al1263);
    *eax1264 = reinterpret_cast<signed char>(*eax1265 + al1266);
    *eax1267 = reinterpret_cast<signed char>(*eax1268 + al1269);
    *eax1270 = reinterpret_cast<signed char>(*eax1271 + al1272);
    *eax1273 = reinterpret_cast<signed char>(*eax1274 + al1275);
    *eax1276 = reinterpret_cast<signed char>(*eax1277 + al1278);
    *eax1279 = reinterpret_cast<signed char>(*eax1280 + al1281);
    *eax1282 = reinterpret_cast<signed char>(*eax1283 + al1284);
    *eax1285 = reinterpret_cast<signed char>(*eax1286 + al1287);
    *eax1288 = reinterpret_cast<signed char>(*eax1289 + al1290);
    *eax1291 = reinterpret_cast<signed char>(*eax1292 + al1293);
    *eax1294 = reinterpret_cast<signed char>(*eax1295 + al1296);
    *eax1297 = reinterpret_cast<signed char>(*eax1298 + al1299);
    *eax1300 = reinterpret_cast<signed char>(*eax1301 + al1302);
    *eax1303 = reinterpret_cast<signed char>(*eax1304 + al1305);
    *eax1306 = reinterpret_cast<signed char>(*eax1307 + al1308);
    *eax1309 = reinterpret_cast<signed char>(*eax1310 + al1311);
    *eax1312 = reinterpret_cast<signed char>(*eax1313 + al1314);
    *eax1315 = reinterpret_cast<signed char>(*eax1316 + al1317);
    *eax1318 = reinterpret_cast<signed char>(*eax1319 + al1320);
    *eax1321 = reinterpret_cast<signed char>(*eax1322 + al1323);
    *eax1324 = reinterpret_cast<signed char>(*eax1325 + al1326);
    *eax1327 = reinterpret_cast<signed char>(*eax1328 + al1329);
    *eax1330 = reinterpret_cast<signed char>(*eax1331 + al1332);
    *eax1333 = reinterpret_cast<signed char>(*eax1334 + al1335);
    *eax1336 = reinterpret_cast<signed char>(*eax1337 + al1338);
    *eax1339 = reinterpret_cast<signed char>(*eax1340 + al1341);
    *eax1342 = reinterpret_cast<signed char>(*eax1343 + al1344);
    *eax1345 = reinterpret_cast<signed char>(*eax1346 + al1347);
    *eax1348 = reinterpret_cast<signed char>(*eax1349 + al1350);
    *eax1351 = reinterpret_cast<signed char>(*eax1352 + al1353);
    *eax1354 = reinterpret_cast<signed char>(*eax1355 + al1356);
    *eax1357 = reinterpret_cast<signed char>(*eax1358 + al1359);
    *eax1360 = reinterpret_cast<signed char>(*eax1361 + al1362);
    *eax1363 = reinterpret_cast<signed char>(*eax1364 + al1365);
    *eax1366 = reinterpret_cast<signed char>(*eax1367 + al1368);
    *eax1369 = reinterpret_cast<signed char>(*eax1370 + al1371);
    *eax1372 = reinterpret_cast<signed char>(*eax1373 + al1374);
    *eax1375 = reinterpret_cast<signed char>(*eax1376 + al1377);
    *eax1378 = reinterpret_cast<signed char>(*eax1379 + al1380);
    *eax1381 = reinterpret_cast<signed char>(*eax1382 + al1383);
    *eax1384 = reinterpret_cast<signed char>(*eax1385 + al1386);
    *eax1387 = reinterpret_cast<signed char>(*eax1388 + al1389);
    *eax1390 = reinterpret_cast<signed char>(*eax1391 + al1392);
    *eax1393 = reinterpret_cast<signed char>(*eax1394 + al1395);
    *eax1396 = reinterpret_cast<signed char>(*eax1397 + al1398);
    *eax1399 = reinterpret_cast<signed char>(*eax1400 + al1401);
    *eax1402 = reinterpret_cast<signed char>(*eax1403 + al1404);
    *eax1405 = reinterpret_cast<signed char>(*eax1406 + al1407);
    *eax1408 = reinterpret_cast<signed char>(*eax1409 + al1410);
    *eax1411 = reinterpret_cast<signed char>(*eax1412 + al1413);
    *eax1414 = reinterpret_cast<signed char>(*eax1415 + al1416);
    *eax1417 = reinterpret_cast<signed char>(*eax1418 + al1419);
    *eax1420 = reinterpret_cast<signed char>(*eax1421 + al1422);
    *eax1423 = reinterpret_cast<signed char>(*eax1424 + al1425);
    *eax1426 = reinterpret_cast<signed char>(*eax1427 + al1428);
    *eax1429 = reinterpret_cast<signed char>(*eax1430 + al1431);
    *eax1432 = reinterpret_cast<signed char>(*eax1433 + al1434);
    *eax1435 = reinterpret_cast<signed char>(*eax1436 + al1437);
    *eax1438 = reinterpret_cast<signed char>(*eax1439 + al1440);
    *eax1441 = reinterpret_cast<signed char>(*eax1442 + al1443);
    *eax1444 = reinterpret_cast<signed char>(*eax1445 + al1446);
    *eax1447 = reinterpret_cast<signed char>(*eax1448 + al1449);
    *eax1450 = reinterpret_cast<signed char>(*eax1451 + al1452);
    *eax1453 = reinterpret_cast<signed char>(*eax1454 + al1455);
    *eax1456 = reinterpret_cast<signed char>(*eax1457 + al1458);
    *eax1459 = reinterpret_cast<signed char>(*eax1460 + al1461);
    *eax1462 = reinterpret_cast<signed char>(*eax1463 + al1464);
    *eax1465 = reinterpret_cast<signed char>(*eax1466 + al1467);
    *eax1468 = reinterpret_cast<signed char>(*eax1469 + al1470);
    *eax1471 = reinterpret_cast<signed char>(*eax1472 + al1473);
    *eax1474 = reinterpret_cast<signed char>(*eax1475 + al1476);
    *eax1477 = reinterpret_cast<signed char>(*eax1478 + al1479);
    *eax1480 = reinterpret_cast<signed char>(*eax1481 + al1482);
    *eax1483 = reinterpret_cast<signed char>(*eax1484 + al1485);
    *eax1486 = reinterpret_cast<signed char>(*eax1487 + al1488);
    *eax1489 = reinterpret_cast<signed char>(*eax1490 + al1491);
    *eax1492 = reinterpret_cast<signed char>(*eax1493 + al1494);
    *eax1495 = reinterpret_cast<signed char>(*eax1496 + al1497);
    *eax1498 = reinterpret_cast<signed char>(*eax1499 + al1500);
    *eax1501 = reinterpret_cast<signed char>(*eax1502 + al1503);
    *eax1504 = reinterpret_cast<signed char>(*eax1505 + al1506);
    *eax1507 = reinterpret_cast<signed char>(*eax1508 + al1509);
    *eax1510 = reinterpret_cast<signed char>(*eax1511 + al1512);
    *eax1513 = reinterpret_cast<signed char>(*eax1514 + al1515);
    *eax1516 = reinterpret_cast<signed char>(*eax1517 + al1518);
    *eax1519 = reinterpret_cast<signed char>(*eax1520 + al1521);
    *eax1522 = reinterpret_cast<signed char>(*eax1523 + al1524);
    *eax1525 = reinterpret_cast<signed char>(*eax1526 + al1527);
    *eax1528 = reinterpret_cast<signed char>(*eax1529 + al1530);
    *eax1531 = reinterpret_cast<signed char>(*eax1532 + al1533);
    *eax1534 = reinterpret_cast<signed char>(*eax1535 + al1536);
    *eax1537 = reinterpret_cast<signed char>(*eax1538 + al1539);
    *eax1540 = reinterpret_cast<signed char>(*eax1541 + al1542);
    *eax1543 = reinterpret_cast<signed char>(*eax1544 + al1545);
    *eax1546 = reinterpret_cast<signed char>(*eax1547 + al1548);
    *eax1549 = reinterpret_cast<signed char>(*eax1550 + al1551);
    *eax1552 = reinterpret_cast<signed char>(*eax1553 + al1554);
    *eax1555 = reinterpret_cast<signed char>(*eax1556 + al1557);
    *eax1558 = reinterpret_cast<signed char>(*eax1559 + al1560);
    *eax1561 = reinterpret_cast<signed char>(*eax1562 + al1563);
    *eax1564 = reinterpret_cast<signed char>(*eax1565 + al1566);
    *eax1567 = reinterpret_cast<signed char>(*eax1568 + al1569);
    *eax1570 = reinterpret_cast<signed char>(*eax1571 + al1572);
    *eax1573 = reinterpret_cast<signed char>(*eax1574 + al1575);
    *eax1576 = reinterpret_cast<signed char>(*eax1577 + al1578);
    *eax1579 = reinterpret_cast<signed char>(*eax1580 + al1581);
    *eax1582 = reinterpret_cast<signed char>(*eax1583 + al1584);
    *eax1585 = reinterpret_cast<signed char>(*eax1586 + al1587);
    *eax1588 = reinterpret_cast<signed char>(*eax1589 + al1590);
    *eax1591 = reinterpret_cast<signed char>(*eax1592 + al1593);
    *eax1594 = reinterpret_cast<signed char>(*eax1595 + al1596);
    *eax1597 = reinterpret_cast<signed char>(*eax1598 + al1599);
    *eax1600 = reinterpret_cast<signed char>(*eax1601 + al1602);
    *eax1603 = reinterpret_cast<signed char>(*eax1604 + al1605);
    *eax1606 = reinterpret_cast<signed char>(*eax1607 + al1608);
    *eax1609 = reinterpret_cast<signed char>(*eax1610 + al1611);
    *eax1612 = reinterpret_cast<signed char>(*eax1613 + al1614);
    *eax1615 = reinterpret_cast<signed char>(*eax1616 + al1617);
    *eax1618 = reinterpret_cast<signed char>(*eax1619 + al1620);
    *eax1621 = reinterpret_cast<signed char>(*eax1622 + al1623);
    *eax1624 = reinterpret_cast<signed char>(*eax1625 + al1626);
    *eax1627 = reinterpret_cast<signed char>(*eax1628 + al1629);
    *eax1630 = reinterpret_cast<signed char>(*eax1631 + al1632);
    *eax1633 = reinterpret_cast<signed char>(*eax1634 + al1635);
    *eax1636 = reinterpret_cast<signed char>(*eax1637 + al1638);
    *eax1639 = reinterpret_cast<signed char>(*eax1640 + al1641);
    *eax1642 = reinterpret_cast<signed char>(*eax1643 + al1644);
    *eax1645 = reinterpret_cast<signed char>(*eax1646 + al1647);
    *eax1648 = reinterpret_cast<signed char>(*eax1649 + al1650);
    *eax1651 = reinterpret_cast<signed char>(*eax1652 + al1653);
    *eax1654 = reinterpret_cast<signed char>(*eax1655 + al1656);
    *eax1657 = reinterpret_cast<signed char>(*eax1658 + al1659);
    *eax1660 = reinterpret_cast<signed char>(*eax1661 + al1662);
    *eax1663 = reinterpret_cast<signed char>(*eax1664 + al1665);
    *eax1666 = reinterpret_cast<signed char>(*eax1667 + al1668);
    *eax1669 = reinterpret_cast<signed char>(*eax1670 + al1671);
    *eax1672 = reinterpret_cast<signed char>(*eax1673 + al1674);
    *eax1675 = reinterpret_cast<signed char>(*eax1676 + al1677);
    *eax1678 = reinterpret_cast<signed char>(*eax1679 + al1680);
    *eax1681 = reinterpret_cast<signed char>(*eax1682 + al1683);
    *eax1684 = reinterpret_cast<signed char>(*eax1685 + al1686);
    *eax1687 = reinterpret_cast<signed char>(*eax1688 + al1689);
    *eax1690 = reinterpret_cast<signed char>(*eax1691 + al1692);
    *eax1693 = reinterpret_cast<signed char>(*eax1694 + al1695);
    *eax1696 = reinterpret_cast<signed char>(*eax1697 + al1698);
    *eax1699 = reinterpret_cast<signed char>(*eax1700 + al1701);
    *eax1702 = reinterpret_cast<signed char>(*eax1703 + al1704);
    *eax1705 = reinterpret_cast<signed char>(*eax1706 + al1707);
    *eax1708 = reinterpret_cast<signed char>(*eax1709 + al1710);
    *eax1711 = reinterpret_cast<signed char>(*eax1712 + al1713);
    *eax1714 = reinterpret_cast<signed char>(*eax1715 + al1716);
    *eax1717 = reinterpret_cast<signed char>(*eax1718 + al1719);
    *eax1720 = reinterpret_cast<signed char>(*eax1721 + al1722);
    *eax1723 = reinterpret_cast<signed char>(*eax1724 + al1725);
    *eax1726 = reinterpret_cast<signed char>(*eax1727 + al1728);
    *eax1729 = reinterpret_cast<signed char>(*eax1730 + al1731);
    *eax1732 = reinterpret_cast<signed char>(*eax1733 + al1734);
    *eax1735 = reinterpret_cast<signed char>(*eax1736 + al1737);
    *eax1738 = reinterpret_cast<signed char>(*eax1739 + al1740);
    *eax1741 = reinterpret_cast<signed char>(*eax1742 + al1743);
    *eax1744 = reinterpret_cast<signed char>(*eax1745 + al1746);
    *eax1747 = reinterpret_cast<signed char>(*eax1748 + al1749);
    *eax1750 = reinterpret_cast<signed char>(*eax1751 + al1752);
    *eax1753 = reinterpret_cast<signed char>(*eax1754 + al1755);
    *eax1756 = reinterpret_cast<signed char>(*eax1757 + al1758);
    *eax1759 = reinterpret_cast<signed char>(*eax1760 + al1761);
    *eax1762 = reinterpret_cast<signed char>(*eax1763 + al1764);
    *eax1765 = reinterpret_cast<signed char>(*eax1766 + al1767);
    *eax1768 = reinterpret_cast<signed char>(*eax1769 + al1770);
    *eax1771 = reinterpret_cast<signed char>(*eax1772 + al1773);
    *eax1774 = reinterpret_cast<signed char>(*eax1775 + al1776);
    *eax1777 = reinterpret_cast<signed char>(*eax1778 + al1779);
    *eax1780 = reinterpret_cast<signed char>(*eax1781 + al1782);
    *eax1783 = reinterpret_cast<signed char>(*eax1784 + al1785);
    *eax1786 = reinterpret_cast<signed char>(*eax1787 + al1788);
    *eax1789 = reinterpret_cast<signed char>(*eax1790 + al1791);
    *eax1792 = reinterpret_cast<signed char>(*eax1793 + al1794);
    *eax1795 = reinterpret_cast<signed char>(*eax1796 + al1797);
    *eax1798 = reinterpret_cast<signed char>(*eax1799 + al1800);
    *eax1801 = reinterpret_cast<signed char>(*eax1802 + al1803);
    *eax1804 = reinterpret_cast<signed char>(*eax1805 + al1806);
    *eax1807 = reinterpret_cast<signed char>(*eax1808 + al1809);
    *eax1810 = reinterpret_cast<signed char>(*eax1811 + al1812);
    *eax1813 = reinterpret_cast<signed char>(*eax1814 + al1815);
    *eax1816 = reinterpret_cast<signed char>(*eax1817 + al1818);
    *eax1819 = reinterpret_cast<signed char>(*eax1820 + al1821);
    *eax1822 = reinterpret_cast<signed char>(*eax1823 + al1824);
    *eax1825 = reinterpret_cast<signed char>(*eax1826 + al1827);
    *eax1828 = reinterpret_cast<signed char>(*eax1829 + al1830);
    *eax1831 = reinterpret_cast<signed char>(*eax1832 + al1833);
    *eax1834 = reinterpret_cast<signed char>(*eax1835 + al1836);
    *eax1837 = reinterpret_cast<signed char>(*eax1838 + al1839);
    *eax1840 = reinterpret_cast<signed char>(*eax1841 + al1842);
    *eax1843 = reinterpret_cast<signed char>(*eax1844 + al1845);
    *eax1846 = reinterpret_cast<signed char>(*eax1847 + al1848);
    *eax1849 = reinterpret_cast<signed char>(*eax1850 + al1851);
    *eax1852 = reinterpret_cast<signed char>(*eax1853 + al1854);
    *eax1855 = reinterpret_cast<signed char>(*eax1856 + al1857);
    *eax1858 = reinterpret_cast<signed char>(*eax1859 + al1860);
    *eax1861 = reinterpret_cast<signed char>(*eax1862 + al1863);
    *eax1864 = reinterpret_cast<signed char>(*eax1865 + al1866);
    *eax1867 = reinterpret_cast<signed char>(*eax1868 + al1869);
    *eax1870 = reinterpret_cast<signed char>(*eax1871 + al1872);
    *eax1873 = reinterpret_cast<signed char>(*eax1874 + al1875);
    *eax1876 = reinterpret_cast<signed char>(*eax1877 + al1878);
    *eax1879 = reinterpret_cast<signed char>(*eax1880 + al1881);
    *eax1882 = reinterpret_cast<signed char>(*eax1883 + al1884);
    *eax1885 = reinterpret_cast<signed char>(*eax1886 + al1887);
    *eax1888 = reinterpret_cast<signed char>(*eax1889 + al1890);
    *eax1891 = reinterpret_cast<signed char>(*eax1892 + al1893);
    *eax1894 = reinterpret_cast<signed char>(*eax1895 + al1896);
    *eax1897 = reinterpret_cast<signed char>(*eax1898 + al1899);
    *eax1900 = reinterpret_cast<signed char>(*eax1901 + al1902);
    *eax1903 = reinterpret_cast<signed char>(*eax1904 + al1905);
    *eax1906 = reinterpret_cast<signed char>(*eax1907 + al1908);
    *eax1909 = reinterpret_cast<signed char>(*eax1910 + al1911);
    *eax1912 = reinterpret_cast<signed char>(*eax1913 + al1914);
    *eax1915 = reinterpret_cast<signed char>(*eax1916 + al1917);
    *eax1918 = reinterpret_cast<signed char>(*eax1919 + al1920);
    *eax1921 = reinterpret_cast<signed char>(*eax1922 + al1923);
    *eax1924 = reinterpret_cast<signed char>(*eax1925 + al1926);
    *eax1927 = reinterpret_cast<signed char>(*eax1928 + al1929);
    *eax1930 = reinterpret_cast<signed char>(*eax1931 + al1932);
    *eax1933 = reinterpret_cast<signed char>(*eax1934 + al1935);
    *eax1936 = reinterpret_cast<signed char>(*eax1937 + al1938);
    *eax1939 = reinterpret_cast<signed char>(*eax1940 + al1941);
    *eax1942 = reinterpret_cast<signed char>(*eax1943 + al1944);
    *eax1945 = reinterpret_cast<signed char>(*eax1946 + al1947);
    *eax1948 = reinterpret_cast<signed char>(*eax1949 + al1950);
    *eax1951 = reinterpret_cast<signed char>(*eax1952 + al1953);
    *eax1954 = reinterpret_cast<signed char>(*eax1955 + al1956);
    *eax1957 = reinterpret_cast<signed char>(*eax1958 + al1959);
    *eax1960 = reinterpret_cast<signed char>(*eax1961 + al1962);
    *eax1963 = reinterpret_cast<signed char>(*eax1964 + al1965);
    *eax1966 = reinterpret_cast<signed char>(*eax1967 + al1968);
    *eax1969 = reinterpret_cast<signed char>(*eax1970 + al1971);
    *eax1972 = reinterpret_cast<signed char>(*eax1973 + al1974);
    *eax1975 = reinterpret_cast<signed char>(*eax1976 + al1977);
    *eax1978 = reinterpret_cast<signed char>(*eax1979 + al1980);
    *eax1981 = reinterpret_cast<signed char>(*eax1982 + al1983);
    *eax1984 = reinterpret_cast<signed char>(*eax1985 + al1986);
    *eax1987 = reinterpret_cast<signed char>(*eax1988 + al1989);
    *eax1990 = reinterpret_cast<signed char>(*eax1991 + al1992);
    *eax1993 = reinterpret_cast<signed char>(*eax1994 + al1995);
    *eax1996 = reinterpret_cast<signed char>(*eax1997 + al1998);
    *eax1999 = reinterpret_cast<signed char>(*eax2000 + al2001);
    *eax2002 = reinterpret_cast<signed char>(*eax2003 + al2004);
    *eax2005 = reinterpret_cast<signed char>(*eax2006 + al2007);
    *eax2008 = reinterpret_cast<signed char>(*eax2009 + al2010);
    *eax2011 = reinterpret_cast<signed char>(*eax2012 + al2013);
    *eax2014 = reinterpret_cast<signed char>(*eax2015 + al2016);
    *eax2017 = reinterpret_cast<signed char>(*eax2018 + al2019);
    *eax2020 = reinterpret_cast<signed char>(*eax2021 + al2022);
    *eax2023 = reinterpret_cast<signed char>(*eax2024 + al2025);
    *eax2026 = reinterpret_cast<signed char>(*eax2027 + al2028);
    *eax2029 = reinterpret_cast<signed char>(*eax2030 + al2031);
    *eax2032 = reinterpret_cast<signed char>(*eax2033 + al2034);
    *eax2035 = reinterpret_cast<signed char>(*eax2036 + al2037);
    *eax2038 = reinterpret_cast<signed char>(*eax2039 + al2040);
    *eax2041 = reinterpret_cast<signed char>(*eax2042 + al2043);
    *eax2044 = reinterpret_cast<signed char>(*eax2045 + al2046);
    *eax2047 = reinterpret_cast<signed char>(*eax2048 + al2049);
    *eax2050 = reinterpret_cast<signed char>(*eax2051 + al2052);
    *eax2053 = reinterpret_cast<signed char>(*eax2054 + al2055);
    *eax2056 = reinterpret_cast<signed char>(*eax2057 + al2058);
    *eax2059 = reinterpret_cast<signed char>(*eax2060 + al2061);
    *eax2062 = reinterpret_cast<signed char>(*eax2063 + al2064);
    *eax2065 = reinterpret_cast<signed char>(*eax2066 + al2067);
    *eax2068 = reinterpret_cast<signed char>(*eax2069 + al2070);
    *eax2071 = reinterpret_cast<signed char>(*eax2072 + al2073);
    *eax2074 = reinterpret_cast<signed char>(*eax2075 + al2076);
    *eax2077 = reinterpret_cast<signed char>(*eax2078 + al2079);
    *eax2080 = reinterpret_cast<signed char>(*eax2081 + al2082);
    *eax2083 = reinterpret_cast<signed char>(*eax2084 + al2085);
    *eax2086 = reinterpret_cast<signed char>(*eax2087 + al2088);
    *eax2089 = reinterpret_cast<signed char>(*eax2090 + al2091);
    *eax2092 = reinterpret_cast<signed char>(*eax2093 + al2094);
    *eax2095 = reinterpret_cast<signed char>(*eax2096 + al2097);
    *eax2098 = reinterpret_cast<signed char>(*eax2099 + al2100);
    *eax2101 = reinterpret_cast<signed char>(*eax2102 + al2103);
    *eax2104 = reinterpret_cast<signed char>(*eax2105 + al2106);
    *eax2107 = reinterpret_cast<signed char>(*eax2108 + al2109);
    *eax2110 = reinterpret_cast<signed char>(*eax2111 + al2112);
    *eax2113 = reinterpret_cast<signed char>(*eax2114 + al2115);
    *eax2116 = reinterpret_cast<signed char>(*eax2117 + al2118);
    *eax2119 = reinterpret_cast<signed char>(*eax2120 + al2121);
    *eax2122 = reinterpret_cast<signed char>(*eax2123 + al2124);
    *eax2125 = reinterpret_cast<signed char>(*eax2126 + al2127);
    *eax2128 = reinterpret_cast<signed char>(*eax2129 + al2130);
    *eax2131 = reinterpret_cast<signed char>(*eax2132 + al2133);
    *eax2134 = reinterpret_cast<signed char>(*eax2135 + al2136);
    *eax2137 = reinterpret_cast<signed char>(*eax2138 + al2139);
    *eax2140 = reinterpret_cast<signed char>(*eax2141 + al2142);
    *eax2143 = reinterpret_cast<signed char>(*eax2144 + al2145);
    *eax2146 = reinterpret_cast<signed char>(*eax2147 + al2148);
    *eax2149 = reinterpret_cast<signed char>(*eax2150 + al2151);
    *eax2152 = reinterpret_cast<signed char>(*eax2153 + al2154);
    *eax2155 = reinterpret_cast<signed char>(*eax2156 + al2157);
    *eax2158 = reinterpret_cast<signed char>(*eax2159 + al2160);
    *eax2161 = reinterpret_cast<signed char>(*eax2162 + al2163);
    *eax2164 = reinterpret_cast<signed char>(*eax2165 + al2166);
    *eax2167 = reinterpret_cast<signed char>(*eax2168 + al2169);
    *eax2170 = reinterpret_cast<signed char>(*eax2171 + al2172);
    *eax2173 = reinterpret_cast<signed char>(*eax2174 + al2175);
    *eax2176 = reinterpret_cast<signed char>(*eax2177 + al2178);
    *eax2179 = reinterpret_cast<signed char>(*eax2180 + al2181);
    *eax2182 = reinterpret_cast<signed char>(*eax2183 + al2184);
    *eax2185 = reinterpret_cast<signed char>(*eax2186 + al2187);
    *eax2188 = reinterpret_cast<signed char>(*eax2189 + al2190);
    *eax2191 = reinterpret_cast<signed char>(*eax2192 + al2193);
    *eax2194 = reinterpret_cast<signed char>(*eax2195 + al2196);
    *eax2197 = reinterpret_cast<signed char>(*eax2198 + al2199);
    *eax2200 = reinterpret_cast<signed char>(*eax2201 + al2202);
    *eax2203 = reinterpret_cast<signed char>(*eax2204 + al2205);
    *eax2206 = reinterpret_cast<signed char>(*eax2207 + al2208);
    *eax2209 = reinterpret_cast<signed char>(*eax2210 + al2211);
    *eax2212 = reinterpret_cast<signed char>(*eax2213 + al2214);
    *eax2215 = reinterpret_cast<signed char>(*eax2216 + al2217);
    *eax2218 = reinterpret_cast<signed char>(*eax2219 + al2220);
    *eax2221 = reinterpret_cast<signed char>(*eax2222 + al2223);
    *eax2224 = reinterpret_cast<signed char>(*eax2225 + al2226);
    *eax2227 = reinterpret_cast<signed char>(*eax2228 + al2229);
    *eax2230 = reinterpret_cast<signed char>(*eax2231 + al2232);
    *eax2233 = reinterpret_cast<signed char>(*eax2234 + al2235);
    *eax2236 = reinterpret_cast<signed char>(*eax2237 + al2238);
    *eax2239 = reinterpret_cast<signed char>(*eax2240 + al2241);
    *eax2242 = reinterpret_cast<signed char>(*eax2243 + al2244);
    *eax2245 = reinterpret_cast<signed char>(*eax2246 + al2247);
    *eax2248 = reinterpret_cast<signed char>(*eax2249 + al2250);
    *eax2251 = reinterpret_cast<signed char>(*eax2252 + al2253);
    *eax2254 = reinterpret_cast<signed char>(*eax2255 + al2256);
    *eax2257 = reinterpret_cast<signed char>(*eax2258 + al2259);
    *eax2260 = reinterpret_cast<signed char>(*eax2261 + al2262);
    *eax2263 = reinterpret_cast<signed char>(*eax2264 + al2265);
    *eax2266 = reinterpret_cast<signed char>(*eax2267 + al2268);
    *eax2269 = reinterpret_cast<signed char>(*eax2270 + al2271);
    *eax2272 = reinterpret_cast<signed char>(*eax2273 + al2274);
    *eax2275 = reinterpret_cast<signed char>(*eax2276 + al2277);
    *eax2278 = reinterpret_cast<signed char>(*eax2279 + al2280);
    *eax2281 = reinterpret_cast<signed char>(*eax2282 + al2283);
    *eax2284 = reinterpret_cast<signed char>(*eax2285 + al2286);
    *eax2287 = reinterpret_cast<signed char>(*eax2288 + al2289);
    *eax2290 = reinterpret_cast<signed char>(*eax2291 + al2292);
    *eax2293 = reinterpret_cast<signed char>(*eax2294 + al2295);
    *eax2296 = reinterpret_cast<signed char>(*eax2297 + al2298);
    *eax2299 = reinterpret_cast<signed char>(*eax2300 + al2301);
    *eax2302 = reinterpret_cast<signed char>(*eax2303 + al2304);
    *eax2305 = reinterpret_cast<signed char>(*eax2306 + al2307);
    *eax2308 = reinterpret_cast<signed char>(*eax2309 + al2310);
    *eax2311 = reinterpret_cast<signed char>(*eax2312 + al2313);
    *eax2314 = reinterpret_cast<signed char>(*eax2315 + al2316);
    *eax2317 = reinterpret_cast<signed char>(*eax2318 + al2319);
    *eax2320 = reinterpret_cast<signed char>(*eax2321 + al2322);
    *eax2323 = reinterpret_cast<signed char>(*eax2324 + al2325);
    *eax2326 = reinterpret_cast<signed char>(*eax2327 + al2328);
    *eax2329 = reinterpret_cast<signed char>(*eax2330 + al2331);
    *eax2332 = reinterpret_cast<signed char>(*eax2333 + al2334);
    *eax2335 = reinterpret_cast<signed char>(*eax2336 + al2337);
    *eax2338 = reinterpret_cast<signed char>(*eax2339 + al2340);
    *eax2341 = reinterpret_cast<signed char>(*eax2342 + al2343);
    *eax2344 = reinterpret_cast<signed char>(*eax2345 + al2346);
    *eax2347 = reinterpret_cast<signed char>(*eax2348 + al2349);
    *eax2350 = reinterpret_cast<signed char>(*eax2351 + al2352);
    *eax2353 = reinterpret_cast<signed char>(*eax2354 + al2355);
    *eax2356 = reinterpret_cast<signed char>(*eax2357 + al2358);
    *eax2359 = reinterpret_cast<signed char>(*eax2360 + al2361);
    *eax2362 = reinterpret_cast<signed char>(*eax2363 + al2364);
    *eax2365 = reinterpret_cast<signed char>(*eax2366 + al2367);
    *eax2368 = reinterpret_cast<signed char>(*eax2369 + al2370);
    *eax2371 = reinterpret_cast<signed char>(*eax2372 + al2373);
    *eax2374 = reinterpret_cast<signed char>(*eax2375 + al2376);
    *eax2377 = reinterpret_cast<signed char>(*eax2378 + al2379);
    *eax2380 = reinterpret_cast<signed char>(*eax2381 + al2382);
    *eax2383 = reinterpret_cast<signed char>(*eax2384 + al2385);
    *eax2386 = reinterpret_cast<signed char>(*eax2387 + al2388);
    *eax2389 = reinterpret_cast<signed char>(*eax2390 + al2391);
    *eax2392 = reinterpret_cast<signed char>(*eax2393 + al2394);
    *eax2395 = reinterpret_cast<signed char>(*eax2396 + al2397);
    *eax2398 = reinterpret_cast<signed char>(*eax2399 + al2400);
    *eax2401 = reinterpret_cast<signed char>(*eax2402 + al2403);
    *eax2404 = reinterpret_cast<signed char>(*eax2405 + al2406);
    *eax2407 = reinterpret_cast<signed char>(*eax2408 + al2409);
    *eax2410 = reinterpret_cast<signed char>(*eax2411 + al2412);
    *eax2413 = reinterpret_cast<signed char>(*eax2414 + al2415);
    *eax2416 = reinterpret_cast<signed char>(*eax2417 + al2418);
    *eax2419 = reinterpret_cast<signed char>(*eax2420 + al2421);
    *eax2422 = reinterpret_cast<signed char>(*eax2423 + al2424);
    *eax2425 = reinterpret_cast<signed char>(*eax2426 + al2427);
    *eax2428 = reinterpret_cast<signed char>(*eax2429 + al2430);
    *eax2431 = reinterpret_cast<signed char>(*eax2432 + al2433);
    *eax2434 = reinterpret_cast<signed char>(*eax2435 + al2436);
    *eax2437 = reinterpret_cast<signed char>(*eax2438 + al2439);
    *eax2440 = reinterpret_cast<signed char>(*eax2441 + al2442);
    *eax2443 = reinterpret_cast<signed char>(*eax2444 + al2445);
    *eax2446 = reinterpret_cast<signed char>(*eax2447 + al2448);
    *eax2449 = reinterpret_cast<signed char>(*eax2450 + al2451);
    *eax2452 = reinterpret_cast<signed char>(*eax2453 + al2454);
    *eax2455 = reinterpret_cast<signed char>(*eax2456 + al2457);
    *eax2458 = reinterpret_cast<signed char>(*eax2459 + al2460);
    *eax2461 = reinterpret_cast<signed char>(*eax2462 + al2463);
    *eax2464 = reinterpret_cast<signed char>(*eax2465 + al2466);
    *eax2467 = reinterpret_cast<signed char>(*eax2468 + al2469);
    *eax2470 = reinterpret_cast<signed char>(*eax2471 + al2472);
    *eax2473 = reinterpret_cast<signed char>(*eax2474 + al2475);
    *eax2476 = reinterpret_cast<signed char>(*eax2477 + al2478);
    *eax2479 = reinterpret_cast<signed char>(*eax2480 + al2481);
    *eax2482 = reinterpret_cast<signed char>(*eax2483 + al2484);
    *eax2485 = reinterpret_cast<signed char>(*eax2486 + al2487);
    *eax2488 = reinterpret_cast<signed char>(*eax2489 + al2490);
    *eax2491 = reinterpret_cast<signed char>(*eax2492 + al2493);
    *eax2494 = reinterpret_cast<signed char>(*eax2495 + al2496);
    *eax2497 = reinterpret_cast<signed char>(*eax2498 + al2499);
    *eax2500 = reinterpret_cast<signed char>(*eax2501 + al2502);
    *eax2503 = reinterpret_cast<signed char>(*eax2504 + al2505);
    *eax2506 = reinterpret_cast<signed char>(*eax2507 + al2508);
    *eax2509 = reinterpret_cast<signed char>(*eax2510 + al2511);
    *eax2512 = reinterpret_cast<signed char>(*eax2513 + al2514);
    *eax2515 = reinterpret_cast<signed char>(*eax2516 + al2517);
    *eax2518 = reinterpret_cast<signed char>(*eax2519 + al2520);
    *eax2521 = reinterpret_cast<signed char>(*eax2522 + al2523);
    *eax2524 = reinterpret_cast<signed char>(*eax2525 + al2526);
    *eax2527 = reinterpret_cast<signed char>(*eax2528 + al2529);
    *eax2530 = reinterpret_cast<signed char>(*eax2531 + al2532);
    *eax2533 = reinterpret_cast<signed char>(*eax2534 + al2535);
    *eax2536 = reinterpret_cast<signed char>(*eax2537 + al2538);
    *eax2539 = reinterpret_cast<signed char>(*eax2540 + al2541);
    *eax2542 = reinterpret_cast<signed char>(*eax2543 + al2544);
    *eax2545 = reinterpret_cast<signed char>(*eax2546 + al2547);
    *eax2548 = reinterpret_cast<signed char>(*eax2549 + al2550);
    *eax2551 = reinterpret_cast<signed char>(*eax2552 + al2553);
    *eax2554 = reinterpret_cast<signed char>(*eax2555 + al2556);
    *eax2557 = reinterpret_cast<signed char>(*eax2558 + al2559);
    *eax2560 = reinterpret_cast<signed char>(*eax2561 + al2562);
    *eax2563 = reinterpret_cast<signed char>(*eax2564 + al2565);
    *eax2566 = reinterpret_cast<signed char>(*eax2567 + al2568);
    *eax2569 = reinterpret_cast<signed char>(*eax2570 + al2571);
    *eax2572 = reinterpret_cast<signed char>(*eax2573 + al2574);
    *eax2575 = reinterpret_cast<signed char>(*eax2576 + al2577);
    *eax2578 = reinterpret_cast<signed char>(*eax2579 + al2580);
    *eax2581 = reinterpret_cast<signed char>(*eax2582 + al2583);
    *eax2584 = reinterpret_cast<signed char>(*eax2585 + al2586);
    *eax2587 = reinterpret_cast<signed char>(*eax2588 + al2589);
    *eax2590 = reinterpret_cast<signed char>(*eax2591 + al2592);
    *eax2593 = reinterpret_cast<signed char>(*eax2594 + al2595);
    *eax2596 = reinterpret_cast<signed char>(*eax2597 + al2598);
    *eax2599 = reinterpret_cast<signed char>(*eax2600 + al2601);
    *eax2602 = reinterpret_cast<signed char>(*eax2603 + al2604);
    *eax2605 = reinterpret_cast<signed char>(*eax2606 + al2607);
    *eax2608 = reinterpret_cast<signed char>(*eax2609 + al2610);
    *eax2611 = reinterpret_cast<signed char>(*eax2612 + al2613);
    *eax2614 = reinterpret_cast<signed char>(*eax2615 + al2616);
    *eax2617 = reinterpret_cast<signed char>(*eax2618 + al2619);
    *eax2620 = reinterpret_cast<signed char>(*eax2621 + al2622);
    *eax2623 = reinterpret_cast<signed char>(*eax2624 + al2625);
    *eax2626 = reinterpret_cast<signed char>(*eax2627 + al2628);
    *eax2629 = reinterpret_cast<signed char>(*eax2630 + al2631);
    *eax2632 = reinterpret_cast<signed char>(*eax2633 + al2634);
    *eax2635 = reinterpret_cast<signed char>(*eax2636 + al2637);
    *eax2638 = reinterpret_cast<signed char>(*eax2639 + al2640);
    *eax2641 = reinterpret_cast<signed char>(*eax2642 + al2643);
    *eax2644 = reinterpret_cast<signed char>(*eax2645 + al2646);
    *eax2647 = reinterpret_cast<signed char>(*eax2648 + al2649);
    *eax2650 = reinterpret_cast<signed char>(*eax2651 + al2652);
    *eax2653 = reinterpret_cast<signed char>(*eax2654 + al2655);
    *eax2656 = reinterpret_cast<signed char>(*eax2657 + al2658);
    *eax2659 = reinterpret_cast<signed char>(*eax2660 + al2661);
    *eax2662 = reinterpret_cast<signed char>(*eax2663 + al2664);
    *eax2665 = reinterpret_cast<signed char>(*eax2666 + al2667);
    *eax2668 = reinterpret_cast<signed char>(*eax2669 + al2670);
    *eax2671 = reinterpret_cast<signed char>(*eax2672 + al2673);
    *eax2674 = reinterpret_cast<signed char>(*eax2675 + al2676);
    *eax2677 = reinterpret_cast<signed char>(*eax2678 + al2679);
    *eax2680 = reinterpret_cast<signed char>(*eax2681 + al2682);
    *eax2683 = reinterpret_cast<signed char>(*eax2684 + al2685);
    *eax2686 = reinterpret_cast<signed char>(*eax2687 + al2688);
    *eax2689 = reinterpret_cast<signed char>(*eax2690 + al2691);
    *eax2692 = reinterpret_cast<signed char>(*eax2693 + al2694);
    *eax2695 = reinterpret_cast<signed char>(*eax2696 + al2697);
    *eax2698 = reinterpret_cast<signed char>(*eax2699 + al2700);
    *eax2701 = reinterpret_cast<signed char>(*eax2702 + al2703);
    *eax2704 = reinterpret_cast<signed char>(*eax2705 + al2706);
    *eax2707 = reinterpret_cast<signed char>(*eax2708 + al2709);
    *eax2710 = reinterpret_cast<signed char>(*eax2711 + al2712);
    *eax2713 = reinterpret_cast<signed char>(*eax2714 + al2715);
    *eax2716 = reinterpret_cast<signed char>(*eax2717 + al2718);
    *eax2719 = reinterpret_cast<signed char>(*eax2720 + al2721);
    *eax2722 = reinterpret_cast<signed char>(*eax2723 + al2724);
    *eax2725 = reinterpret_cast<signed char>(*eax2726 + al2727);
    *eax2728 = reinterpret_cast<signed char>(*eax2729 + al2730);
    *eax2731 = reinterpret_cast<signed char>(*eax2732 + al2733);
    *eax2734 = reinterpret_cast<signed char>(*eax2735 + al2736);
    *eax2737 = reinterpret_cast<signed char>(*eax2738 + al2739);
    *eax2740 = reinterpret_cast<signed char>(*eax2741 + al2742);
    *eax2743 = reinterpret_cast<signed char>(*eax2744 + al2745);
    *eax2746 = reinterpret_cast<signed char>(*eax2747 + al2748);
    *eax2749 = reinterpret_cast<signed char>(*eax2750 + al2751);
    *eax2752 = reinterpret_cast<signed char>(*eax2753 + al2754);
    *eax2755 = reinterpret_cast<signed char>(*eax2756 + al2757);
    *eax2758 = reinterpret_cast<signed char>(*eax2759 + al2760);
    *eax2761 = reinterpret_cast<signed char>(*eax2762 + al2763);
    *eax2764 = reinterpret_cast<signed char>(*eax2765 + al2766);
    *eax2767 = reinterpret_cast<signed char>(*eax2768 + al2769);
    *eax2770 = reinterpret_cast<signed char>(*eax2771 + al2772);
    *eax2773 = reinterpret_cast<signed char>(*eax2774 + al2775);
    *eax2776 = reinterpret_cast<signed char>(*eax2777 + al2778);
    *eax2779 = reinterpret_cast<signed char>(*eax2780 + al2781);
    *eax2782 = reinterpret_cast<signed char>(*eax2783 + al2784);
    *eax2785 = reinterpret_cast<signed char>(*eax2786 + al2787);
    *eax2788 = reinterpret_cast<signed char>(*eax2789 + al2790);
    *eax2791 = reinterpret_cast<signed char>(*eax2792 + al2793);
    *eax2794 = reinterpret_cast<signed char>(*eax2795 + al2796);
    *eax2797 = reinterpret_cast<signed char>(*eax2798 + al2799);
    *eax2800 = reinterpret_cast<signed char>(*eax2801 + al2802);
    *eax2803 = reinterpret_cast<signed char>(*eax2804 + al2805);
    *eax2806 = reinterpret_cast<signed char>(*eax2807 + al2808);
    *eax2809 = reinterpret_cast<signed char>(*eax2810 + al2811);
    *eax2812 = reinterpret_cast<signed char>(*eax2813 + al2814);
    *eax2815 = reinterpret_cast<signed char>(*eax2816 + al2817);
    *eax2818 = reinterpret_cast<signed char>(*eax2819 + al2820);
    *eax2821 = reinterpret_cast<signed char>(*eax2822 + al2823);
    *eax2824 = reinterpret_cast<signed char>(*eax2825 + al2826);
    *eax2827 = reinterpret_cast<signed char>(*eax2828 + al2829);
    *eax2830 = reinterpret_cast<signed char>(*eax2831 + al2832);
    *eax2833 = reinterpret_cast<signed char>(*eax2834 + al2835);
    *eax2836 = reinterpret_cast<signed char>(*eax2837 + al2838);
    *eax2839 = reinterpret_cast<signed char>(*eax2840 + al2841);
    *eax2842 = reinterpret_cast<signed char>(*eax2843 + al2844);
    *eax2845 = reinterpret_cast<signed char>(*eax2846 + al2847);
    *eax2848 = reinterpret_cast<signed char>(*eax2849 + al2850);
    *eax2851 = reinterpret_cast<signed char>(*eax2852 + al2853);
    *eax2854 = reinterpret_cast<signed char>(*eax2855 + al2856);
    *eax2857 = reinterpret_cast<signed char>(*eax2858 + al2859);
    *eax2860 = reinterpret_cast<signed char>(*eax2861 + al2862);
    *eax2863 = reinterpret_cast<signed char>(*eax2864 + al2865);
    *eax2866 = reinterpret_cast<signed char>(*eax2867 + al2868);
    *eax2869 = reinterpret_cast<signed char>(*eax2870 + al2871);
    *eax2872 = reinterpret_cast<signed char>(*eax2873 + al2874);
    *eax2875 = reinterpret_cast<signed char>(*eax2876 + al2877);
    *eax2878 = reinterpret_cast<signed char>(*eax2879 + al2880);
    *eax2881 = reinterpret_cast<signed char>(*eax2882 + al2883);
    *eax2884 = reinterpret_cast<signed char>(*eax2885 + al2886);
    *eax2887 = reinterpret_cast<signed char>(*eax2888 + al2889);
    *eax2890 = reinterpret_cast<signed char>(*eax2891 + al2892);
    *eax2893 = reinterpret_cast<signed char>(*eax2894 + al2895);
    *eax2896 = reinterpret_cast<signed char>(*eax2897 + al2898);
    *eax2899 = reinterpret_cast<signed char>(*eax2900 + al2901);
    *eax2902 = reinterpret_cast<signed char>(*eax2903 + al2904);
    *eax2905 = reinterpret_cast<signed char>(*eax2906 + al2907);
    *eax2908 = reinterpret_cast<signed char>(*eax2909 + al2910);
    *eax2911 = reinterpret_cast<signed char>(*eax2912 + al2913);
    *eax2914 = reinterpret_cast<signed char>(*eax2915 + al2916);
    *eax2917 = reinterpret_cast<signed char>(*eax2918 + al2919);
    *eax2920 = reinterpret_cast<signed char>(*eax2921 + al2922);
    *eax2923 = reinterpret_cast<signed char>(*eax2924 + al2925);
    *eax2926 = reinterpret_cast<signed char>(*eax2927 + al2928);
    *eax2929 = reinterpret_cast<signed char>(*eax2930 + al2931);
    *eax2932 = reinterpret_cast<signed char>(*eax2933 + al2934);
    *eax2935 = reinterpret_cast<signed char>(*eax2936 + al2937);
    *eax2938 = reinterpret_cast<signed char>(*eax2939 + al2940);
    *eax2941 = reinterpret_cast<signed char>(*eax2942 + al2943);
    *eax2944 = reinterpret_cast<signed char>(*eax2945 + al2946);
    *eax2947 = reinterpret_cast<signed char>(*eax2948 + al2949);
    *eax2950 = reinterpret_cast<signed char>(*eax2951 + al2952);
    *eax2953 = reinterpret_cast<signed char>(*eax2954 + al2955);
    *eax2956 = reinterpret_cast<signed char>(*eax2957 + al2958);
    *eax2959 = reinterpret_cast<signed char>(*eax2960 + al2961);
    *eax2962 = reinterpret_cast<signed char>(*eax2963 + al2964);
    *eax2965 = reinterpret_cast<signed char>(*eax2966 + al2967);
    *eax2968 = reinterpret_cast<signed char>(*eax2969 + al2970);
    *eax2971 = reinterpret_cast<signed char>(*eax2972 + al2973);
    *eax2974 = reinterpret_cast<signed char>(*eax2975 + al2976);
    *eax2977 = reinterpret_cast<signed char>(*eax2978 + al2979);
    *eax2980 = reinterpret_cast<signed char>(*eax2981 + al2982);
    *eax2983 = reinterpret_cast<signed char>(*eax2984 + al2985);
    *eax2986 = reinterpret_cast<signed char>(*eax2987 + al2988);
    *eax2989 = reinterpret_cast<signed char>(*eax2990 + al2991);
    *eax2992 = reinterpret_cast<signed char>(*eax2993 + al2994);
    *eax2995 = reinterpret_cast<signed char>(*eax2996 + al2997);
    *eax2998 = reinterpret_cast<signed char>(*eax2999 + al3000);
    *eax3001 = reinterpret_cast<signed char>(*eax3002 + al3003);
    *eax3004 = reinterpret_cast<signed char>(*eax3005 + al3006);
    *eax3007 = reinterpret_cast<signed char>(*eax3008 + al3009);
    *eax3010 = reinterpret_cast<signed char>(*eax3011 + al3012);
    *eax3013 = reinterpret_cast<signed char>(*eax3014 + al3015);
    *eax3016 = reinterpret_cast<signed char>(*eax3017 + al3018);
    *eax3019 = reinterpret_cast<signed char>(*eax3020 + al3021);
    *eax3022 = reinterpret_cast<signed char>(*eax3023 + al3024);
    *eax3025 = reinterpret_cast<signed char>(*eax3026 + al3027);
    *eax3028 = reinterpret_cast<signed char>(*eax3029 + al3030);
    *eax3031 = reinterpret_cast<signed char>(*eax3032 + al3033);
    *eax3034 = reinterpret_cast<signed char>(*eax3035 + al3036);
    *eax3037 = reinterpret_cast<signed char>(*eax3038 + al3039);
    *eax3040 = reinterpret_cast<signed char>(*eax3041 + al3042);
    *eax3043 = reinterpret_cast<signed char>(*eax3044 + al3045);
    *eax3046 = reinterpret_cast<signed char>(*eax3047 + al3048);
    *eax3049 = reinterpret_cast<signed char>(*eax3050 + al3051);
    *eax3052 = reinterpret_cast<signed char>(*eax3053 + al3054);
    *eax3055 = reinterpret_cast<signed char>(*eax3056 + al3057);
    *eax3058 = reinterpret_cast<signed char>(*eax3059 + al3060);
    *eax3061 = reinterpret_cast<signed char>(*eax3062 + al3063);
    *eax3064 = reinterpret_cast<signed char>(*eax3065 + al3066);
    *eax3067 = reinterpret_cast<signed char>(*eax3068 + al3069);
    *eax3070 = reinterpret_cast<signed char>(*eax3071 + al3072);
    *eax3073 = reinterpret_cast<signed char>(*eax3074 + al3075);
    *eax3076 = reinterpret_cast<signed char>(*eax3077 + al3078);
    *eax3079 = reinterpret_cast<signed char>(*eax3080 + al3081);
    *eax3082 = reinterpret_cast<signed char>(*eax3083 + al3084);
    *eax3085 = reinterpret_cast<signed char>(*eax3086 + al3087);
    *eax3088 = reinterpret_cast<signed char>(*eax3089 + al3090);
    *eax3091 = reinterpret_cast<signed char>(*eax3092 + al3093);
    *eax3094 = reinterpret_cast<signed char>(*eax3095 + al3096);
    *eax3097 = reinterpret_cast<signed char>(*eax3098 + al3099);
    *eax3100 = reinterpret_cast<signed char>(*eax3101 + al3102);
    *eax3103 = reinterpret_cast<signed char>(*eax3104 + al3105);
    *eax3106 = reinterpret_cast<signed char>(*eax3107 + al3108);
    *eax3109 = reinterpret_cast<signed char>(*eax3110 + al3111);
    *eax3112 = reinterpret_cast<signed char>(*eax3113 + al3114);
    *eax3115 = reinterpret_cast<signed char>(*eax3116 + al3117);
    *eax3118 = reinterpret_cast<signed char>(*eax3119 + al3120);
    *eax3121 = reinterpret_cast<signed char>(*eax3122 + al3123);
    *eax3124 = reinterpret_cast<signed char>(*eax3125 + al3126);
    *eax3127 = reinterpret_cast<signed char>(*eax3128 + al3129);
    *eax3130 = reinterpret_cast<signed char>(*eax3131 + al3132);
    *eax3133 = reinterpret_cast<signed char>(*eax3134 + al3135);
    *eax3136 = reinterpret_cast<signed char>(*eax3137 + al3138);
    *eax3139 = reinterpret_cast<signed char>(*eax3140 + al3141);
    *eax3142 = reinterpret_cast<signed char>(*eax3143 + al3144);
    *eax3145 = reinterpret_cast<signed char>(*eax3146 + al3147);
    *eax3148 = reinterpret_cast<signed char>(*eax3149 + al3150);
    *eax3151 = reinterpret_cast<signed char>(*eax3152 + al3153);
    *eax3154 = reinterpret_cast<signed char>(*eax3155 + al3156);
    *eax3157 = reinterpret_cast<signed char>(*eax3158 + al3159);
    *eax3160 = reinterpret_cast<signed char>(*eax3161 + al3162);
    *eax3163 = reinterpret_cast<signed char>(*eax3164 + al3165);
    *eax3166 = reinterpret_cast<signed char>(*eax3167 + al3168);
    *eax3169 = reinterpret_cast<signed char>(*eax3170 + al3171);
    *eax3172 = reinterpret_cast<signed char>(*eax3173 + al3174);
    *eax3175 = reinterpret_cast<signed char>(*eax3176 + al3177);
    *eax3178 = reinterpret_cast<signed char>(*eax3179 + al3180);
    *eax3181 = reinterpret_cast<signed char>(*eax3182 + al3183);
    *eax3184 = reinterpret_cast<signed char>(*eax3185 + al3186);
    *eax3187 = reinterpret_cast<signed char>(*eax3188 + al3189);
    *eax3190 = reinterpret_cast<signed char>(*eax3191 + al3192);
    *eax3193 = reinterpret_cast<signed char>(*eax3194 + al3195);
    *eax3196 = reinterpret_cast<signed char>(*eax3197 + al3198);
    *eax3199 = reinterpret_cast<signed char>(*eax3200 + al3201);
    *eax3202 = reinterpret_cast<signed char>(*eax3203 + al3204);
    *eax3205 = reinterpret_cast<signed char>(*eax3206 + al3207);
    *eax3208 = reinterpret_cast<signed char>(*eax3209 + al3210);
    *eax3211 = reinterpret_cast<signed char>(*eax3212 + al3213);
    *eax3214 = reinterpret_cast<signed char>(*eax3215 + al3216);
    *eax3217 = reinterpret_cast<signed char>(*eax3218 + al3219);
    *eax3220 = reinterpret_cast<signed char>(*eax3221 + al3222);
    *eax3223 = reinterpret_cast<signed char>(*eax3224 + al3225);
    *eax3226 = reinterpret_cast<signed char>(*eax3227 + al3228);
    *eax3229 = reinterpret_cast<signed char>(*eax3230 + al3231);
    *eax3232 = reinterpret_cast<signed char>(*eax3233 + al3234);
    *eax3235 = reinterpret_cast<signed char>(*eax3236 + al3237);
    *eax3238 = reinterpret_cast<signed char>(*eax3239 + al3240);
    *eax3241 = reinterpret_cast<signed char>(*eax3242 + al3243);
    *eax3244 = reinterpret_cast<signed char>(*eax3245 + al3246);
    *eax3247 = reinterpret_cast<signed char>(*eax3248 + al3249);
    *eax3250 = reinterpret_cast<signed char>(*eax3251 + al3252);
    *eax3253 = reinterpret_cast<signed char>(*eax3254 + al3255);
    *eax3256 = reinterpret_cast<signed char>(*eax3257 + al3258);
    *eax3259 = reinterpret_cast<signed char>(*eax3260 + al3261);
    *eax3262 = reinterpret_cast<signed char>(*eax3263 + al3264);
    *eax3265 = reinterpret_cast<signed char>(*eax3266 + al3267);
    *eax3268 = reinterpret_cast<signed char>(*eax3269 + al3270);
    *eax3271 = reinterpret_cast<signed char>(*eax3272 + al3273);
    *eax3274 = reinterpret_cast<signed char>(*eax3275 + al3276);
    *eax3277 = reinterpret_cast<signed char>(*eax3278 + al3279);
    *eax3280 = reinterpret_cast<signed char>(*eax3281 + al3282);
    *eax3283 = reinterpret_cast<signed char>(*eax3284 + al3285);
    *eax3286 = reinterpret_cast<signed char>(*eax3287 + al3288);
    *eax3289 = reinterpret_cast<signed char>(*eax3290 + al3291);
    *eax3292 = reinterpret_cast<signed char>(*eax3293 + al3294);
    *eax3295 = reinterpret_cast<signed char>(*eax3296 + al3297);
    *eax3298 = reinterpret_cast<signed char>(*eax3299 + al3300);
    *eax3301 = reinterpret_cast<signed char>(*eax3302 + al3303);
    *eax3304 = reinterpret_cast<signed char>(*eax3305 + al3306);
    *eax3307 = reinterpret_cast<signed char>(*eax3308 + al3309);
    *eax3310 = reinterpret_cast<signed char>(*eax3311 + al3312);
    *eax3313 = reinterpret_cast<signed char>(*eax3314 + al3315);
    *eax3316 = reinterpret_cast<signed char>(*eax3317 + al3318);
    *eax3319 = reinterpret_cast<signed char>(*eax3320 + al3321);
    *eax3322 = reinterpret_cast<signed char>(*eax3323 + al3324);
    *eax3325 = reinterpret_cast<signed char>(*eax3326 + al3327);
    *eax3328 = reinterpret_cast<signed char>(*eax3329 + al3330);
    *eax3331 = reinterpret_cast<signed char>(*eax3332 + al3333);
    *eax3334 = reinterpret_cast<signed char>(*eax3335 + al3336);
    *eax3337 = reinterpret_cast<signed char>(*eax3338 + al3339);
    *eax3340 = reinterpret_cast<signed char>(*eax3341 + al3342);
    *eax3343 = reinterpret_cast<signed char>(*eax3344 + al3345);
    *eax3346 = reinterpret_cast<signed char>(*eax3347 + al3348);
    *eax3349 = reinterpret_cast<signed char>(*eax3350 + al3351);
    *eax3352 = reinterpret_cast<signed char>(*eax3353 + al3354);
    *eax3355 = reinterpret_cast<signed char>(*eax3356 + al3357);
    *eax3358 = reinterpret_cast<signed char>(*eax3359 + al3360);
    *eax3361 = reinterpret_cast<signed char>(*eax3362 + al3363);
    *eax3364 = reinterpret_cast<signed char>(*eax3365 + al3366);
    *eax3367 = reinterpret_cast<signed char>(*eax3368 + al3369);
    *eax3370 = reinterpret_cast<signed char>(*eax3371 + al3372);
    *eax3373 = reinterpret_cast<signed char>(*eax3374 + al3375);
    *eax3376 = reinterpret_cast<signed char>(*eax3377 + al3378);
    *eax3379 = reinterpret_cast<signed char>(*eax3380 + al3381);
    *eax3382 = reinterpret_cast<signed char>(*eax3383 + al3384);
    *eax3385 = reinterpret_cast<signed char>(*eax3386 + al3387);
    *eax3388 = reinterpret_cast<signed char>(*eax3389 + al3390);
    *eax3391 = reinterpret_cast<signed char>(*eax3392 + al3393);
    *eax3394 = reinterpret_cast<signed char>(*eax3395 + al3396);
    *eax3397 = reinterpret_cast<signed char>(*eax3398 + al3399);
    *eax3400 = reinterpret_cast<signed char>(*eax3401 + al3402);
    *eax3403 = reinterpret_cast<signed char>(*eax3404 + al3405);
    *eax3406 = reinterpret_cast<signed char>(*eax3407 + al3408);
    *eax3409 = reinterpret_cast<signed char>(*eax3410 + al3411);
    *eax3412 = reinterpret_cast<signed char>(*eax3413 + al3414);
    *eax3415 = reinterpret_cast<signed char>(*eax3416 + al3417);
    *eax3418 = reinterpret_cast<signed char>(*eax3419 + al3420);
    *eax3421 = reinterpret_cast<signed char>(*eax3422 + al3423);
    *eax3424 = reinterpret_cast<signed char>(*eax3425 + al3426);
    *eax3427 = reinterpret_cast<signed char>(*eax3428 + al3429);
    *eax3430 = reinterpret_cast<signed char>(*eax3431 + al3432);
    *eax3433 = reinterpret_cast<signed char>(*eax3434 + al3435);
    *eax3436 = reinterpret_cast<signed char>(*eax3437 + al3438);
    *eax3439 = reinterpret_cast<signed char>(*eax3440 + al3441);
    *eax3442 = reinterpret_cast<signed char>(*eax3443 + al3444);
    *eax3445 = reinterpret_cast<signed char>(*eax3446 + al3447);
    *eax3448 = reinterpret_cast<signed char>(*eax3449 + al3450);
    *eax3451 = reinterpret_cast<signed char>(*eax3452 + al3453);
    *eax3454 = reinterpret_cast<signed char>(*eax3455 + al3456);
    *eax3457 = reinterpret_cast<signed char>(*eax3458 + al3459);
    *eax3460 = reinterpret_cast<signed char>(*eax3461 + al3462);
    *eax3463 = reinterpret_cast<signed char>(*eax3464 + al3465);
    *eax3466 = reinterpret_cast<signed char>(*eax3467 + al3468);
    *eax3469 = reinterpret_cast<signed char>(*eax3470 + al3471);
    *eax3472 = reinterpret_cast<signed char>(*eax3473 + al3474);
    *eax3475 = reinterpret_cast<signed char>(*eax3476 + al3477);
    *eax3478 = reinterpret_cast<signed char>(*eax3479 + al3480);
    *eax3481 = reinterpret_cast<signed char>(*eax3482 + al3483);
    *eax3484 = reinterpret_cast<signed char>(*eax3485 + al3486);
    *eax3487 = reinterpret_cast<signed char>(*eax3488 + al3489);
    *eax3490 = reinterpret_cast<signed char>(*eax3491 + al3492);
    *eax3493 = reinterpret_cast<signed char>(*eax3494 + al3495);
    *eax3496 = reinterpret_cast<signed char>(*eax3497 + al3498);
    *eax3499 = reinterpret_cast<signed char>(*eax3500 + al3501);
    *eax3502 = reinterpret_cast<signed char>(*eax3503 + al3504);
    *eax3505 = reinterpret_cast<signed char>(*eax3506 + al3507);
    *eax3508 = reinterpret_cast<signed char>(*eax3509 + al3510);
    *eax3511 = reinterpret_cast<signed char>(*eax3512 + al3513);
    *eax3514 = reinterpret_cast<signed char>(*eax3515 + al3516);
    *eax3517 = reinterpret_cast<signed char>(*eax3518 + al3519);
    *eax3520 = reinterpret_cast<signed char>(*eax3521 + al3522);
    *eax3523 = reinterpret_cast<signed char>(*eax3524 + al3525);
    *eax3526 = reinterpret_cast<signed char>(*eax3527 + al3528);
    *eax3529 = reinterpret_cast<signed char>(*eax3530 + al3531);
    *eax3532 = reinterpret_cast<signed char>(*eax3533 + al3534);
    *eax3535 = reinterpret_cast<signed char>(*eax3536 + al3537);
    *eax3538 = reinterpret_cast<signed char>(*eax3539 + al3540);
    *eax3541 = reinterpret_cast<signed char>(*eax3542 + al3543);
    *eax3544 = reinterpret_cast<signed char>(*eax3545 + al3546);
    *eax3547 = reinterpret_cast<signed char>(*eax3548 + al3549);
    *eax3550 = reinterpret_cast<signed char>(*eax3551 + al3552);
    *eax3553 = reinterpret_cast<signed char>(*eax3554 + al3555);
    *eax3556 = reinterpret_cast<signed char>(*eax3557 + al3558);
    *eax3559 = reinterpret_cast<signed char>(*eax3560 + al3561);
    *eax3562 = reinterpret_cast<signed char>(*eax3563 + al3564);
    *eax3565 = reinterpret_cast<signed char>(*eax3566 + al3567);
    *eax3568 = reinterpret_cast<signed char>(*eax3569 + al3570);
    *eax3571 = reinterpret_cast<signed char>(*eax3572 + al3573);
    *eax3574 = reinterpret_cast<signed char>(*eax3575 + al3576);
    *eax3577 = reinterpret_cast<signed char>(*eax3578 + al3579);
    *eax3580 = reinterpret_cast<signed char>(*eax3581 + al3582);
    *eax3583 = reinterpret_cast<signed char>(*eax3584 + al3585);
    *eax3586 = reinterpret_cast<signed char>(*eax3587 + al3588);
    *eax3589 = reinterpret_cast<signed char>(*eax3590 + al3591);
    *eax3592 = reinterpret_cast<signed char>(*eax3593 + al3594);
    *eax3595 = reinterpret_cast<signed char>(*eax3596 + al3597);
    *eax3598 = reinterpret_cast<signed char>(*eax3599 + al3600);
    *eax3601 = reinterpret_cast<signed char>(*eax3602 + al3603);
    *eax3604 = reinterpret_cast<signed char>(*eax3605 + al3606);
    *eax3607 = reinterpret_cast<signed char>(*eax3608 + al3609);
    *eax3610 = reinterpret_cast<signed char>(*eax3611 + al3612);
    *eax3613 = reinterpret_cast<signed char>(*eax3614 + al3615);
    *eax3616 = reinterpret_cast<signed char>(*eax3617 + al3618);
    *eax3619 = reinterpret_cast<signed char>(*eax3620 + al3621);
    *eax3622 = reinterpret_cast<signed char>(*eax3623 + al3624);
    *eax3625 = reinterpret_cast<signed char>(*eax3626 + al3627);
    *eax3628 = reinterpret_cast<signed char>(*eax3629 + al3630);
    *eax3631 = reinterpret_cast<signed char>(*eax3632 + al3633);
    *eax3634 = reinterpret_cast<signed char>(*eax3635 + al3636);
    *eax3637 = reinterpret_cast<signed char>(*eax3638 + al3639);
    *eax3640 = reinterpret_cast<signed char>(*eax3641 + al3642);
    *eax3643 = reinterpret_cast<signed char>(*eax3644 + al3645);
    *eax3646 = reinterpret_cast<signed char>(*eax3647 + al3648);
    *eax3649 = reinterpret_cast<signed char>(*eax3650 + al3651);
    *eax3652 = reinterpret_cast<signed char>(*eax3653 + al3654);
    *eax3655 = reinterpret_cast<signed char>(*eax3656 + al3657);
    *eax3658 = reinterpret_cast<signed char>(*eax3659 + al3660);
    *eax3661 = reinterpret_cast<signed char>(*eax3662 + al3663);
    *eax3664 = reinterpret_cast<signed char>(*eax3665 + al3666);
    *eax3667 = reinterpret_cast<signed char>(*eax3668 + al3669);
    *eax3670 = reinterpret_cast<signed char>(*eax3671 + al3672);
    *eax3673 = reinterpret_cast<signed char>(*eax3674 + al3675);
    *eax3676 = reinterpret_cast<signed char>(*eax3677 + al3678);
    *eax3679 = reinterpret_cast<signed char>(*eax3680 + al3681);
    *eax3682 = reinterpret_cast<signed char>(*eax3683 + al3684);
    *eax3685 = reinterpret_cast<signed char>(*eax3686 + al3687);
    *eax3688 = reinterpret_cast<signed char>(*eax3689 + al3690);
    *eax3691 = reinterpret_cast<signed char>(*eax3692 + al3693);
    *eax3694 = reinterpret_cast<signed char>(*eax3695 + al3696);
    *eax3697 = reinterpret_cast<signed char>(*eax3698 + al3699);
    *eax3700 = reinterpret_cast<signed char>(*eax3701 + al3702);
    *eax3703 = reinterpret_cast<signed char>(*eax3704 + al3705);
    *eax3706 = reinterpret_cast<signed char>(*eax3707 + al3708);
    *eax3709 = reinterpret_cast<signed char>(*eax3710 + al3711);
    *eax3712 = reinterpret_cast<signed char>(*eax3713 + al3714);
    *eax3715 = reinterpret_cast<signed char>(*eax3716 + al3717);
    *eax3718 = reinterpret_cast<signed char>(*eax3719 + al3720);
    *eax3721 = reinterpret_cast<signed char>(*eax3722 + al3723);
    *eax3724 = reinterpret_cast<signed char>(*eax3725 + al3726);
    *eax3727 = reinterpret_cast<signed char>(*eax3728 + al3729);
    *eax3730 = reinterpret_cast<signed char>(*eax3731 + al3732);
    *eax3733 = reinterpret_cast<signed char>(*eax3734 + al3735);
    *eax3736 = reinterpret_cast<signed char>(*eax3737 + al3738);
    *eax3739 = reinterpret_cast<signed char>(*eax3740 + al3741);
    *eax3742 = reinterpret_cast<signed char>(*eax3743 + al3744);
    *eax3745 = reinterpret_cast<signed char>(*eax3746 + al3747);
    *eax3748 = reinterpret_cast<signed char>(*eax3749 + al3750);
    *eax3751 = reinterpret_cast<signed char>(*eax3752 + al3753);
    *eax3754 = reinterpret_cast<signed char>(*eax3755 + al3756);
    *eax3757 = reinterpret_cast<signed char>(*eax3758 + al3759);
    *eax3760 = reinterpret_cast<signed char>(*eax3761 + al3762);
    *eax3763 = reinterpret_cast<signed char>(*eax3764 + al3765);
    *eax3766 = reinterpret_cast<signed char>(*eax3767 + al3768);
    *eax3769 = reinterpret_cast<signed char>(*eax3770 + al3771);
    *eax3772 = reinterpret_cast<signed char>(*eax3773 + al3774);
    *eax3775 = reinterpret_cast<signed char>(*eax3776 + al3777);
    *eax3778 = reinterpret_cast<signed char>(*eax3779 + al3780);
    *eax3781 = reinterpret_cast<signed char>(*eax3782 + al3783);
    *eax3784 = reinterpret_cast<signed char>(*eax3785 + al3786);
    *eax3787 = reinterpret_cast<signed char>(*eax3788 + al3789);
    *eax3790 = reinterpret_cast<signed char>(*eax3791 + al3792);
    *eax3793 = reinterpret_cast<signed char>(*eax3794 + al3795);
    *eax3796 = reinterpret_cast<signed char>(*eax3797 + al3798);
    *eax3799 = reinterpret_cast<signed char>(*eax3800 + al3801);
    *eax3802 = reinterpret_cast<signed char>(*eax3803 + al3804);
    *eax3805 = reinterpret_cast<signed char>(*eax3806 + al3807);
    *eax3808 = reinterpret_cast<signed char>(*eax3809 + al3810);
    *eax3811 = reinterpret_cast<signed char>(*eax3812 + al3813);
    *eax3814 = reinterpret_cast<signed char>(*eax3815 + al3816);
    *eax3817 = reinterpret_cast<signed char>(*eax3818 + al3819);
    *eax3820 = reinterpret_cast<signed char>(*eax3821 + al3822);
    *eax3823 = reinterpret_cast<signed char>(*eax3824 + al3825);
    *eax3826 = reinterpret_cast<signed char>(*eax3827 + al3828);
    *eax3829 = reinterpret_cast<signed char>(*eax3830 + al3831);
    *eax3832 = reinterpret_cast<signed char>(*eax3833 + al3834);
    *eax3835 = reinterpret_cast<signed char>(*eax3836 + al3837);
    *eax3838 = reinterpret_cast<signed char>(*eax3839 + al3840);
    *eax3841 = reinterpret_cast<signed char>(*eax3842 + al3843);
    *eax3844 = reinterpret_cast<signed char>(*eax3845 + al3846);
    *eax3847 = reinterpret_cast<signed char>(*eax3848 + al3849);
    *eax3850 = reinterpret_cast<signed char>(*eax3851 + al3852);
    *eax3853 = reinterpret_cast<signed char>(*eax3854 + al3855);
    *eax3856 = reinterpret_cast<signed char>(*eax3857 + al3858);
    *eax3859 = reinterpret_cast<signed char>(*eax3860 + al3861);
    *eax3862 = reinterpret_cast<signed char>(*eax3863 + al3864);
    *eax3865 = reinterpret_cast<signed char>(*eax3866 + al3867);
    *eax3868 = reinterpret_cast<signed char>(*eax3869 + al3870);
    *eax3871 = reinterpret_cast<signed char>(*eax3872 + al3873);
    *eax3874 = reinterpret_cast<signed char>(*eax3875 + al3876);
    *eax3877 = reinterpret_cast<signed char>(*eax3878 + al3879);
    *eax3880 = reinterpret_cast<signed char>(*eax3881 + al3882);
    *eax3883 = reinterpret_cast<signed char>(*eax3884 + al3885);
    *eax3886 = reinterpret_cast<signed char>(*eax3887 + al3888);
    *eax3889 = reinterpret_cast<signed char>(*eax3890 + al3891);
    *eax3892 = reinterpret_cast<signed char>(*eax3893 + al3894);
    *eax3895 = reinterpret_cast<signed char>(*eax3896 + al3897);
    *eax3898 = reinterpret_cast<signed char>(*eax3899 + al3900);
    *eax3901 = reinterpret_cast<signed char>(*eax3902 + al3903);
    *eax3904 = reinterpret_cast<signed char>(*eax3905 + al3906);
    *eax3907 = reinterpret_cast<signed char>(*eax3908 + al3909);
    *eax3910 = reinterpret_cast<signed char>(*eax3911 + al3912);
    *eax3913 = reinterpret_cast<signed char>(*eax3914 + al3915);
    *eax3916 = reinterpret_cast<signed char>(*eax3917 + al3918);
    *eax3919 = reinterpret_cast<signed char>(*eax3920 + al3921);
    *eax3922 = reinterpret_cast<signed char>(*eax3923 + al3924);
    *eax3925 = reinterpret_cast<signed char>(*eax3926 + al3927);
    *eax3928 = reinterpret_cast<signed char>(*eax3929 + al3930);
    *eax3931 = reinterpret_cast<signed char>(*eax3932 + al3933);
    *eax3934 = reinterpret_cast<signed char>(*eax3935 + al3936);
    *eax3937 = reinterpret_cast<signed char>(*eax3938 + al3939);
    *eax3940 = reinterpret_cast<signed char>(*eax3941 + al3942);
    *eax3943 = reinterpret_cast<signed char>(*eax3944 + al3945);
    *eax3946 = reinterpret_cast<signed char>(*eax3947 + al3948);
    *eax3949 = reinterpret_cast<signed char>(*eax3950 + al3951);
    *eax3952 = reinterpret_cast<signed char>(*eax3953 + al3954);
    *eax3955 = reinterpret_cast<signed char>(*eax3956 + al3957);
    *eax3958 = reinterpret_cast<signed char>(*eax3959 + al3960);
    *eax3961 = reinterpret_cast<signed char>(*eax3962 + al3963);
    *eax3964 = reinterpret_cast<signed char>(*eax3965 + al3966);
    *eax3967 = reinterpret_cast<signed char>(*eax3968 + al3969);
    *eax3970 = reinterpret_cast<signed char>(*eax3971 + al3972);
    *eax3973 = reinterpret_cast<signed char>(*eax3974 + al3975);
    *eax3976 = reinterpret_cast<signed char>(*eax3977 + al3978);
    *eax3979 = reinterpret_cast<signed char>(*eax3980 + al3981);
    *eax3982 = reinterpret_cast<signed char>(*eax3983 + al3984);
    *eax3985 = reinterpret_cast<signed char>(*eax3986 + al3987);
    *eax3988 = reinterpret_cast<signed char>(*eax3989 + al3990);
    *eax3991 = reinterpret_cast<signed char>(*eax3992 + al3993);
    *eax3994 = reinterpret_cast<signed char>(*eax3995 + al3996);
    *eax3997 = reinterpret_cast<signed char>(*eax3998 + al3999);
    *eax4000 = reinterpret_cast<signed char>(*eax4001 + al4002);
    *eax4003 = reinterpret_cast<signed char>(*eax4004 + al4005);
    *eax4006 = reinterpret_cast<signed char>(*eax4007 + al4008);
    *eax4009 = reinterpret_cast<signed char>(*eax4010 + al4011);
    *eax4012 = reinterpret_cast<signed char>(*eax4013 + al4014);
    *eax4015 = reinterpret_cast<signed char>(*eax4016 + al4017);
    *eax4018 = reinterpret_cast<signed char>(*eax4019 + al4020);
    *eax4021 = reinterpret_cast<signed char>(*eax4022 + al4023);
    *eax4024 = reinterpret_cast<signed char>(*eax4025 + al4026);
    *eax4027 = reinterpret_cast<signed char>(*eax4028 + al4029);
    *eax4030 = reinterpret_cast<signed char>(*eax4031 + al4032);
    *eax4033 = reinterpret_cast<signed char>(*eax4034 + al4035);
    *eax4036 = reinterpret_cast<signed char>(*eax4037 + al4038);
    *eax4039 = reinterpret_cast<signed char>(*eax4040 + al4041);
    *eax4042 = reinterpret_cast<signed char>(*eax4043 + al4044);
    *eax4045 = reinterpret_cast<signed char>(*eax4046 + al4047);
    *eax4048 = reinterpret_cast<signed char>(*eax4049 + al4050);
    *eax4051 = reinterpret_cast<signed char>(*eax4052 + al4053);
    *eax4054 = reinterpret_cast<signed char>(*eax4055 + al4056);
    *eax4057 = reinterpret_cast<signed char>(*eax4058 + al4059);
    *eax4060 = reinterpret_cast<signed char>(*eax4061 + al4062);
    *eax4063 = reinterpret_cast<signed char>(*eax4064 + al4065);
    *eax4066 = reinterpret_cast<signed char>(*eax4067 + al4068);
    *eax4069 = reinterpret_cast<signed char>(*eax4070 + al4071);
    *eax4072 = reinterpret_cast<signed char>(*eax4073 + al4074);
    *eax4075 = reinterpret_cast<signed char>(*eax4076 + al4077);
    *eax4078 = reinterpret_cast<signed char>(*eax4079 + al4080);
    *eax4081 = reinterpret_cast<signed char>(*eax4082 + al4083);
    *eax4084 = reinterpret_cast<signed char>(*eax4085 + al4086);
    *eax4087 = reinterpret_cast<signed char>(*eax4088 + al4089);
    *eax4090 = reinterpret_cast<signed char>(*eax4091 + al4092);
    *eax4093 = reinterpret_cast<signed char>(*eax4094 + al4095);
    *eax4096 = reinterpret_cast<signed char>(*eax4097 + al4098);
    *eax4099 = reinterpret_cast<signed char>(*eax4100 + al4101);
    *eax4102 = reinterpret_cast<signed char>(*eax4103 + al4104);
    *eax4105 = reinterpret_cast<signed char>(*eax4106 + al4107);
    *eax4108 = reinterpret_cast<signed char>(*eax4109 + al4110);
    *eax4111 = reinterpret_cast<signed char>(*eax4112 + al4113);
    *eax4114 = reinterpret_cast<signed char>(*eax4115 + al4116);
    *eax4117 = reinterpret_cast<signed char>(*eax4118 + al4119);
    *eax4120 = reinterpret_cast<signed char>(*eax4121 + al4122);
    *eax4123 = reinterpret_cast<signed char>(*eax4124 + al4125);
    *eax4126 = reinterpret_cast<signed char>(*eax4127 + al4128);
    *eax4129 = reinterpret_cast<signed char>(*eax4130 + al4131);
    *eax4132 = reinterpret_cast<signed char>(*eax4133 + al4134);
    *eax4135 = reinterpret_cast<signed char>(*eax4136 + al4137);
    *eax4138 = reinterpret_cast<signed char>(*eax4139 + al4140);
    *eax4141 = reinterpret_cast<signed char>(*eax4142 + al4143);
    *eax4144 = reinterpret_cast<signed char>(*eax4145 + al4146);
    *eax4147 = reinterpret_cast<signed char>(*eax4148 + al4149);
    *eax4150 = reinterpret_cast<signed char>(*eax4151 + al4152);
    *eax4153 = reinterpret_cast<signed char>(*eax4154 + al4155);
    *eax4156 = reinterpret_cast<signed char>(*eax4157 + al4158);
    *eax4159 = reinterpret_cast<signed char>(*eax4160 + al4161);
    *eax4162 = reinterpret_cast<signed char>(*eax4163 + al4164);
    *eax4165 = reinterpret_cast<signed char>(*eax4166 + al4167);
    *eax4168 = reinterpret_cast<signed char>(*eax4169 + al4170);
    *eax4171 = reinterpret_cast<signed char>(*eax4172 + al4173);
    *eax4174 = reinterpret_cast<signed char>(*eax4175 + al4176);
    *eax4177 = reinterpret_cast<signed char>(*eax4178 + al4179);
    *eax4180 = reinterpret_cast<signed char>(*eax4181 + al4182);
    *eax4183 = reinterpret_cast<signed char>(*eax4184 + al4185);
    *eax4186 = reinterpret_cast<signed char>(*eax4187 + al4188);
    *eax4189 = reinterpret_cast<signed char>(*eax4190 + al4191);
    *eax4192 = reinterpret_cast<signed char>(*eax4193 + al4194);
    *eax4195 = reinterpret_cast<signed char>(*eax4196 + al4197);
    *eax4198 = reinterpret_cast<signed char>(*eax4199 + al4200);
    *eax4201 = reinterpret_cast<signed char>(*eax4202 + al4203);
    *eax4204 = reinterpret_cast<signed char>(*eax4205 + al4206);
    *eax4207 = reinterpret_cast<signed char>(*eax4208 + al4209);
    *eax4210 = reinterpret_cast<signed char>(*eax4211 + al4212);
    *eax4213 = reinterpret_cast<signed char>(*eax4214 + al4215);
    *eax4216 = reinterpret_cast<signed char>(*eax4217 + al4218);
    *eax4219 = reinterpret_cast<signed char>(*eax4220 + al4221);
    *eax4222 = reinterpret_cast<signed char>(*eax4223 + al4224);
    *eax4225 = reinterpret_cast<signed char>(*eax4226 + al4227);
    *eax4228 = reinterpret_cast<signed char>(*eax4229 + al4230);
    *eax4231 = reinterpret_cast<signed char>(*eax4232 + al4233);
    *eax4234 = reinterpret_cast<signed char>(*eax4235 + al4236);
    *eax4237 = reinterpret_cast<signed char>(*eax4238 + al4239);
    *eax4240 = reinterpret_cast<signed char>(*eax4241 + al4242);
    *eax4243 = reinterpret_cast<signed char>(*eax4244 + al4245);
    *eax4246 = reinterpret_cast<signed char>(*eax4247 + al4248);
    *eax4249 = reinterpret_cast<signed char>(*eax4250 + al4251);
    *eax4252 = reinterpret_cast<signed char>(*eax4253 + al4254);
    *eax4255 = reinterpret_cast<signed char>(*eax4256 + al4257);
    *eax4258 = reinterpret_cast<signed char>(*eax4259 + al4260);
    *eax4261 = reinterpret_cast<signed char>(*eax4262 + al4263);
    *eax4264 = reinterpret_cast<signed char>(*eax4265 + al4266);
    *eax4267 = reinterpret_cast<signed char>(*eax4268 + al4269);
    *eax4270 = reinterpret_cast<signed char>(*eax4271 + al4272);
    *eax4273 = reinterpret_cast<signed char>(*eax4274 + al4275);
    *eax4276 = reinterpret_cast<signed char>(*eax4277 + al4278);
    *eax4279 = reinterpret_cast<signed char>(*eax4280 + al4281);
    *eax4282 = reinterpret_cast<signed char>(*eax4283 + al4284);
    *eax4285 = reinterpret_cast<signed char>(*eax4286 + al4287);
    *eax4288 = reinterpret_cast<signed char>(*eax4289 + al4290);
    *eax4291 = reinterpret_cast<signed char>(*eax4292 + al4293);
    *eax4294 = reinterpret_cast<signed char>(*eax4295 + al4296);
    *eax4297 = reinterpret_cast<signed char>(*eax4298 + al4299);
    *eax4300 = reinterpret_cast<signed char>(*eax4301 + al4302);
    *eax4303 = reinterpret_cast<signed char>(*eax4304 + al4305);
    *eax4306 = reinterpret_cast<signed char>(*eax4307 + al4308);
    *eax4309 = reinterpret_cast<signed char>(*eax4310 + al4311);
    *eax4312 = reinterpret_cast<signed char>(*eax4313 + al4314);
    *eax4315 = reinterpret_cast<signed char>(*eax4316 + al4317);
    *eax4318 = reinterpret_cast<signed char>(*eax4319 + al4320);
    *eax4321 = reinterpret_cast<signed char>(*eax4322 + al4323);
    *eax4324 = reinterpret_cast<signed char>(*eax4325 + al4326);
    *eax4327 = reinterpret_cast<signed char>(*eax4328 + al4329);
    *eax4330 = reinterpret_cast<signed char>(*eax4331 + al4332);
    *eax4333 = reinterpret_cast<signed char>(*eax4334 + al4335);
    *eax4336 = reinterpret_cast<signed char>(*eax4337 + al4338);
    *eax4339 = reinterpret_cast<signed char>(*eax4340 + al4341);
    *eax4342 = reinterpret_cast<signed char>(*eax4343 + al4344);
    *eax4345 = reinterpret_cast<signed char>(*eax4346 + al4347);
    *eax4348 = reinterpret_cast<signed char>(*eax4349 + al4350);
    *eax4351 = reinterpret_cast<signed char>(*eax4352 + al4353);
    *eax4354 = reinterpret_cast<signed char>(*eax4355 + al4356);
    *eax4357 = reinterpret_cast<signed char>(*eax4358 + al4359);
    *eax4360 = reinterpret_cast<signed char>(*eax4361 + al4362);
    *eax4363 = reinterpret_cast<signed char>(*eax4364 + al4365);
    *eax4366 = reinterpret_cast<signed char>(*eax4367 + al4368);
    *eax4369 = reinterpret_cast<signed char>(*eax4370 + al4371);
    *eax4372 = reinterpret_cast<signed char>(*eax4373 + al4374);
    *eax4375 = reinterpret_cast<signed char>(*eax4376 + al4377);
    *eax4378 = reinterpret_cast<signed char>(*eax4379 + al4380);
    *eax4381 = reinterpret_cast<signed char>(*eax4382 + al4383);
    *eax4384 = reinterpret_cast<signed char>(*eax4385 + al4386);
    *eax4387 = reinterpret_cast<signed char>(*eax4388 + al4389);
    *eax4390 = reinterpret_cast<signed char>(*eax4391 + al4392);
    *eax4393 = reinterpret_cast<signed char>(*eax4394 + al4395);
    *eax4396 = reinterpret_cast<signed char>(*eax4397 + al4398);
    *eax4399 = reinterpret_cast<signed char>(*eax4400 + al4401);
    *eax4402 = reinterpret_cast<signed char>(*eax4403 + al4404);
    *eax4405 = reinterpret_cast<signed char>(*eax4406 + al4407);
    *eax4408 = reinterpret_cast<signed char>(*eax4409 + al4410);
    *eax4411 = reinterpret_cast<signed char>(*eax4412 + al4413);
    *eax4414 = reinterpret_cast<signed char>(*eax4415 + al4416);
    *eax4417 = reinterpret_cast<signed char>(*eax4418 + al4419);
    *eax4420 = reinterpret_cast<signed char>(*eax4421 + al4422);
    *eax4423 = reinterpret_cast<signed char>(*eax4424 + al4425);
    *eax4426 = reinterpret_cast<signed char>(*eax4427 + al4428);
    *eax4429 = reinterpret_cast<signed char>(*eax4430 + al4431);
    *eax4432 = reinterpret_cast<signed char>(*eax4433 + al4434);
    *eax4435 = reinterpret_cast<signed char>(*eax4436 + al4437);
    *eax4438 = reinterpret_cast<signed char>(*eax4439 + al4440);
    *eax4441 = reinterpret_cast<signed char>(*eax4442 + al4443);
    *eax4444 = reinterpret_cast<signed char>(*eax4445 + al4446);
    *eax4447 = reinterpret_cast<signed char>(*eax4448 + al4449);
    *eax4450 = reinterpret_cast<signed char>(*eax4451 + al4452);
    *eax4453 = reinterpret_cast<signed char>(*eax4454 + al4455);
    *eax4456 = reinterpret_cast<signed char>(*eax4457 + al4458);
    *eax4459 = reinterpret_cast<signed char>(*eax4460 + al4461);
    *eax4462 = reinterpret_cast<signed char>(*eax4463 + al4464);
    *eax4465 = reinterpret_cast<signed char>(*eax4466 + al4467);
    *eax4468 = reinterpret_cast<signed char>(*eax4469 + al4470);
    *eax4471 = reinterpret_cast<signed char>(*eax4472 + al4473);
    *eax4474 = reinterpret_cast<signed char>(*eax4475 + al4476);
    *eax4477 = reinterpret_cast<signed char>(*eax4478 + al4479);
    *eax4480 = reinterpret_cast<signed char>(*eax4481 + al4482);
    *eax4483 = reinterpret_cast<signed char>(*eax4484 + al4485);
    *eax4486 = reinterpret_cast<signed char>(*eax4487 + al4488);
    *eax4489 = reinterpret_cast<signed char>(*eax4490 + al4491);
    *eax4492 = reinterpret_cast<signed char>(*eax4493 + al4494);
    *eax4495 = reinterpret_cast<signed char>(*eax4496 + al4497);
    *eax4498 = reinterpret_cast<signed char>(*eax4499 + al4500);
    *eax4501 = reinterpret_cast<signed char>(*eax4502 + al4503);
    *eax4504 = reinterpret_cast<signed char>(*eax4505 + al4506);
    *eax4507 = reinterpret_cast<signed char>(*eax4508 + al4509);
    *eax4510 = reinterpret_cast<signed char>(*eax4511 + al4512);
    *eax4513 = reinterpret_cast<signed char>(*eax4514 + al4515);
    *eax4516 = reinterpret_cast<signed char>(*eax4517 + al4518);
    *eax4519 = reinterpret_cast<signed char>(*eax4520 + al4521);
    *eax4522 = reinterpret_cast<signed char>(*eax4523 + al4524);
    *eax4525 = reinterpret_cast<signed char>(*eax4526 + al4527);
    *eax4528 = reinterpret_cast<signed char>(*eax4529 + al4530);
    *eax4531 = reinterpret_cast<signed char>(*eax4532 + al4533);
    *eax4534 = reinterpret_cast<signed char>(*eax4535 + al4536);
    *eax4537 = reinterpret_cast<signed char>(*eax4538 + al4539);
    *eax4540 = reinterpret_cast<signed char>(*eax4541 + al4542);
    *eax4543 = reinterpret_cast<signed char>(*eax4544 + al4545);
    *eax4546 = reinterpret_cast<signed char>(*eax4547 + al4548);
    *eax4549 = reinterpret_cast<signed char>(*eax4550 + al4551);
    *eax4552 = reinterpret_cast<signed char>(*eax4553 + al4554);
    *eax4555 = reinterpret_cast<signed char>(*eax4556 + al4557);
    *eax4558 = reinterpret_cast<signed char>(*eax4559 + al4560);
    *eax4561 = reinterpret_cast<signed char>(*eax4562 + al4563);
    *eax4564 = reinterpret_cast<signed char>(*eax4565 + al4566);
    *eax4567 = reinterpret_cast<signed char>(*eax4568 + al4569);
    *eax4570 = reinterpret_cast<signed char>(*eax4571 + al4572);
    *eax4573 = reinterpret_cast<signed char>(*eax4574 + al4575);
    *eax4576 = reinterpret_cast<signed char>(*eax4577 + al4578);
    *eax4579 = reinterpret_cast<signed char>(*eax4580 + al4581);
    *eax4582 = reinterpret_cast<signed char>(*eax4583 + al4584);
    *eax4585 = reinterpret_cast<signed char>(*eax4586 + al4587);
    *eax4588 = reinterpret_cast<signed char>(*eax4589 + al4590);
    *eax4591 = reinterpret_cast<signed char>(*eax4592 + al4593);
    *eax4594 = reinterpret_cast<signed char>(*eax4595 + al4596);
    *eax4597 = reinterpret_cast<signed char>(*eax4598 + al4599);
    *eax4600 = reinterpret_cast<signed char>(*eax4601 + al4602);
    *eax4603 = reinterpret_cast<signed char>(*eax4604 + al4605);
    *eax4606 = reinterpret_cast<signed char>(*eax4607 + al4608);
    *eax4609 = reinterpret_cast<signed char>(*eax4610 + al4611);
    *eax4612 = reinterpret_cast<signed char>(*eax4613 + al4614);
    *eax4615 = reinterpret_cast<signed char>(*eax4616 + al4617);
    *eax4618 = reinterpret_cast<signed char>(*eax4619 + al4620);
    *eax4621 = reinterpret_cast<signed char>(*eax4622 + al4623);
    *eax4624 = reinterpret_cast<signed char>(*eax4625 + al4626);
    *eax4627 = reinterpret_cast<signed char>(*eax4628 + al4629);
    *eax4630 = reinterpret_cast<signed char>(*eax4631 + al4632);
    *eax4633 = reinterpret_cast<signed char>(*eax4634 + al4635);
    *eax4636 = reinterpret_cast<signed char>(*eax4637 + al4638);
    *eax4639 = reinterpret_cast<signed char>(*eax4640 + al4641);
    *eax4642 = reinterpret_cast<signed char>(*eax4643 + al4644);
    *eax4645 = reinterpret_cast<signed char>(*eax4646 + al4647);
    *eax4648 = reinterpret_cast<signed char>(*eax4649 + al4650);
    *eax4651 = reinterpret_cast<signed char>(*eax4652 + al4653);
    *eax4654 = reinterpret_cast<signed char>(*eax4655 + al4656);
    *eax4657 = reinterpret_cast<signed char>(*eax4658 + al4659);
    *eax4660 = reinterpret_cast<signed char>(*eax4661 + al4662);
    *eax4663 = reinterpret_cast<signed char>(*eax4664 + al4665);
    *eax4666 = reinterpret_cast<signed char>(*eax4667 + al4668);
    *eax4669 = reinterpret_cast<signed char>(*eax4670 + al4671);
    *eax4672 = reinterpret_cast<signed char>(*eax4673 + al4674);
    *eax4675 = reinterpret_cast<signed char>(*eax4676 + al4677);
    *eax4678 = reinterpret_cast<signed char>(*eax4679 + al4680);
    *eax4681 = reinterpret_cast<signed char>(*eax4682 + al4683);
    *eax4684 = reinterpret_cast<signed char>(*eax4685 + al4686);
    *eax4687 = reinterpret_cast<signed char>(*eax4688 + al4689);
    *eax4690 = reinterpret_cast<signed char>(*eax4691 + al4692);
    *eax4693 = reinterpret_cast<signed char>(*eax4694 + al4695);
    *eax4696 = reinterpret_cast<signed char>(*eax4697 + al4698);
    *eax4699 = reinterpret_cast<signed char>(*eax4700 + al4701);
    *eax4702 = reinterpret_cast<signed char>(*eax4703 + al4704);
    *eax4705 = reinterpret_cast<signed char>(*eax4706 + al4707);
    *eax4708 = reinterpret_cast<signed char>(*eax4709 + al4710);
    *eax4711 = reinterpret_cast<signed char>(*eax4712 + al4713);
    *eax4714 = reinterpret_cast<signed char>(*eax4715 + al4716);
    *eax4717 = reinterpret_cast<signed char>(*eax4718 + al4719);
    *eax4720 = reinterpret_cast<signed char>(*eax4721 + al4722);
    *eax4723 = reinterpret_cast<signed char>(*eax4724 + al4725);
    *eax4726 = reinterpret_cast<signed char>(*eax4727 + al4728);
    *eax4729 = reinterpret_cast<signed char>(*eax4730 + al4731);
    *eax4732 = reinterpret_cast<signed char>(*eax4733 + al4734);
    *eax4735 = reinterpret_cast<signed char>(*eax4736 + al4737);
    *eax4738 = reinterpret_cast<signed char>(*eax4739 + al4740);
    *eax4741 = reinterpret_cast<signed char>(*eax4742 + al4743);
    *eax4744 = reinterpret_cast<signed char>(*eax4745 + al4746);
    *eax4747 = reinterpret_cast<signed char>(*eax4748 + al4749);
    *eax4750 = reinterpret_cast<signed char>(*eax4751 + al4752);
    *eax4753 = reinterpret_cast<signed char>(*eax4754 + al4755);
    *eax4756 = reinterpret_cast<signed char>(*eax4757 + al4758);
    *eax4759 = reinterpret_cast<signed char>(*eax4760 + al4761);
    *eax4762 = reinterpret_cast<signed char>(*eax4763 + al4764);
    *eax4765 = reinterpret_cast<signed char>(*eax4766 + al4767);
    *eax4768 = reinterpret_cast<signed char>(*eax4769 + al4770);
    *eax4771 = reinterpret_cast<signed char>(*eax4772 + al4773);
    *eax4774 = reinterpret_cast<signed char>(*eax4775 + al4776);
    *eax4777 = reinterpret_cast<signed char>(*eax4778 + al4779);
    *eax4780 = reinterpret_cast<signed char>(*eax4781 + al4782);
    *eax4783 = reinterpret_cast<signed char>(*eax4784 + al4785);
    *eax4786 = reinterpret_cast<signed char>(*eax4787 + al4788);
    *eax4789 = reinterpret_cast<signed char>(*eax4790 + al4791);
    *eax4792 = reinterpret_cast<signed char>(*eax4793 + al4794);
    *eax4795 = reinterpret_cast<signed char>(*eax4796 + al4797);
    *eax4798 = reinterpret_cast<signed char>(*eax4799 + al4800);
    *eax4801 = reinterpret_cast<signed char>(*eax4802 + al4803);
    *eax4804 = reinterpret_cast<signed char>(*eax4805 + al4806);
    *eax4807 = reinterpret_cast<signed char>(*eax4808 + al4809);
    *eax4810 = reinterpret_cast<signed char>(*eax4811 + al4812);
    *eax4813 = reinterpret_cast<signed char>(*eax4814 + al4815);
    *eax4816 = reinterpret_cast<signed char>(*eax4817 + al4818);
    *eax4819 = reinterpret_cast<signed char>(*eax4820 + al4821);
    *eax4822 = reinterpret_cast<signed char>(*eax4823 + al4824);
    *eax4825 = reinterpret_cast<signed char>(*eax4826 + al4827);
    *eax4828 = reinterpret_cast<signed char>(*eax4829 + al4830);
    *eax4831 = reinterpret_cast<signed char>(*eax4832 + al4833);
    *eax4834 = reinterpret_cast<signed char>(*eax4835 + al4836);
    *eax4837 = reinterpret_cast<signed char>(*eax4838 + al4839);
    *eax4840 = reinterpret_cast<signed char>(*eax4841 + al4842);
    *eax4843 = reinterpret_cast<signed char>(*eax4844 + al4845);
    *eax4846 = reinterpret_cast<signed char>(*eax4847 + al4848);
    *eax4849 = reinterpret_cast<signed char>(*eax4850 + al4851);
    *eax4852 = reinterpret_cast<signed char>(*eax4853 + al4854);
    *eax4855 = reinterpret_cast<signed char>(*eax4856 + al4857);
    *eax4858 = reinterpret_cast<signed char>(*eax4859 + al4860);
    *eax4861 = reinterpret_cast<signed char>(*eax4862 + al4863);
    *eax4864 = reinterpret_cast<signed char>(*eax4865 + al4866);
    *eax4867 = reinterpret_cast<signed char>(*eax4868 + al4869);
    *eax4870 = reinterpret_cast<signed char>(*eax4871 + al4872);
    *eax4873 = reinterpret_cast<signed char>(*eax4874 + al4875);
    *eax4876 = reinterpret_cast<signed char>(*eax4877 + al4878);
    *eax4879 = reinterpret_cast<signed char>(*eax4880 + al4881);
    *eax4882 = reinterpret_cast<signed char>(*eax4883 + al4884);
    *eax4885 = reinterpret_cast<signed char>(*eax4886 + al4887);
    *eax4888 = reinterpret_cast<signed char>(*eax4889 + al4890);
    *eax4891 = reinterpret_cast<signed char>(*eax4892 + al4893);
    *eax4894 = reinterpret_cast<signed char>(*eax4895 + al4896);
    *eax4897 = reinterpret_cast<signed char>(*eax4898 + al4899);
    *eax4900 = reinterpret_cast<signed char>(*eax4901 + al4902);
    *eax4903 = reinterpret_cast<signed char>(*eax4904 + al4905);
    *eax4906 = reinterpret_cast<signed char>(*eax4907 + al4908);
    *eax4909 = reinterpret_cast<signed char>(*eax4910 + al4911);
    *eax4912 = reinterpret_cast<signed char>(*eax4913 + al4914);
    *eax4915 = reinterpret_cast<signed char>(*eax4916 + al4917);
    *eax4918 = reinterpret_cast<signed char>(*eax4919 + al4920);
    *eax4921 = reinterpret_cast<signed char>(*eax4922 + al4923);
    *eax4924 = reinterpret_cast<signed char>(*eax4925 + al4926);
    *eax4927 = reinterpret_cast<signed char>(*eax4928 + al4929);
    *eax4930 = reinterpret_cast<signed char>(*eax4931 + al4932);
    *eax4933 = reinterpret_cast<signed char>(*eax4934 + al4935);
    *eax4936 = reinterpret_cast<signed char>(*eax4937 + al4938);
    *eax4939 = reinterpret_cast<signed char>(*eax4940 + al4941);
    *eax4942 = reinterpret_cast<signed char>(*eax4943 + al4944);
    *eax4945 = reinterpret_cast<signed char>(*eax4946 + al4947);
    *eax4948 = reinterpret_cast<signed char>(*eax4949 + al4950);
    *eax4951 = reinterpret_cast<signed char>(*eax4952 + al4953);
    *eax4954 = reinterpret_cast<signed char>(*eax4955 + al4956);
    *eax4957 = reinterpret_cast<signed char>(*eax4958 + al4959);
    *eax4960 = reinterpret_cast<signed char>(*eax4961 + al4962);
    *eax4963 = reinterpret_cast<signed char>(*eax4964 + al4965);
    *eax4966 = reinterpret_cast<signed char>(*eax4967 + al4968);
    *eax4969 = reinterpret_cast<signed char>(*eax4970 + al4971);
    *eax4972 = reinterpret_cast<signed char>(*eax4973 + al4974);
    *eax4975 = reinterpret_cast<signed char>(*eax4976 + al4977);
    *eax4978 = reinterpret_cast<signed char>(*eax4979 + al4980);
    *eax4981 = reinterpret_cast<signed char>(*eax4982 + al4983);
    *eax4984 = reinterpret_cast<signed char>(*eax4985 + al4986);
    *eax4987 = reinterpret_cast<signed char>(*eax4988 + al4989);
    *eax4990 = reinterpret_cast<signed char>(*eax4991 + al4992);
    *eax4993 = reinterpret_cast<signed char>(*eax4994 + al4995);
    *eax4996 = reinterpret_cast<signed char>(*eax4997 + al4998);
    *eax4999 = reinterpret_cast<signed char>(*eax5000 + al5001);
    *eax5002 = reinterpret_cast<signed char>(*eax5003 + al5004);
    *eax5005 = reinterpret_cast<signed char>(*eax5006 + al5007);
    *eax5008 = reinterpret_cast<signed char>(*eax5009 + al5010);
    *eax5011 = reinterpret_cast<signed char>(*eax5012 + al5013);
    *eax5014 = reinterpret_cast<signed char>(*eax5015 + al5016);
    *eax5017 = reinterpret_cast<signed char>(*eax5018 + al5019);
    *eax5020 = reinterpret_cast<signed char>(*eax5021 + al5022);
    *eax5023 = reinterpret_cast<signed char>(*eax5024 + al5025);
    *eax5026 = reinterpret_cast<signed char>(*eax5027 + al5028);
    *eax5029 = reinterpret_cast<signed char>(*eax5030 + al5031);
    *eax5032 = reinterpret_cast<signed char>(*eax5033 + al5034);
    *eax5035 = reinterpret_cast<signed char>(*eax5036 + al5037);
    *eax5038 = reinterpret_cast<signed char>(*eax5039 + al5040);
    *eax5041 = reinterpret_cast<signed char>(*eax5042 + al5043);
    *eax5044 = reinterpret_cast<signed char>(*eax5045 + al5046);
    *eax5047 = reinterpret_cast<signed char>(*eax5048 + al5049);
    *eax5050 = reinterpret_cast<signed char>(*eax5051 + al5052);
    *eax5053 = reinterpret_cast<signed char>(*eax5054 + al5055);
    *eax5056 = reinterpret_cast<signed char>(*eax5057 + al5058);
    *eax5059 = reinterpret_cast<signed char>(*eax5060 + al5061);
    *eax5062 = reinterpret_cast<signed char>(*eax5063 + al5064);
    *eax5065 = reinterpret_cast<signed char>(*eax5066 + al5067);
    *eax5068 = reinterpret_cast<signed char>(*eax5069 + al5070);
    *eax5071 = reinterpret_cast<signed char>(*eax5072 + al5073);
    *eax5074 = reinterpret_cast<signed char>(*eax5075 + al5076);
    *eax5077 = reinterpret_cast<signed char>(*eax5078 + al5079);
    *eax5080 = reinterpret_cast<signed char>(*eax5081 + al5082);
    *eax5083 = reinterpret_cast<signed char>(*eax5084 + al5085);
    *eax5086 = reinterpret_cast<signed char>(*eax5087 + al5088);
    *eax5089 = reinterpret_cast<signed char>(*eax5090 + al5091);
    *eax5092 = reinterpret_cast<signed char>(*eax5093 + al5094);
    *eax5095 = reinterpret_cast<signed char>(*eax5096 + al5097);
    *eax5098 = reinterpret_cast<signed char>(*eax5099 + al5100);
    *eax5101 = reinterpret_cast<signed char>(*eax5102 + al5103);
    *eax5104 = reinterpret_cast<signed char>(*eax5105 + al5106);
    *eax5107 = reinterpret_cast<signed char>(*eax5108 + al5109);
    *eax5110 = reinterpret_cast<signed char>(*eax5111 + al5112);
    *eax5113 = reinterpret_cast<signed char>(*eax5114 + al5115);
    *eax5116 = reinterpret_cast<signed char>(*eax5117 + al5118);
    *eax5119 = reinterpret_cast<signed char>(*eax5120 + al5121);
    *eax5122 = reinterpret_cast<signed char>(*eax5123 + al5124);
    *eax5125 = reinterpret_cast<signed char>(*eax5126 + al5127);
    *eax5128 = reinterpret_cast<signed char>(*eax5129 + al5130);
    *eax5131 = reinterpret_cast<signed char>(*eax5132 + al5133);
    *eax5134 = reinterpret_cast<signed char>(*eax5135 + al5136);
    *eax5137 = reinterpret_cast<signed char>(*eax5138 + al5139);
    *eax5140 = reinterpret_cast<signed char>(*eax5141 + al5142);
    *eax5143 = reinterpret_cast<signed char>(*eax5144 + al5145);
    *eax5146 = reinterpret_cast<signed char>(*eax5147 + al5148);
    *eax5149 = reinterpret_cast<signed char>(*eax5150 + al5151);
    *eax5152 = reinterpret_cast<signed char>(*eax5153 + al5154);
    *eax5155 = reinterpret_cast<signed char>(*eax5156 + al5157);
    *eax5158 = reinterpret_cast<signed char>(*eax5159 + al5160);
    *eax5161 = reinterpret_cast<signed char>(*eax5162 + al5163);
    *eax5164 = reinterpret_cast<signed char>(*eax5165 + al5166);
    *eax5167 = reinterpret_cast<signed char>(*eax5168 + al5169);
    *eax5170 = reinterpret_cast<signed char>(*eax5171 + al5172);
    *eax5173 = reinterpret_cast<signed char>(*eax5174 + al5175);
    *eax5176 = reinterpret_cast<signed char>(*eax5177 + al5178);
    *eax5179 = reinterpret_cast<signed char>(*eax5180 + al5181);
    *eax5182 = reinterpret_cast<signed char>(*eax5183 + al5184);
    *eax5185 = reinterpret_cast<signed char>(*eax5186 + al5187);
    *eax5188 = reinterpret_cast<signed char>(*eax5189 + al5190);
    *eax5191 = reinterpret_cast<signed char>(*eax5192 + al5193);
    *eax5194 = reinterpret_cast<signed char>(*eax5195 + al5196);
    *eax5197 = reinterpret_cast<signed char>(*eax5198 + al5199);
    *eax5200 = reinterpret_cast<signed char>(*eax5201 + al5202);
    *eax5203 = reinterpret_cast<signed char>(*eax5204 + al5205);
    *eax5206 = reinterpret_cast<signed char>(*eax5207 + al5208);
    *eax5209 = reinterpret_cast<signed char>(*eax5210 + al5211);
    *eax5212 = reinterpret_cast<signed char>(*eax5213 + al5214);
    *eax5215 = reinterpret_cast<signed char>(*eax5216 + al5217);
    *eax5218 = reinterpret_cast<signed char>(*eax5219 + al5220);
    *eax5221 = reinterpret_cast<signed char>(*eax5222 + al5223);
    *eax5224 = reinterpret_cast<signed char>(*eax5225 + al5226);
    *eax5227 = reinterpret_cast<signed char>(*eax5228 + al5229);
    *eax5230 = reinterpret_cast<signed char>(*eax5231 + al5232);
    *eax5233 = reinterpret_cast<signed char>(*eax5234 + al5235);
    *eax5236 = reinterpret_cast<signed char>(*eax5237 + al5238);
    *eax5239 = reinterpret_cast<signed char>(*eax5240 + al5241);
    *eax5242 = reinterpret_cast<signed char>(*eax5243 + al5244);
    *eax5245 = reinterpret_cast<signed char>(*eax5246 + al5247);
    *eax5248 = reinterpret_cast<signed char>(*eax5249 + al5250);
    *eax5251 = reinterpret_cast<signed char>(*eax5252 + al5253);
    *eax5254 = reinterpret_cast<signed char>(*eax5255 + al5256);
    *eax5257 = reinterpret_cast<signed char>(*eax5258 + al5259);
    *eax5260 = reinterpret_cast<signed char>(*eax5261 + al5262);
    *eax5263 = reinterpret_cast<signed char>(*eax5264 + al5265);
    *eax5266 = reinterpret_cast<signed char>(*eax5267 + al5268);
    *eax5269 = reinterpret_cast<signed char>(*eax5270 + al5271);
    *eax5272 = reinterpret_cast<signed char>(*eax5273 + al5274);
    *eax5275 = reinterpret_cast<signed char>(*eax5276 + al5277);
    *eax5278 = reinterpret_cast<signed char>(*eax5279 + al5280);
    *eax5281 = reinterpret_cast<signed char>(*eax5282 + al5283);
    *eax5284 = reinterpret_cast<signed char>(*eax5285 + al5286);
    *eax5287 = reinterpret_cast<signed char>(*eax5288 + al5289);
    *eax5290 = reinterpret_cast<signed char>(*eax5291 + al5292);
    *eax5293 = reinterpret_cast<signed char>(*eax5294 + al5295);
    *eax5296 = reinterpret_cast<signed char>(*eax5297 + al5298);
    *eax5299 = reinterpret_cast<signed char>(*eax5300 + al5301);
    *eax5302 = reinterpret_cast<signed char>(*eax5303 + al5304);
    *eax5305 = reinterpret_cast<signed char>(*eax5306 + al5307);
    *eax5308 = reinterpret_cast<signed char>(*eax5309 + al5310);
    *eax5311 = reinterpret_cast<signed char>(*eax5312 + al5313);
}

void fun_408329() {
}
