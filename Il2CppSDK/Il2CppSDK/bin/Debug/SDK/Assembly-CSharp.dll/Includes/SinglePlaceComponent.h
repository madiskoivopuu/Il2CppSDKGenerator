#pragma once
#include <Il2Cpp/Il2Cpp.h>

class SinglePlaceComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "SinglePlaceComponent"));
	}

	template <typename T = float> T& Radius() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> T& OwnMaxCount() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = int32_t> T& GlobalMaxCount() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = Il2CppString*> T& Name() {
		return *(T*)((uintptr_t)this + 0x20);
	}

	template <typename T = void> T CopyTo(uintptr_t target) {
		return ((T (*)(SinglePlaceComponent*, uintptr_t))(Il2CppBase() + 0x1480864))(this, target);
	}

};

}
