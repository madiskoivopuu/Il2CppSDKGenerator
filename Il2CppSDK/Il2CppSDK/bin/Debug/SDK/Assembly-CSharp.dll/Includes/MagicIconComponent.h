#pragma once
#include <Il2Cpp/Il2Cpp.h>

class MagicIconComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "MagicIconComponent"));
	}

	template <typename T = Il2CppString*> T& AssetPath() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& Show() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = bool> T& ShowCount() {
		return *(T*)((uintptr_t)this + 0x19);
	}
	template <typename T = uintptr_t> T& Viewer() {
		return *(T*)((uintptr_t)this + 0x1A);
	}
	template <typename T = bool> T& ShowWhenNotActive() {
		return *(T*)((uintptr_t)this + 0x1B);
	}
	template <typename T = bool> T& GroupByActor() {
		return *(T*)((uintptr_t)this + 0x1C);
	}

	template <typename T = void> T CopyTo(uintptr_t targetObject) {
		return ((T (*)(MagicIconComponent*, uintptr_t))(Il2CppBase() + 0x1AD9EE8))(this, targetObject);
	}

};

}
