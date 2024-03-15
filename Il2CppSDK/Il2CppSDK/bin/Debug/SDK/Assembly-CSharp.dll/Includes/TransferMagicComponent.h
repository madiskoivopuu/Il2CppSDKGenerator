#pragma once
#include <Il2Cpp/Il2Cpp.h>

class TransferMagicComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "TransferMagicComponent"));
	}

	template <typename R = Il2CppString*> R& TargetCondition() {
		return *(R*)((uintptr_t)this + 0x10);
	}
	template <typename R = MagicCondition*> R& MagicCondition() {
		return *(R*)((uintptr_t)this + 0x18);
	}
	template <typename R = bool> R& ResetDuration() {
		return *(R*)((uintptr_t)this + 0x20);
	}

	template <typename R = void> R CopyTo(Il2CppObject* target) {
		return ((R (*)(TransferMagicComponent*, Il2CppObject*))(Il2CppBase() + 0x1522DA0))(this, target);
	}

};

