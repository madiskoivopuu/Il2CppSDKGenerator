#pragma once
#include <Il2Cpp/Il2Cpp.h>

class UpdateModifiersSystem
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "UpdateModifiersSystem"));
	}

	template <typename R = ICommonContexts*> R& _world() {
		return *(R*)((uintptr_t)this + 0x28);
	}
	template <typename R = Il2CppArray<HashSet1<GameEntity*>*>*> static R& _sharedBuffer() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = bool> R& _isServer() {
		return *(R*)((uintptr_t)this + 0x30);
	}

	template <typename R = bool> R Filter(MagicEntity* entity) {
		return ((R (*)(UpdateModifiersSystem*, MagicEntity*))(Il2CppBase() + 0x153EFE8))(this, entity);
	}
	 ICollector1<MagicEntity*>* GetTrigger(IContext1<MagicEntity*>* context) {
		return ((ICollector1<MagicEntity*>* (*)(UpdateModifiersSystem*, IContext1<MagicEntity*>*))(Il2CppBase() + 0x153F040))(this, context);
	}
	template <typename R = void> R Execute(Il2CppList<MagicEntity*>* magicEntities) {
		return ((R (*)(UpdateModifiersSystem*, Il2CppList<MagicEntity*>*))(Il2CppBase() + 0x153F048))(this, magicEntities);
	}

};

