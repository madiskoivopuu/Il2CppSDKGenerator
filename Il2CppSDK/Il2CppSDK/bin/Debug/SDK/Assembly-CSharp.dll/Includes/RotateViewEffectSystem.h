#pragma once
#include <Il2Cpp/Il2Cpp.h>

class RotateViewEffectSystem
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "RotateViewEffectSystem"));
	}

	template <typename R = ArenaUnityWorld*> R& _world() {
		return *(R*)((uintptr_t)this + 0x10);
	}
	 IGroup1<EffectEntity*>*& _rotated() {
		return *(IGroup1<EffectEntity*>**)((uintptr_t)this + 0x18);
	}

	template <typename R = void> R Initialize() {
		return ((R (*)(RotateViewEffectSystem*))(Il2CppBase() + 0x11A4EA8))(this);
	}
	template <typename R = void> R Execute() {
		return ((R (*)(RotateViewEffectSystem*))(Il2CppBase() + 0x11A4F24))(this);
	}

};

