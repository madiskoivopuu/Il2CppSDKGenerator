#pragma once
#include <Il2Cpp/Il2Cpp.h>

class StringKey
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "StringKey"));
	}

	template <typename R = int8_t> R& _kind() {
		return *(R*)((uintptr_t)this + 0x0);
	}
	template <typename R = int32_t> R& _key() {
		return *(R*)((uintptr_t)this + 0x4);
	}
	template <typename R = Il2CppString*> R& _noMappedString() {
		return *(R*)((uintptr_t)this + 0x8);
	}

	template <typename R = bool> R Equals(StringKey other) {
		return ((R (*)(StringKey*, StringKey))(Il2CppBase() + 0x169F404))(this, other);
	}
	template <typename R = bool> R Equals_1(Il2CppObject* obj) {
		return ((R (*)(StringKey*, Il2CppObject*))(Il2CppBase() + 0x169F454))(this, obj);
	}
	template <typename R = int32_t> R GetHashCode() {
		return ((R (*)(StringKey*))(Il2CppBase() + 0x169F4DC))(this);
	}
	template <typename R = Il2CppString*> R ToString() {
		return ((R (*)(StringKey*))(Il2CppBase() + 0x169F514))(this);
	}
	template <typename R = Il2CppString*> R Read(uintptr_t reader) {
		return ((R (*)(StringKey*, uintptr_t))(Il2CppBase() + 0x169F718))(this, reader);
	}
	template <typename R = void> R Write(uintptr_t writer) {
		return ((R (*)(StringKey*, uintptr_t))(Il2CppBase() + 0x169F818))(this, writer);
	}
	template <typename R = StringKey> static R op_Implicit(Il2CppString* str) {
		return ((R (*)(void *, Il2CppString*))(Il2CppBase() + 0x169F890))(0, str);
	}
	template <typename R = Il2CppString*> static R op_Explicit(StringKey blueprintKey) {
		return ((R (*)(void *, StringKey))(Il2CppBase() + 0x169FA0C))(0, blueprintKey);
	}

};

