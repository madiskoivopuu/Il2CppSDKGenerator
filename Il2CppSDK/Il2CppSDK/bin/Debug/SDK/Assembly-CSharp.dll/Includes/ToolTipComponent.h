#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ToolTipComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ToolTipComponent"));
	}

	template <typename R = ToolTipValue*> R& Value() {
		return *(R*)((uintptr_t)this + 0x10);
	}

	template <typename R = void> R CopyTo(Il2CppObject* target) {
		return ((R (*)(ToolTipComponent*, Il2CppObject*))(Il2CppBase() + 0x14F1E44))(this, target);
	}
	template <typename R = bool> R IsPreviewHidden() {
		return ((R (*)(ToolTipComponent*))(Il2CppBase() + 0x14F1EDC))(this);
	}

};

