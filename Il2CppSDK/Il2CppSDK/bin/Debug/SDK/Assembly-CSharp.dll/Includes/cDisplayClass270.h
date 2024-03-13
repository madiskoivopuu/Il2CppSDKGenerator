#pragma once
#include <Il2Cpp/Il2Cpp.h>

class cDisplayClass270
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<>c__DisplayClass27_0"));
	}

	template <typename T = AndroidTokenClient*> T& 4__this() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Action1int32_t>*> T& callback() {
		return *(T*)((uintptr_t)this + 0x18);
	}

	template <typename T = void> T DoFetchTokenb__0(uintptr_t tokenResult) {
		return ((T (*)(cDisplayClass270*, uintptr_t))(Il2CppBase() + 0x1147750))(this, tokenResult);
	}

};

