//
// Created by aimar on 7/14/2020.
//

#ifndef CODM_IL2CPPTYPE_H
#define CODM_IL2CPPTYPE_H

typedef void(*Il2CppMethodPointer)();

struct MethodInfo;

struct VirtualInvokeData
{
    Il2CppMethodPointer methodPtr;
    const MethodInfo* method;
};

struct Il2CppType
{
    void* data;
    unsigned int bits;
};

struct Il2CppClass;

struct Il2CppObject
{
    Il2CppClass *klass;
    void *monitor;
};

union Il2CppRGCTXData
{
    void* rgctxDataDummy;
    const MethodInfo* method;
    const Il2CppType* type;
    Il2CppClass* klass;
};

struct Il2CppClass_1
{
    void* image;
    void* gc_desc;
    const char* name;
    const char* namespaze;
    Il2CppType byval_arg;
    Il2CppType this_arg;
    Il2CppClass* element_class;
    Il2CppClass* castClass;
    Il2CppClass* declaringType;
    Il2CppClass* parent;
    void *generic_class;
    void* typeMetadataHandle;
    void* interopData;
    Il2CppClass* klass;
    void* fields;
    void* events;
    void* properties;
    void* methods;
    Il2CppClass** nestedTypes;
    Il2CppClass** implementedInterfaces;
    void* interfaceOffsets;
};

struct Il2CppClass_2
{
    Il2CppClass** typeHierarchy;
    void *unity_user_data;
    uint32_t initializationExceptionGCHandle;
    uint32_t cctor_started;
    uint32_t cctor_finished;
    size_t cctor_thread;
    void* genericContainerHandle;
    uint32_t instance_size;
    uint32_t actualSize;
    uint32_t element_size;
    int32_t native_size;
    uint32_t static_fields_size;
    uint32_t thread_static_fields_size;
    int32_t thread_static_fields_offset;
    uint32_t flags;
    uint32_t token;
    uint16_t method_count;
    uint16_t property_count;
    uint16_t field_count;
    uint16_t event_count;
    uint16_t nested_type_count;
    uint16_t vtable_count;
    uint16_t interfaces_count;
    uint16_t interface_offsets_count;
    uint8_t typeHierarchyDepth;
    uint8_t genericRecursionDepth;
    uint8_t rank;
    uint8_t minimumAlignment;
    uint8_t naturalAligment;
    uint8_t packingSize;
    uint8_t bitflags1;
    uint8_t bitflags2;
};

struct Il2CppClass
{
    Il2CppClass_1 _1;
    void* static_fields;
    Il2CppRGCTXData* rgctx_data;
    Il2CppClass_2 _2;
    VirtualInvokeData vtable[255];
};

typedef uintptr_t il2cpp_array_size_t;
typedef int32_t il2cpp_array_lower_bound_t;
struct Il2CppArrayBounds
{
    il2cpp_array_size_t length;
    il2cpp_array_lower_bound_t lower_bound;
};

struct MethodInfo
{
    Il2CppMethodPointer methodPointer;
    void* invoker_method;
    const char* name;
    Il2CppClass *klass;
    const Il2CppType *return_type;
    const void* parameters;
    union
    {
        const Il2CppRGCTXData* rgctx_data;
        const void* methodMetadataHandle;
    };
    union
    {
        const void* genericMethod;
        const void* genericContainerHandle;
    };
    uint32_t token;
    uint16_t flags;
    uint16_t iflags;
    uint16_t slot;
    uint8_t parameters_count;
    uint8_t bitflags;
};

template<typename T> struct Il2CppArray {
    Il2CppClass *klass;
    void *monitor;
    void *bounds;
    int max_length;
    T m_Items[128];

    int getLength() {
        return max_length;
    }

    T *getPointer() {
        return (T*)m_Items;
    }
};

struct Il2CppString {
    Il2CppClass* klass;
    void* monitor;
    int32_t length;
    uint16_t start_char;

    int getLength() {
        return length;
    }

    char *getChars() {
        return (char *)&start_char;
    }

    const char* CString();
    const wchar_t* WCString();
};

