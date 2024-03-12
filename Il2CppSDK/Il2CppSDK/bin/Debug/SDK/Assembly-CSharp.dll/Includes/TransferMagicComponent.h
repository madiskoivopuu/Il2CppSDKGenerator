#pragma once
#include <Il2Cpp/Il2Cpp.h>

class TransferMagicComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "TransferMagicComponent"));
	}

	template <typename T = Il2CppString*> T& TargetCondition() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& MagicCondition() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = bool> T& ResetDuration() {
		return *(T*)((uintptr_t)this + 0x20);
	}

	template <typename T = void> T CopyTo(uintptr_t target) {
		return ((T (*)(TransferMagicComponent*, uintptr_t))(Il2CppBase() + 0x1522DA0))(this, target);
	}

};

}
