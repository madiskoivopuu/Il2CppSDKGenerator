#pragma once
#include <Il2Cpp/Il2Cpp.h>

class cDisplayClass300
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<>c__DisplayClass30_0"));
	}

	 Action1Il2CppString*>*& callback() {
		return *(Action1Il2CppString*>**)((uintptr_t)this + 0x10);
	}

	template <typename R = void> R DoGetAnotherServerAuthCodeb__0(uintptr_t tokenResult) {
		return ((R (*)(cDisplayClass300*, uintptr_t))(Il2CppBase() + 0x1147BFC))(this, tokenResult);
	}

};
