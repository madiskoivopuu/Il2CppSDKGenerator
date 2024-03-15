#pragma once
#include <Il2Cpp/Il2Cpp.h>

class PrefabsEffectSystem
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "PrefabsEffectSystem"));
	}

	template <typename R = ArenaUnityWorld*> R& _world() {
		return *(R*)((uintptr_t)this + 0x10);
	}
	 IGroup1<EffectEntity*>*& _effects() {
		return *(IGroup1<EffectEntity*>**)((uintptr_t)this + 0x18);
	}

	template <typename R = void> R Initialize() {
		return ((R (*)(PrefabsEffectSystem*))(Il2CppBase() + 0x16DF1F8))(this);
	}
	template <typename R = void> R Execute() {
		return ((R (*)(PrefabsEffectSystem*))(Il2CppBase() + 0x16DF2FC))(this);
	}

};

