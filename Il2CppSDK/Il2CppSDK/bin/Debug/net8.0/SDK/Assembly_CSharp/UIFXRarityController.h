#pragma once

#include "../UnityEngine_CoreModule/UnityEngine/MonoBehaviour.h"


class UIFXRarityController : public MonoBehaviour {
public:

	static Il2CppClass* ClassDef() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "UIFXRarityController"));
	}

	Il2CppArray<GameObject*>*& _rarityViews() {
		return *(Il2CppArray<GameObject*>**)((uintptr_t)this + 0x18);
	}

};};
