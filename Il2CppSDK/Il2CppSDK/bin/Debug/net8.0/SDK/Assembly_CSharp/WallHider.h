#pragma once

#include "../UnityEngine_CoreModule/UnityEngine/MonoBehaviour.h"

namespace UnityEngine { class BoxCollider; }
namespace System_Collections { class IEnumerator; }

class WallHider : public MonoBehaviour {
public:

	static Il2CppClass* ClassDef() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "WallHider"));
	}

	Il2CppList<WallHiderHelper*>*& _wallsList() {
		return *(Il2CppList<WallHiderHelper*>**)((uintptr_t)this + 0x18);
	}

	UnityEngine::BoxCollider*& collider() {
		return *(UnityEngine::BoxCollider**)((uintptr_t)this + 0x20);
	}

	Il2CppString*& _objectTag() {
		return *(Il2CppString**)((uintptr_t)this + 0x28);
	}

	Il2CppString*& _playerTag() {
		return *(Il2CppString**)((uintptr_t)this + 0x30);
	}

	float& _delay() {
		return *(float*)((uintptr_t)this + 0x38);
	}

	int32_t& _id() {
		return *(int32_t*)((uintptr_t)this + 0x3C);
	}

	float& _timeToChange() {
		return *(float*)((uintptr_t)this + 0x40);
	}

	static int32_t& _opacity() {
		return *(int32_t*)((uintptr_t)ClassDef()->static_fields + 0x0);
	}

	static int32_t& _ids() {
		return *(int32_t*)((uintptr_t)ClassDef()->static_fields + 0x4);
	}

};};
