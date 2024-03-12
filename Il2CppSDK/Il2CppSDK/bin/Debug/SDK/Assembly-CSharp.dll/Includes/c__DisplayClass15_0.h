#pragma once
#include <Il2Cpp/Il2Cpp.h>

class cDisplayClass150
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<>c__DisplayClass15_0"));
	}

	template <typename T = uintptr_t> T& 4__this() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& onComplete() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = void*> T& source() {
		return *(T*)((uintptr_t)this + 0x20);
	}

	template <typename T = void> T GetAwaiterb__0() {
		return ((T (*)(cDisplayClass150*))(Il2CppBase() + 0x11483E0))(this);
	}

};

}
