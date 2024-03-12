#pragma once
#include <Il2Cpp/Il2Cpp.h>

class RuneDescriptionComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "RuneDescriptionComponent"));
	}

	template <typename T = Il2CppString*> T& MagicName() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppString*> T& ParamsDescription() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& ParamsByGrade() {
		return *(T*)((uintptr_t)this + 0x20);
	}

	template <typename T = uintptr_t> T GetParams(int32_t grade) {
		return ((T (*)(RuneDescriptionComponent*, int32_t))(Il2CppBase() + 0x11A9B64))(this, grade);
	}
	template <typename T = void> T CopyTo(uintptr_t target) {
		return ((T (*)(RuneDescriptionComponent*, uintptr_t))(Il2CppBase() + 0x11A9E9C))(this, target);
	}

};

}
