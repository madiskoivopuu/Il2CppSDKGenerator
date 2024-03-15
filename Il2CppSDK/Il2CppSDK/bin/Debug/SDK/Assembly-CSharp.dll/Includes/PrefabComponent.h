#pragma once
#include <Il2Cpp/Il2Cpp.h>

class PrefabComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "PrefabComponent"));
	}

	template <typename R = Il2CppString*> R& Name() {
		return *(R*)((uintptr_t)this + 0x10);
	}
	template <typename R = Il2CppString*> R& FemaleName() {
		return *(R*)((uintptr_t)this + 0x18);
	}
	template <typename R = bool> R& Hidden() {
		return *(R*)((uintptr_t)this + 0x20);
	}
	template <typename R = ProtoModels::WorldResourcesType*> R& ResourceType() {
		return *(R*)((uintptr_t)this + 0x24);
	}

	template <typename R = Il2CppString*> R GetName(Gender* gender) {
		return ((R (*)(PrefabComponent*, Gender*))(Il2CppBase() + 0x16DEC04))(this, gender);
	}
	template <typename R = void> R CopyTo(Il2CppObject* targetObject) {
		return ((R (*)(PrefabComponent*, Il2CppObject*))(Il2CppBase() + 0x16DEC50))(this, targetObject);
	}
	template <typename R = Il2CppString*> R Read(uintptr_t reader) {
		return ((R (*)(PrefabComponent*, uintptr_t))(Il2CppBase() + 0x16DED0C))(this, reader);
	}
	template <typename R = void> R Write(uintptr_t writer) {
		return ((R (*)(PrefabComponent*, uintptr_t))(Il2CppBase() + 0x16DEE0C))(this, writer);
	}
	template <typename R = bool> R IsEqualsDefault(Il2CppObject* blueprintComponent) {
		return ((R (*)(PrefabComponent*, Il2CppObject*))(Il2CppBase() + 0x16DEE74))(this, blueprintComponent);
	}

};
