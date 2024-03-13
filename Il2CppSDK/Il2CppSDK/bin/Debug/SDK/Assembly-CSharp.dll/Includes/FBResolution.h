#pragma once
#include <Il2Cpp/Il2Cpp.h>

class FBResolution
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "FBResolution"));
	}

	template <typename T = int32_t> T& Width() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = int32_t> T& Height() {
		return *(T*)((uintptr_t)this + 0x4);
	}
	template <typename T = Il2CppString*> T& Name() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = bool> T& NeedLocalize() {
		return *(T*)((uintptr_t)this + 0x10);
	}

	template <typename T = float> T get_Ratio() {
		return ((T (*)(FBResolution*))(Il2CppBase() + 0x10CAF34))(this);
	}

};

