#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ClassRunesComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ClassRunesComponent"));
	}

	template <typename T = Il2CppDictionary<PlayerClassType*, Il2CppArray<uintptr_t>*>*> T& AllClassRunes() {
		return *(T*)((uintptr_t)this + 0x10);
	}

	template <typename T = bool> T HasClassRunes(PlayerClassType* classType) {
		return ((T (*)(ClassRunesComponent*, PlayerClassType*))(Il2CppBase() + 0x159E980))(this, classType);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T GetRunes(PlayerClassType* classType) {
		return ((T (*)(ClassRunesComponent*, PlayerClassType*))(Il2CppBase() + 0x159EA10))(this, classType);
	}
	template <typename T = Il2CppString*> T GetRune(PlayerClassType* classType, int32_t index) {
		return ((T (*)(ClassRunesComponent*, PlayerClassType*, int32_t))(Il2CppBase() + 0x159C8FC))(this, classType, index);
	}
	template <typename T = bool> T SetRune(PlayerClassType* classType, int32_t index, Il2CppString* name) {
		return ((T (*)(ClassRunesComponent*, PlayerClassType*, int32_t, Il2CppString*))(Il2CppBase() + 0x159EAA0))(this, classType, index, name);
	}
	template <typename T = void> T CopyTo(Il2CppObject* targetObject) {
		return ((T (*)(ClassRunesComponent*, Il2CppObject*))(Il2CppBase() + 0x159EC50))(this, targetObject);
	}
	template <typename T = void> T Write(uintptr_t writer) {
		return ((T (*)(ClassRunesComponent*, uintptr_t))(Il2CppBase() + 0x159ECE8))(this, writer);
	}
	template <typename T = Il2CppString*> T Read(uintptr_t reader) {
		return ((T (*)(ClassRunesComponent*, uintptr_t))(Il2CppBase() + 0x159EE8C))(this, reader);
	}

};

