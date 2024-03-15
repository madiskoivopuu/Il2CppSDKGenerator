#pragma once
#include <Il2Cpp/Il2Cpp.h>

class MagicAutoRotationSystem
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "MagicAutoRotationSystem"));
	}

	 IGroup1MagicEntity*>*& _targetMagics() {
		return *(IGroup1MagicEntity*>**)((uintptr_t)this + 0x10);
	}
	template <typename R = ICommonContexts*> R& _world() {
		return *(R*)((uintptr_t)this + 0x18);
	}

	template <typename R = void> R Initialize() {
		return ((R (*)(MagicAutoRotationSystem*))(Il2CppBase() + 0x11F1EA0))(this);
	}
	template <typename R = void> R Execute() {
		return ((R (*)(MagicAutoRotationSystem*))(Il2CppBase() + 0x11F205C))(this);
	}

};

