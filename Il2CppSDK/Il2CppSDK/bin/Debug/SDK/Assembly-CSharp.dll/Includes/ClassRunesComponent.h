#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ClassRunesComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ClassRunesComponent"));
	}

	 Il2CppDictionary<PlayerClassType*, Il2CppArray<Il2CppString*>*>*& AllClassRunes() {
		return *(Il2CppDictionary<PlayerClassType*, Il2CppArray<Il2CppString*>*>**)((uintptr_t)this + 0x10);
	}

	template <typename R = bool> R HasClassRunes(PlayerClassType* classType) {
		return ((R (*)(ClassRunesComponent*, PlayerClassType*))(Il2CppBase() + 0x159E980))(this, classType);
	}
	template <typename R = Il2CppArray<Il2CppString*>*> R GetRunes(PlayerClassType* classType) {
		return ((R (*)(ClassRunesComponent*, PlayerClassType*))(Il2CppBase() + 0x159EA10))(this, classType);
	}
	template <typename R = Il2CppString*> R GetRune(PlayerClassType* classType, int32_t index) {
		return ((R (*)(ClassRunesComponent*, PlayerClassType*, int32_t))(Il2CppBase() + 0x159C8FC))(this, classType, index);
	}
	template <typename R = bool> R SetRune(PlayerClassType* classType, int32_t index, Il2CppString* name) {
		return ((R (*)(ClassRunesComponent*, PlayerClassType*, int32_t, Il2CppString*))(Il2CppBase() + 0x159EAA0))(this, classType, index, name);
	}
	template <typename R = void> R CopyTo(Il2CppObject* targetObject) {
		return ((R (*)(ClassRunesComponent*, Il2CppObject*))(Il2CppBase() + 0x159EC50))(this, targetObject);
	}
	template <typename R = void> R Write(uintptr_t writer) {
		return ((R (*)(ClassRunesComponent*, uintptr_t))(Il2CppBase() + 0x159ECE8))(this, writer);
	}
	template <typename R = Il2CppString*> R Read(uintptr_t reader) {
		return ((R (*)(ClassRunesComponent*, uintptr_t))(Il2CppBase() + 0x159EE8C))(this, reader);
	}

};

