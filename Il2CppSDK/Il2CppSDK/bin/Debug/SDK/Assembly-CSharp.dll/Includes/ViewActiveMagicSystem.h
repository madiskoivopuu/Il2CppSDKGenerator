#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ViewActiveMagicSystem
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ViewActiveMagicSystem"));
	}

	template <typename T = uintptr_t> T& _world() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = void*> T& _magics() {
		return *(T*)((uintptr_t)this + 0x18);
	}

	template <typename T = void> T Initialize() {
		return ((T (*)(ViewActiveMagicSystem*))(Il2CppBase() + 0x15C76CC))(this);
	}
	template <typename T = void> T Execute() {
		return ((T (*)(ViewActiveMagicSystem*))(Il2CppBase() + 0x15C7748))(this);
	}

};

}
