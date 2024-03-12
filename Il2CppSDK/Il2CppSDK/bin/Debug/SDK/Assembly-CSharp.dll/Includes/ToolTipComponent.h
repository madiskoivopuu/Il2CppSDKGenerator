#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ToolTipComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ToolTipComponent"));
	}

	template <typename T = uintptr_t> T& Value() {
		return *(T*)((uintptr_t)this + 0x10);
	}

	template <typename T = void> T CopyTo(uintptr_t target) {
		return ((T (*)(ToolTipComponent*, uintptr_t))(Il2CppBase() + 0x14F1E44))(this, target);
	}
	template <typename T = bool> T IsPreviewHidden() {
		return ((T (*)(ToolTipComponent*))(Il2CppBase() + 0x14F1EDC))(this);
	}

};

}
