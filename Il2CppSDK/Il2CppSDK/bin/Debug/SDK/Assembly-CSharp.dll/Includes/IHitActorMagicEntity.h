#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IHitActorMagicEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IHitActorMagicEntity"));
	}


	template <typename T = HitActorMagicComponent*> T get_hitActorMagic() {
		return ((T (*)(IHitActorMagicEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = bool> T get_hasHitActorMagic() {
		return ((T (*)(IHitActorMagicEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T AddHitActorMagic(bool newIgnoreActorParent, MagicSource* newMagicSource, Il2CppString* newName, Il2CppArray<uintptr_t>* newNames, Il2CppArray<uintptr_t>* newItems, int32_t newRandomCount) {
		return ((T (*)(IHitActorMagicEntity*, bool, MagicSource*, Il2CppString*, Il2CppArray<uintptr_t>*, Il2CppArray<uintptr_t>*, int32_t))(Il2CppBase() + 0x0))(this, newIgnoreActorParent, newMagicSource, newName, newNames, newItems, newRandomCount);
	}
	template <typename T = void> T ReplaceHitActorMagic(bool newIgnoreActorParent, MagicSource* newMagicSource, Il2CppString* newName, Il2CppArray<uintptr_t>* newNames, Il2CppArray<uintptr_t>* newItems, int32_t newRandomCount) {
		return ((T (*)(IHitActorMagicEntity*, bool, MagicSource*, Il2CppString*, Il2CppArray<uintptr_t>*, Il2CppArray<uintptr_t>*, int32_t))(Il2CppBase() + 0x0))(this, newIgnoreActorParent, newMagicSource, newName, newNames, newItems, newRandomCount);
	}
	template <typename T = void> T RemoveHitActorMagic() {
		return ((T (*)(IHitActorMagicEntity*))(Il2CppBase() + 0x0))(this);
	}

};

