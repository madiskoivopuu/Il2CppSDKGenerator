#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IOnCompletedActorMagicEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IOnCompletedActorMagicEntity"));
	}


	template <typename R = OnCompletedActorMagicComponent*> R get_onCompletedActorMagic() {
		return ((R (*)(IOnCompletedActorMagicEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = bool> R get_hasOnCompletedActorMagic() {
		return ((R (*)(IOnCompletedActorMagicEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = void> R AddOnCompletedActorMagic(bool newIgnoreActorParent, MagicSource* newMagicSource, Il2CppString* newName, Il2CppArray<Il2CppString*>* newNames, Il2CppArray<Item*>* newItems, int32_t newRandomCount) {
		return ((R (*)(IOnCompletedActorMagicEntity*, bool, MagicSource*, Il2CppString*, Il2CppArray<Il2CppString*>*, Il2CppArray<Item*>*, int32_t))(Il2CppBase() + 0x0))(this, newIgnoreActorParent, newMagicSource, newName, newNames, newItems, newRandomCount);
	}
	template <typename R = void> R ReplaceOnCompletedActorMagic(bool newIgnoreActorParent, MagicSource* newMagicSource, Il2CppString* newName, Il2CppArray<Il2CppString*>* newNames, Il2CppArray<Item*>* newItems, int32_t newRandomCount) {
		return ((R (*)(IOnCompletedActorMagicEntity*, bool, MagicSource*, Il2CppString*, Il2CppArray<Il2CppString*>*, Il2CppArray<Item*>*, int32_t))(Il2CppBase() + 0x0))(this, newIgnoreActorParent, newMagicSource, newName, newNames, newItems, newRandomCount);
	}
	template <typename R = void> R RemoveOnCompletedActorMagic() {
		return ((R (*)(IOnCompletedActorMagicEntity*))(Il2CppBase() + 0x0))(this);
	}

};

