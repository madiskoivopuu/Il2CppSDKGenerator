#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ViewActiveMagicSystem
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ViewActiveMagicSystem"));
	}

	template <typename R = ArenaUnityWorld*> R& _world() {
		return *(R*)((uintptr_t)this + 0x10);
	}
	 IGroup1MagicEntity*>*& _magics() {
		return *(IGroup1MagicEntity*>**)((uintptr_t)this + 0x18);
	}

	template <typename R = void> R Initialize() {
		return ((R (*)(ViewActiveMagicSystem*))(Il2CppBase() + 0x15C76CC))(this);
	}
	template <typename R = void> R Execute() {
		return ((R (*)(ViewActiveMagicSystem*))(Il2CppBase() + 0x15C7748))(this);
	}

};

