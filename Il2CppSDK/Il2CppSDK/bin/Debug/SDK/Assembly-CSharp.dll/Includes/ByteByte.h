#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ByteByte
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ByteByte"));
	}

	template <typename T = uint8_t> T& Item1() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = uint8_t> T& Item2() {
		return *(T*)((uintptr_t)this + 0x1);
	}

	template <typename T = bool> T Equals(ByteByte* other) {
		return ((T (*)(ByteByte*, ByteByte*))(Il2CppBase() + 0x15B22F4))(this, other);
	}
	template <typename T = bool> T Equals_1(Il2CppObject* obj) {
		return ((T (*)(ByteByte*, Il2CppObject*))(Il2CppBase() + 0x15B231C))(this, obj);
	}
	template <typename T = int32_t> T GetHashCode() {
		return ((T (*)(ByteByte*))(Il2CppBase() + 0x15B23AC))(this);
	}

};

