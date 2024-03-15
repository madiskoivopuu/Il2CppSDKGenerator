#pragma once
#include <Il2Cpp/Il2Cpp.h>

class KefirIdDeeplinkData
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "KefirIdDeeplinkData"));
	}

	template <typename R = Il2CppString*> R& State() {
		return *(R*)((uintptr_t)this + 0x10);
	}
	template <typename R = Il2CppString*> R& Token() {
		return *(R*)((uintptr_t)this + 0x18);
	}

	template <typename R = Il2CppString*> R get_State() {
		return ((R (*)(KefirIdDeeplinkData*))(Il2CppBase() + 0x14EA2F0))(this);
	}
	template <typename R = void> R set_State(Il2CppString* value) {
		return ((R (*)(KefirIdDeeplinkData*, Il2CppString*))(Il2CppBase() + 0x14EA2F8))(this, value);
	}
	template <typename R = Il2CppString*> R get_Token() {
		return ((R (*)(KefirIdDeeplinkData*))(Il2CppBase() + 0x14EA300))(this);
	}
	template <typename R = void> R set_Token(Il2CppString* value) {
		return ((R (*)(KefirIdDeeplinkData*, Il2CppString*))(Il2CppBase() + 0x14EA308))(this, value);
	}
	template <typename R = bool> static R TryParse(Il2CppString* url, uintptr_t* result) {
		return ((R (*)(void *, Il2CppString*, uintptr_t*))(Il2CppBase() + 0x14EA360))(0, url, result);
	}

};

