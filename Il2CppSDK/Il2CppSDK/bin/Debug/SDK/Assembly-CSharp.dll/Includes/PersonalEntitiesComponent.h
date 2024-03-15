#pragma once
#include <Il2Cpp/Il2Cpp.h>

class PersonalEntitiesComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "PersonalEntitiesComponent"));
	}

	 Il2CppDictionary<Il2CppString*, Il2CppString*>*& List() {
		return *(Il2CppDictionary<Il2CppString*, Il2CppString*>**)((uintptr_t)this + 0x10);
	}

	template <typename R = void> R CopyTo(Il2CppObject* targetObject) {
		return ((R (*)(PersonalEntitiesComponent*, Il2CppObject*))(Il2CppBase() + 0x11EAE1C))(this, targetObject);
	}

};

