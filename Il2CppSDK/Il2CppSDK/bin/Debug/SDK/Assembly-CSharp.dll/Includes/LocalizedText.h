#pragma once
#include <Il2Cpp/Il2Cpp.h>

class LocalizedText
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "LocalizedText"));
	}

	template <typename T = Il2CppString*> T& Key() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = Il2CppString*> T& Format() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& Args() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = void*> T& Time() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = void*> T& Func() {
		return *(T*)((uintptr_t)this + 0x68);
	}

	template <typename T = void*> T get_Func() {
		return ((T (*)(LocalizedText*))(Il2CppBase() + 0x179B074))(this);
	}
	template <typename T = void> T set_Func(void* value) {
		return ((T (*)(LocalizedText*, void*))(Il2CppBase() + 0x179B07C))(this, value);
	}
	template <typename T = void> T SetFunc(void* func) {
		return ((T (*)(LocalizedText*, void*))(Il2CppBase() + 0x179B084))(this, func);
	}
	template <typename T = void> T SetTime(uintptr_t time, Il2CppString* key) {
		return ((T (*)(LocalizedText*, uintptr_t, Il2CppString*))(Il2CppBase() + 0x179B5F8))(this, time, key);
	}
	template <typename T = void> T SetKey(Il2CppString* key, Il2CppArray<uintptr_t>* args) {
		return ((T (*)(LocalizedText*, Il2CppString*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x179B6FC))(this, key, args);
	}
	template <typename T = void> T SetFormatKey(Il2CppString* format, Il2CppString* key, Il2CppArray<uintptr_t>* args) {
		return ((T (*)(LocalizedText*, Il2CppString*, Il2CppString*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x179B778))(this, format, key, args);
	}
	template <typename T = void> T SetText() {
		return ((T (*)(LocalizedText*))(Il2CppBase() + 0x179B0EC))(this);
	}
	template <typename T = void> T OnEnable() {
		return ((T (*)(LocalizedText*))(Il2CppBase() + 0x179B7F8))(this);
	}
	template <typename T = void> T OnDisable() {
		return ((T (*)(LocalizedText*))(Il2CppBase() + 0x179B8A8))(this);
	}

};

}
