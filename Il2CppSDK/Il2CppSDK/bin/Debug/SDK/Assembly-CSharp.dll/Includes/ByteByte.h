#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ByteByte
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ByteByte"));
	}

	template <typename R = uint8_t> R& Item1() {
		return *(R*)((uintptr_t)this + 0x0);
	}
	template <typename R = uint8_t> R& Item2() {
		return *(R*)((uintptr_t)this + 0x1);
	}

	template <typename R = bool> R Equals(ByteByte* other) {
		return ((R (*)(ByteByte*, ByteByte*))(Il2CppBase() + 0x15B22F4))(this, other);
	}
	template <typename R = bool> R Equals_1(Il2CppObject* obj) {
		return ((R (*)(ByteByte*, Il2CppObject*))(Il2CppBase() + 0x15B231C))(this, obj);
	}
	template <typename R = int32_t> R GetHashCode() {
		return ((R (*)(ByteByte*))(Il2CppBase() + 0x15B23AC))(this);
	}

};

