#pragma once
#include <Il2Cpp/Il2Cpp.h>

class HighlightSystem
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "HighlightSystem"));
	}

	template <typename T = uintptr_t> T& _world() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = bool> T& _inited() {
		return *(T*)((uintptr_t)this + 0x18);
	}

	template <typename T = void> T Initialize() {
		return ((T (*)(HighlightSystem*))(Il2CppBase() + 0x1C444F4))(this);
	}
	template <typename T = void> T Execute() {
		return ((T (*)(HighlightSystem*))(Il2CppBase() + 0x1C444FC))(this);
	}
	template <typename T = Il2CppVector3> T GetEntityHighlightPosition(uintptr_t targetEntity, bool interact) {
		return ((T (*)(HighlightSystem*, uintptr_t, bool))(Il2CppBase() + 0x1C44FE4))(this, targetEntity, interact);
	}

};

}
