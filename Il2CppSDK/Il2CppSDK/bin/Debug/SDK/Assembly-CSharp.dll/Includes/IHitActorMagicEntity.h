#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IHitActorMagicEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IHitActorMagicEntity"));
	}


	template <typename R = HitActorMagicComponent*> R get_hitActorMagic() {
		return ((R (*)(IHitActorMagicEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = bool> R get_hasHitActorMagic() {
		return ((R (*)(IHitActorMagicEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = void> R AddHitActorMagic(bool newIgnoreActorParent, MagicSource* newMagicSource, Il2CppString* newName, Il2CppArray<Il2CppString*>* newNames, Il2CppArray<Item*>* newItems, int32_t newRandomCount) {
		return ((R (*)(IHitActorMagicEntity*, bool, MagicSource*, Il2CppString*, Il2CppArray<Il2CppString*>*, Il2CppArray<Item*>*, int32_t))(Il2CppBase() + 0x0))(this, newIgnoreActorParent, newMagicSource, newName, newNames, newItems, newRandomCount);
	}
	template <typename R = void> R ReplaceHitActorMagic(bool newIgnoreActorParent, MagicSource* newMagicSource, Il2CppString* newName, Il2CppArray<Il2CppString*>* newNames, Il2CppArray<Item*>* newItems, int32_t newRandomCount) {
		return ((R (*)(IHitActorMagicEntity*, bool, MagicSource*, Il2CppString*, Il2CppArray<Il2CppString*>*, Il2CppArray<Item*>*, int32_t))(Il2CppBase() + 0x0))(this, newIgnoreActorParent, newMagicSource, newName, newNames, newItems, newRandomCount);
	}
	template <typename R = void> R RemoveHitActorMagic() {
		return ((R (*)(IHitActorMagicEntity*))(Il2CppBase() + 0x0))(this);
	}

};

