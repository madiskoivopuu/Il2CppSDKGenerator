#pragma once
#include <Il2Cpp/Il2Cpp.h>

class AFKClientSystem
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "AFKClientSystem"));
	}

	template <typename R = ICommonUnityWorld*> R& _world() {
		return *(R*)((uintptr_t)this + 0x10);
	}
	 IGroup1InputEntity*>*& _input() {
		return *(IGroup1InputEntity*>**)((uintptr_t)this + 0x18);
	}

	template <typename R = void> R Initialize() {
		return ((R (*)(AFKClientSystem*))(Il2CppBase() + 0x1D92E94))(this);
	}
	template <typename R = void> R Execute() {
		return ((R (*)(AFKClientSystem*))(Il2CppBase() + 0x1D93050))(this);
	}
	template <typename R = bool> R ProcessInput() {
		return ((R (*)(AFKClientSystem*))(Il2CppBase() + 0x1D937CC))(this);
	}

};

