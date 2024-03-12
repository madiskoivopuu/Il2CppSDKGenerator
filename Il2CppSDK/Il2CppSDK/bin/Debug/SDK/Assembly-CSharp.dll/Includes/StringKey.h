#pragma once
#include <Il2Cpp/Il2Cpp.h>

class StringKey
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "StringKey"));
	}

	template <typename T = signed char> T& _kind() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = int32_t> T& _key() {
		return *(T*)((uintptr_t)this + 0x4);
	}
	template <typename T = Il2CppString*> T& _noMappedString() {
		return *(T*)((uintptr_t)this + 0x8);
	}

	template <typename T = bool> T Equals(uintptr_t other) {
		return ((T (*)(StringKey*, uintptr_t))(Il2CppBase() + 0x169F404))(this, other);
	}
	template <typename T = bool> T Equals_1(uintptr_t obj) {
		return ((T (*)(StringKey*, uintptr_t))(Il2CppBase() + 0x169F454))(this, obj);
	}
	template <typename T = int32_t> T GetHashCode() {
		return ((T (*)(StringKey*))(Il2CppBase() + 0x169F4DC))(this);
	}
	template <typename T = Il2CppString*> T ToString() {
		return ((T (*)(StringKey*))(Il2CppBase() + 0x169F514))(this);
	}
	template <typename T = Il2CppString*> T Read(uintptr_t reader) {
		return ((T (*)(StringKey*, uintptr_t))(Il2CppBase() + 0x169F718))(this, reader);
	}
	template <typename T = void> T Write(uintptr_t writer) {
		return ((T (*)(StringKey*, uintptr_t))(Il2CppBase() + 0x169F818))(this, writer);
	}
	template <typename T = uintptr_t> static T op_Implicit(Il2CppString* str) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x169F890))(0, str);
	}
	template <typename T = Il2CppString*> static T op_Explicit(uintptr_t blueprintKey) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x169FA0C))(0, blueprintKey);
	}

};

}
