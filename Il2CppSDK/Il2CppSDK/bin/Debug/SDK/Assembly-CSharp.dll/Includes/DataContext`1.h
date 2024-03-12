#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "BaseContext`1" 

class DataContext1: BaseContext1
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "DataContext`1"));
	}

	template <typename T = void*> T& _blueprintIndex() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = void*> T& _oldBlueprintIndex() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = int32_t> T& _oldBlueprintComponentIndex() {
		return *(T*)((uintptr_t)this + 0x0);
	}

	template <typename T = void> T Fill(Il2CppDictionary<Il2CppString*, uintptr_t>* blueprints) {
		return ((T (*)(DataContext1*, Il2CppDictionary<Il2CppString*, uintptr_t>*))(Il2CppBase() + 0x0))(this, blueprints);
	}
	template <typename T = void> T AddEntityIndexes() {
		return ((T (*)(DataContext1*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = uintptr_t> T GetEntityWithBlueprintOrCreate(Il2CppString* name) {
		return ((T (*)(DataContext1*, Il2CppString*))(Il2CppBase() + 0x0))(this, name);
	}
	template <typename T = uintptr_t> T GetEntityWithBlueprint(Il2CppString* name) {
		return ((T (*)(DataContext1*, Il2CppString*))(Il2CppBase() + 0x0))(this, name);
	}
	template <typename T = uintptr_t> T GetEntityWithBlueprintOrNull(Il2CppString* name) {
		return ((T (*)(DataContext1*, Il2CppString*))(Il2CppBase() + 0x0))(this, name);
	}
	template <typename T = void> T FillEntity(uintptr_t entity, Il2CppString* entityName, Il2CppDictionary<Il2CppString*, uintptr_t>* blueprints, bool template) {
		return ((T (*)(DataContext1*, uintptr_t, Il2CppString*, Il2CppDictionary<Il2CppString*, uintptr_t>*, bool))(Il2CppBase() + 0x0))(this, entity, entityName, blueprints, template);
	}
	template <typename T = uintptr_t> T CreateCopy(uintptr_t source, Il2CppString* newBlueprint) {
		return ((T (*)(DataContext1*, uintptr_t, Il2CppString*))(Il2CppBase() + 0x0))(this, source, newBlueprint);
	}

};

}
