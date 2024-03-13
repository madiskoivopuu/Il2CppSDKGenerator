#pragma once
#include <Il2Cpp/Il2Cpp.h>

class AFKClientSystem
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "AFKClientSystem"));
	}

	template <typename T = ICommonUnityWorld*> T& _world() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = IGroup1InputEntity*>*> T& _input() {
		return *(T*)((uintptr_t)this + 0x18);
	}

	template <typename T = void> T Initialize() {
		return ((T (*)(AFKClientSystem*))(Il2CppBase() + 0x1D92E94))(this);
	}
	template <typename T = void> T Execute() {
		return ((T (*)(AFKClientSystem*))(Il2CppBase() + 0x1D93050))(this);
	}
	template <typename T = bool> T ProcessInput() {
		return ((T (*)(AFKClientSystem*))(Il2CppBase() + 0x1D937CC))(this);
	}

};

