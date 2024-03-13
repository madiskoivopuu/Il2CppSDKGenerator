#pragma once
#include <Il2Cpp/Il2Cpp.h>

class MagicAutoRotationSystem
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "MagicAutoRotationSystem"));
	}

	template <typename T = IGroup1MagicEntity*>*> T& _targetMagics() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = ICommonContexts*> T& _world() {
		return *(T*)((uintptr_t)this + 0x18);
	}

	template <typename T = void> T Initialize() {
		return ((T (*)(MagicAutoRotationSystem*))(Il2CppBase() + 0x11F1EA0))(this);
	}
	template <typename T = void> T Execute() {
		return ((T (*)(MagicAutoRotationSystem*))(Il2CppBase() + 0x11F205C))(this);
	}

};

