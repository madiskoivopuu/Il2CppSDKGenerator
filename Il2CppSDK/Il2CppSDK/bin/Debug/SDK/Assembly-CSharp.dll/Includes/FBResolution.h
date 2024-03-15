#pragma once
#include <Il2Cpp/Il2Cpp.h>

class FBResolution
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "FBResolution"));
	}

	template <typename R = int32_t> R& Width() {
		return *(R*)((uintptr_t)this + 0x0);
	}
	template <typename R = int32_t> R& Height() {
		return *(R*)((uintptr_t)this + 0x4);
	}
	template <typename R = Il2CppString*> R& Name() {
		return *(R*)((uintptr_t)this + 0x8);
	}
	template <typename R = bool> R& NeedLocalize() {
		return *(R*)((uintptr_t)this + 0x10);
	}

	template <typename R = float> R get_Ratio() {
		return ((R (*)(FBResolution*))(Il2CppBase() + 0x10CAF34))(this);
	}

};

