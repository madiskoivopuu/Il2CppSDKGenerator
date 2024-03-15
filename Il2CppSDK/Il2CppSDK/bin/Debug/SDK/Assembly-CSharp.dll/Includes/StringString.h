#pragma once
#include <Il2Cpp/Il2Cpp.h>

class StringString
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "StringString"));
	}

	template <typename R = Il2CppString*> R& Item1() {
		return *(R*)((uintptr_t)this + 0x0);
	}
	template <typename R = Il2CppString*> R& Item2() {
		return *(R*)((uintptr_t)this + 0x8);
	}

	template <typename R = bool> R Equals(StringString* other) {
		return ((R (*)(StringString*, StringString*))(Il2CppBase() + 0x16A0944))(this, other);
	}
	template <typename R = bool> R Equals_1(Il2CppObject* obj) {
		return ((R (*)(StringString*, Il2CppObject*))(Il2CppBase() + 0x16A0990))(this, obj);
	}
	template <typename R = int32_t> R GetHashCode() {
		return ((R (*)(StringString*))(Il2CppBase() + 0x16A0A18))(this);
	}

};

