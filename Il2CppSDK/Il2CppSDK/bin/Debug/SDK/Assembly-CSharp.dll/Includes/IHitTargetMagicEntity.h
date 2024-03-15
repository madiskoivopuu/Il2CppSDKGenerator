#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IHitTargetMagicEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IHitTargetMagicEntity"));
	}


	template <typename R = HitTargetMagicComponent*> R get_hitTargetMagic() {
		return ((R (*)(IHitTargetMagicEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = bool> R get_hasHitTargetMagic() {
		return ((R (*)(IHitTargetMagicEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = void> R AddHitTargetMagic(bool newIgnoreActorParent, MagicSource newMagicSource, Il2CppString* newName, Il2CppArray<Il2CppString*>* newNames, Il2CppArray<Item*>* newItems, int32_t newRandomCount) {
		return ((R (*)(IHitTargetMagicEntity*, bool, MagicSource, Il2CppString*, Il2CppArray<Il2CppString*>*, Il2CppArray<Item*>*, int32_t))(Il2CppBase() + 0x0))(this, newIgnoreActorParent, newMagicSource, newName, newNames, newItems, newRandomCount);
	}
	template <typename R = void> R ReplaceHitTargetMagic(bool newIgnoreActorParent, MagicSource newMagicSource, Il2CppString* newName, Il2CppArray<Il2CppString*>* newNames, Il2CppArray<Item*>* newItems, int32_t newRandomCount) {
		return ((R (*)(IHitTargetMagicEntity*, bool, MagicSource, Il2CppString*, Il2CppArray<Il2CppString*>*, Il2CppArray<Item*>*, int32_t))(Il2CppBase() + 0x0))(this, newIgnoreActorParent, newMagicSource, newName, newNames, newItems, newRandomCount);
	}
	template <typename R = void> R RemoveHitTargetMagic() {
		return ((R (*)(IHitTargetMagicEntity*))(Il2CppBase() + 0x0))(this);
	}

};

