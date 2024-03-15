#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IInstantEffectEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IInstantEffectEntity"));
	}


	template <typename R = InstantEffectComponent*> R get_instantEffect() {
		return ((R (*)(IInstantEffectEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = bool> R get_hasInstantEffect() {
		return ((R (*)(IInstantEffectEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = void> R AddInstantEffect(Il2CppString* newStart, Il2CppString* newSelf, Il2CppArray<Il2CppString*>* newTarget, Il2CppString* newTrail) {
		return ((R (*)(IInstantEffectEntity*, Il2CppString*, Il2CppString*, Il2CppArray<Il2CppString*>*, Il2CppString*))(Il2CppBase() + 0x0))(this, newStart, newSelf, newTarget, newTrail);
	}
	template <typename R = void> R ReplaceInstantEffect(Il2CppString* newStart, Il2CppString* newSelf, Il2CppArray<Il2CppString*>* newTarget, Il2CppString* newTrail) {
		return ((R (*)(IInstantEffectEntity*, Il2CppString*, Il2CppString*, Il2CppArray<Il2CppString*>*, Il2CppString*))(Il2CppBase() + 0x0))(this, newStart, newSelf, newTarget, newTrail);
	}
	template <typename R = void> R RemoveInstantEffect() {
		return ((R (*)(IInstantEffectEntity*))(Il2CppBase() + 0x0))(this);
	}

};

