#pragma once

#include "../UnityEngine_CoreModule/UnityEngine/MonoBehaviour.h"
#include "../UnityEngine_CoreModule/UnityEngine/Vector2.h"

namespace UnityEngine { class RectTransform; }

class UIFXScale : public MonoBehaviour {
public:

	static Il2CppClass* ClassDef() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "UIFXScale"));
	}

	UnityEngine::Vector2& effectSize() {
		return *(UnityEngine::Vector2*)((uintptr_t)this + 0x18);
	}

	UnityEngine::RectTransform*& effectRect() {
		return *(UnityEngine::RectTransform**)((uintptr_t)this + 0x20);
	}

};};
