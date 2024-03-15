#pragma once
#include <Il2Cpp/Il2Cpp.h>

class GameObjectsSaveComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "GameObjectsSaveComponent"));
	}

	 Il2CppDictionary<Il2CppString*, Il2CppString*>*& Values() {
		return *(Il2CppDictionary<Il2CppString*, Il2CppString*>**)((uintptr_t)this + 0x10);
	}

	template <typename R = void> R CopyTo(Il2CppObject* targetObject) {
		return ((R (*)(GameObjectsSaveComponent*, Il2CppObject*))(Il2CppBase() + 0x176D064))(this, targetObject);
	}

};