template<typename T> struct Il2CppList {
    Il2CppClass *klass;
    void *unk1;
    Il2CppArray<T> *items;
    int size;
    int version;

    T* getItems() {
        return items->getPointer();
    }

    int getSize() {
        return size;
    }

    int getVersion() {
        return version;
    }
};

template<typename TKey, typename TValue>
struct Il2CppDictionary
{
    struct KeysCollection;
    struct ValueCollection;

    struct Entry
    {
        int hashCode;
        int next;
        TKey key;
        TValue value;
    };

    void *kass;
    void *monitor;
    Il2CppArray<int> *buckets;
    Il2CppArray<Entry> *entries;
    int count;
    int version;
    int freeList;
    int freeCount;
    void* comparer;
    KeysCollection *keys;
    ValueCollection *values;
    void *_syncRoot;

    void* get_Comparer()
    {
        return comparer;
    }

    int get_Count()
    {
        return count;
    }

    KeysCollection get_Keys()
    {
        if(!keys) keys = new KeysCollection(this);
        return (*keys);
    }

    ValueCollection get_Values()
    {
        if(!values) values = new ValueCollection(this);
        return (*values);
    }

    TValue operator [] (TKey key)
    {
        int i = FindEntry(key);
        if (i >= 0) return (*entries)[i].value;
        return TValue();
    }

    const TValue operator [] (TKey key) const
    {
        int i = FindEntry(key);
        if (i >= 0) return (*entries)[i].value;
        return TValue();
    }

    int FindEntry(TKey key)
    {
        for (int i = 0; i < count; i++)
        {
            if((*entries)[i].key == key) return i;
        }
        return -1;
    }

    bool ContainsKey(TKey key)
    {
        return FindEntry(key) >= 0;
    }

    bool ContainsValue(TValue value)
    {
        for (int i = 0; i < count; i++)
        {
            if((*entries)[i].hashCode >= 0 &&
               (*entries)[i].value == value) return true;
        }
        return false;
    }

    bool TryGetValue(TKey key, TValue *value)
    {
        int i = FindEntry(key);
        if (i >= 0) {
            *value = (*entries)[i].value;
            return true;
        }
        *value = TValue();
        return false;
    }

    TValue GetValueOrDefault(TKey key)
    {
        int i = FindEntry(key);
        if (i >= 0) {
            return (*entries)[i].value;
        }
        return TValue();
    }

    struct KeysCollection
    {
        Il2CppDictionary *dictionary;

        KeysCollection(Il2CppDictionary *dictionary)
        {
            this->dictionary = dictionary;
        }

        TKey operator [] (int i)
        {
            auto entries = dictionary->entries;
            if(!entries) return TKey();
            return (*entries)[i].key;
        }

        const TKey operator [] (int i) const
        {
            auto entries = dictionary->entries;
            if(!entries) return TKey();
            return (*entries)[i].key;
        }

        int get_Count()
        {
            return dictionary->get_Count();
        }
    };

    struct ValueCollection
    {
        Il2CppDictionary *dictionary;

        ValueCollection(Il2CppDictionary *dictionary)
        {
            this->dictionary = dictionary;
        }

        TValue operator [] (int i)
        {
            auto entries = dictionary->entries;
            if(!entries) return TValue();
            return (*entries)[i].value;
        }

        const TValue operator [] (int i) const
        {
            auto entries = dictionary->entries;
            if(!entries) return TValue();
            return (*entries)[i].value;
        }

        int get_Count()
        {
            return dictionary->get_Count();
        }
    };
};

struct Il2CppRect {
    float m_XMin, m_YMin, m_width, m_height;

    static Il2CppRect New(float x, float y, float width, float height) {
        Il2CppRect r = {x, y, width, height};
        return r;
    }
};

struct Il2CppColor {
    float r, g, b, a;

    static Il2CppColor Black() {
        Il2CppColor c = {0, 0, 0, 1};
        return c;
    }

    static Il2CppColor Blue() {
        Il2CppColor c = {0, 0, 1, 1};
        return c;
    }

    static Il2CppColor Cyan() {
        Il2CppColor c = {0, 1, 1, 1};
        return c;
    }

