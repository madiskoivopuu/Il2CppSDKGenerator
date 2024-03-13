#pragma once
#include <Il2Cpp/Il2Cpp.h>

class PrefabComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "PrefabComponent"));
	}

	template <typename T = Il2CppString*> T& Name() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppString*> T& FemaleName() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = bool> T& Hidden() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = WorldResourcesType*> T& ResourceType() {
		return *(T*)((uintptr_t)this + 0x24);
	}

	template <typename T = Il2CppString*> T GetName(Gender* gender) {
		return ((T (*)(PrefabComponent*, Gender*))(Il2CppBase() + 0x16DEC04))(this, gender);
	}
	template <typename T = void> T CopyTo(Il2CppObject* targetObject) {
		return ((T (*)(PrefabComponent*, Il2CppObject*))(Il2CppBase() + 0x16DEC50))(this, targetObject);
	}
	template <typename T = Il2CppString*> T Read(uintptr_t reader) {
		return ((T (*)(PrefabComponent*, uintptr_t))(Il2CppBase() + 0x16DED0C))(this, reader);
	}
	template <typename T = void> T Write(uintptr_t writer) {
		return ((T (*)(PrefabComponent*, uintptr_t))(Il2CppBase() + 0x16DEE0C))(this, writer);
	}
	template <typename T = bool> T IsEqualsDefault(Il2CppObject* blueprintComponent) {
		return ((T (*)(PrefabComponent*, Il2CppObject*))(Il2CppBase() + 0x16DEE74))(this, blueprintComponent);
	}

};

