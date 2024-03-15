#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ClientRotateToSystem
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ClientRotateToSystem"));
	}

	template <typename R = ArenaClientWorld*> R& _world() {
		return *(R*)((uintptr_t)this + 0x10);
	}
	 IGroup1<GameEntity*>*& _rotated() {
		return *(IGroup1<GameEntity*>**)((uintptr_t)this + 0x18);
	}

	template <typename R = void> R Initialize() {
		return ((R (*)(ClientRotateToSystem*))(Il2CppBase() + 0xE1C944))(this);
	}
	template <typename R = void> R Execute() {
		return ((R (*)(ClientRotateToSystem*))(Il2CppBase() + 0xE1CA88))(this);
	}

};

