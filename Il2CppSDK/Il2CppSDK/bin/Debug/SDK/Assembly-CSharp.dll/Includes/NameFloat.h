#pragma once
#include <Il2Cpp/Il2Cpp.h>

class NameFloat
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "NameFloat"));
	}

	template <typename R = Il2CppString*> R& Name() {
		return *(R*)((uintptr_t)this + 0x0);
	}
	template <typename R = float> R& Value() {
		return *(R*)((uintptr_t)this + 0x8);
	}

	template <typename R = bool> R Equals(NameFloat* other) {
		return ((R (*)(NameFloat*, NameFloat*))(Il2CppBase() + 0x155A9DC))(this, other);
	}
	template <typename R = bool> R Equals_1(Il2CppObject* obj) {
		return ((R (*)(NameFloat*, Il2CppObject*))(Il2CppBase() + 0x155AA24))(this, obj);
	}
	template <typename R = int32_t> R GetHashCode() {
		return ((R (*)(NameFloat*))(Il2CppBase() + 0x155AABC))(this);
	}

};

