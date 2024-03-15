#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ClanPersonalEntitiesComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ClanPersonalEntitiesComponent"));
	}

	 Il2CppDictionary<Il2CppString*, Il2CppString*>*& List() {
		return *(Il2CppDictionary<Il2CppString*, Il2CppString*>**)((uintptr_t)this + 0x10);
	}

	template <typename R = void> R CopyTo(Il2CppObject* targetObject) {
		return ((R (*)(ClanPersonalEntitiesComponent*, Il2CppObject*))(Il2CppBase() + 0x15971BC))(this, targetObject);
	}

};

