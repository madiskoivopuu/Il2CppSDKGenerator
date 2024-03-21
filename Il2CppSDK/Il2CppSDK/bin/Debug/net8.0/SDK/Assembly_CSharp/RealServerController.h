#pragma once

#include "../UnityEngine_CoreModule/UnityEngine/MonoBehaviour.h"


class RealServerController : public MonoBehaviour {
public:

	static Il2CppClass* ClassDef() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "RealServerController"));
	}

	int32_t& worldCount() {
		return *(int32_t*)((uintptr_t)this + 0x18);
	}

	Il2CppString*& URL() {
		return *(Il2CppString**)((uintptr_t)this + 0x20);
	}

	int32_t& arenaPort() {
		return *(int32_t*)((uintptr_t)this + 0x28);
	}

	int32_t& mapPort() {
		return *(int32_t*)((uintptr_t)this + 0x2C);
	}

	bool& DisableLogger() {
		return *(bool*)((uintptr_t)this + 0x30);
	}

};};
