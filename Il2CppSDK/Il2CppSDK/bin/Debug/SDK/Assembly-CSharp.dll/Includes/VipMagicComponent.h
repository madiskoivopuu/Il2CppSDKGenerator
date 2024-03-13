#pragma once
#include <Il2Cpp/Il2Cpp.h>

class VipMagicComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "VipMagicComponent"));
	}

	template <typename T = VipBonusType*> T& Type() {
		return *(T*)((uintptr_t)this + 0x10);
	}

	template <typename T = void> T CopyTo(Il2CppObject* target) {
		return ((T (*)(VipMagicComponent*, Il2CppObject*))(Il2CppBase() + 0x15CF084))(this, target);
	}

};

