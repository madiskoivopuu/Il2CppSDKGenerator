#pragma once
#include <Il2Cpp/Il2Cpp.h>

class MapFogViewSystem
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "MapFogViewSystem"));
	}

	template <typename R = MapUnityWorld*> R& _world() {
		return *(R*)((uintptr_t)this + 0x28);
	}

	 ICollector1AccountEntity*>* GetTrigger(IContext1AccountEntity*>* context) {
		return ((ICollector1AccountEntity*>* (*)(MapFogViewSystem*, IContext1AccountEntity*>*))(Il2CppBase() + 0x126EEB0))(this, context);
	}
	template <typename R = bool> R Filter(AccountEntity* account) {
		return ((R (*)(MapFogViewSystem*, AccountEntity*))(Il2CppBase() + 0x126EFD4))(this, account);
	}
	template <typename R = void> R Execute(Il2CppList<AccountEntity*>* entities) {
		return ((R (*)(MapFogViewSystem*, Il2CppList<AccountEntity*>*))(Il2CppBase() + 0x126F020))(this, entities);
	}

};

