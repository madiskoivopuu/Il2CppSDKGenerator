#pragma once
#include <Il2Cpp/Il2Cpp.h>

class MapFogViewSystem
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "MapFogViewSystem"));
	}

	template <typename T = MapUnityWorld*> T& _world() {
		return *(T*)((uintptr_t)this + 0x28);
	}

	template <typename T = ICollector1AccountEntity*>*> T GetTrigger(IContext1AccountEntity*>* context) {
		return ((T (*)(MapFogViewSystem*, IContext1AccountEntity*>*))(Il2CppBase() + 0x126EEB0))(this, context);
	}
	template <typename T = bool> T Filter(AccountEntity* account) {
		return ((T (*)(MapFogViewSystem*, AccountEntity*))(Il2CppBase() + 0x126EFD4))(this, account);
	}
	template <typename T = void> T Execute(Il2CppList<AccountEntity*>* entities) {
		return ((T (*)(MapFogViewSystem*, Il2CppList<AccountEntity*>*))(Il2CppBase() + 0x126F020))(this, entities);
	}

};

