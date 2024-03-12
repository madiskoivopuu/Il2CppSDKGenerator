#pragma once
#include <Il2Cpp/Il2Cpp.h>

class GuaranteedRewardsComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "GuaranteedRewardsComponent"));
	}

	template <typename T = bool> T& ToCyclic() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = bool> T& ToMain() {
		return *(T*)((uintptr_t)this + 0x11);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& List() {
		return *(T*)((uintptr_t)this + 0x18);
	}

	template <typename T = void> T CopyTo(uintptr_t targetObject) {
		return ((T (*)(GuaranteedRewardsComponent*, uintptr_t))(Il2CppBase() + 0x12E372C))(this, targetObject);
	}
	template <typename T = Il2CppString*> T Read(uintptr_t reader) {
		return ((T (*)(GuaranteedRewardsComponent*, uintptr_t))(Il2CppBase() + 0x12E37D8))(this, reader);
	}
	template <typename T = void> T Write(uintptr_t writer) {
		return ((T (*)(GuaranteedRewardsComponent*, uintptr_t))(Il2CppBase() + 0x12E3994))(this, writer);
	}

};

}
