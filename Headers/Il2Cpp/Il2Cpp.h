//
// Created by aimar on 12/28/2019.
//
#pragma once

#include <stdio.h>
#include <cstdint>
#include <android/log.h>
#include <dlfcn.h>
#include <cstring>
#include <string>
#include <vector>
#include <map>
#include <inttypes.h>
#include <codecvt>
#include <locale>

using namespace std;

#ifndef IL2CPP_H
#define IL2CPP_H

#include "Il2CppType.h"

namespace Il2Cpp {
    int Attach(const char *libname = "libil2cpp.so");

    void *GetImage(const char *image);

    void *GetClass(const char *image, const char *namespaze, const char *clazz);

    void *CreateArray(const char *image, const char *namespaze, const char *clazz, size_t length);

    void *GetMethodOffset(const char *image, const char *namespaze, const char *clazz, const char *name, int argsCount = 0);

    void *GetMethodOffset(const char *image, const char *namespaze, const char *clazz, const char *name, char **args, int argsCount = 0);

    uintptr_t GetFieldOffset(const char *image, const char *namespaze, const char *clazz, const char *name);

    void GetStaticFieldValue(const char *image, const char *namespaze, const char *clazz, const char *name, void *output);

    void SetStaticFieldValue(const char *image, const char *namespaze, const char *clazz, const char *name, void *value);

    void *NewClassObject(const char *image, const char *namespaze, const char *clazz);

    Il2CppString *CreateString(const char *s);

    Il2CppString *CreateString(const wchar_t *s, size_t len);    

    bool IsAssembliesLoaded();
};

uintptr_t Il2CppBase();

#endif //ML_IL2CPP_H
