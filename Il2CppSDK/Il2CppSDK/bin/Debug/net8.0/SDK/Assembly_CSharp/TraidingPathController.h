#pragma once

#include "../UnityEngine_CoreModule/UnityEngine/MonoBehaviour.h"

namespace UnityEngine { class LineRenderer; }
namespace System_Collections { class IEnumerator; }

class TraidingPathController : public MonoBehaviour {
public:

	static Il2CppClass* ClassDef() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "TraidingPathController"));
	}

	UnityEngine::LineRenderer*& path() {
		return *(UnityEngine::LineRenderer**)((uintptr_t)this + 0x18);
	}

	Il2CppArray<GameObject*>*& _shipPrefabs() {
		return *(Il2CppArray<GameObject*>**)((uintptr_t)this + 0x20);
	}

	Il2CppArray<Vector3>*& _ship_path() {
		return *(Il2CppArray<Vector3>**)((uintptr_t)this + 0x28);
	}

	float& _portDelay() {
		return *(float*)((uintptr_t)this + 0x30);
	}

	float& _endDelay() {
		return *(float*)((uintptr_t)this + 0x34);
	}

	float& _timeBetween() {
		return *(float*)((uintptr_t)this + 0x38);
	}

	float& _speed() {
		return *(float*)((uintptr_t)this + 0x3C);
	}

	float& _timeleft() {
		return *(float*)((uintptr_t)this + 0x40);
	}

	float& _speed2() {
		return *(float*)((uintptr_t)this + 0x44);
	}

	float& _waterResist() {
		return *(float*)((uintptr_t)this + 0x48);
	}

	int32_t& _portPosition() {
		return *(int32_t*)((uintptr_t)this + 0x4C);
	}

};};
