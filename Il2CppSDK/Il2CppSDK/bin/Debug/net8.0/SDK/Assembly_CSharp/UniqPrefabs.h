#pragma once

#include "../UnityEngine_CoreModule/UnityEngine/MonoBehaviour.h"

namespace UniqPrefabs { class Slot; }

class UniqPrefabs : public MonoBehaviour {
public:

	static Il2CppClass* ClassDef() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "UniqPrefabs"));
	}

	UniqPrefabs::Slot*& slotList() {
		return *(UniqPrefabs::Slot**)((uintptr_t)this + 0x18);
	}

	int32_t& maxIndex() {
		return *(int32_t*)((uintptr_t)this + 0x20);
	}

};};
