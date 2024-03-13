#pragma once
#include <Il2Cpp/Il2Cpp.h>

class GameObjectsSaveComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "GameObjectsSaveComponent"));
	}

	template <typename T = Il2CppDictionary<Il2CppString*, Il2CppString*>*> T& Values() {
		return *(T*)((uintptr_t)this + 0x10);
	}

	template <typename T = void> T CopyTo(Il2CppObject* targetObject) {
		return ((T (*)(GameObjectsSaveComponent*, Il2CppObject*))(Il2CppBase() + 0x176D064))(this, targetObject);
	}

};

