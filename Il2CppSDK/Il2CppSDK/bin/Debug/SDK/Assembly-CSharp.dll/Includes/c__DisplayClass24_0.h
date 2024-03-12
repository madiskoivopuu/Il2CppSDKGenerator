#pragma once
#include <Il2Cpp/Il2Cpp.h>

class cDisplayClass240
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<>c__DisplayClass24_0"));
	}

	template <typename T = uintptr_t> T& 4__this() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = bool> T& silent() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = void*> T& callback() {
		return *(T*)((uintptr_t)this + 0x20);
	}

	template <typename T = void> T FetchTokensb__0() {
		return ((T (*)(cDisplayClass240*))(Il2CppBase() + 0x1147160))(this);
	}

};

}
