#pragma once
#include <Il2Cpp/Il2Cpp.h>

class LocalizedText
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "LocalizedText"));
	}

	template <typename R = Il2CppString*> R& Key() {
		return *(R*)((uintptr_t)this + 0x18);
	}
	template <typename R = Il2CppString*> R& Format() {
		return *(R*)((uintptr_t)this + 0x20);
	}
	template <typename R = Il2CppArray<Il2CppString*>*> R& Args() {
		return *(R*)((uintptr_t)this + 0x28);
	}
	 Nullable1<Time>*& Time() {
		return *(Nullable1<Time>**)((uintptr_t)this + 0x30);
	}
	 Func1<Il2CppString*>*& Func() {
		return *(Func1<Il2CppString*>**)((uintptr_t)this + 0x68);
	}

	 Func1<Il2CppString*>* get_Func() {
		return ((Func1<Il2CppString*>* (*)(LocalizedText*))(Il2CppBase() + 0x179B074))(this);
	}
	template <typename R = void> R set_Func(Func1<Il2CppString*>* value) {
		return ((R (*)(LocalizedText*, Func1<Il2CppString*>*))(Il2CppBase() + 0x179B07C))(this, value);
	}
	template <typename R = void> R SetFunc(Func1<Il2CppString*>* func) {
		return ((R (*)(LocalizedText*, Func1<Il2CppString*>*))(Il2CppBase() + 0x179B084))(this, func);
	}
	template <typename R = void> R SetTime(Time time, Il2CppString* key) {
		return ((R (*)(LocalizedText*, Time, Il2CppString*))(Il2CppBase() + 0x179B5F8))(this, time, key);
	}
	template <typename R = void> R SetKey(Il2CppString* key, Il2CppArray<Il2CppString*>* args) {
		return ((R (*)(LocalizedText*, Il2CppString*, Il2CppArray<Il2CppString*>*))(Il2CppBase() + 0x179B6FC))(this, key, args);
	}
	template <typename R = void> R SetFormatKey(Il2CppString* format, Il2CppString* key, Il2CppArray<Il2CppString*>* args) {
		return ((R (*)(LocalizedText*, Il2CppString*, Il2CppString*, Il2CppArray<Il2CppString*>*))(Il2CppBase() + 0x179B778))(this, format, key, args);
	}
	template <typename R = void> R SetText() {
		return ((R (*)(LocalizedText*))(Il2CppBase() + 0x179B0EC))(this);
	}
	template <typename R = void> R OnEnable() {
		return ((R (*)(LocalizedText*))(Il2CppBase() + 0x179B7F8))(this);
	}
	template <typename R = void> R OnDisable() {
		return ((R (*)(LocalizedText*))(Il2CppBase() + 0x179B8A8))(this);
	}

};

