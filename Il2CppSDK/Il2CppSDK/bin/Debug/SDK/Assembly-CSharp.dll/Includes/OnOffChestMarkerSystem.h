#pragma once
#include <Il2Cpp/Il2Cpp.h>

class OnOffChestMarkerSystem
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "OnOffChestMarkerSystem"));
	}

	template <typename R = ArenaUnityWorld*> R& _world() {
		return *(R*)((uintptr_t)this + 0x28);
	}
	 IGroup1GameEntity*>*& _chests() {
		return *(IGroup1GameEntity*>**)((uintptr_t)this + 0x30);
	}

	template <typename R = void> R Initialize() {
		return ((R (*)(OnOffChestMarkerSystem*))(Il2CppBase() + 0x11DD9CC))(this);
	}
	 ICollector1AccountEntity*>* GetTrigger(IContext1AccountEntity*>* context) {
		return ((ICollector1AccountEntity*>* (*)(OnOffChestMarkerSystem*, IContext1AccountEntity*>*))(Il2CppBase() + 0x11DDA48))(this, context);
	}
	template <typename R = bool> R Filter(AccountEntity* entity) {
		return ((R (*)(OnOffChestMarkerSystem*, AccountEntity*))(Il2CppBase() + 0x11DDB14))(this, entity);
	}
	template <typename R = void> R Execute(Il2CppList<AccountEntity*>* entities) {
		return ((R (*)(OnOffChestMarkerSystem*, Il2CppList<AccountEntity*>*))(Il2CppBase() + 0x11DDB30))(this, entities);
	}

};

