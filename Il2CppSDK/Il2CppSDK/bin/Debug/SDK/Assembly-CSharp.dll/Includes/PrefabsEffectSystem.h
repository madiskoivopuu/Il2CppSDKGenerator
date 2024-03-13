#pragma once
#include <Il2Cpp/Il2Cpp.h>

class PrefabsEffectSystem
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "PrefabsEffectSystem"));
	}

	template <typename T = ArenaUnityWorld*> T& _world() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = IGroup1EffectEntity*>*> T& _effects() {
		return *(T*)((uintptr_t)this + 0x18);
	}

	template <typename T = void> T Initialize() {
		return ((T (*)(PrefabsEffectSystem*))(Il2CppBase() + 0x16DF1F8))(this);
	}
	template <typename T = void> T Execute() {
		return ((T (*)(PrefabsEffectSystem*))(Il2CppBase() + 0x16DF2FC))(this);
	}

};

