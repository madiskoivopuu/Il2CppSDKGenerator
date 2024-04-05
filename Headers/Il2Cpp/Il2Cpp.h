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
#include <type_traits>
#include <codecvt>
#include <unordered_map>
#include <locale>

using namespace std;

#ifndef IL2CPP_H
#define IL2CPP_H

#include "Il2CppType.h"

extern const void *(*il2cpp_assembly_get_image)(const void *assembly);

extern void *(*il2cpp_domain_get)();

extern void* (*il2cpp_thread_attach)(void*);

extern void* (*il2cpp_domain_assembly_open)(const void* domain, char* assemblyName);

extern void **(*il2cpp_domain_get_assemblies)(const void *domain, size_t *size);

extern const char *(*il2cpp_image_get_name)(void *image);

extern void *(*il2cpp_class_from_name)(const void *image, const char *namespaze, const char *name);

extern void *(*il2cpp_class_get_field_from_name)(void *klass, const char *name);

extern void *(*il2cpp_class_get_method_from_name)(void *klass, const char *name, int argsCount);

extern size_t (*il2cpp_field_get_offset)(void *field);

extern void (*il2cpp_field_static_get_value)(void *field, void *value);

extern void (*il2cpp_field_static_set_value)(void *field, void *value);

extern void *(*il2cpp_array_new)(void *elementTypeInfo, size_t length);

extern char *(*il2cpp_type_get_name)(void *type);

extern void* (*il2cpp_method_get_param)(void *method, uint32_t index);

extern void* (*il2cpp_class_get_methods)(void *klass, void* *iter);

extern const char* (*il2cpp_method_get_name)(void *method);

extern const char *(*il2cpp_class_get_name)(void *klass);

extern void *(*il2cpp_class_get_nested_types)(void *, void **);

extern void *(*il2cpp_object_new)(void *);

extern Il2CppString *(*il2cpp_string_new)(const char *);

extern Il2CppString *(*il2cpp_string_new_utf16)(const wchar_t *, size_t len);

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
