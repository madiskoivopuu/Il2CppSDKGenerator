#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IApplyTargetMagicEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IApplyTargetMagicEntity"));
	}


	template <typename R = ApplyTargetMagicComponent*> R get_applyTargetMagic() {
		return ((R (*)(IApplyTargetMagicEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = bool> R get_hasApplyTargetMagic() {
		return ((R (*)(IApplyTargetMagicEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = void> R AddApplyTargetMagic(bool newIgnoreActorParent, MagicSource* newMagicSource, Il2CppString* newName, Il2CppArray<Il2CppString*>* newNames, Il2CppArray<Item*>* newItems, int32_t newRandomCount) {
		return ((R (*)(IApplyTargetMagicEntity*, bool, MagicSource*, Il2CppString*, Il2CppArray<Il2CppString*>*, Il2CppArray<Item*>*, int32_t))(Il2CppBase() + 0x0))(this, newIgnoreActorParent, newMagicSource, newName, newNames, newItems, newRandomCount);
	}
	template <typename R = void> R ReplaceApplyTargetMagic(bool newIgnoreActorParent, MagicSource* newMagicSource, Il2CppString* newName, Il2CppArray<Il2CppString*>* newNames, Il2CppArray<Item*>* newItems, int32_t newRandomCount) {
		return ((R (*)(IApplyTargetMagicEntity*, bool, MagicSource*, Il2CppString*, Il2CppArray<Il2CppString*>*, Il2CppArray<Item*>*, int32_t))(Il2CppBase() + 0x0))(this, newIgnoreActorParent, newMagicSource, newName, newNames, newItems, newRandomCount);
	}
	template <typename R = void> R RemoveApplyTargetMagic() {
		return ((R (*)(IApplyTargetMagicEntity*))(Il2CppBase() + 0x0))(this);
	}

};

