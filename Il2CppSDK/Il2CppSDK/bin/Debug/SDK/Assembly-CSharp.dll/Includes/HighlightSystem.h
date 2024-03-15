#pragma once
#include <Il2Cpp/Il2Cpp.h>

class HighlightSystem
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "HighlightSystem"));
	}

	template <typename R = ArenaUnityWorld*> R& _world() {
		return *(R*)((uintptr_t)this + 0x10);
	}
	template <typename R = bool> R& _inited() {
		return *(R*)((uintptr_t)this + 0x18);
	}

	template <typename R = void> R Initialize() {
		return ((R (*)(HighlightSystem*))(Il2CppBase() + 0x1C444F4))(this);
	}
	template <typename R = void> R Execute() {
		return ((R (*)(HighlightSystem*))(Il2CppBase() + 0x1C444FC))(this);
	}
	template <typename R = uintptr_t> R GetEntityHighlightPosition(GameEntity* targetEntity, bool interact) {
		return ((R (*)(HighlightSystem*, GameEntity*, bool))(Il2CppBase() + 0x1C44FE4))(this, targetEntity, interact);
	}

};

