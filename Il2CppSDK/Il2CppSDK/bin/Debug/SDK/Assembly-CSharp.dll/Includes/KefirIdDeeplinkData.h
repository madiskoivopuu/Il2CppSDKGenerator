#pragma once
#include <Il2Cpp/Il2Cpp.h>

class KefirIdDeeplinkData
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "KefirIdDeeplinkData"));
	}

	template <typename T = Il2CppString*> T& State() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppString*> T& Token() {
		return *(T*)((uintptr_t)this + 0x18);
	}

	template <typename T = Il2CppString*> T get_State() {
		return ((T (*)(KefirIdDeeplinkData*))(Il2CppBase() + 0x14EA2F0))(this);
	}
	template <typename T = void> T set_State(Il2CppString* value) {
		return ((T (*)(KefirIdDeeplinkData*, Il2CppString*))(Il2CppBase() + 0x14EA2F8))(this, value);
	}
	template <typename T = Il2CppString*> T get_Token() {
		return ((T (*)(KefirIdDeeplinkData*))(Il2CppBase() + 0x14EA300))(this);
	}
	template <typename T = void> T set_Token(Il2CppString* value) {
		return ((T (*)(KefirIdDeeplinkData*, Il2CppString*))(Il2CppBase() + 0x14EA308))(this, value);
	}
	template <typename T = bool> static T TryParse(Il2CppString* url, uintptr_t* result) {
		return ((T (*)(void *, Il2CppString*, uintptr_t*))(Il2CppBase() + 0x14EA360))(0, url, result);
	}

};