    static Il2CppColor Green() {
        Il2CppColor c = {0, 1, 0, 1};
        return c;
    }

    static Il2CppColor Orange() {
        Il2CppColor c = {1, 0.5f, 0, 1};
        return c;
    }

    static Il2CppColor Red() {
        Il2CppColor c = {1, 0, 0, 1};
        return c;
    }

    static Il2CppColor White() {
        Il2CppColor c = {1, 1, 1, 1};
        return c;
    }

    static Il2CppColor Gray() {
        Il2CppColor c = {0.5f, 0.5f, 0.5f, 1};
        return c;
    }

    static Il2CppColor Yellow() {
        Il2CppColor c = {1, 0.921568632f, 0.0156862754f, 1};
        return c;
    }
};

struct Il2CppVector2 {
    float x, y;

    static Il2CppVector2 Zero() {
        Il2CppVector2 v = {0, 0};
        return v;
    }

    static Il2CppVector2 Up() {
        Il2CppVector2 v = {0, 1};
        return v;
    }

    static Il2CppVector2 Down() {
        Il2CppVector2 v = {0, -1};
        return v;
    }

    static Il2CppVector2 Right() {
        Il2CppVector2 v = {1, 0};
        return v;
    }

    static Il2CppVector2 Left() {
        Il2CppVector2 v = {-1, 0};
        return v;
    }

    static float Distance(Il2CppVector2 a, Il2CppVector2 b) {
        float dx = a.x - b.x;
        float dy = a.y - b.y;
        return sqrtf(dx * dx + dy * dy);
    }

    Il2CppVector2 operator+(Il2CppVector2 b) {
        Il2CppVector2 v = {x + b.x, y + b.y};
        return v;
    }

    Il2CppVector2 operator-(Il2CppVector2 b) {
        Il2CppVector2 v = {x - b.x, y - b.y};
        return v;
    }
};

struct Il2CppVector3 {
    float x, y, z;

    static Il2CppVector3 Zero() {
        Il2CppVector3 v = {0, 0, 0};
        return v;
    }

    static Il2CppVector3 Up() {
        Il2CppVector3 v = {0, 1, 0};
        return v;
    }

    static Il2CppVector3 Down() {
        Il2CppVector3 v = {0, -1, 0};
        return v;
    }

    static Il2CppVector3 Right() {
        Il2CppVector3 v = {1, 0, 0};
        return v;
    }

    static Il2CppVector3 Left() {
        Il2CppVector3 v = {-1, 0, 0};
        return v;
    }

    static Il2CppVector3 Forward() {
        Il2CppVector3 v = {0, 0, 1};
        return v;
    }

    static Il2CppVector3 Back() {
        Il2CppVector3 v = {0, 0, -1};
        return v;
    }

    static float Distance(Il2CppVector3 a, Il2CppVector3 b) {
        float dx = a.x - b.x;
        float dy = a.y - b.y;
        float dz = a.z - b.z;
        return sqrtf(dx * dx + dy * dy + dz * dz);
    }

    static float Magnitude(Il2CppVector3 vector) {
        float f = vector.x * vector.x + vector.y * vector.y + vector.z * vector.z;
        return sqrtf(f);
    }

    static Il2CppVector3 Normalize(Il2CppVector3 value) {
        float num = Il2CppVector3::Magnitude(value);
        Il2CppVector3 result;
        if (num > 1E-05f) {
            result = {value.x / num, value.y / num, value.z / num};
        } else {
            result = Il2CppVector3::Zero();
        }
        return result;
    }

    Il2CppVector3 operator+(Il2CppVector3 b) {
        Il2CppVector3 v = {x + b.x, y + b.y, z + b.z};
        return v;
    }

    Il2CppVector3 operator-(Il2CppVector3 b) {
        Il2CppVector3 v = {x - b.x, y - b.y, y - b.y};
        return v;
    }
};

struct Il2CppQuaternion {
    float x, y, z, w;

    static float Dot(Il2CppQuaternion a, Il2CppQuaternion b) {
        return a.x * b.x + a.y * b.y + a.z * b.z + a.w * b.w;
    }
};

#endif //CODM_IL2CPPTYPE_H
