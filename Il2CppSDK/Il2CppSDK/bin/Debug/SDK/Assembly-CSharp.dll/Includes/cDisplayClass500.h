#pragma once
#include <Il2Cpp/Il2Cpp.h>

class cDisplayClass500
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<>c__DisplayClass50_0"));
	}

	template <typename R = Il2CppString*> R& pointName() {
		return *(R*)((uintptr_t)this + 0x10);
	}
	template <typename R = int32_t> R& locationId() {
		return *(R*)((uintptr_t)this + 0x18);
	}

	template <typename R = void> R Enterb__0() {
		return ((R (*)(cDisplayClass500*))(Il2CppBase() + 0x115F0EC))(this);
	}

};

