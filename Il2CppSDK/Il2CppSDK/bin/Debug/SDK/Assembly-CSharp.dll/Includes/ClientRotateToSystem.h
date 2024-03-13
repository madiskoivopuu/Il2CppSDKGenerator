#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ClientRotateToSystem
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ClientRotateToSystem"));
	}

	template <typename T = ArenaClientWorld*> T& _world() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = IGroup1GameEntity*>*> T& _rotated() {
		return *(T*)((uintptr_t)this + 0x18);
	}

	template <typename T = void> T Initialize() {
		return ((T (*)(ClientRotateToSystem*))(Il2CppBase() + 0xE1C944))(this);
	}
	template <typename T = void> T Execute() {
		return ((T (*)(ClientRotateToSystem*))(Il2CppBase() + 0xE1CA88))(this);
	}

};

