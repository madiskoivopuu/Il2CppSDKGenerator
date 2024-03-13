#pragma once
#include <Il2Cpp/Il2Cpp.h>

class cDisplayClass500
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<>c__DisplayClass50_0"));
	}

	template <typename T = Il2CppString*> T& pointName() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> T& locationId() {
		return *(T*)((uintptr_t)this + 0x18);
	}

	template <typename T = void> T Enterb__0() {
		return ((T (*)(cDisplayClass500*))(Il2CppBase() + 0x115F0EC))(this);
	}

};

