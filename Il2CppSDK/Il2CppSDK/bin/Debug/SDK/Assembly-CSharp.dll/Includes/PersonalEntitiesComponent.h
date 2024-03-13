#pragma once
#include <Il2Cpp/Il2Cpp.h>

class PersonalEntitiesComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "PersonalEntitiesComponent"));
	}

	template <typename T = Il2CppDictionary<Il2CppString*, Il2CppString*>*> T& List() {
		return *(T*)((uintptr_t)this + 0x10);
	}

	template <typename T = void> T CopyTo(Il2CppObject* targetObject) {
		return ((T (*)(PersonalEntitiesComponent*, Il2CppObject*))(Il2CppBase() + 0x11EAE1C))(this, targetObject);
	}

};

