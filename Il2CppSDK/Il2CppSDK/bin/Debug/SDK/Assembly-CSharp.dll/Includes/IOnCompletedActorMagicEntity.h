#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IOnCompletedActorMagicEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IOnCompletedActorMagicEntity"));
	}


	template <typename T = OnCompletedActorMagicComponent*> T get_onCompletedActorMagic() {
		return ((T (*)(IOnCompletedActorMagicEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = bool> T get_hasOnCompletedActorMagic() {
		return ((T (*)(IOnCompletedActorMagicEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T AddOnCompletedActorMagic(bool newIgnoreActorParent, MagicSource* newMagicSource, Il2CppString* newName, Il2CppArray<uintptr_t>* newNames, Il2CppArray<uintptr_t>* newItems, int32_t newRandomCount) {
		return ((T (*)(IOnCompletedActorMagicEntity*, bool, MagicSource*, Il2CppString*, Il2CppArray<uintptr_t>*, Il2CppArray<uintptr_t>*, int32_t))(Il2CppBase() + 0x0))(this, newIgnoreActorParent, newMagicSource, newName, newNames, newItems, newRandomCount);
	}
	template <typename T = void> T ReplaceOnCompletedActorMagic(bool newIgnoreActorParent, MagicSource* newMagicSource, Il2CppString* newName, Il2CppArray<uintptr_t>* newNames, Il2CppArray<uintptr_t>* newItems, int32_t newRandomCount) {
		return ((T (*)(IOnCompletedActorMagicEntity*, bool, MagicSource*, Il2CppString*, Il2CppArray<uintptr_t>*, Il2CppArray<uintptr_t>*, int32_t))(Il2CppBase() + 0x0))(this, newIgnoreActorParent, newMagicSource, newName, newNames, newItems, newRandomCount);
	}
	template <typename T = void> T RemoveOnCompletedActorMagic() {
		return ((T (*)(IOnCompletedActorMagicEntity*))(Il2CppBase() + 0x0))(this);
	}

};

