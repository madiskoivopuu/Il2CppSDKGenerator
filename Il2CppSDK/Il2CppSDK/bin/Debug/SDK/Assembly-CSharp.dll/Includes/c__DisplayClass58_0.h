#pragma once
#include <Il2Cpp/Il2Cpp.h>

class cDisplayClass580
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<>c__DisplayClass58_0"));
	}

	template <typename T = uintptr_t> T& 4__this() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = void*> T& callback() {
		return *(T*)((uintptr_t)this + 0x18);
	}

	template <typename T = void> T GetUiSignOutCallbackOnGameThreadb__0(uintptr_t status) {
		return ((T (*)(cDisplayClass580*, uintptr_t))(Il2CppBase() + 0x113EFB0))(this, status);
	}

};

}
