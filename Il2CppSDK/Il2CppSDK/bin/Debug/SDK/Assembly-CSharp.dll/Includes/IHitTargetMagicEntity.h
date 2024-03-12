#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IHitTargetMagicEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IHitTargetMagicEntity"));
	}


	template <typename T = uintptr_t> T get_hitTargetMagic() {
		return ((T (*)(IHitTargetMagicEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = bool> T get_hasHitTargetMagic() {
		return ((T (*)(IHitTargetMagicEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T AddHitTargetMagic(bool newIgnoreActorParent, uintptr_t newMagicSource, Il2CppString* newName, Il2CppArray<uintptr_t>* newNames, Il2CppArray<uintptr_t>* newItems, int32_t newRandomCount) {
		return ((T (*)(IHitTargetMagicEntity*, bool, uintptr_t, Il2CppString*, Il2CppArray<uintptr_t>*, Il2CppArray<uintptr_t>*, int32_t))(Il2CppBase() + 0x0))(this, newIgnoreActorParent, newMagicSource, newName, newNames, newItems, newRandomCount);
	}
	template <typename T = void> T ReplaceHitTargetMagic(bool newIgnoreActorParent, uintptr_t newMagicSource, Il2CppString* newName, Il2CppArray<uintptr_t>* newNames, Il2CppArray<uintptr_t>* newItems, int32_t newRandomCount) {
		return ((T (*)(IHitTargetMagicEntity*, bool, uintptr_t, Il2CppString*, Il2CppArray<uintptr_t>*, Il2CppArray<uintptr_t>*, int32_t))(Il2CppBase() + 0x0))(this, newIgnoreActorParent, newMagicSource, newName, newNames, newItems, newRandomCount);
	}
	template <typename T = void> T RemoveHitTargetMagic() {
		return ((T (*)(IHitTargetMagicEntity*))(Il2CppBase() + 0x0))(this);
	}

};

}
